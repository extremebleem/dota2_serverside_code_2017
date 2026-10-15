// Reconstructed from DWARF by pahole; not original source.

// src/public/schemasystem/baseschema.h:115
class CSchemaTypeOf<InfoForResourceTypeCModel> {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/public/schemasystem/baseschema.h:115
class CSchemaTypeOf<CDecalInfo> {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/public/schemasystem/baseschema.h:115
class CSchemaTypeOf<InfoForResourceTypeIMaterial2> {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/public/schemasystem/baseschema.h:554
struct SchemaInfoFor_N<CDynamicProp::CEntityInstanceEntityClass> {
	const CSchemaClassInfo * Get(ISchemaSystem *, const char *, const char *);

	// sizeof = 1
};

// src/public/schemasystem/baseschema.h:554
struct SchemaInfoFor_N<CDevtestHierarchy::CEntityInstanceEntityClass> {
	const CSchemaClassInfo * Get(ISchemaSystem *, const char *, const char *);

	// sizeof = 1
};

// src/public/schemasystem/baseschema.h:554
struct SchemaInfoFor_N<CDynamicProp> {
	const CSchemaClassInfo * Get(ISchemaSystem *, const char *, const char *);

	// sizeof = 1
};

// src/public/schemasystem/baseschema.h:693
class ISchemaSearchTester<const CSchemaClassInfo*> {
	int ()() * * _vptr.ISchemaSearchTester;  // +0x0
	ISchemaSearchTester(ISchemaSearchTester<const CSchemaClassInfo*> &);
	ISchemaSearchTester(const ISchemaSearchTester<const CSchemaClassInfo*> &);
	ISchemaSearchTester();
	virtual bool Test(const CSchemaClassInfo *);

	// vtable[0] Test
	// sizeof = 8
};

// src/public/schemasystem/baseschema.h:951
class CSchemaManipulator<CHandle<CBaseEntity> > : public ISchemaManipulator {
public:

	CSchemaManipulator(CSchemaManipulator<CHandle<CBaseEntity> > *, CSchemaManipulator<CHandle<CBaseEntity> > &);
	CSchemaManipulator(CSchemaManipulator<CHandle<CBaseEntity> > *, const CSchemaManipulator<CHandle<CBaseEntity> > &);
	CSchemaManipulator(CSchemaManipulator<CHandle<CBaseEntity> > *);
	ISchemaManipulator * StaticAccessor();
	virtual void * SearchForInterface(CSchemaManipulator<CHandle<CBaseEntity> > *, SchemaManipulatorInterfaceType_t);

	// vtable[0] SearchForInterface
	// sizeof = 8
};

// src/public/schemasystem/baseschema.h:951
class CSchemaManipulator<CUtlStringToken> : public ISchemaManipulator {
public:

	CSchemaManipulator(CSchemaManipulator<CUtlStringToken> &);
	CSchemaManipulator(const CSchemaManipulator<CUtlStringToken> &);
	CSchemaManipulator();
	ISchemaManipulator * StaticAccessor();
	virtual void * SearchForInterface(SchemaManipulatorInterfaceType_t);

	// vtable[0] SearchForInterface
	// sizeof = 8
};

// src/public/schemasystem/baseschema.h:951
class CSchemaManipulator<Vector> : public ISchemaManipulator {
public:

	CSchemaManipulator(CSchemaManipulator<Vector> &);
	CSchemaManipulator(const CSchemaManipulator<Vector> &);
	CSchemaManipulator();
	ISchemaManipulator * StaticAccessor();
	virtual void * SearchForInterface(SchemaManipulatorInterfaceType_t);

	// vtable[0] SearchForInterface
	// sizeof = 8
};

// src/public/schemasystem/baseschema.h:1216
struct CAtomicManipulator<CStrongHandle<InfoForResourceTypeCModel> > : public IAtomicManipulator {
public:

	CAtomicManipulator(CAtomicManipulator<CStrongHandle<InfoForResourceTypeCModel> > *, CAtomicManipulator<CStrongHandle<InfoForResourceTypeCModel> > &);
	CAtomicManipulator(CAtomicManipulator<CStrongHandle<InfoForResourceTypeCModel> > *, const CAtomicManipulator<CStrongHandle<InfoForResourceTypeCModel> > &);
	CAtomicManipulator(CAtomicManipulator<CStrongHandle<InfoForResourceTypeCModel> > *);
	IAtomicManipulator * Get();
	virtual int GetSizeOf(CAtomicManipulator<CStrongHandle<InfoForResourceTypeCModel> > *);
	virtual int GetAlignOf(CAtomicManipulator<CStrongHandle<InfoForResourceTypeCModel> > *);
	virtual bool CanAllocate(const CAtomicManipulator<CStrongHandle<InfoForResourceTypeCModel> > *);
	virtual void * Allocate(CAtomicManipulator<CStrongHandle<InfoForResourceTypeCModel> > *);
	virtual void * AllocateAndCopy(CAtomicManipulator<CStrongHandle<InfoForResourceTypeCModel> > *, const void *);
	virtual void Copy(CAtomicManipulator<CStrongHandle<InfoForResourceTypeCModel> > *, void *, const void *);
	virtual void Deallocate(CAtomicManipulator<CStrongHandle<InfoForResourceTypeCModel> > *, void *);

	// vtable[0] GetSizeOf
	// vtable[1] GetAlignOf
	// vtable[2] CanAllocate
	// vtable[3] Allocate
	// vtable[4] AllocateAndCopy
	// vtable[5] Copy
	// vtable[6] Deallocate
	// sizeof = 8
};

// src/public/schemasystem/baseschema.h:1216
struct CAtomicManipulator<CHandle<CBaseEntity> > : public IAtomicManipulator {
public:

	CAtomicManipulator(CAtomicManipulator<CHandle<CBaseEntity> > *, CAtomicManipulator<CHandle<CBaseEntity> > &);
	CAtomicManipulator(CAtomicManipulator<CHandle<CBaseEntity> > *, const CAtomicManipulator<CHandle<CBaseEntity> > &);
	CAtomicManipulator(CAtomicManipulator<CHandle<CBaseEntity> > *);
	IAtomicManipulator * Get();
	virtual int GetSizeOf(CAtomicManipulator<CHandle<CBaseEntity> > *);
	virtual int GetAlignOf(CAtomicManipulator<CHandle<CBaseEntity> > *);
	virtual bool CanAllocate(const CAtomicManipulator<CHandle<CBaseEntity> > *);
	virtual void * Allocate(CAtomicManipulator<CHandle<CBaseEntity> > *);
	virtual void * AllocateAndCopy(CAtomicManipulator<CHandle<CBaseEntity> > *, const void *);
	virtual void Copy(CAtomicManipulator<CHandle<CBaseEntity> > *, void *, const void *);
	virtual void Deallocate(CAtomicManipulator<CHandle<CBaseEntity> > *, void *);

	// vtable[0] GetSizeOf
	// vtable[1] GetAlignOf
	// vtable[2] CanAllocate
	// vtable[3] Allocate
	// vtable[4] AllocateAndCopy
	// vtable[5] Copy
	// vtable[6] Deallocate
	// sizeof = 8
};

// src/public/schemasystem/baseschema.h:1216
struct CAtomicManipulator<CUtlStringToken> : public IAtomicManipulator {
public:

	CAtomicManipulator(CAtomicManipulator<CUtlStringToken> &);
	CAtomicManipulator(const CAtomicManipulator<CUtlStringToken> &);
	CAtomicManipulator();
	IAtomicManipulator * Get();
	virtual int GetSizeOf();
	virtual int GetAlignOf();
	virtual bool CanAllocate();
	virtual void * Allocate();
	virtual void * AllocateAndCopy(const void *);
	virtual void Copy(void *, const void *);
	virtual void Deallocate(void *);

	// vtable[0] GetSizeOf
	// vtable[1] GetAlignOf
	// vtable[2] CanAllocate
	// vtable[3] Allocate
	// vtable[4] AllocateAndCopy
	// vtable[5] Copy
	// vtable[6] Deallocate
	// sizeof = 8
};

// CSchemaTypeOf: 297 more instantiations (full list in INDEX.tsv)
//   CSchemaTypeOf<CEntityIOOutput>
//   CSchemaTypeOf<fogparams_t>
//   CSchemaTypeOf<CFogController::NetworkVar_m_fog>
//   CSchemaTypeOf<CLightComponent>
//   CSchemaTypeOf<InfoForResourceTypeCTextureBase>
//   CSchemaTypeOf<CLightEntity>
//   CSchemaTypeOf<CPointCamera>
//   CSchemaTypeOf<CCollisionProperty::NetworkVar_m_collisionAttribute>
//   CSchemaTypeOf<EntComponentInfo_t>
//   CSchemaTypeOf<sky3dparams_t::NetworkVar_fog>
//   CSchemaTypeOf<InfoForResourceTypeIParticleSystemDefinition>
//   CSchemaTypeOf<CInfoLadderDismount>
//   CSchemaTypeOf<CFuncLadder>
//   CSchemaTypeOf<CHintMessage>
//   CSchemaTypeOf<CFogController>
//   CSchemaTypeOf<ragdoll_t>
//   CSchemaTypeOf<CNetworkedSequenceOperation>
//   CSchemaTypeOf<ViewLockData_t>
//   CSchemaTypeOf<ragdollelement_t>
//   CSchemaTypeOf<CAnimationLayer>
//   CSchemaTypeOf<TransitioningLayer_t>
//   CSchemaTypeOf<CBaseAnimatingController>
//   CSchemaTypeOf<dynpitchvol_t>
//   CSchemaTypeOf<CAnimationLayer::NetworkVar_m_op>
//   CSchemaTypeOf<CHitboxComponent>
//   CSchemaTypeOf<CBaseAnimatingController::NetworkVar_m_baseLayer>
//   CSchemaTypeOf<CSequenceTransitioner2>
//   CSchemaTypeOf<CBodyComponentBaseAnimating::NetworkVar_m_animationController>
//   CSchemaTypeOf<CNetworkVarChainer>
//   CSchemaTypeOf<CBodyComponentBaseAnimatingOverlay::NetworkVar_m_animationController>
//   CSchemaTypeOf<IntervalTimer>
//   CSchemaTypeOf<CAI_MoveMonitor>
//   CSchemaTypeOf<CountdownTimer>
//   CSchemaTypeOf<CNetworkTransmitComponent>
//   CSchemaTypeOf<CNetworkVelocityVector>
//   CSchemaTypeOf<CBaseModelEntity::NetworkVar_m_Collision>
//   CSchemaTypeOf<CBaseModelEntity::NetworkVar_m_Glow>
//   CSchemaTypeOf<CNetworkViewOffsetVector>
//   CSchemaTypeOf<locksound_t>
//   CSchemaTypeOf<Relationship_t>
//   CSchemaTypeOf<CBaseCombatCharacter::DamageHistory>
//   CSchemaTypeOf<CBodyComponent>
//   CSchemaTypeOf<CPhysicsComponent>
//   CSchemaTypeOf<thinkfunc_t>
//   CSchemaTypeOf<CGameSceneNode>
//   CSchemaTypeOf<ResponseContext_t>
//   CSchemaTypeOf<CCollisionProperty>
//   CSchemaTypeOf<CRenderComponent>
//   CSchemaTypeOf<CMultiplayer_Expresser>
//   CSchemaTypeOf<CBasePropDoor>
//   CSchemaTypeOf<vehicle_controlparams_t>
//   CSchemaTypeOf<CBaseFilter>
//   CSchemaTypeOf<CFishPool>
//   CSchemaTypeOf<CAI_Link>
//   CSchemaTypeOf<CFish>
//   CSchemaTypeOf<CGameSceneNode::NetworkVar_m_hParent>
//   CSchemaTypeOf<CNetworkOriginCellCoordQuantizedVector>
//   CSchemaTypeOf<CEntityInstance>
//   CSchemaTypeOf<CItemGeneric>
//   CSchemaTypeOf<CItemGenericTriggerHelper>
//   CSchemaTypeOf<VelocitySampler>
//   CSchemaTypeOf<SimpleConstraintSoundProfile>
//   CSchemaTypeOf<CThrustController>
//   CSchemaTypeOf<CSoundParameters>
//   CSchemaTypeOf<CBasePlayer::NetworkVar_m_Local>
//   CSchemaTypeOf<CBasePlayer::NetworkVar_m_PlayerFog>
//   CSchemaTypeOf<CPlayerState>
//   CSchemaTypeOf<CSimpleSimTimer>
//   CSchemaTypeOf<CPlayerInfo>
//   CSchemaTypeOf<ChangeAccessorFieldPathIndex_t>
//   CSchemaTypeOf<CPlayerLocalData::NetworkVar_m_skybox3d>
//   CSchemaTypeOf<CPlayerLocalData::NetworkVar_m_audio>
//   CSchemaTypeOf<CSkeletonInstance::NetworkVar_m_modelState>
//   CSchemaTypeOf<CSkyCamera::NetworkVar_m_skyboxData>
//   CSchemaTypeOf<CPathTrack>
//   CSchemaTypeOf<magnetted_objects_t>
//   CSchemaTypeOf<IPhysicsPlayerController>
//   CSchemaTypeOf<CBasePlayer::StepSoundCache_t>
//   CSchemaTypeOf<CSkeletonInstance>
//   CSchemaTypeOf<CSkyCamera>
//   CSchemaTypeOf<CSound>
//   CSchemaTypeOf<CEnvSoundscape>
//   CSchemaTypeOf<CBaseViewModel>
//   CSchemaTypeOf<CTeamSpawnPoint>
//   CSchemaTypeOf<ViewSmoothingData_t>
//   CSchemaTypeOf<CFourWheelVehiclePhysics>
//   CSchemaTypeOf<vehiclesounds_t>
//   CSchemaTypeOf<CPassengerSeatTransition>
//   CSchemaTypeOf<CPassengerSeat>
//   CSchemaTypeOf<CPassengerInfo>
//   CSchemaTypeOf<CPassengerRole>
//   CSchemaTypeOf<CBaseServerVehicle::entryanim_t>
//   CSchemaTypeOf<CBaseServerVehicle::exitanim_t>
//   CSchemaTypeOf<CEntityBlocker>
//   CSchemaTypeOf<vehicle_gear_t>
//   CSchemaTypeOf<vehicle_crashsound_t>
//   CSchemaTypeOf<WeaponTextureData_t>
//   CSchemaTypeOf<WeaponSoundData_t>
//   CSchemaTypeOf<CBodyComponentPoint::NetworkVar_m_sceneNode>
//   CSchemaTypeOf<CBodyComponentSkeletonInstance::NetworkVar_m_skeletonInstance>
//   CSchemaTypeOf<constraint_axislimit_t>
//   CSchemaTypeOf<constraint_breakableparams_t>
//   CSchemaTypeOf<EngineLoopState_t>
//   CSchemaTypeOf<SosEditItemInfo_t>
//   CSchemaTypeOf<ResponseParams>
//   CSchemaTypeOf<ResponseFollowup>
//   CSchemaTypeOf<CRR_Response>
//   CSchemaTypeOf<CResponseCriteriaSet>
//   CSchemaTypeOf<CBaseFlex>
//   CSchemaTypeOf<CAI_Expresser>
//   CSchemaTypeOf<CEnvWind::NetworkVar_m_EnvWindShared>
//   CSchemaTypeOf<prevent_interaction_t>
//   CSchemaTypeOf<CEffectScriptElement>
//   CSchemaTypeOf<CBeam>
//   CSchemaTypeOf<CPhysicsShake>
//   CSchemaTypeOf<CBaseFire>
//   CSchemaTypeOf<CEntityClass>
//   CSchemaTypeOf<hudtextparms_t>
//   CSchemaTypeOf<CPathKeyFrame>
//   CSchemaTypeOf<CVariantDefaultAllocator>
//   CSchemaTypeOf<CConstantForceController>
//   CSchemaTypeOf<CMotorController>
//   CSchemaTypeOf<constraint_hingeparams_t>
//   CSchemaTypeOf<CSpotlightEnd>
//   CSchemaTypeOf<CInteractionManager>
//   CSchemaTypeOf<CPointWorldText>
//   CSchemaTypeOf<CPropZipline>
//   CSchemaTypeOf<CSoundEnvelope>
//   CSchemaTypeOf<CCopyRecipientFilter>
//   CSchemaTypeOf<CSceneEntity>
//   CSchemaTypeOf<CRecipientFilter>
//   CSchemaTypeOf<CEnvSoundscapeTriggerable>
//   CSchemaTypeOf<CSceneListManager>
//   CSchemaTypeOf<CFuncTrackTrain>
//   CSchemaTypeOf<InfoForResourceTypeCPostProcessingResource>
//   CSchemaTypeOf<CDOTA_Orb>
//   CSchemaTypeOf<DOTASpecialAbility_t>
//   CSchemaTypeOf<CModifierParams>
//   CSchemaTypeOf<sSpiritInfo>
//   CSchemaTypeOf<CDOTAGamerules::NetworkVar_m_AssassinMiniGameNetData>
//   CSchemaTypeOf<CDOTAGameManager>
//   CSchemaTypeOf<CDOTAGameManagerProxy>
//   CSchemaTypeOf<CDOTAGamerules>
//   CSchemaTypeOf<HeroPickRecord_t>
//   CSchemaTypeOf<HeroDeathRecord_t>
//   CSchemaTypeOf<CDOTA_ReconnectInfo>
//   CSchemaTypeOf<GameChatLogEntry_t>
//   CSchemaTypeOf<DataTeamPlayer_t>
//   CSchemaTypeOf<TempViewerInfo_t>
//   CSchemaTypeOf<CHeroesPerPlayer>
//   CSchemaTypeOf<CDOTA_ItemStockInfo>
//   CSchemaTypeOf<CDOTA_AbilityDraftAbilityState>
//   CSchemaTypeOf<CDOTA_BaseNPC_Pet>
//   CSchemaTypeOf<CHeroStatueLiked>
//   CSchemaTypeOf<AABB_t>
//   CSchemaTypeOf<CDOTA_BaseNPC_Tower>
//   CSchemaTypeOf<CDOTA_BaseNPC_Building>
//   CSchemaTypeOf<CIngameEvent_Base>
//   CSchemaTypeOf<CDOTA_Item_Tombstone>
//   CSchemaTypeOf<CDOTA_Item_Physical>
//   CSchemaTypeOf<CDOTAPlayer>
//   CSchemaTypeOf<InGamePredictionData_t>
//   CSchemaTypeOf<CDOTASubChallengeInfo>
//   CSchemaTypeOf<CDOTA_PlayerChallengeInfo>
//   CSchemaTypeOf<CDOTA_CombatLogQueryProgress>
//   CSchemaTypeOf<CDOTA_Item>
//   CSchemaTypeOf<DataTeamPlayer_t::NetworkVar_m_PreGameInventory>
//   CSchemaTypeOf<sPendingTreeRemoval>
//   CSchemaTypeOf<TimedBalanceRecord_t>
//   CSchemaTypeOf<TimedKillEvent_t>
//   CSchemaTypeOf<PlayerResourcePlayerTeamData_t>
//   CSchemaTypeOf<PlayerResourcePlayerData_t>
//   CSchemaTypeOf<PlayerResourceBroadcasterData_t>
//   CSchemaTypeOf<PurchasedItem_t>
//   CSchemaTypeOf<DamageShareEvent_t>
//   CSchemaTypeOf<CDotaSubquestBase>
//   CSchemaTypeOf<CDOTA_Unit_Courier>
//   CSchemaTypeOf<CDotaEntityFilterFlags>
//   CSchemaTypeOf<CDOTASpectatorGraphManager>
//   CSchemaTypeOf<CDOTASpectatorGraphManagerProxy>
//   CSchemaTypeOf<CDOTASpecGraphPlayerData>
//   CSchemaTypeOf<sPlayerSnapshot>
//   CSchemaTypeOf<CSpeechBubbleInfo>
//   CSchemaTypeOf<sSharedCooldownInfo>
//   CSchemaTypeOf<CDOTA_TeamCommander>
//   CSchemaTypeOf<CDOTABaseAbility>
//   CSchemaTypeOf<CDOTA_BaseNPC::NetworkVar_m_ModifierManager>
//   CSchemaTypeOf<CUnitOrders>
//   CSchemaTypeOf<CDOTA_BaseNPC::NetworkVar_m_Inventory>
//   CSchemaTypeOf<CLocalNPCObstructionsCache>
//   CSchemaTypeOf<CDOTA_BaseNPC_Hero::KillInfo_t>
//   CSchemaTypeOf<sLoadoutItem>
//   CSchemaTypeOf<CDOTAMusicProbabilityGank>
//   CSchemaTypeOf<CDOTALocomotor>
//   CSchemaTypeOf<CDOTABody>
//   CSchemaTypeOf<CDOTA_ScriptedSpawner>
//   CSchemaTypeOf<CreatureStateData_t>
//   CSchemaTypeOf<CreatureAbilityData_t>
//   CSchemaTypeOf<ItemDropData_t>
//   CSchemaTypeOf<CDOTA_BaseNPC_Hero::sHeroDamageInfo>
//   CSchemaTypeOf<CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo>
//   CSchemaTypeOf<sAcquireHistory>
//   CSchemaTypeOf<CDOTA_BaseNPC_Hero>
//   CSchemaTypeOf<CDOTA_Pet_CarriedItem>
//   CSchemaTypeOf<CDOTA_ScriptedSpawner::scripted_moveto_t>
//   CSchemaTypeOf<sBounceInfo>
//   CSchemaTypeOf<NianDamageTaken_t>
//   CSchemaTypeOf<CDOTA_Tree>
//   CSchemaTypeOf<CDOTA_Modifier_Invoker_Instance>
//   CSchemaTypeOf<sGlaiveInfo>
//   CSchemaTypeOf<RemnantData_t>
//   CSchemaTypeOf<CDOTA_Ability_Meepo_DividedWeStand>
//   CSchemaTypeOf<sSpiritDef>
//   CSchemaTypeOf<CDOTA_BuffParticle>
//   CSchemaTypeOf<CAttributeContainer::NetworkVar_m_Item>
//   CSchemaTypeOf<CEconEntity::NetworkVar_m_AttributeManager>
//   CSchemaTypeOf<CAttributeManager::cached_attribute_float_t>
//   CSchemaTypeOf<CEconItemView::NetworkVar_m_AttributeList>
//   CSchemaTypeOf<CEconItemAttribute>
//   CSchemaTypeOf<CNavVolume>
//   CSchemaTypeOf<NextBotGroundLocomotion>
//   CSchemaTypeOf<CHeadLookParams>
//   CSchemaTypeOf<INextBotReply>
//   CSchemaTypeOf<CEntityClass::CClassAttributes>
//   CSchemaTypeOf<CEntityClassInfo>
//   CSchemaTypeOf<EntInput_t>
//   CSchemaTypeOf<EntOutput_t>
//   CSchemaTypeOf<EntClassComponentOverride_t>
//   CSchemaTypeOf<CEntityClass::ComponentOffsets_t>
//   CSchemaTypeOf<CEntityClass::ComponentHelper_t>
//   CSchemaTypeOf<CEntityComponentHelper>
//   CSchemaTypeOf<CEntityIdentity>
//   CSchemaTypeOf<CScriptComponent>
//   CSchemaTypeOf<SkeletonBoneBounds_t>
//   CSchemaTypeOf<CRenderBufferBinding>
//   CSchemaTypeOf<CRenderSkeleton>
//   CSchemaTypeOf<CBaseConstraint>
//   CSchemaTypeOf<RenderSkeletonBone_t>
//   CSchemaTypeOf<CMaterialDrawDescriptor>
//   CSchemaTypeOf<CSceneObjectData>
//   CSchemaTypeOf<CHitBox>
//   CSchemaTypeOf<CHitBoxSet>
//   CSchemaTypeOf<CConstraintTarget>
//   CSchemaTypeOf<CConstraintSlave>
//   CSchemaTypeOf<VPhysics2ShapeDef_t>
//   CSchemaTypeOf<VPhysXConstraintParams_t>
//   CSchemaTypeOf<VPhysXRange_t>
//   CSchemaTypeOf<RnSphereDesc_t>
//   CSchemaTypeOf<RnCapsuleDesc_t>
//   CSchemaTypeOf<RnHullDesc_t>
//   CSchemaTypeOf<RnMeshDesc_t>
//   CSchemaTypeOf<VpropBreakablePartData_t>
//   CSchemaTypeOf<RnSoftbodyParticle_t>
//   CSchemaTypeOf<RnSoftbodySpring_t>
//   CSchemaTypeOf<RnSoftbodyCapsule_t>
//   CSchemaTypeOf<VPhysXBodyPart_t>
//   CSchemaTypeOf<VPhysXConstraint2_t>
//   CSchemaTypeOf<VPhysXJoint_t>
//   CSchemaTypeOf<PhysFeModelDesc_t>
//   CSchemaTypeOf<VPhysXCollisionAttributes_t>
//   CSchemaTypeOf<CPhysSurfacePropertiesPhysics>
//   CSchemaTypeOf<CPhysSurfacePropertiesSoundNames>
//   CSchemaTypeOf<CPhysSurfacePropertiesAudio>
//   CSchemaTypeOf<CPhysSurfacePropertiesGame>
//   CSchemaTypeOf<CPhysSurfaceProperties>
//   CSchemaTypeOf<RenderBufferBinding_t>
//   CSchemaTypeOf<ConstraintTarget_t>
//   CSchemaTypeOf<ConstraintSlave_t>
//   CSchemaTypeOf<SkeletonBoneBbox_t>
//   CSchemaTypeOf<RenderInputLayoutField_t>
//   CSchemaTypeOf<MaterialDrawDescriptor_t>
//   CSchemaTypeOf<HitBox_t>
//   CSchemaTypeOf<SceneObjectData_t>
//   CSchemaTypeOf<RenderSkeletonData_t>
//   CSchemaTypeOf<AttachmentData_t>
//   CSchemaTypeOf<HitBoxSet_t>
//   CSchemaTypeOf<BaseConstraint_t>
//   CSchemaTypeOf<OnDiskBufferData_t>
//   CSchemaTypeOf<InfoForResourceTypeMorphSetData_t>
//   CSchemaTypeOf<PermModelInfo_t>
//   CSchemaTypeOf<ModelSkeletonData_t>
//   CSchemaTypeOf<ModelBoneFlexDriverControl_t>
//   CSchemaTypeOf<PermModelExtPart_t>
//   CSchemaTypeOf<MaterialGroup_t>
//   CSchemaTypeOf<ModelBoneFlexDriver_t>
//   CSchemaTypeOf<InfoForResourceTypeCRenderMesh>
//   CSchemaTypeOf<InfoForResourceTypeCPhysAggregateData>
//   CSchemaTypeOf<InfoForResourceTypeAnimationGroupResourceData_t>
//   CSchemaTypeOf<InfoForResourceTypeSequenceGroupResourceData_t>
//   CSchemaTypeOf<FlexOp_t>
//   CSchemaTypeOf<BundleData_t>
//   CSchemaTypeOf<MorphRectData_t>
//   CSchemaTypeOf<MorphData_t>
//   CSchemaTypeOf<FlexDesc_t>
//   CSchemaTypeOf<FlexController_t>
//   CSchemaTypeOf<FlexRule_t>
//   CSchemaTypeOf<VsInputSignature_t>

// SchemaInfoFor_N: 2224 more instantiations (full list in INDEX.tsv)
//   SchemaInfoFor_N<CDevtestHierarchyChild::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBaseAnimating::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDevtestHierarchy2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBaseAnimating>
//   SchemaInfoFor_N<CBaseFire::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPlasma::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBaseFire>
//   SchemaInfoFor_N<CBaseModelEntity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBaseClientUIEntity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBaseModelEntity>
//   SchemaInfoFor_N<CPointClientUIWorldPanel::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBaseClientUIEntity>
//   SchemaInfoFor_N<CPointClientUIWorldTextPanel::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPointClientUIWorldPanel>
//   SchemaInfoFor_N<CPointClientUIDialog::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBaseEntity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPointEntity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBaseEntity>
//   SchemaInfoFor_N<CEnvClock::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvCubemap::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvCubemapBox::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvCubemap>
//   SchemaInfoFor_N<CEnvLightProbeVolume::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvSky::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTonemapController2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTonemapController2>
//   SchemaInfoFor_N<CBaseTrigger::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTonemapTrigger::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBaseTrigger>
//   SchemaInfoFor_N<CFogTrigger::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFogController::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CInfoTarget::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPointEntity>
//   SchemaInfoFor_N<CInfoParticleTarget::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CInfoWorldLayer::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CLightEntity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CLightSpotEntity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CLightEntity>
//   SchemaInfoFor_N<CLightDirectionalEntity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CLightEnvironmentEntity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CLightDirectionalEntity>
//   SchemaInfoFor_N<CLogicalEntity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CMultiLightProxy::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CLogicalEntity>
//   SchemaInfoFor_N<CPointCamera::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEntityInstance::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CGameEntity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEntityInstance>
//   SchemaInfoFor_N<CBaseCombatWeapon::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBaseAnimatingOverlay::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBaseViewModel::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBaseAnimatingOverlay>
//   SchemaInfoFor_N<CBeam::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEntityComponent>
//   SchemaInfoFor_N<CEnvDetailController::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvWindShared::WindAveEvent_t>
//   SchemaInfoFor_N<CEnvWindShared::WindVariationEvent_t>
//   SchemaInfoFor_N<CInfoLadderDismount::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncLadder::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPhysicsProp::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CShatterGlassShardPhysics::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPhysicsProp>
//   SchemaInfoFor_N<CFuncShatterglass::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CGameRulesProxy::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CGameRules>
//   SchemaInfoFor_N<CPoseController::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<IRagdoll>
//   SchemaInfoFor_N<CSimpleSimTimer>
//   SchemaInfoFor_N<CStopwatchBase>
//   SchemaInfoFor_N<CSprite::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CSpriteOriented::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CSprite>
//   SchemaInfoFor_N<CMultiplayRules>
//   SchemaInfoFor_N<dynpitchvol_base_t>
//   SchemaInfoFor_N<CAmbientGeneric::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CSkeletonAnimationController>
//   SchemaInfoFor_N<CBodyComponentSkeletonInstance>
//   SchemaInfoFor_N<CBaseAnimatingController>
//   SchemaInfoFor_N<CBaseFlex::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBaseCombatCharacter::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBaseCombatCharacter::DamageHistory>
//   SchemaInfoFor_N<CBaseFlex>
//   SchemaInfoFor_N<CGameEntity>
//   SchemaInfoFor_N<CServerOnlyEntity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CServerOnlyPointEntity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CServerOnlyEntity>
//   SchemaInfoFor_N<CServerOnlyModelEntity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CModelPointEntity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBasePlayer::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBaseMultiplayerPlayer::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBasePlayer>
//   SchemaInfoFor_N<CBaseProp::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBasePropDoor::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBaseToggle::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBreakableProp::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBaseProp>
//   SchemaInfoFor_N<CBaseButton::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBaseToggle>
//   SchemaInfoFor_N<CRotButton::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBaseButton>
//   SchemaInfoFor_N<CMomentaryRotButton::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CRotButton>
//   SchemaInfoFor_N<CButtonTimed::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CColorCorrection::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CRagdollMagnet::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBaseDoor::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBreakableProp>
//   SchemaInfoFor_N<CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEntityBlocker::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEntityDissolve::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEntityFlame::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvDOFController::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvPlayerSurfaceTrigger::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvProjectedTexture::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CModelPointEntity>
//   SchemaInfoFor_N<CEnvLaser::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBeam>
//   SchemaInfoFor_N<CMessage::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvMicrophone::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBaseFilter::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFilterMultiple::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBaseFilter>
//   SchemaInfoFor_N<CFilterProximity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFilterLOS::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFireSmoke::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFish::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFishPool::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFlexCycler::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CGenericFlexCycler::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFlexCycler>
//   SchemaInfoFor_N<CFuncAreaPortalBase::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncAreaPortalWindow::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncAreaPortalBase>
//   SchemaInfoFor_N<CBreakable::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncOccluder::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncDistanceOccluder::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncOccluder>
//   SchemaInfoFor_N<CFuncMoveLinear::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncRotating::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CGib::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CRagGib::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CInfoData::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<IVehicle>
//   SchemaInfoFor_N<CItemGenericTriggerHelper::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CItem::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CItemGeneric::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CItem>
//   SchemaInfoFor_N<CLight::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CLogicBranch::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CLogicRelay::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CMarkupVolume::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CMarkupVolumeTagged::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CMarkupVolume>
//   SchemaInfoFor_N<CFuncBrush::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CParticleLight::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CServerOnlyPointEntity>
//   SchemaInfoFor_N<CParticleSystem::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPathTrack::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPhysicsCannister::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBaseCombatCharacter>
//   SchemaInfoFor_N<CRagdollProp::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPhysBox::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBreakable>
//   SchemaInfoFor_N<CPhysExplosion::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPhysImpact::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPhysMagnet::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CInfoPlayerStart::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<IBotController>
//   SchemaInfoFor_N<IPlayerInfo>
//   SchemaInfoFor_N<CBasePlayer::StepSoundCache_t>
//   SchemaInfoFor_N<CPlayerResource::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPointPrefab::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPointTemplate::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPostProcessController::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CRopeKeyframe::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CGameSceneNode>
//   SchemaInfoFor_N<CSkyCamera::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CSoundEnt::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvSoundscape::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvSoundscapeProxy::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvSoundscape>
//   SchemaInfoFor_N<CEnvSoundscapeTriggerable::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CSpotlightEnd::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTeam::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncTrackTrain::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTriggerMultiple::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTriggerSndSosOpvar::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTriggerHurt::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTriggerHurtGhost::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTriggerHurt>
//   SchemaInfoFor_N<CTriggerCallback::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTriggerCamera::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBaseServerVehicle>
//   SchemaInfoFor_N<CPropVehicle::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPropVehicleDriveable::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPropVehicle>
//   SchemaInfoFor_N<CBaseServerVehicle::entryanim_t>
//   SchemaInfoFor_N<CBaseServerVehicle::exitanim_t>
//   SchemaInfoFor_N<IServerVehicle>
//   SchemaInfoFor_N<CVGuiScreen::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CWaterBullet::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<FileWeaponInfo_t>
//   SchemaInfoFor_N<CBodyComponent>
//   SchemaInfoFor_N<CFuncNavBlocker::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncNavConnectionBlocker::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CZombieBorder::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CNavVolume>
//   SchemaInfoFor_N<EventSimulate_t>
//   SchemaInfoFor_N<EventAdvanceTick_t>
//   SchemaInfoFor_N<EventPostAdvanceTick_t>
//   SchemaInfoFor_N<CGameGibManager::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<IRecipientFilter>
//   SchemaInfoFor_N<CInfoGameEventProxy::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDecal::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CProjectedDecal::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CWorld::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CResponseQueue::CDeferredResponse>
//   SchemaInfoFor_N<CAI_Expresser>
//   SchemaInfoFor_N<CAI_ExpresserWithFollowup>
//   SchemaInfoFor_N<CBaseVRHandAttachment::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncWall::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncWallToggle::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncWall>
//   SchemaInfoFor_N<CFuncVehicleClip::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncConveyor::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncIllusionary::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncVPhysicsClip::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncInteractionLayerClip::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CColorCorrectionVolume::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPointCommentaryNode::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CCommentaryViewPosition::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CCommentaryAuto::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTargetChangeGravity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncWater::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBaseDoor>
//   SchemaInfoFor_N<CRotDoor::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDynamicLight::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBubbling::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvTracer::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CGibShooter::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvShooter::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CGibShooter>
//   SchemaInfoFor_N<CRotorWashShooter::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvShooter>
//   SchemaInfoFor_N<CTestEffect::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBlood::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvFunnel::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvBeverage::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CItemSoda::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPrecipitation::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPrecipitationBlocker::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvWind::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPhysicsWire::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvMuzzleFlash::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvSplash::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvGunfire::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvViewPunch::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvEntityIgniter::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDebugHistory::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvEffectsScript::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvEntityMaker::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CInfoInstructorHintTarget::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvInstructorHint::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvScreenOverlay::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvScreenEffect::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTextureToggle::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvZoom::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvBeam::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvFade::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvHudHint::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CCredits::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvShake::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvTilt::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvSpark::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CShower::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvExplosion::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFilterName::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFilterModel::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFilterContext::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFilterClass::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<FilterTeam::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFilterMassGreater::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<FilterDamageType::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<FilterHealth::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFilterEnemy::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFire::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvFireSource::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvFireSensor::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CGenericFlexCycler>
//   SchemaInfoFor_N<CAreaPortal::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPushable::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFunc_Dust::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFunc_DustMotes::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFunc_Dust>
//   SchemaInfoFor_N<CFunc_DustCloud::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvDustPuff::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncLadder>
//   SchemaInfoFor_N<CFuncLadderEndPoint::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFunc_LOD::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncMonitor::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncBrush>
//   SchemaInfoFor_N<CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncMoveLinear>
//   SchemaInfoFor_N<CFuncWaterAnalog::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncTimescale::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CGameUI::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPointGamestatsCounter::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CGameWeaponManager::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CGunTarget::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CInfoOverlayAccessor::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CInfoIntermission::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CWorldItem::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CScriptItem::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CLightGlow::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CLightSpot::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CLight>
//   SchemaInfoFor_N<CLightSpotAlias_light_glspot::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CLightSpot>
//   SchemaInfoFor_N<CLightDirectional::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CLogicMeasureMovement::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CLogicNavigation::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CLogicPlayerProxy::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CLogicAuto::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CLogicScript::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTimerEntity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CLogicLineToEntity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CMathRemap::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CMathColorBlend::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvGlobal::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CMultiSource::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CMathCounter::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CLogicCase::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CLogicCompare::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CLogicAutosave::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CLogicActiveAutosave::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CLogicAutosave>
//   SchemaInfoFor_N<CLogicCollisionPair::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CLogicBranchList::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CLogicGameEvent::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CRuleEntity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CRulePointEntity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CRuleEntity>
//   SchemaInfoFor_N<CRuleBrushEntity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CGameScore::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CRulePointEntity>
//   SchemaInfoFor_N<CGameEnd::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CGameText::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CGamePlayerZone::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CRuleBrushEntity>
//   SchemaInfoFor_N<CGamePlayerEquip::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CGamePlayerTeam::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CMarkupVolumeTagged_Group::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CMarkupVolumeTagged>
//   SchemaInfoFor_N<CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CMaterialModifyControl::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CMessageEntity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTriggerBrush::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPathKeyFrame::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBaseMoveBehavior::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPathKeyFrame>
//   SchemaInfoFor_N<CPathCorner::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPathCornerCrash::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPathCorner>
//   SchemaInfoFor_N<CPhysForce::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPhysThruster::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPhysForce>
//   SchemaInfoFor_N<CPhysTorque::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPhysMotor::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CKeepUpright::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CConstraintAnchor::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPhysConstraint::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPhysHinge::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPhysConstraint>
//   SchemaInfoFor_N<CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPhysHinge>
//   SchemaInfoFor_N<CPhysBallSocket::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPhysSlideConstraint::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPhysFixed::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPhysPulley::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPhysLength::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CRagdollConstraint::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CGenericConstraint::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPhysicsEntitySolver::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CRagdollProp>
//   SchemaInfoFor_N<CRagdollPropAttached::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPhysicsSpring::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CSimplePhysicsBrush::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CSimplePhysicsProp::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPhysConvert::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPointPush::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CStripWeapons::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CRevertSaved::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CMovementSpeedMod::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPointBonusMapsAccessor::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPointEntityFinder::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPointHMDAnchor::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPointPlayerMoveConstraint::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPointSpotlight::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPointValueRemapper::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPointWorldText::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPointAngleSensor::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPointProximitySensor::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPointAngularVelocitySensor::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPointVelocitySensor::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPointHurt::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPointTeleport::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPropDoorRotating::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBasePropDoor>
//   SchemaInfoFor_N<CPropDoorRotatingBreakable::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPropDoorRotating>
//   SchemaInfoFor_N<CPropVRTrackedObject::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPropHMDAvatar::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPropVRTrackedObject>
//   SchemaInfoFor_N<CPropVRHand::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPropZipline::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnableMotionFixup::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<COrnamentProp::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPhysicsPropOverride::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPhysBoxMultiplayer::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPhysBox>
//   SchemaInfoFor_N<CPhysicsPropMultiplayer::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPhysicsPropRespawnable::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncPropRespawnZone::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CRagdollManager::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CRopeKeyframe>
//   SchemaInfoFor_N<CSceneEntity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CSceneEntity>
//   SchemaInfoFor_N<CInstancedSceneEntity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CSceneListManager::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CShadowControl::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CSoundOpvarSetEntity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CAISound::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CSoundEventEntity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTriggerSoundscape::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CSpriteAlias_env_glow::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CParticlePerformanceMonitor::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CNullEntity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBaseDMStart::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CInfoLandmark::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CSun::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncTankTrain::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncTrackTrain>
//   SchemaInfoFor_N<CTankTargetChange::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTankTrainAI::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CHandleTest::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CHandleDummy::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTestTraceline::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBasePlatTrain::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncPlat::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBasePlatTrain>
//   SchemaInfoFor_N<CFuncPlatRot::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncPlat>
//   SchemaInfoFor_N<CFuncTrain::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncTrainControls::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncTrackChange::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncPlatRot>
//   SchemaInfoFor_N<CFuncTrackAuto::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncTrackChange>
//   SchemaInfoFor_N<CTriggerRemove::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CScriptTriggerHurt::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CScriptTriggerMultiple::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTriggerMultiple>
//   SchemaInfoFor_N<CTriggerOnce::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CScriptTriggerOnce::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTriggerOnce>
//   SchemaInfoFor_N<CTriggerLook::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTriggerVolume::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CChangeLevel::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTriggerPush::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CScriptTriggerPush::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTriggerPush>
//   SchemaInfoFor_N<CTriggerTeleport::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CInfoTeleportDestination::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTriggerToggleSave::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTriggerSave::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTriggerGravity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CAI_ChangeTarget::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CAI_ChangeHintGroup::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTriggerProximity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CLogicProximity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTriggerImpact::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTriggerPlayerMovement::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CServerRagdollTrigger::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTriggerActiveWeaponDetect::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CPostProcessingVolume::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CVGuiScreenTeam::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CVGuiScreen>
//   SchemaInfoFor_N<CVRHandModelOverride::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBaseVRHandAttachment>
//   SchemaInfoFor_N<CDOTABaseAbility::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_DataDriven::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTABaseAbility>
//   SchemaInfoFor_N<CDOTA_ActionRunner>
//   SchemaInfoFor_N<CDOTA_Ability_Lua::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTABaseGameMode::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Brewmaster_PrimalSplit::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_DeathProphet_Exorcism::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BinaryObject::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item>
//   SchemaInfoFor_N<CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_BagOfGold::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_DataNonSpectator::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_DataRadiant::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_DataNonSpectator>
//   SchemaInfoFor_N<CDOTA_DataDire::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_DataCustomTeam::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_DataSpectator::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEmptyEntityInstance::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<dota_minimap_boundary::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEmptyEntityInstance>
//   SchemaInfoFor_N<CFoWBlockerEntity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFoWRevealerEntity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTAGameManagerProxy::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTAGameEvents::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTACustomGameEvents::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTAGameEvents>
//   SchemaInfoFor_N<CDOTAGamerulesProxy::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CGameRulesProxy>
//   SchemaInfoFor_N<CTeamplayRules>
//   SchemaInfoFor_N<CDOTA_DisplacementVisibility::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Hero_Recorder::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Book::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_BookStrength::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Book>
//   SchemaInfoFor_N<CDOTA_Item_BookAgility::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_BookIntelligence::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Tombstone::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Physical::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Tombstone_Drop::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Physical>
//   SchemaInfoFor_N<CDOTAHoldoutNetworker::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTAInGamePredictionState::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CIngameEvent_Base::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CIngameEvent_FM2015::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CIngameEvent_Base>
//   SchemaInfoFor_N<CIngameEvent_WM2016::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CIngameEvent_TI6::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CIngameEvent_WM2016>
//   SchemaInfoFor_N<CIngameEvent_FM2016::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CIngameEvent_WM2017::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Rune::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_RuneSpawner_Powerup::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_RuneSpawner_Bounty::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_ItemSpawner::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_DataDriven::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Lua::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_ControllerTest_MeleeAttack::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_ControllerTest_SvenOverheadAttack::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_ControllerTest_SvenSweepingAttack::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_ControllerTest_SvenThrustingAttack::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_ControllerTest_SlarkSpinAttack::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Pudge_FleshHeap::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Buff>
//   SchemaInfoFor_N<CDOTA_Modifier_Lua>
//   SchemaInfoFor_N<CHorizontalMotionController>
//   SchemaInfoFor_N<CVerticalMotionController>
//   SchemaInfoFor_N<CDOTA_Ability_KoboldTaskmaster_SpeedAura::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_CentaurKhan_EnduranceAura::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_CentaurKhan_WarStomp::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Spawnlord_Master_Stomp::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Spawnlord_Master_Freeze::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_GnollAssassin_EnvenomedWeapon::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Ghost_FrostAttack::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_PolarFurbolgUrsaWarrior_ThunderClap::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Neutral_SpellImmunity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_OgreMagi_FrostArmor::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_DarkTrollWarlord_Ensnare::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_DarkTrollWarlord_RaiseDead::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_GiantWolf_CriticalStrike::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_AncientGolem_Rockslide::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_MudGolem_RockDestroy::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_MudGolem_HurlBoulder::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_AlphaWolf_CriticalStrike::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_AlphaWolf_CommandAura::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Tornado_Tempest::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_EnragedWildkin_Tornado::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_EnragedWildkin_ToughnessAura::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_GraniteGolem_HPAura::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_GraniteGolem_Bash::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Spawnlord_Master_Bash::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_SatyrTrickster_Purge::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_SatyrSoulstealer_ManaBurn::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_SatyrHellcaller_Shockwave::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_SatyrHellcaller_UnholyAura::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Spawnlord_Aura::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_ForestTrollHighPriest_Heal::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_ForestTrollHighPriest_ManaAura::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_HarpyStorm_ChainLightning::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_BlackDragon_Fireball::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_BlackDragon_SplashAttack::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_BlackDragon_DragonhideAura::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_MudGolem_CloakAura::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_BlueDragonspawnSorcerer_Evasion::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_BlueDragonspawnOverseer_Evasion::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_BlueDragonspawnOverseer_DevotionAura::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_BigThunderLizard_Wardrums::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_BigThunderLizard_Slam::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_BigThunderLizard_Frenzy::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Greevil_Miniboss_Black_Nightmare::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Greevil_Miniboss_Black_BrainSap::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Greevil_Miniboss_Blue_ColdFeet::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Greevil_Miniboss_Blue_IceVortex::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Greevil_Miniboss_Red_Earthshock::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Greevil_Miniboss_Red_Overpower::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Greevil_Miniboss_Yellow_IonShell::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Greevil_Miniboss_Yellow_Surge::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Greevil_Miniboss_White_Purification::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Greevil_Miniboss_White_Degen_Aura::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Greevil_Miniboss_Green_LivingArmor::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Greevil_Miniboss_Green_Overgrowth::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Greevil_Miniboss_Orange_DragonSlave::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Greevil_Miniboss_Orange_LightStrikeArray::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Greevil_Miniboss_Purple_VenomousGale::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Greevil_Miniboss_Purple_PlagueWard::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Greevil_Miniboss_Sight::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_NPC_DataDriven::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Additive>
//   SchemaInfoFor_N<CDOTAPlayer::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CBaseMultiplayerPlayer>
//   SchemaInfoFor_N<CDOTA_PlayerResource::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTAPropCustomTexture::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDotaQuestBase::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDotaSubquestBase::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDotaQuest::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDotaSubquestBuyItems::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDotaSubquestBase>
//   SchemaInfoFor_N<CDotaSubquestEntityDeath::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDotaSubquestTutorialEvent::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDotaSubquestPlayerStat::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDotaSubquestAbilityCastCount::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC>
//   SchemaInfoFor_N<CDOTA_SimpleObstruction::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Undefined::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_HP_100::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_HP_125::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_HP_150::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_HP_175::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_HP_200::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_HP_250::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_HP_275::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_HP_300::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_HP_350::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_HP_400::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_HP_500::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_MP_100::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_MP_125::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_MP_150::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_MP_175::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_MP_200::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_MP_250::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_MP_300::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_MP_350::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_MP_400::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_MP_500::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Speed_10::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Speed_15::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Speed_20::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Speed_25::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Speed_30::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Speed_35::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Speed_40::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Speed_45::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Speed_50::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Speed_60::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Speed_80::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Speed_100::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_HP_Regen_4::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_HP_Regen_5::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_HP_Regen_6::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_HP_Regen_7::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_HP_Regen_8::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_HP_Regen_10::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_HP_Regen_14::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_HP_Regen_15::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_HP_Regen_20::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_HP_Regen_25::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_HP_Regen_40::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_HP_Regen_50::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_MP_Regen_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_MP_Regen_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_MP_Regen_3::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_MP_Regen_4::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_MP_Regen_6::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_MP_Regen_8::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_MP_Regen_10::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_MP_Regen_14::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Movement_Speed_10::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Movement_Speed_15::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Movement_Speed_20::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Movement_Speed_25::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Movement_Speed_30::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Movement_Speed_35::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Movement_Speed_40::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Movement_Speed_45::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Movement_Speed_50::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_All_Stats_4::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_All_Stats_5::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_All_Stats_6::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_All_Stats_7::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_All_Stats_8::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_All_Stats_10::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_All_Stats_12::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_All_Stats_14::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_All_Stats_15::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_All_Stats_20::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Intelligence_6::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Intelligence_7::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Intelligence_8::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Intelligence_10::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Intelligence_12::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Intelligence_13::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Intelligence_15::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Intelligence_16::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Intelligence_20::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Intelligence_25::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Intelligence_30::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Intelligence_35::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Strength_3::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Strength_4::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Strength_5::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Strength_6::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Strength_7::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Strength_8::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Strength_9::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Strength_10::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Strength_12::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Strength_14::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Strength_15::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Strength_20::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Strength_25::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Agility_8::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Agility_10::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Agility_13::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Agility_14::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Agility_15::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Agility_16::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Agility_20::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Agility_25::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Armor_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Armor_3::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Armor_4::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Armor_5::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Armor_6::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Armor_7::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Armor_8::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Armor_9::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Armor_10::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Armor_12::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Armor_15::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Magic_Resistance_5::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Magic_Resistance_6::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Magic_Resistance_8::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Magic_Resistance_10::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Magic_Resistance_12::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Magic_Resistance_15::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Magic_Resistance_20::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Magic_Resistance_25::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Magic_Resistance_30::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Day_Vision_400::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Vision_200::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Damage_10::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Damage_12::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Damage_15::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Damage_20::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Damage_25::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Damage_30::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Damage_35::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Damage_40::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Damage_45::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Damage_50::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Damage_65::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Damage_75::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Damage_90::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Damage_100::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Damage_120::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Damage_150::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Range_50::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Range_75::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Range_100::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Range_125::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Range_150::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Range_175::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Range_200::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Range_250::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Range_300::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Attack_Range_400::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Cast_Range_50::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Cast_Range_60::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Cast_Range_75::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Cast_Range_100::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Cast_Range_125::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Cast_Range_150::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Cast_Range_175::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Cast_Range_200::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Cast_Range_250::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Cast_Range_300::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Spell_Amplify_3::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Spell_Amplify_4::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Spell_Amplify_5::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Spell_Amplify_6::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Spell_Amplify_8::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Spell_Amplify_10::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Spell_Amplify_12::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Spell_Amplify_15::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Spell_Amplify_20::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Spell_Amplify_25::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Cooldown_Reduction_8::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Cooldown_Reduction_10::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Cooldown_Reduction_12::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Cooldown_Reduction_15::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Cooldown_Reduction_20::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Cooldown_Reduction_25::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Respawn_Reduction_15::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Respawn_Reduction_20::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Respawn_Reduction_25::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Respawn_Reduction_30::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Respawn_Reduction_35::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Respawn_Reduction_40::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Respawn_Reduction_50::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Respawn_Reduction_60::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Gold_Income_5::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Gold_Income_10::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Gold_Income_15::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Gold_Income_20::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Gold_Income_25::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Gold_Income_30::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Gold_Income_40::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Gold_Income_50::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Evasion_10::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Evasion_12::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Evasion_15::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Evasion_20::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Spell_Lifesteal_20::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Spell_Lifesteal_70::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Lifesteal_10::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Lifesteal_15::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Lifesteal_20::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Lifesteal_25::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Lifesteal_30::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_20_Bash_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Exp_Boost_5::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Exp_Boost_10::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Exp_Boost_15::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Exp_Boost_20::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Exp_Boost_25::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Exp_Boost_30::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Broodmother_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Broodmother_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Lone_Druid_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Lone_Druid_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Lone_Druid_3::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Lone_Druid_4::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Wisp::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Techies::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Arc_Warden::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Meepo::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Chen_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Chen_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Invoker_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Invoker_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Invoker_3::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Slardar::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Ancient_Apparition_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Ancient_Apparition_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Disruptor::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Gyrocopter_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Gyrocopter_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Keeper_of_the_Light::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Legion_Commander::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Puck::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Pugna_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Pugna_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Windranger::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Death_Prophet::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Sniper_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Sniper_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Magnus::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Phantom_Assassin::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Monkey_King::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Riki_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Riki_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Tusk::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Skywrath::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Medusa::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Ogre_Magi::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Silencer::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Elder_Titan::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Ember_Spirit_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Ember_Spirit_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Lifestealer::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Lion::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Phantom_Lancer::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Slark::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Spectre::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Spirit_Breaker_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Spirit_Breaker_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Storm_Spirit::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Tidehunter::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Tinker::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Tiny::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Troll_Warlord::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Undying::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Viper_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Viper_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Zeus::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Brewmaster::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Luna_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Luna_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Faceless_Void::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Night_Stalker::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Nyx::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Weaver_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Weaver_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Ursa::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Chaos_Knight::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Lycan_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Lycan_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Bristleback::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Furion::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Abaddon::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Alchemist::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Axe::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Beastmaster::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Clinkz_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Clinkz_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Juggernaut::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Winter_Wyvern_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Winter_Wyvern_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Terrorblade::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Phoenix_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Phoenix_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Enchantress_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Enchantress_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Batrider_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Batrider_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Wraith_King_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Wraith_King_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Kunkka::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Bloodseeker::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Drow_Ranger_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Drow_Ranger_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Drow_Ranger_3::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Earth_Spirit::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Lina_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Lina_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Timbersaw::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Huskar::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Naga_Siren::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Oracle::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Sand_King::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Shadow_Demon_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Shadow_Demon_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Dragon_Knight::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Morphling_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Morphling_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Leshrac_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Leshrac_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Jakiro::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Outworld_Devourer::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Bane_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Bane_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Enigma::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Nevermore_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Nevermore_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Templar_Assassin::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Crystal_Maiden_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Crystal_Maiden_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Doom_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Doom_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Vengeful_Spirit_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Vengeful_Spirit_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Vengeful_Spirit_3::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Venomancer::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Earthshaker::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Shadow_Shaman_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Shadow_Shaman_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Warlock_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Warlock_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Rubick::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Sven::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Dark_Seer::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Dazzle_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Dazzle_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Lich_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Lich_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Visage_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Visage_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Razor::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Clockwerk::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Omniknight_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Omniknight_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Centaur_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Centaur_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Witch_Doctor_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Witch_Doctor_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Necrophos::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Antimage::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Mirana_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Mirana_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Bounty_Hunter::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Underlord::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Pudge_1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Pudge_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Special_Bonus_Unique_Treant::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTASpecGraphPlayerData::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTASpectatorGraphManagerProxy::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CSpeechBubbleManager::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTACameraBounds::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTATeam::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTeam>
//   SchemaInfoFor_N<CDOTA_MapTree::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BinaryObject>
//   SchemaInfoFor_N<CObstructionObject>
//   SchemaInfoFor_N<CDOTA_TempTree::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CTriggerDota::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFilterDotaEntities::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CInfoRoquelairePerch::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_HeroTrigger::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDotaTutorialNetworker::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDotaTutorialNPCBlocker::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvDeferredLight::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvDeferredSpotLight::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEnvDeferredLight>
//   SchemaInfoFor_N<CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<NextBotCombatCharacter::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<NextBotCombatCharacter>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Building::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Tower::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Building>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Healer::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_RespawningTower::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Tower>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Fort::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Barracks::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_SDKTower::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_HoldoutTower::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_HoldoutTower_LightFast::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_HoldoutTower>
//   SchemaInfoFor_N<CDOTA_BaseNPC_HoldoutTower_HeavySlow::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Effigy_Statue::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Effigy_BattleCup::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Creature::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Creep>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Creep_Lane::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Creep_Siege::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Creep_Lane>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Creep_Neutral::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Creep_Talking>
//   SchemaInfoFor_N<CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CInfoPlayerStartDota::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CInfoPlayerStartDota>
//   SchemaInfoFor_N<CInfoPlayerStartBadGuys::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Hero::sHeroDamageInfo>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Hero::KillInfo_t>
//   SchemaInfoFor_N<CDOTA_Pet_CarriedItem::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_ShopTrigger::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Shop::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_NPCSpawner::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_NPCSpawnerGoodTop::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_NPCSpawner>
//   SchemaInfoFor_N<CDOTA_NPCSpawnerGoodMid::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_NPCSpawnerGoodBot::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_NPCSpawnerBadTop::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_NPCSpawnerBadMid::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_NPCSpawnerBadBot::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_NeutralSpawner::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_RoshanSpawner::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_ScriptedSpawner::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_ScriptedSpawner::scripted_moveto_t>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Hero>
//   SchemaInfoFor_N<CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_AntiMage_ManaBreak::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_AntiMage_Blink::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_AntiMage_SpellShield::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_AntiMage_ManaVoid::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Axe_CullingBlade>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Juggernaut_BladeFury::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Juggernaut_HealingWard::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Juggernaut_BladeDance::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Juggernaut_Omnislash::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Holdout_BladeFury::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Juggernaut_BladeFury>
//   SchemaInfoFor_N<CDOTA_Ability_Holdout_Omnislash::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Kunkka_Torrent::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Kunkka_Tidebringer::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Kunkka_XMarksTheSpot::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Kunkka_Return::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Kunkka_GhostShip::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Morphling::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Morphling_Waveform::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Morphling_AdaptiveStrike::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Morphling_Morph::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Morphling_Morph_Agi::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Morphling_Morph_Str::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Morphling_Replicate::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Morphling_MorphReplicate::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Morphling_Hybrid::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Nevermore_Shadowraze>
//   SchemaInfoFor_N<CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Puck::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Puck_EtherealJaunt::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Puck_IllusoryOrb::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Puck_WaningRift::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Puck_PhaseShift::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Puck_DreamCoil::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Razor::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Razor_PlasmaField::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Razor_StaticLink::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Razor_UnstableCurrent::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Razor_EyeOfTheStorm::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Sven_GodsStrength>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTAWearableItem::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTAWearableItem>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Tiny::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Tiny_Avalanche::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Tiny_Toss::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Tiny_CraggyExterior::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Tiny_Grow::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_VengefulSpirit::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_VengefulSpirit_Magic_Missile::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_VengefulSpirit_WaveOfTerror::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_VengefulSpirit_Command_Aura::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_VengefulSpirit_Nether_Swap::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_ZeusCloud::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Zuus::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Zuus_ArcLightning::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Zuus_Cloud::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Zuus_LightningBolt::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Zuus_StaticField::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Zuus_ThundergodsWrath::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Zuus_ThundergodsVengeance::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Zuus_ThundergodsWrath>
//   SchemaInfoFor_N<CDOTA_Unit_Announcer_Killing_Spree::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Announcer>
//   SchemaInfoFor_N<CDOTA_Unit_Announcer::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CInfoCourierSpawnRadiant::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CInfoCourierSpawnDire::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CInfoCourierSpawn::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Courier::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Fountain::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Beastmaster::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Beastmaster_Axe::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Beastmaster_WildAxes::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Beastmaster_Beasts::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Beastmaster_Hawk::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Beastmaster_Beasts>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Beastmaster_Boar::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Beastmaster_CallOfTheWild::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Beastmaster_CallOfTheWildBoar::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_CallOfTheWild_Hawk_Invisibility::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_CallOfTheWild_Boar_Poison::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_CallOfTheWild_Boar_PoisonGreater::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Beastmaster_InnerBeast::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Beastmaster_PrimalRoar::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_DeathProphet::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_DeathProphet_CarrionSwarm::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_DeathProphet_Silence::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_DeathProphet_Witchcraft::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_DeathProphet_SpiritSiphon::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_DeathProphet_Exorcism_Spirit::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Necrolyte::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Necrolyte_Sadist_Stop::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Necrolyte_Sadist::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Necrolyte_Death_Pulse::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Necrolyte_Heartstopper_Aura::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Necrolyte_ReapersScythe::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Pugna::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Pugna_NetherBlast::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Pugna_Decrepify::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Pugna_NetherWard::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Pugna_LifeDrain::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_QueenOfPain::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_QueenOfPain_ShadowStrike::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_QueenOfPain_Blink::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_QueenOfPain_ScreamOfPain::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_QueenOfPain_SonicWave::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Tinker::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Tinker_Laser::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Tinker_HeatSeekingMissile::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Tinker_MarchOfTheMachines::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Tinker_Rearm::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Ursa::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Ursa_Earthshock::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Ursa_Overpower::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Ursa_Fury_Swipes::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Ursa_Enrage::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Warlock_Golem::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Warlock::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Warlock_Fatal_Bonds::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Warlock_Shadow_Word::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Warlock_Upheaval::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Warlock_RainOfChaos::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Warlock_Golem_Flaming_Fists::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Warlock_Golem_Permanent_Immolation::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_WitchDoctor::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_WitchDoctor_ParalyzingCask::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_WitchDoctor_VoodooRestoration::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_WitchDoctor_Maledict::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_NPC_WitchDoctor_Ward::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_WitchDoctor_DeathWard::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_LoopingSound::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Animation_Attack::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Animation_RightClawSwipe::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Animation_Attack>
//   SchemaInfoFor_N<CDOTA_Ability_Animation_LeftClawSwipe::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Nian_Dive::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_NianCharge::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Nian_Frenzy::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Nian_Roar::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Nian_Attachment::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Nian::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Creature>
//   SchemaInfoFor_N<CDOTA_Ability_Animation_TailSpin::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Nian_Apocalypse::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Nian_GreaterBash::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Nian_Tail_Swipe::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Nian_Hurricane::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Nian_Whirlpool::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Nian_Eruption::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Nian_Sigils::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Nian_Waterball::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Nian_Flag_Trap::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Firework_Mine::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_ForceBoots::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_JumpBoots::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Nian_Leap::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Vermillion_Robe::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Vermillion_Robe::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Roshan::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_TargetDummy::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Batrider::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Batrider_StickyNapalm::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Batrider_Flamebreak::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Batrider_Firefly::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Batrider_FlamingLasso::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Clinkz::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Clinkz_Strafe::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Clinkz_SearingArrows::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Clinkz_WindWalk::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Clinkz_DeathPact::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Furion::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Furion_Sprout::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Furion_Teleportation::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Furion_ForceOfNature::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Furion_WrathOfNature::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Gyrocopter::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Gyrocopter_Rocket_Barrage::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Gyrocopter_Homing_Missile::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Gyrocopter_Flak_Cannon::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Gyrocopter_Call_Down::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Invoker_InvokedBase>
//   SchemaInfoFor_N<CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_SpiritBear::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_LoneDruid::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_LoneDruid_SpiritBear::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_LoneDruid_SpiritBear_Return::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_LoneDruid_SpiritBear_Entangle::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_LoneDruid_SpiritBear_Demolish::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_LoneDruid_Rabid::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_LoneDruid_TrueForm::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_LoneDruid_TrueForm_Druid::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_LoneDruid_TrueForm_BattleCry::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_LoneDruid_SavageRoar::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_LoneDruid_SavageRoar_Bear::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Bear_Empty::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Lycan::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Lycan_SummonWolves::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Lycan_SummonWolves_CriticalStrike::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Lycan_SummonWolves_PermanentInvisibility::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Lycan_Howl::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Lycan_FeralImpulse::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Lycan_Shapeshift::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Obsidian_Destroyer::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Obsidian_Destroyer_ArcaneOrb::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Obsidian_Destroyer_AstralImprisonment::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Obsidian_Destroyer_EssenceAura::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Obsidian_Destroyer_SanityEclipse::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Omniknight::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Omniknight_Purification::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Omniknight_Repel::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Omniknight_Degen_Aura::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Omniknight_GuardianAngel::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Shadow_Demon::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Shadow_Demon_Disruption::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Shadow_Demon_Soul_Catcher::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Shadow_Demon_Shadow_Poison::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Shadow_Demon_Shadow_Poison_Release::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Shadow_Demon_Demonic_Purge::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Spectre::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Spectre_SpectralDagger::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Spectre_Desolate::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Spectre_Dispersion::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Spectre_Haunt::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Spectre_Reality::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_ArcWarden::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_ArcWarden_Flux::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_ArcWarden_MagneticField::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_ArcWarden_SparkWraith::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_ArcWarden_TempestDouble::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Bristleback::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Bristleback_ViscousNasalGoo::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Bristleback_QuillSpray::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Bristleback_Bristleback::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Bristleback_Warpath::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_KeeperOfTheLight::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_KeeperOfTheLight_Illuminate::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_KeeperOfTheLight_IlluminateEnd::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminate::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_KeeperOfTheLight_SpiritFormIlluminateEnd::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_KeeperOfTheLight_ManaLeak::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_KeeperOfTheLight_ChakraMagic::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_KeeperOfTheLight_SpiritForm::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_KeeperOfTheLight_Recall::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_KeeperOfTheLight_BlindingLight::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Magnataur::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Magnataur_Shockwave::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Magnataur_Empower::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Magnataur_Skewer::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Magnataur_ReversePolarity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Holdout_FriendlySkewer::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_MonkeyKing_TreeDance::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_MonkeyKing_Spring::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_MonkeyKing::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_MonkeyKing_Boundless_Strike::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_MonkeyKing_Spring_Early::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_MonkeyKing_Transform::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_MonkeyKing_UnTransform::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_MonkeyKing_FurArmy::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_MonkeyKing_QuadrupleTap::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Nyx_Assassin::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Nyx_Assassin_Impale::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Nyx_Assassin_ManaBurn::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Nyx_Assassin_Burrow::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Nyx_Assassin_Unburrow::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Nyx_Assassin_SpikedCarapace::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Nyx_Assassin_Vendetta::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Ogre_Magi_Fireblast>
//   SchemaInfoFor_N<CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Rubick::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Rubick_Telekinesis::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Rubick_TelekinesisLand::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Rubick_FadeBolt::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Rubick_NullField::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Rubick_SpellSteal::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Rubick_Empty1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Rubick_Empty2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Rubick_Hidden1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Rubick_Hidden2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Rubick_Hidden3::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Shredder_Chakram>
//   SchemaInfoFor_N<CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Shredder_ReturnChakram>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Skywrath_Mage::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Skywrath_Mage_Arcane_Bolt::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Skywrath_Mage_Concussive_Shot::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Skywrath_Mage_Ancient_Seal::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Skywrath_Mage_Mystic_Flare::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Treant::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_NPC_Treant_EyesInTheForest::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Treant_EyesInTheForest::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Treant_NaturesGuise::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Treant_LeechSeed::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Treant_LivingArmor::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Treant_Overgrowth::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Undying_Tombstone::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Undying_Zombie::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Undying::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Undying_Decay::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Undying_SoulRip::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Undying_Tombstone_Zombie_DeathStrike::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Undying_Tombstone::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Undying_FleshGolem::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Wisp_Spirit::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Aegis::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Ancient_Janggo::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Ancient_Janggo::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Armlet::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Battlefury::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Black_King_Bar::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Black_King_Bar::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Blade_Mail::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Blade_Mail::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_BladesOfAttack::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Bloodstone::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_PointBooster::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_BootsOfTravel>
//   SchemaInfoFor_N<CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_BootsOfTravel>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_PowerTreads::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Bracer::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Broadsword::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Buckler::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Butterfly::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Butterfly::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_ChainMail::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Cheese::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Circlet::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Clarity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Claymore::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Courier::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Dagon::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Dagon2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Dagon>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Dagon3::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Dagon4::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Dagon5::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Dagon::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Dagon_Upgraded::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Dagon>
//   SchemaInfoFor_N<CDOTA_Item_Dagon_Upgraded2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Dagon_Upgraded>
//   SchemaInfoFor_N<CDOTA_Item_Dagon_Upgraded3::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Dagon_Upgraded4::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Dagon_Upgraded5::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_DemonEdge::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Desolator::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Desolator::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Diffusal_Blade::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Diffusal_Blade2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Diffusal_Blade>
//   SchemaInfoFor_N<CDOTA_Item_Diffusal_Blade::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Diffusal_Blade_Level2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Diffusal_Blade>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_DivineRapier::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_DragonLance::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_DragonLance::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_EchoSabre::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_EmptyBottle::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Ethereal_Blade::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Ethereal_Blade::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Flask::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_ForceStaff::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_ForceStaff::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Gauntlets::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_GhostScepter::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_GlimmerCape::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_GlimmerCape::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Guardian_Greaves::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Guardian_Greaves::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_HandOfMidas::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_HandOfMidas::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Headdress::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Headdress::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Heart::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_HelmOfTheDominator::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_HelmOfTheDominator::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Hood_Of_Defiance::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Hood_Of_Defiance::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Hurricane_Pike::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Hurricane_Pike::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Hyperstone::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_InvisibilityEdge::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_InvisibilityEdge::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_IronwoodBranch::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Javelin::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Maelstrom::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_MagicStick::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_MagicWand::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_MagicWand::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_MantaStyle::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_MantaStyle::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Mantle::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Medallion_Of_Courage::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Medallion_Of_Courage::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Mekansm::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Mekansm::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Mjollnir::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Moonshard::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_MysticStaff::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Necronomicon>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Necronomicon::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Necronomicon>
//   SchemaInfoFor_N<CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_NullTalisman::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_OgreAxe::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Orb_of_Venom::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Perseverance::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Pipe::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Pipe::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_PlateMail::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_QuellingBlade::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Radiance::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Radiance::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Reaver::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_RiverPainter::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_RiverPainter2::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_RiverPainter>
//   SchemaInfoFor_N<CDOTA_Item_RiverPainter3::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_RiverPainter4::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_RiverPainter5::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_RiverPainter6::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_RiverPainter7::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_RodOfAtos::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_RodOfAtos::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_SacredRelic::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Sange::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Satanic::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Satanic::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Cyclone::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Cyclone::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_SheepStick::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_SheepStick::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Shivas_Guard::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Shivas_Guard::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Silver_Edge::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Silver_Edge::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Skadi::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Slippers::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_SobiMask::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Sphere::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_StaffOfWizardry::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_StoutShield::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Tango::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Tango_Single::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_TeleportScroll::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_UltimateScepter::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_UltimateScepter::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Urn_Of_Shadows::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Urn_Of_Shadows::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Vanguard::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Veil_Of_Discord::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Veil_Of_Discord::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Vladmir::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Vladmir::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_VoidStone::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Ward_Dispenser::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Ward_Dispenser::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_ObserverWard::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_SentryWard::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_NPC_Observer_Ward::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_NPC_Observer_Ward_TrueSight::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_NPC_Observer_Ward>
//   SchemaInfoFor_N<CDOTA_NoWardTrigger::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_LesserCritical::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_LesserCritical::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_WindLace::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_WraithBand::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Recipe_Yasha::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CDOTA_Item_Yasha::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CAttributeManager::cached_attribute_float_t>
//   SchemaInfoFor_N<CAttributeManager>
//   SchemaInfoFor_N<CAdditionalWearable::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEconWearable::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEconWearable>
//   SchemaInfoFor_N<CEconEntity::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEconEntity::AttachedParticleInfo_t>
//   SchemaInfoFor_N<IHasAttributes>
//   SchemaInfoFor_N<CBaseAttributableItem::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEconEntity>
//   SchemaInfoFor_N<IEconItemInterface>
//   SchemaInfoFor_N<CTFWearableItem::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFlexExpresserShim::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFlexExpresser::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFlexExpresserShim>
//   SchemaInfoFor_N<CFogVolume::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CServerOnlyModelEntity>
//   SchemaInfoFor_N<CScriptNavBlocker::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CFuncNavBlocker>
//   SchemaInfoFor_N<CFuncNavObstruction::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CLocomotionBase>
//   SchemaInfoFor_N<CSimpleBot::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<INextBotComponent>
//   SchemaInfoFor_N<INextBotEventResponder>
//   SchemaInfoFor_N<IContextualQuery>
//   SchemaInfoFor_N<IBody>
//   SchemaInfoFor_N<CInfoSpawnGroupLandmark::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CInfoSpawnGroupLoadUnload>
//   SchemaInfoFor_N<CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass>
//   SchemaInfoFor_N<CEntityClass::ComponentOffsets_t>
//   SchemaInfoFor_N<CEntityClass::ComponentHelper_t>
//   SchemaInfoFor_N<CEntityClass::CClassAttributes>
//   SchemaInfoFor_N<CEntityClass>
//   SchemaInfoFor_N<IHandleEntity>
//   SchemaInfoFor_N<CBaseConstraint>
//   SchemaInfoFor_N<VPhysXDiskShapeHeader_t>
//   SchemaInfoFor_N<CNavVolumeVector>
//   SchemaInfoFor_N<CNavVolumeSphere>

// CSchemaManipulator: 147 more instantiations (full list in INDEX.tsv)
//   CSchemaManipulator<CUtlSymbolLarge>
//   CSchemaManipulator<CHandle<CLightEntity> >
//   CSchemaManipulator<CEntityHandle>
//   CSchemaManipulator<Color>
//   CSchemaManipulator<CHandle<CFogController> >
//   CSchemaManipulator<CHandle<CInfoLadderDismount> >
//   CSchemaManipulator<CHandle<CBaseCombatWeapon> >
//   CSchemaManipulator<CHandle<CBaseCombatCharacter> >
//   CSchemaManipulator<HSequence>
//   CSchemaManipulator<CEntityIndex>
//   CSchemaManipulator<matrix3x4_t>
//   CSchemaManipulator<QAngle>
//   CSchemaManipulator<Vector2D>
//   CSchemaManipulator<HSCRIPT__*>
//   CSchemaManipulator<Vector4D>
//   CSchemaManipulator<CHandle<CEconWearable> >
//   CSchemaManipulator<CHandle<CBaseModelEntity> >
//   CSchemaManipulator<CHandle<CBasePropDoor> >
//   CSchemaManipulator<CHandle<CBasePlayer> >
//   CSchemaManipulator<CEntityOutputTemplate<float> >
//   CSchemaManipulator<CBitVec<64> >
//   CSchemaManipulator<CNetworkedQuantizedFloat>
//   CSchemaManipulator<CUtlString>
//   CSchemaManipulator<KeyValues>
//   CSchemaManipulator<CHandle<CFish> >
//   CSchemaManipulator<CHandle<CBaseAnimating> >
//   CSchemaManipulator<CHandle<CFishPool> >
//   CSchemaManipulator<CHandle<CBaseFilter> >
//   CSchemaManipulator<CHandle<CItemGenericTriggerHelper> >
//   CSchemaManipulator<CHandle<CItemGeneric> >
//   CSchemaManipulator<matrix3x4a_t>
//   CSchemaManipulator<CHandle<CPointHMDAnchor> >
//   CSchemaManipulator<CHandle<CPropHMDAvatar> >
//   CSchemaManipulator<CHandle<CBaseViewModel> >
//   CSchemaManipulator<CHandle<CColorCorrection> >
//   CSchemaManipulator<CHandle<CPostProcessController> >
//   CSchemaManipulator<CHandle<CEnvSoundscape> >
//   CSchemaManipulator<CHandle<CEntityBlocker> >
//   CSchemaManipulator<Quaternion>
//   CSchemaManipulator<CHandle<CPropVRHand> >
//   CSchemaManipulator<CHandle<CSprite> >
//   CSchemaManipulator<CHandle<CBaseFire> >
//   CSchemaManipulator<CVariantBase<CVariantDefaultAllocator> >
//   CSchemaManipulator<CEntityOutputTemplate<CVariantBase<CVariantDefaultAllocator> > >
//   CSchemaManipulator<CEntityOutputTemplate<Color> >
//   CSchemaManipulator<CEntityOutputTemplate<Vector> >
//   CSchemaManipulator<CEntityOutputTemplate<int> >
//   CSchemaManipulator<CHandle<CSpotlightEnd> >
//   CSchemaManipulator<CHandle<CBeam> >
//   CSchemaManipulator<CHandle<CPropZipline> >
//   CSchemaManipulator<CHandle<CBaseVRHandAttachment> >
//   CSchemaManipulator<CHandle<CPointWorldText> >
//   CSchemaManipulator<CHandle<CFuncLadder> >
//   CSchemaManipulator<CHandle<CSceneListManager> >
//   CSchemaManipulator<CHandle<CEnvSoundscapeTriggerable> >
//   CSchemaManipulator<CHandle<CBaseFlex> >
//   CSchemaManipulator<CHandle<CSceneEntity> >
//   CSchemaManipulator<CHandle<CFuncTrackTrain> >
//   CSchemaManipulator<item_definition_index_t>
//   CSchemaManipulator<CHandle<CDOTA_BaseNPC> >
//   CSchemaManipulator<CHandle<CIngameEvent_Base> >
//   CSchemaManipulator<CHandle<CDOTA_BaseNPC_Building> >
//   CSchemaManipulator<CHandle<CDOTA_BaseNPC_Tower> >
//   CSchemaManipulator<CHandle<CDOTA_BaseNPC_Pet> >
//   CSchemaManipulator<CHandle<CDOTA_Item> >
//   CSchemaManipulator<CHandle<CDOTAPlayer> >
//   CSchemaManipulator<CHandle<CDOTA_Item_Physical> >
//   CSchemaManipulator<CHandle<CDOTA_Item_Tombstone> >
//   CSchemaManipulator<CHandle<CDOTA_Unit_Courier> >
//   CSchemaManipulator<CHandle<CDotaSubquestBase> >
//   CSchemaManipulator<CHandle<CDOTASpecGraphPlayerData> >
//   CSchemaManipulator<CHandle<CDOTA_Pet_CarriedItem> >
//   CSchemaManipulator<CHandle<CDOTA_BaseNPC_Hero> >
//   CSchemaManipulator<CHandle<CDOTA_ScriptedSpawner> >
//   CSchemaManipulator<CUtlSymbol>
//   CSchemaManipulator<CHandle<CDOTA_Ability_Meepo_DividedWeStand> >
//   CSchemaManipulator<CHandle<CDOTABaseAbility> >
//   CSchemaManipulator<itemid_t>
//   CSchemaManipulator<style_index_t>
//   CSchemaManipulator<DegreeEuler>
//   CSchemaManipulator<RadianEuler>
//   CSchemaManipulator<CTransform>
//   CSchemaManipulator<V_uuid_t>
//   CSchemaManipulator<CResourceArray<VPhysXCollisionAttributes_t> >
//   CSchemaManipulator<CResourcePointer<PhysFeModelDesc_t> >
//   CSchemaManipulator<CResourceArray<VPhysXJoint_t> >
//   CSchemaManipulator<CResourceArray<VPhysXConstraint2_t> >
//   CSchemaManipulator<CResourceArray<VPhysXBodyPart_t> >
//   CSchemaManipulator<CResourceArray<matrix3x4a_t> >
//   CSchemaManipulator<CResourceArray<CTransform> >
//   CSchemaManipulator<CResourceArray<RnSoftbodyCapsule_t> >
//   CSchemaManipulator<CResourceArray<RnSoftbodySpring_t> >
//   CSchemaManipulator<CResourceArray<RnSoftbodyParticle_t> >
//   CSchemaManipulator<CResourceArray<CResourceString> >
//   CSchemaManipulator<CResourceArray<unsigned int> >
//   CSchemaManipulator<CResourceArray<unsigned char> >
//   CSchemaManipulator<CResourcePointer<VpropBreakablePartData_t> >
//   CSchemaManipulator<CResourceArray<short unsigned int> >
//   CSchemaManipulator<CResourceArray<RnMeshDesc_t> >
//   CSchemaManipulator<CResourceArray<RnHullDesc_t> >
//   CSchemaManipulator<CResourceArray<RnCapsuleDesc_t> >
//   CSchemaManipulator<CResourceArray<RnSphereDesc_t> >
//   CSchemaManipulator<CResourceString>
//   CSchemaManipulator<CResourceArray<CResourceArray<unsigned char> > >
//   CSchemaManipulator<CResourceArray<OnDiskBufferData_t> >
//   CSchemaManipulator<CResourceArray<BaseConstraint_t> >
//   CSchemaManipulator<CResourceArray<HitBoxSet_t> >
//   CSchemaManipulator<CResourceArray<AttachmentData_t> >
//   CSchemaManipulator<CResourcePointer<RenderSkeletonData_t> >
//   CSchemaManipulator<CResourceExtReference<CWeakHandle<InfoForResourceTypeMorphSetData_t> > >
//   CSchemaManipulator<CResourceArray<SceneObjectData_t> >
//   CSchemaManipulator<CResourceArray<ConstraintTarget_t> >
//   CSchemaManipulator<CResourceArray<ConstraintSlave_t> >
//   CSchemaManipulator<CResourceArray<HitBox_t> >
//   CSchemaManipulator<CResourceArray<MaterialDrawDescriptor_t> >
//   CSchemaManipulator<CResourceArray<RenderInputLayoutField_t> >
//   CSchemaManipulator<CResourceExtReference<CWeakHandle<InfoForResourceTypeIMaterial2> > >
//   CSchemaManipulator<CResourceArray<RenderBufferBinding_t> >
//   CSchemaManipulator<CResourceArray<float> >
//   CSchemaManipulator<CResourceArray<SkeletonBoneBbox_t> >
//   CSchemaManipulator<CResourceExtReference<CWeakHandle<InfoForResourceTypeSequenceGroupResourceData_t> > >
//   CSchemaManipulator<CResourceExtReference<CWeakHandle<InfoForResourceTypeAnimationGroupResourceData_t> > >
//   CSchemaManipulator<CResourceExtReference<CWeakHandle<InfoForResourceTypeCPhysAggregateData> > >
//   CSchemaManipulator<CResourceExtReference<CWeakHandle<InfoForResourceTypeCRenderMesh> > >
//   CSchemaManipulator<CResourceArray<ModelBoneFlexDriver_t> >
//   CSchemaManipulator<CResourceArray<MaterialGroup_t> >
//   CSchemaManipulator<CResourceArray<CResourceExtReference<CWeakHandle<InfoForResourceTypeSequenceGroupResourceData_t> > > 
//   CSchemaManipulator<CResourceArray<CResourceExtReference<CWeakHandle<InfoForResourceTypeAnimationGroupResourceData_t> > >
//   CSchemaManipulator<CResourceArray<CResourceExtReference<CWeakHandle<InfoForResourceTypeCPhysAggregateData> > > >
//   CSchemaManipulator<CResourceArray<long long unsigned int> >
//   CSchemaManipulator<CResourceArray<CResourceExtReference<CWeakHandle<InfoForResourceTypeCRenderMesh> > > >
//   CSchemaManipulator<CResourceArray<PermModelExtPart_t> >
//   CSchemaManipulator<CResourceArray<ModelBoneFlexDriverControl_t> >
//   CSchemaManipulator<CResourceExtReference<CWeakHandle<InfoForResourceTypeCModel> > >
//   CSchemaManipulator<CResourceArray<Quaternion> >
//   CSchemaManipulator<CResourceArray<Vector> >
//   CSchemaManipulator<CResourceArray<short int> >
//   CSchemaManipulator<CResourceArray<CResourceExtReference<CWeakHandle<InfoForResourceTypeIMaterial2> > > >
//   CSchemaManipulator<CResourceArray<FlexRule_t> >
//   CSchemaManipulator<CResourceArray<FlexController_t> >
//   CSchemaManipulator<CResourceArray<FlexDesc_t> >
//   CSchemaManipulator<CResourceExtReference<CWeakHandle<InfoForResourceTypeCTextureBase> > >
//   CSchemaManipulator<CResourceArray<MorphData_t> >
//   CSchemaManipulator<CResourceArray<BundleType_t> >
//   CSchemaManipulator<CResourceArray<MorphRectData_t> >
//   CSchemaManipulator<CResourceArray<BundleData_t> >
//   CSchemaManipulator<CResourceArray<FlexOp_t> >

// CAtomicManipulator: 233 more instantiations (full list in INDEX.tsv)
//   CAtomicManipulator<Vector>
//   CAtomicManipulator<CStrongHandle<InfoForResourceTypeIMaterial2> >
//   CAtomicManipulator<CUtlSymbolLarge>
//   CAtomicManipulator<CUtlVector<CUtlSymbolLarge, CNetworkUtlVector_MemoryType<CUtlSymbolLarge, -1> > >
//   CAtomicManipulator<CHandle<CLightEntity> >
//   CAtomicManipulator<CStrongHandle<InfoForResourceTypeCTextureBase> >
//   CAtomicManipulator<CUtlVector<CHandle<CLightEntity>, CUtlMemory<CHandle<CLightEntity>, int> > >
//   CAtomicManipulator<CEntityHandle>
//   CAtomicManipulator<Color>
//   CAtomicManipulator<CHandle<CFogController> >
//   CAtomicManipulator<CHandle<CInfoLadderDismount> >
//   CAtomicManipulator<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition> >
//   CAtomicManipulator<CHandle<CBaseCombatWeapon> >
//   CAtomicManipulator<CHandle<CBaseCombatCharacter> >
//   CAtomicManipulator<CUtlVector<CHintMessage*, CUtlMemory<CHintMessage*, int> > >
//   CAtomicManipulator<CUtlVector<char*, CUtlMemory<char*, int> > >
//   CAtomicManipulator<CUtlVector<CFuncLadder*, CUtlMemory<CFuncLadder*, int> > >
//   CAtomicManipulator<CUtlVector<CHandle<CInfoLadderDismount>, CUtlMemory<CHandle<CInfoLadderDismount>, int> > >
//   CAtomicManipulator<HSequence>
//   CAtomicManipulator<CEntityIndex>
//   CAtomicManipulator<matrix3x4_t>
//   CAtomicManipulator<QAngle>
//   CAtomicManipulator<Vector2D>
//   CAtomicManipulator<CUtlVector<CAnimationLayer, CUtlMemory<CAnimationLayer, int> > >
//   CAtomicManipulator<HSCRIPT__*>
//   CAtomicManipulator<Vector4D>
//   CAtomicManipulator<CHandle<CEconWearable> >
//   CAtomicManipulator<CHandle<CBaseModelEntity> >
//   CAtomicManipulator<CHandle<CBasePropDoor> >
//   CAtomicManipulator<CUtlVector<float, CNetworkUtlVector_MemoryType<float, -1> > >
//   CAtomicManipulator<CUtlVector<CHandle<CEconWearable>, CNetworkUtlVector_MemoryType<CHandle<CEconWearable>, -1> > >
//   CAtomicManipulator<CUtlVector<CHandle<CBaseCombatWeapon>, CNetworkUtlVector_MemoryType<CHandle<CBaseCombatWeapon>, -1> >
//   CAtomicManipulator<CUtlVector<CAnimationLayer, CNetworkUtlVector_MemoryType<CAnimationLayer, -1> > >
//   CAtomicManipulator<CHandle<CBasePlayer> >
//   CAtomicManipulator<CEntityOutputTemplate<float> >
//   CAtomicManipulator<CUtlVector<CHandle<CBasePropDoor>, CUtlMemory<CHandle<CBasePropDoor>, int> > >
//   CAtomicManipulator<CUtlVector<ResponseContext_t, CUtlMemory<ResponseContext_t, int> > >
//   CAtomicManipulator<CBitVec<64> >
//   CAtomicManipulator<CUtlVector<thinkfunc_t, CUtlMemory<thinkfunc_t, int> > >
//   CAtomicManipulator<CUtlVector<CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >, CUtlMemory<CUtlV
//   CAtomicManipulator<CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> > >
//   CAtomicManipulator<CUtlVector<Relationship_t, CUtlMemory<Relationship_t, int> > >
//   CAtomicManipulator<CNetworkedQuantizedFloat>
//   CAtomicManipulator<CUtlString>
//   CAtomicManipulator<CHandle<CFish> >
//   CAtomicManipulator<CHandle<CBaseAnimating> >
//   CAtomicManipulator<CUtlVector<CHandle<CFish>, CUtlMemory<CHandle<CFish>, int> > >
//   CAtomicManipulator<CUtlVector<CFish*, CUtlMemory<CFish*, int> > >
//   CAtomicManipulator<CHandle<CFishPool> >
//   CAtomicManipulator<CHandle<CBaseFilter> >
//   CAtomicManipulator<CUtlVector<CAI_Link*, CUtlMemory<CAI_Link*, int> > >
//   CAtomicManipulator<CHandle<CItemGenericTriggerHelper> >
//   CAtomicManipulator<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition> >
//   CAtomicManipulator<CHandle<CItemGeneric> >
//   CAtomicManipulator<matrix3x4a_t>
//   CAtomicManipulator<CUtlVector<CHandle<CBasePlayer>, CNetworkUtlVector_MemoryType<CHandle<CBasePlayer>, -1> > >
//   CAtomicManipulator<CHandle<CPointHMDAnchor> >
//   CAtomicManipulator<CHandle<CPropHMDAvatar> >
//   CAtomicManipulator<CHandle<CBaseViewModel> >
//   CAtomicManipulator<CHandle<CColorCorrection> >
//   CAtomicManipulator<CHandle<CPostProcessController> >
//   CAtomicManipulator<CUtlVector<CTeamSpawnPoint*, CUtlMemory<CTeamSpawnPoint*, int> > >
//   CAtomicManipulator<CHandle<CEnvSoundscape> >
//   CAtomicManipulator<CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > >
//   CAtomicManipulator<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > >
//   CAtomicManipulator<CUtlVector<CHandle<CBasePlayer>, CUtlMemory<CHandle<CBasePlayer>, int> > >
//   CAtomicManipulator<CUtlVector<magnetted_objects_t, CUtlMemory<magnetted_objects_t, int> > >
//   CAtomicManipulator<CUtlVector<WeaponSoundData_t, CUtlMemory<WeaponSoundData_t, int> > >
//   CAtomicManipulator<CUtlVector<WeaponTextureData_t, CUtlMemory<WeaponTextureData_t, int> > >
//   CAtomicManipulator<CUtlVector<vehicle_crashsound_t, CUtlMemory<vehicle_crashsound_t, int> > >
//   CAtomicManipulator<CUtlVector<vehicle_gear_t, CUtlMemory<vehicle_gear_t, int> > >
//   CAtomicManipulator<CHandle<CEntityBlocker> >
//   CAtomicManipulator<CUtlVector<CBaseServerVehicle::exitanim_t, CUtlMemory<CBaseServerVehicle::exitanim_t, int> > >
//   CAtomicManipulator<CUtlVector<CBaseServerVehicle::entryanim_t, CUtlMemory<CBaseServerVehicle::entryanim_t, int> > >
//   CAtomicManipulator<CUtlVector<CPassengerRole, CUtlMemory<CPassengerRole, int> > >
//   CAtomicManipulator<CUtlVector<CPassengerInfo, CUtlMemory<CPassengerInfo, int> > >
//   CAtomicManipulator<CUtlVector<CPassengerSeat, CUtlMemory<CPassengerSeat, int> > >
//   CAtomicManipulator<CUtlVector<CPassengerSeatTransition, CUtlMemory<CPassengerSeatTransition, int> > >
//   CAtomicManipulator<CUtlVector<SosEditItemInfo_t, CUtlMemory<SosEditItemInfo_t, int> > >
//   CAtomicManipulator<Quaternion>
//   CAtomicManipulator<CUtlVector<CEntityIndex, CUtlMemoryFixedGrowable<CEntityIndex, 65ul, int> > >
//   CAtomicManipulator<CHandle<CPropVRHand> >
//   CAtomicManipulator<CUtlVector<CAI_Expresser*, CUtlMemory<CAI_Expresser*, int> > >
//   CAtomicManipulator<CUtlVector<CEffectScriptElement, CUtlMemory<CEffectScriptElement, int> > >
//   CAtomicManipulator<CHandle<CSprite> >
//   CAtomicManipulator<CUtlVector<prevent_interaction_t, CUtlMemory<prevent_interaction_t, int> > >
//   CAtomicManipulator<CHandle<CBaseFire> >
//   CAtomicManipulator<CVariantBase<CVariantDefaultAllocator> >
//   CAtomicManipulator<CEntityOutputTemplate<CVariantBase<CVariantDefaultAllocator> > >
//   CAtomicManipulator<CEntityOutputTemplate<Color> >
//   CAtomicManipulator<CEntityOutputTemplate<Vector> >
//   CAtomicManipulator<CEntityOutputTemplate<int> >
//   CAtomicManipulator<CUtlVector<CHandle<CBaseEntity>, CNetworkUtlVector_MemoryType<CHandle<CBaseEntity>, -1> > >
//   CAtomicManipulator<CHandle<CSpotlightEnd> >
//   CAtomicManipulator<CHandle<CBeam> >
//   CAtomicManipulator<CHandle<CPropZipline> >
//   CAtomicManipulator<CUtlVector<CHandle<CBaseVRHandAttachment>, CNetworkUtlVector_MemoryType<CHandle<CBaseVRHandAttachment
//   CAtomicManipulator<CHandle<CBaseVRHandAttachment> >
//   CAtomicManipulator<CHandle<CPointWorldText> >
//   CAtomicManipulator<CHandle<CFuncLadder> >
//   CAtomicManipulator<CUtlVector<CUtlSymbolLarge, CUtlMemory<CUtlSymbolLarge, int> > >
//   CAtomicManipulator<CUtlVector<CHandle<CBaseFlex>, CNetworkUtlVector_MemoryType<CHandle<CBaseFlex>, -1> > >
//   CAtomicManipulator<CHandle<CSceneListManager> >
//   CAtomicManipulator<CHandle<CEnvSoundscapeTriggerable> >
//   CAtomicManipulator<CUtlVector<CEntityIndex, CUtlMemory<CEntityIndex, int> > >
//   CAtomicManipulator<CHandle<CBaseFlex> >
//   CAtomicManipulator<CUtlVector<CHandle<CSceneEntity>, CUtlMemory<CHandle<CSceneEntity>, int> > >
//   CAtomicManipulator<CHandle<CSceneEntity> >
//   CAtomicManipulator<CUtlVector<CHandle<CSceneListManager>, CUtlMemory<CHandle<CSceneListManager>, int> > >
//   CAtomicManipulator<CStrongHandle<InfoForResourceTypeCPostProcessingResource> >
//   CAtomicManipulator<CHandle<CFuncTrackTrain> >
//   CAtomicManipulator<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > >
//   CAtomicManipulator<CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > >
//   CAtomicManipulator<CUtlVector<KeyValues*, CUtlMemory<KeyValues*, int> > >
//   CAtomicManipulator<item_definition_index_t>
//   CAtomicManipulator<CUtlVector<int, CNetworkUtlVector_MemoryType<int, -1> > >
//   CAtomicManipulator<CHandle<CDOTA_BaseNPC> >
//   CAtomicManipulator<CUtlVector<sSpiritInfo*, CUtlMemory<sSpiritInfo*, int> > >
//   CAtomicManipulator<CHandle<CIngameEvent_Base> >
//   CAtomicManipulator<CHandle<CDOTA_BaseNPC_Building> >
//   CAtomicManipulator<CHandle<CDOTA_BaseNPC_Tower> >
//   CAtomicManipulator<CUtlVector<AABB_t, CNetworkUtlVector_MemoryType<AABB_t, -1> > >
//   CAtomicManipulator<CUtlVector<CHandle<CIngameEvent_Base>, CNetworkUtlVector_MemoryType<CHandle<CIngameEvent_Base>, -1> >
//   CAtomicManipulator<CUtlVector<CHeroStatueLiked, CNetworkUtlVector_MemoryType<CHeroStatueLiked, -1> > >
//   CAtomicManipulator<CUtlVector<CHandle<CDOTA_BaseNPC_Building>, CUtlMemory<CHandle<CDOTA_BaseNPC_Building>, int> > >
//   CAtomicManipulator<CUtlVector<CHandle<CDOTA_BaseNPC_Tower>, CUtlMemory<CHandle<CDOTA_BaseNPC_Tower>, int> > >
//   CAtomicManipulator<CHandle<CDOTA_BaseNPC_Pet> >
//   CAtomicManipulator<CUtlVector<CDOTA_AbilityDraftAbilityState, CNetworkUtlVector_MemoryType<CDOTA_AbilityDraftAbilityStat
//   CAtomicManipulator<CUtlVector<CDOTA_ItemStockInfo, CNetworkUtlVector_MemoryType<CDOTA_ItemStockInfo, -1> > >
//   CAtomicManipulator<CUtlVector<CHeroesPerPlayer, CNetworkUtlVector_MemoryType<CHeroesPerPlayer, -1> > >
//   CAtomicManipulator<CUtlVector<TempViewerInfo_t, CNetworkUtlVector_MemoryType<TempViewerInfo_t, -1> > >
//   CAtomicManipulator<CUtlVector<DataTeamPlayer_t, CNetworkUtlVector_MemoryType<DataTeamPlayer_t, -1> > >
//   CAtomicManipulator<CUtlVector<GameChatLogEntry_t, CUtlMemory<GameChatLogEntry_t, int> > >
//   CAtomicManipulator<CUtlVector<CDOTA_ReconnectInfo, CUtlMemory<CDOTA_ReconnectInfo, int> > >
//   CAtomicManipulator<CUtlVector<HeroDeathRecord_t, CUtlMemory<HeroDeathRecord_t, int> > >
//   CAtomicManipulator<CUtlVector<HeroPickRecord_t, CUtlMemory<HeroPickRecord_t, int> > >
//   CAtomicManipulator<CUtlVector<CHandle<CDOTA_BaseNPC_Pet>, CUtlMemory<CHandle<CDOTA_BaseNPC_Pet>, int> > >
//   CAtomicManipulator<CUtlVector<int, CUtlMemory<int, int> > >
//   CAtomicManipulator<CHandle<CDOTA_Item> >
//   CAtomicManipulator<CUtlVector<CDOTA_CombatLogQueryProgress, CNetworkUtlVector_MemoryType<CDOTA_CombatLogQueryProgress, -
//   CAtomicManipulator<CUtlVector<CDOTA_PlayerChallengeInfo, CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo, 24> > >
//   CAtomicManipulator<CUtlVector<CDOTASubChallengeInfo, CNetworkUtlVector_MemoryType<CDOTASubChallengeInfo, -1> > >
//   CAtomicManipulator<CUtlVector<InGamePredictionData_t, CNetworkUtlVector_MemoryType<InGamePredictionData_t, -1> > >
//   CAtomicManipulator<CHandle<CDOTAPlayer> >
//   CAtomicManipulator<CHandle<CDOTA_Item_Physical> >
//   CAtomicManipulator<CHandle<CDOTA_Item_Tombstone> >
//   CAtomicManipulator<CHandle<CDOTA_Unit_Courier> >
//   CAtomicManipulator<CHandle<CDotaSubquestBase> >
//   CAtomicManipulator<CUtlVector<DamageShareEvent_t, CUtlMemory<DamageShareEvent_t, int> > >
//   CAtomicManipulator<CUtlVector<CHandle<CDOTA_Unit_Courier>, CUtlMemory<CHandle<CDOTA_Unit_Courier>, int> > >
//   CAtomicManipulator<CUtlVector<float, CUtlMemory<float, int> > >
//   CAtomicManipulator<CUtlVector<PurchasedItem_t, CUtlMemory<PurchasedItem_t, int> > >
//   CAtomicManipulator<CUtlVector<PlayerResourceBroadcasterData_t, CNetworkUtlVector_MemoryType<PlayerResourceBroadcasterDat
//   CAtomicManipulator<CUtlVector<PlayerResourcePlayerData_t, CNetworkUtlVector_MemoryType<PlayerResourcePlayerData_t, -1> >
//   CAtomicManipulator<CUtlVector<PlayerResourcePlayerTeamData_t, CNetworkUtlVector_MemoryType<PlayerResourcePlayerTeamData_
//   CAtomicManipulator<CCopyableUtlVector<CEntityIndex> >
//   CAtomicManipulator<CCopyableUtlVector<char const*> >
//   CAtomicManipulator<CUtlVector<TimedKillEvent_t, CUtlMemory<TimedKillEvent_t, int> > >
//   CAtomicManipulator<CUtlVector<TimedBalanceRecord_t, CUtlMemory<TimedBalanceRecord_t, int> > >
//   CAtomicManipulator<CUtlVector<sPendingTreeRemoval, CUtlMemory<sPendingTreeRemoval, int> > >
//   CAtomicManipulator<CUtlVector<CSpeechBubbleInfo, CNetworkUtlVector_MemoryType<CSpeechBubbleInfo, 4> > >
//   CAtomicManipulator<CUtlVector<sPlayerSnapshot, CUtlMemory<sPlayerSnapshot, int> > >
//   CAtomicManipulator<CHandle<CDOTASpecGraphPlayerData> >
//   CAtomicManipulator<CUtlVector<sSharedCooldownInfo, CUtlMemory<sSharedCooldownInfo, int> > >
//   CAtomicManipulator<CUtlVector<CDOTABaseAbility*, CUtlMemory<CDOTABaseAbility*, int> > >
//   CAtomicManipulator<CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > >
//   CAtomicManipulator<CUtlVector<CDOTA_ScriptedSpawner::scripted_moveto_t, CUtlMemory<CDOTA_ScriptedSpawner::scripted_movet
//   CAtomicManipulator<CHandle<CDOTA_Pet_CarriedItem> >
//   CAtomicManipulator<CHandle<CDOTA_BaseNPC_Hero> >
//   CAtomicManipulator<CUtlVector<sAcquireHistory, CUtlMemory<sAcquireHistory, int> > >
//   CAtomicManipulator<CUtlVector<sLoadoutItem, CUtlMemory<sLoadoutItem, int> > >
//   CAtomicManipulator<CUtlVector<CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo, CUtlMemory<CDOTA_BaseNPC_Hero::sHeroRecentMod
//   CAtomicManipulator<CUtlVector<CDOTA_BaseNPC_Hero::sHeroDamageInfo, CUtlMemory<CDOTA_BaseNPC_Hero::sHeroDamageInfo, int> 
//   CAtomicManipulator<CUtlVector<item_definition_index_t, CUtlMemory<item_definition_index_t, int> > >
//   CAtomicManipulator<CUtlVector<ItemDropData_t, CUtlMemory<ItemDropData_t, int> > >
//   CAtomicManipulator<CUtlVector<CreatureAbilityData_t, CUtlMemory<CreatureAbilityData_t, int> > >
//   CAtomicManipulator<CUtlVector<CreatureStateData_t, CUtlMemory<CreatureStateData_t, int> > >
//   CAtomicManipulator<CHandle<CDOTA_ScriptedSpawner> >
//   CAtomicManipulator<CUtlVector<CUtlSymbol, CUtlMemory<CUtlSymbol, int> > >
//   CAtomicManipulator<CUtlVector<CHandle<CDOTA_BaseNPC>, CUtlMemory<CHandle<CDOTA_BaseNPC>, int> > >
//   CAtomicManipulator<CUtlSymbol>
//   CAtomicManipulator<CUtlVector<NianDamageTaken_t, CUtlMemory<NianDamageTaken_t, int> > >
//   CAtomicManipulator<CUtlVector<CDOTA_Tree*, CUtlMemory<CDOTA_Tree*, int> > >
//   CAtomicManipulator<CUtlVector<sBounceInfo, CUtlMemory<sBounceInfo, int> > >
//   CAtomicManipulator<CUtlVector<sGlaiveInfo, CUtlMemory<sGlaiveInfo, int> > >
//   CAtomicManipulator<CHandle<CDOTA_Ability_Meepo_DividedWeStand> >
//   CAtomicManipulator<CUtlVector<RemnantData_t, CUtlMemory<RemnantData_t, int> > >
//   CAtomicManipulator<CUtlVector<sSpiritDef, CUtlMemory<sSpiritDef, int> > >
//   CAtomicManipulator<CHandle<CDOTABaseAbility> >
//   CAtomicManipulator<CUtlVector<CDOTA_BuffParticle, CUtlMemory<CDOTA_BuffParticle, int> > >
//   CAtomicManipulator<CUtlVector<CAttributeManager::cached_attribute_float_t, CUtlMemory<CAttributeManager::cached_attribut
//   CAtomicManipulator<CUtlVector<CEconItemAttribute, CNetworkUtlVector_MemoryType<CEconItemAttribute, -1> > >
//   CAtomicManipulator<itemid_t>
//   CAtomicManipulator<style_index_t>
//   CAtomicManipulator<CUtlVector<NavAttributeEnum, CUtlMemory<NavAttributeEnum, int> > >
//   CAtomicManipulator<DegreeEuler>
//   CAtomicManipulator<RadianEuler>
//   CAtomicManipulator<CTransform>
//   CAtomicManipulator<CUtlVector<const EntComponentInfo_t*, CUtlMemory<const EntComponentInfo_t*, int> > >
//   CAtomicManipulator<CUtlVector<bool, CUtlMemory<bool, int> > >
//   CAtomicManipulator<CUtlVector<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> > >
//   CAtomicManipulator<CUtlVector<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> > >
//   CAtomicManipulator<V_uuid_t>
//   CAtomicManipulator<CUtlVector<CBaseConstraint*, CUtlMemory<CBaseConstraint*, int> > >
//   CAtomicManipulator<CUtlVectorFixedGrowable<CSceneObjectData, 1ul> >
//   CAtomicManipulator<CUtlVector<CHitBoxSet, CUtlMemory<CHitBoxSet, int> > >
//   CAtomicManipulator<CUtlVector<CHitBox, CUtlMemory<CHitBox, int> > >
//   CAtomicManipulator<CUtlVector<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> > >
//   CAtomicManipulator<CUtlVector<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> > >
//   CAtomicManipulator<CUtlVector<CConstraintTarget, CUtlMemory<CConstraintTarget, int> > >
//   CAtomicManipulator<CUtlVector<CConstraintSlave, CUtlMemory<CConstraintSlave, int> > >
//   CAtomicManipulator<CResourcePointer<PhysFeModelDesc_t> >
//   CAtomicManipulator<CResourcePointer<VpropBreakablePartData_t> >
//   CAtomicManipulator<CResourceString>
//   CAtomicManipulator<CUtlVector<CPhysSurfaceProperties*, CUtlMemory<CPhysSurfaceProperties*, int> > >
//   CAtomicManipulator<CWeakHandle<InfoForResourceTypeMorphSetData_t> >
//   CAtomicManipulator<CWeakHandle<InfoForResourceTypeIMaterial2> >
//   CAtomicManipulator<CResourcePointer<RenderSkeletonData_t> >
//   CAtomicManipulator<CResourceExtReference<CWeakHandle<InfoForResourceTypeMorphSetData_t> > >
//   CAtomicManipulator<CResourceExtReference<CWeakHandle<InfoForResourceTypeIMaterial2> > >
//   CAtomicManipulator<CWeakHandle<InfoForResourceTypeSequenceGroupResourceData_t> >
//   CAtomicManipulator<CWeakHandle<InfoForResourceTypeAnimationGroupResourceData_t> >
//   CAtomicManipulator<CWeakHandle<InfoForResourceTypeCPhysAggregateData> >
//   CAtomicManipulator<CWeakHandle<InfoForResourceTypeCRenderMesh> >
//   CAtomicManipulator<CResourceExtReference<CWeakHandle<InfoForResourceTypeSequenceGroupResourceData_t> > >
//   CAtomicManipulator<CResourceExtReference<CWeakHandle<InfoForResourceTypeAnimationGroupResourceData_t> > >
//   CAtomicManipulator<CResourceExtReference<CWeakHandle<InfoForResourceTypeCPhysAggregateData> > >
//   CAtomicManipulator<CResourceExtReference<CWeakHandle<InfoForResourceTypeCRenderMesh> > >
//   CAtomicManipulator<CWeakHandle<InfoForResourceTypeCModel> >
//   CAtomicManipulator<CResourceExtReference<CWeakHandle<InfoForResourceTypeCModel> > >
//   CAtomicManipulator<CWeakHandle<InfoForResourceTypeCTextureBase> >
//   CAtomicManipulator<CResourceExtReference<CWeakHandle<InfoForResourceTypeCTextureBase> > >
//   CAtomicManipulator<CUtlVector<CNavArea*, CUtlMemory<CNavArea*, int> > >
