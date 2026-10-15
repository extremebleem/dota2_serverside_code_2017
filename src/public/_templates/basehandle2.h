// Reconstructed from DWARF by pahole; not original source.

// src/public/basehandle2.h:189
class CSchemaTypeOf<CEntityHandle> {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/public/basehandle2.h:437
class CHandle<CBaseEntity> : public CEntityHandle {
public:

	CHandle();
	CHandle(int, int);
	CHandle(const CEntityHandle &);
	CHandle(CBaseEntity *);
	CHandle(int);
	CHandle<CBaseEntity> FromIndex(int);
	CBaseEntity * Get();
	void Set(const CBaseEntity *);
	CBaseEntity * operator CBaseEntity*();
	CBaseEntity * operator CBaseEntity*();
	bool operator!();
	bool operator==(CBaseEntity *);
	bool operator==(int);
	bool operator!=(CBaseEntity *);
	bool operator!=(int);
	const CHandle<CBaseEntity> & operator=(const CBaseEntity *);
	const CHandle<CBaseEntity> & operator=(const CHandle<CBaseEntity> &);
	CBaseEntity * operator->();
	CHandle(const CHandle<CBaseEntity> &);

	// sizeof = 4
};

// src/public/basehandle2.h:437
class CHandle<CFogController> : public CEntityHandle {
public:

	CHandle();
	CHandle(int, int);
	CHandle(const CEntityHandle &);
	CHandle(CFogController *);
	CHandle(int);
	CHandle<CFogController> FromIndex(int);
	CFogController * Get();
	void Set(const CFogController *);
	CFogController * operator CFogController*();
	CFogController * operator CFogController*();
	bool operator!();
	bool operator==(CFogController *);
	bool operator==(int);
	bool operator!=(CFogController *);
	bool operator!=(int);
	const CHandle<CFogController> & operator=(const CFogController *);
	const CHandle<CFogController> & operator=(const CHandle<CFogController> &);
	CFogController * operator->();

	// sizeof = 4
};

// src/public/basehandle2.h:437
class CHandle<CPostProcessController> : public CEntityHandle {
public:

	CHandle();
	CHandle(int, int);
	CHandle(const CEntityHandle &);
	CHandle(CPostProcessController *);
	CHandle(int);
	CHandle<CPostProcessController> FromIndex(int);
	CPostProcessController * Get();
	void Set(const CPostProcessController *);
	CPostProcessController * operator CPostProcessController*();
	CPostProcessController * operator CPostProcessController*();
	bool operator!();
	bool operator==(CPostProcessController *);
	bool operator==(int);
	bool operator!=(CPostProcessController *);
	bool operator!=(int);
	const CHandle<CPostProcessController> & operator=(const CPostProcessController *);
	const CHandle<CPostProcessController> & operator=(const CHandle<CPostProcessController> &);
	CPostProcessController * operator->();

	// sizeof = 4
};

// src/public/basehandle2.h:467
class CSchemaTypeOf<CHandle<CBaseEntity> > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/public/basehandle2.h:467
class CSchemaTypeOf<CHandle<CLightEntity> > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// CHandle: 97 more instantiations (full list in INDEX.tsv)
//   CHandle<CColorCorrection>
//   CHandle<CDOTABaseAbility>
//   CHandle<CDOTA_Item>
//   CHandle<CDOTA_BaseNPC>
//   CHandle<CDOTA_Unit_Courier>
//   CHandle<CDOTA_BaseNPC_Hero>
//   CHandle<CDOTA_Pet_CarriedItem>
//   CHandle<CBaseFilter>
//   CHandle<CPointClientUIWorldPanel>
//   CHandle<CBaseAnimating>
//   CHandle<CBasePlayer>
//   CHandle<CBaseVRHandAttachment>
//   CHandle<CDevtestHierarchyChild>
//   CHandle<CInfoSpawnGroupLandmark>
//   CHandle<CInfoSpawnGroupLoadUnload>
//   CHandle<CWaterBullet>
//   CHandle<CSceneEntity>
//   CHandle<CLightEntity>
//   CHandle<CBaseCombatWeapon>
//   CHandle<CBaseCombatCharacter>
//   CHandle<CInfoLadderDismount>
//   CHandle<CTriggerMultiple>
//   CHandle<CEconWearable>
//   CHandle<CBasePropDoor>
//   CHandle<CBaseModelEntity>
//   CHandle<CAI_DynamicLink>
//   CHandle<CFishPool>
//   CHandle<CFish>
//   CHandle<CItemGeneric>
//   CHandle<CItemGenericTriggerHelper>
//   CHandle<CBaseViewModel>
//   CHandle<CEnvSoundscape>
//   CHandle<CPropHMDAvatar>
//   CHandle<CPointHMDAnchor>
//   CHandle<CEntityBlocker>
//   CHandle<CWorld>
//   CHandle<CPropVRHand>
//   CHandle<CVGuiScreen>
//   CHandle<CBeam>
//   CHandle<CPointCommentaryNode>
//   CHandle<CEntityDissolve>
//   CHandle<CEntityFlame>
//   CHandle<CDebugHistory>
//   CHandle<CSprite>
//   CHandle<CEnvPlayerSurfaceTrigger>
//   CHandle<CEnvMicrophone>
//   CHandle<CEnvExplosion>
//   CHandle<CBaseFire>
//   CHandle<CFireSmoke>
//   CHandle<CPlasma>
//   CHandle<CFuncOccluder>
//   CHandle<CShatterGlassShardPhysics>
//   CHandle<CDotaSubquestBase>
//   CHandle<CGib>
//   CHandle<CRagGib>
//   CHandle<CMessageEntity>
//   CHandle<CKeepUpright>
//   CHandle<CRagdollProp>
//   CHandle<CRagdollPropAttached>
//   CHandle<CSimplePhysicsProp>
//   CHandle<CSpotlightEnd>
//   CHandle<CVRHandModelOverride>
//   CHandle<CPropZipline>
//   CHandle<CFuncLadder>
//   CHandle<CDynamicProp>
//   CHandle<CPhysicsProp>
//   CHandle<CPointWorldText>
//   CHandle<CSceneListManager>
//   CHandle<CBaseFlex>
//   CHandle<CSkyCamera>
//   CHandle<CEnvSoundscapeTriggerable>
//   CHandle<CFuncTrackTrain>
//   CHandle<CHandleTest>
//   CHandle<CNPC_VehicleDriver>
//   CHandle<CDOTA_Item_Rune>
//   CHandle<CDOTA_BaseNPC_Pet>
//   CHandle<CDOTA_BaseNPC_Tower>
//   CHandle<CDOTA_BaseNPC_Building>
//   CHandle<CIngameEvent_Base>
//   CHandle<CDOTATeam>
//   CHandle<CDOTA_Unit_Announcer>
//   CHandle<CDOTAPlayer>
//   CHandle<CDOTA_Item_Physical>
//   CHandle<CDOTA_Hero_Recorder>
//   CHandle<CDOTA_Item_Tombstone>
//   CHandle<CDOTAInGamePredictionState>
//   CHandle<CDOTA_ScriptedSpawner>
//   CHandle<CDotaQuest>
//   CHandle<CDOTASpecGraphPlayerData>
//   CHandle<CDOTA_TempTree>
//   CHandle<CDotaTutorialNetworker>
//   CHandle<CDOTA_DeathProphet_Exorcism_Spirit>
//   CHandle<CDOTA_Unit_Nian>
//   CHandle<CDOTA_RoshanSpawner>
//   CHandle<CDOTA_Ability_Meepo_DividedWeStand>
//   CHandle<CAdditionalWearable>
//   CHandle<const CBaseEntity>

// CSchemaTypeOf: 52 more instantiations (full list in INDEX.tsv)
//   CSchemaTypeOf<CHandle<CBaseCombatCharacter> >
//   CSchemaTypeOf<CHandle<CBaseCombatWeapon> >
//   CSchemaTypeOf<CHandle<CInfoLadderDismount> >
//   CSchemaTypeOf<CHandle<CFogController> >
//   CSchemaTypeOf<CHandle<CBasePlayer> >
//   CSchemaTypeOf<CHandle<CBasePropDoor> >
//   CSchemaTypeOf<CHandle<CBaseModelEntity> >
//   CSchemaTypeOf<CHandle<CEconWearable> >
//   CSchemaTypeOf<CHandle<CBaseFilter> >
//   CSchemaTypeOf<CHandle<CFishPool> >
//   CSchemaTypeOf<CHandle<CBaseAnimating> >
//   CSchemaTypeOf<CHandle<CFish> >
//   CSchemaTypeOf<CHandle<CItemGeneric> >
//   CSchemaTypeOf<CHandle<CItemGenericTriggerHelper> >
//   CSchemaTypeOf<CHandle<CEnvSoundscape> >
//   CSchemaTypeOf<CHandle<CPostProcessController> >
//   CSchemaTypeOf<CHandle<CColorCorrection> >
//   CSchemaTypeOf<CHandle<CBaseViewModel> >
//   CSchemaTypeOf<CHandle<CPropHMDAvatar> >
//   CSchemaTypeOf<CHandle<CPointHMDAnchor> >
//   CSchemaTypeOf<CHandle<CEntityBlocker> >
//   CSchemaTypeOf<CHandle<CPropVRHand> >
//   CSchemaTypeOf<CHandle<CSprite> >
//   CSchemaTypeOf<CHandle<CBaseFire> >
//   CSchemaTypeOf<CHandle<CBeam> >
//   CSchemaTypeOf<CHandle<CSpotlightEnd> >
//   CSchemaTypeOf<CHandle<CFuncLadder> >
//   CSchemaTypeOf<CHandle<CPointWorldText> >
//   CSchemaTypeOf<CHandle<CBaseVRHandAttachment> >
//   CSchemaTypeOf<CHandle<CPropZipline> >
//   CSchemaTypeOf<CHandle<CSceneEntity> >
//   CSchemaTypeOf<CHandle<CBaseFlex> >
//   CSchemaTypeOf<CHandle<CEnvSoundscapeTriggerable> >
//   CSchemaTypeOf<CHandle<CSceneListManager> >
//   CSchemaTypeOf<CHandle<CFuncTrackTrain> >
//   CSchemaTypeOf<CHandle<CDOTA_BaseNPC> >
//   CSchemaTypeOf<CHandle<CDOTA_BaseNPC_Pet> >
//   CSchemaTypeOf<CHandle<CDOTA_BaseNPC_Tower> >
//   CSchemaTypeOf<CHandle<CDOTA_BaseNPC_Building> >
//   CSchemaTypeOf<CHandle<CIngameEvent_Base> >
//   CSchemaTypeOf<CHandle<CDOTA_Item_Tombstone> >
//   CSchemaTypeOf<CHandle<CDOTA_Item_Physical> >
//   CSchemaTypeOf<CHandle<CDOTAPlayer> >
//   CSchemaTypeOf<CHandle<CDOTA_Item> >
//   CSchemaTypeOf<CHandle<CDotaSubquestBase> >
//   CSchemaTypeOf<CHandle<CDOTA_Unit_Courier> >
//   CSchemaTypeOf<CHandle<CDOTASpecGraphPlayerData> >
//   CSchemaTypeOf<CHandle<CDOTA_ScriptedSpawner> >
//   CSchemaTypeOf<CHandle<CDOTA_BaseNPC_Hero> >
//   CSchemaTypeOf<CHandle<CDOTA_Pet_CarriedItem> >
//   CSchemaTypeOf<CHandle<CDOTA_Ability_Meepo_DividedWeStand> >
//   CSchemaTypeOf<CHandle<CDOTABaseAbility> >
