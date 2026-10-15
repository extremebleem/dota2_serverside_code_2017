// Reconstructed from DWARF by pahole; not original source.

// src/game/server/player.h:55
struct FixAngle_t {
	int fixangle;  // +0x0
	FixAngle_t();

	// sizeof = 16
};

// src/game/server/player.h:65
class CPlayerCmdInfo {
	float m_flTime;  // +0x0
	int m_nNumCmds;  // +0x4
	int m_nDroppedPackets;  // +0x8
	CPlayerCmdInfo();

	// sizeof = 12
};

// src/game/server/player.h:84
class CPlayerSimInfo {
	float m_flTime;  // +0x0
	int m_nNumCmds;  // +0x4
	int m_nTicksCorrected;  // +0x8
	float m_flFinalSimulationTime;  // +0xc
	float m_flGameSimulationTime;  // +0x10
	float m_flServerFrameTime;  // +0x14
	CPlayerSimInfo();

	// sizeof = 36
};

// src/game/server/player.h:210
class CInfoPlayerStart : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

protected:

	bool m_bDisabled;  // +0x308
	typedef CPointEntity BaseClass;

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CInfoPlayerStart(CInfoPlayerStart &);
	CInfoPlayerStart(CInfoPlayerStart &);
	CInfoPlayerStart();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	void InputToggle(inputdata_t &);
	bool IsEnabled();
	virtual int DrawDebugTextOverlays(uint64, int);
	virtual ~CInfoPlayerStart();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[79] DrawDebugTextOverlays
	// sizeof = 784
};

// src/game/server/player.h:265
class CPlayerInfo : public IBotController, public IPlayerInfo {
public:

private:

	CPlayerInfo(const CPlayerInfo &);

	CPlayerInfo();
	~CPlayerInfo();
	void SetParent(CBasePlayer *);
	virtual const char * GetName();
	virtual int GetUserID();
	virtual const char * GetNetworkIDString();
	virtual int GetTeamIndex();
	virtual void ChangeTeam(int);
	virtual int GetFragCount();
	virtual int GetDeathCount();
	virtual bool IsConnected();
	virtual int GetArmorValue();
	virtual bool IsPlayer();
	virtual bool IsFakeClient();
	virtual bool IsDead();
	virtual bool IsInAVehicle();
	virtual bool IsObserver();
	virtual const Vector GetAbsOrigin();
	virtual const QAngle GetAbsAngles();
	virtual const Vector GetPlayerMins();
	virtual const Vector GetPlayerMaxs();
	virtual const char * GetWeaponName();
	virtual const char * GetModelName();
	virtual const int GetHealth();
	virtual const int GetMaxHealth();
	virtual void SetAbsOrigin(Vector &);
	virtual void SetAbsAngles(QAngle &);
	virtual void RemoveAllItems(bool);
	virtual void SetActiveWeapon(const char *);
	virtual void SetLocalOrigin(const Vector &);
	virtual const Vector GetLocalOrigin();
	virtual void SetLocalAngles(const QAngle &);
	virtual const QAngle GetLocalAngles();
	virtual bool IsEFlagSet(int);
	virtual void RunPlayerMove(CBotCmd *);
	virtual void SetLastUserCommand(const CBotCmd &);
	virtual CBotCmd GetLastUserCommand();

	// vtable[0] Schema_DynamicBinding
	// vtable[11] GetName
	// vtable[12] GetUserID
	// vtable[13] GetNetworkIDString
	// vtable[14] GetTeamIndex
	// vtable[15] ChangeTeam
	// vtable[16] GetFragCount
	// vtable[17] GetDeathCount
	// vtable[18] IsConnected
	// vtable[19] GetArmorValue
	// vtable[20] IsPlayer
	// vtable[21] IsFakeClient
	// vtable[22] IsDead
	// vtable[23] IsInAVehicle
	// vtable[24] IsObserver
	// vtable[25] GetAbsOrigin
	// vtable[26] GetAbsAngles
	// vtable[27] GetPlayerMins
	// vtable[28] GetPlayerMaxs
	// vtable[29] GetWeaponName
	// vtable[30] GetModelName
	// vtable[31] GetHealth
	// vtable[32] GetMaxHealth
	// vtable[1] SetAbsOrigin
	// vtable[2] SetAbsAngles
	// vtable[7] RemoveAllItems
	// vtable[8] SetActiveWeapon
	// vtable[3] SetLocalOrigin
	// vtable[4] GetLocalOrigin
	// vtable[5] SetLocalAngles
	// vtable[6] GetLocalAngles
	// vtable[9] IsEFlagSet
	// vtable[10] RunPlayerMove
	// vtable[33] SetLastUserCommand
	// vtable[34] GetLastUserCommand
	// sizeof = 24
};

// src/game/server/player.h:321
class CBasePlayer : public CBaseCombatCharacter {
	struct TonemapCountedActivations_t {
		int nActivationCount;  // +0x8

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	class NetworkVar_m_hPostProcessCtrl {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hColorCorrectionCtrl {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_fOnTarget {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hUseEntity {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hHeldEntity {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hVehicle {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iBonusProgress {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iBonusChallenge {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flDeathTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iObserverMode {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iFOV {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iDefaultFOV {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iFOVStart {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flFOVTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hObserverTarget {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hZoomOwner {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hTonemapController {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_ArmorValue {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hViewModel {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_hPropHMDAvatar {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hPointHMDAnchor {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flMaxspeed {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_ladderSurfaceProps {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_vecLadderNormal {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nTickBase {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hLastWeapon {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hViewEntity {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hConstraintEntity {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_vecConstraintCenter {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flConstraintRadius {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flConstraintWidth {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flConstraintSpeedFactor {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bConstraintPastRadius {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flLaggedMovementValue {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_szLastPlaceName {
		void NetworkStateChanged(void *);

		// sizeof = 1
	};

	struct StepSoundCache_t {
	private:

		StepSoundCache_t();
		~StepSoundCache_t();

		// sizeof = 80
	};
	/* tag__fprintf: const_type tag not supported! */;

	class NetworkVar_m_currentSCLPacked {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nUnHoldableButtons {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	int m_StuckLast;  // +0x760

	class NetworkVar_m_Local : public CPlayerLocalData {
	public:

		NetworkVar_m_Local(NetworkVar_m_Local &);
		NetworkVar_m_Local(const NetworkVar_m_Local &);
		~NetworkVar_m_Local();
		NetworkVar_m_Local();
		void CopyFrom(const CPlayerLocalData &);
		virtual void NetworkStateChanged();
		virtual void NetworkStateChangedLog(const char *, const char *);
		virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);

		// vtable[1] NetworkStateChanged
		// vtable[3] NetworkStateChangedLog
		// vtable[2] NetworkStateChanged
		// sizeof = 496
	};

	class NetworkVar_m_PlayerFog : public fogplayerparams_t {
	public:

		NetworkVar_m_PlayerFog(NetworkVar_m_PlayerFog &);
		NetworkVar_m_PlayerFog(const NetworkVar_m_PlayerFog &);
		~NetworkVar_m_PlayerFog();
		NetworkVar_m_PlayerFog();
		void CopyFrom(const fogplayerparams_t &);
		virtual void NetworkStateChanged();
		virtual void NetworkStateChangedLog(const char *, const char *);
		virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);

		// vtable[1] NetworkStateChanged
		// vtable[3] NetworkStateChangedLog
		// vtable[2] NetworkStateChanged
		// sizeof = 64
	};

	uint64 m_nButtons;  // +0xa18
	uint64 m_afButtonPressed;  // +0xa20
	uint64 m_afButtonReleased;  // +0xa28
	uint64 m_afButtonLast;  // +0xa30
	uint64 m_afButtonDisabled;  // +0xa38
	uint64 m_afButtonForced;  // +0xa40
	char m_szAnimExtension[32];  // +0xa49

	int m_nUpdateRate;  // +0xa6c
	float m_fLerpTime;  // +0xa70
	bool m_bLagCompensation;  // +0xa74
	bool m_bPredictWeapons;  // +0xa75

	Activity m_Activity;  // +0xa78
protected:

	float m_flPreventUseTime;  // +0xa9c
	int m_iTrain;  // +0xaa0
	float m_iRespawnFrames;  // +0xaa4
	uint32 m_afPhysicsFlags;  // +0xaa8
	int m_iVehicleAnalogBias;  // +0xab0
	bool m_bPauseBonusProgress;  // +0xab4

	int m_lastDamageAmount;  // +0xac0
	float m_fTimeLastHurt;  // +0xac4
	float m_DmgTake;  // +0xad4
	float m_DmgSave;  // +0xad8
	int m_bitsDamageType;  // +0xadc
	int m_bitsHUDDamage;  // +0xae0
	float m_flDeathAnimTime;  // +0xae8

	int m_iObserverLastMode;  // +0xb00
	bool m_bForcedObserverMode;  // +0xb08

	float m_tbdPrev;  // +0xb10
	int m_idrowndmg;  // +0xb14
	int m_idrownrestored;  // +0xb18
	int m_nPoisonDmg;  // +0xb1c
	int m_nPoisonRestored;  // +0xb20
	unsigned char m_rgbTimeBasedDamage[8];  // +0xb24
	int m_vphysicsCollisionState;  // +0xb2c
	float m_fNextSuicideTime;  // +0xb30
	int m_iSuicideCustomKillFlags;  // +0xb34
	float m_fDelay;  // +0xb38
	float m_fReplayEnd;  // +0xb3c
private:

	UserCommandQueue_t m_QueuedUserCommands;  // +0xb48
	int m_nHighestCommandNumberReceived;  // +0xb78

protected:

	IPhysicsObject * m_pShadowStand;  // +0xb88
	IPhysicsObject * m_pShadowCrouch;  // +0xb90
	bool m_touchedPhysObject;  // +0xbb0
	bool m_bPhysicsWasFrozen;  // +0xbb1

private:

	int m_iPlayerSound;  // +0xbb4
	int m_iTargetVolume;  // +0xbb8
	int m_rgItems[5];  // +0xbbc

	float m_flgeigerRange;  // +0xbe0
	float m_flgeigerDelay;  // +0xbe4
	int m_igeigerRangePrev;  // +0xbe8
	bool m_fInitHUD;  // +0xbec
	bool m_fGameHUDInitialized;  // +0xbed
	bool m_fWeapon;  // +0xbee

	int m_iUpdateTime;  // +0xbf0
	int m_iFrags;  // +0xbf4
	int m_iDeaths;  // +0xbf8
	float m_flNextDecalTime;  // +0xbfc
	float m_flNextTauntTime;  // +0xc00
	bool m_bIsLowViolence;  // +0xc08

	float m_AirFinished;  // +0xc10
	float m_PainFinished;  // +0xc14
	int m_iPlayerLocked;  // +0xc18
protected:

	int m_nHMDTeleportFrame;  // +0xc3c
	bool m_bCreatedHMDAvatar;  // +0xc40

	bool m_bReceivedInitialAnchorPos;  // +0xc50

	float m_flStepSoundTime;  // +0xe90
	bool m_bAllowInstantSpawn;  // +0xe94

private:

	float m_flWaterJumpTime;  // +0xeac
	int m_nImpulse;  // +0xebc
	float m_flSwimSoundTime;  // +0xec0
	float m_flFlashTime;  // +0xec4
	int m_nDrownDmgRate;  // +0xec8
	int m_nNumCrouches;  // +0xecc
	bool m_bDuckToggled;  // +0xed0

	float m_flForwardMove;  // +0xed4
	float m_flSideMove;  // +0xed8
	int m_nNumCrateHudHints;  // +0xedc
	bool m_bForceOrigin;  // +0xeec

	int m_nOldTickBase;  // +0xef4
	bool m_bGamePaused;  // +0xef8

	float m_fLastPlayerTalkTime;  // +0xefc
	float m_flOldPlayerZ;  // +0xf04
	float m_flOldPlayerViewOffsetZ;  // +0xf08
	bool m_bPlayerUnderwater;  // +0xf0c

	char m_szNetname[32];  // +0xf31

	float m_flVehicleViewFOV;  // +0xf88
	int m_nVehicleViewSavedFrame;  // +0xf8c
	int m_nBodyPitchPoseParam;  // +0xf9c
	char m_szNetworkIDString[64];  // +0xfb2

	const CPhysSurfaceProperties * m_pSurfaceData;  // +0x1018
	float m_surfaceFriction;  // +0x1020
	char m_chTextureType;  // +0x1024
	char m_chPreviousTextureType;  // +0x1025
	bool m_bSinglePlayerGameEnding;  // +0x1026

	EHANDLE m_hPlayerProxy;  // +0x1028
	bool m_bhasHaptics;  // +0x102c
	bool m_autoKickDisabled;  // +0x102d

	float m_lastEntitySteadyState;  // +0x113c
	int m_availableEntitySteadyState;  // +0x1140
	bool m_hasAnySteadyStateEnts;  // +0x114c
	bool m_bSplitScreenPlayer;  // +0x114d

	static bool ms_bUseSessionPersisterPosAng;
	static Vector ms_vSessionPersisterPosition;
	static QAngle ms_angSessionPersisterAngles;
protected:

private:

	typedef CBaseCombatCharacter BaseClass;
	typedef CBasePlayer ThisClass;

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	typedef ThisClass ThisClass_m_Local;
	typedef ThisClass ThisClass_m_PlayerFog;
	CBasePlayer(CBasePlayer &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	NetworkUserGroupProxyInfo_t * GetExcluderLocalPlayerExclusive();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CBasePlayer();
	virtual ~CBasePlayer();
	IPlayerInfo * GetPlayerInfo();
	IBotController * GetBotController();
	void SetBodyPitch(float);
	CBasePlayer * CreatePlayer(const char *, CEntityIndex);
	virtual void CreateViewModel(int);
	CBaseViewModel * GetViewModel(int);
	void HideViewModels();
	void DestroyViewModels();
	CPlayerState * PlayerData();
	virtual CEntityIndex RequiredEdictIndex();
	void LockPlayerInPlace();
	void UnlockPlayer();
	virtual void DrawEntityDebugOverlays(uint64);
	virtual void SetupVisibility(CBaseEntity *, vis_info_t *);
	virtual int UpdateTransmitState();
	virtual int ShouldTransmit(const CGameCheckTransmitInfo *);
	virtual void BuildTransmitInfo(CGameCheckTransmitInfo &, CCheckTransmitInfo *);
	virtual bool WantsLagCompensationOnEntity(const CBaseEntity *, const CUserCmd *, const CBitVec<16384> *);
	virtual void SetOrResetInitialState(const CEntityKeyValues *);
	bool IsBoundingBoxInView(const Vector &, const Vector &);

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void UpdateOnRemove();
	virtual void OnNewModel(HModel, HModel);

private:

	void SharedSpawn();
	void CreatePlayerHullExtension();
	virtual void ForceRespawn();
	virtual void ApplySessionPersisterValues(KeyValues &, KeyValues &);
	void SetSessionPersisterPosAng(Vector &, QAngle);
	virtual void InitialSpawn();
	virtual void InitHUD();
	virtual void ShowViewPortPanel(const char *, bool, KeyValues *);
	virtual void PlayerDeathThink();
	virtual void Jump();
	virtual void Duck();
	virtual void Cough(CBasePlayer *);
	virtual const char * GetTracerType();
	virtual void MakeTracer(const Vector &, const trace_t &, int);
	virtual void DoImpactEffect(trace_t &, int);
	virtual void PhysicsSimulate();
	virtual void ForceSimulation();
	virtual uint64 PhysicsSolidMaskForEntity();
	virtual void PreThink();
	virtual void PostThink();
	virtual int TakeHealth(float, int);
	virtual void TraceAttack(const CTakeDamageInfo &, const Vector &, trace_t *);
	bool ShouldTakeDamageInCommentaryMode(const CTakeDamageInfo &);
	virtual int OnTakeDamage(const CTakeDamageInfo &);
	virtual void DamageEffect(float, int);
	virtual void OnDamagedByExplosion(const CTakeDamageInfo &);
	bool RespectsBuddha();
	void PauseBonusProgress(bool);
	void SetBonusProgress(int);
	void SetBonusChallenge(int);
	int GetBonusProgress();
	int GetBonusChallenge();
	virtual Vector EyePosition();
	virtual const QAngle & EyeAngles();
	void EyePositionAndVectors(Vector *, Vector *, Vector *, Vector *);
	virtual const QAngle & LocalEyeAngles();
	void EyeVectors(Vector *, Vector *, Vector *);
	void CacheVehicleView();
	virtual Vector EarPosition();
	virtual Vector FindValidSpawnLocation(const Vector &);
	virtual const char * GetHMDModel();
	virtual void SetHMDData(bool, const Vector &, const QAngle &, bool *, HandInfo_t *, bool);
	void OnAnchorTeleport(Vector);
	void SetHMDAvatar(CPropHMDAvatar *);
	CPropHMDAvatar * GetHMDAvatar();
	void SetHMDAvatarModel(const char *);
	void InputSetHMDAvatarModel(inputdata_t &);
	void OnUpdateHMDTrackingData(bool);
	void UpdatePlayerHullExtension(const Vector &, bool);
	void SetPointHMDAnchor(CPointHMDAnchor *);
	CPointHMDAnchor * GetPointHMDAnchor();
	void UpdateAnchorPosition(Vector);
	HSCRIPT ScriptGetHMDAvatar();
	HSCRIPT ScriptGetHMDAnchor();
	bool ScriptIsVRControllerButtonPressed(int);
	bool ScriptIsUsePressed();
	int ScriptGetUserID();
	void ScriptQuit();
	void SnapEyeAngles(const QAngle &);
	virtual QAngle BodyAngles();
	virtual Vector BodyTarget(const Vector &, bool);
	virtual bool ShouldFadeOnDeath();
	virtual const impactdamagetable_t & GetPhysicsImpactDamageTable();
	virtual int OnTakeDamage_Alive(const CTakeDamageInfo &);
	virtual void Event_Killed(const CTakeDamageInfo &);
	virtual void Event_KilledOther(CBaseEntity *, const CTakeDamageInfo &);
	virtual void Event_Dying();
	bool IsHLTV();
	virtual bool IsPlayer();
	virtual bool IsNetClient();
	virtual bool IsFakeClient();
	CPlayerSlot GetClientIndex();
	virtual const char * GetPlayerName();
	void SetPlayerName(const char *);
	virtual const char * GetCharacterDisplayName();
	int GetUserID();
	virtual int GetPlayerID();
	const char * GetNetworkIDString();
	virtual const Vector GetPlayerMins();
	virtual const Vector GetPlayerMaxs();
	virtual void UpdateCollisionBounds();
	void VelocityPunch(const Vector &);
	void ViewPunch(const QAngle &);
	void ViewPunchReset(float);
	void ShowViewModel(bool);
	void ShowCrosshair(bool);
	bool ScriptIsPlayerNoclipping();
	virtual void NoClipStateChanged();
	void CalcView(Vector &, QAngle &, float &, float &, float &);
	void SmoothViewOnStairs(Vector &);
	virtual float CalcRoll(const QAngle &, const Vector &, float, float);
	void CalcViewRoll(QAngle &);
	virtual int Save(ISave &);
	virtual int Restore(IRestore &);
	virtual bool ShouldSavePhysics();
	virtual void OnRestore();
	virtual void PackDeadPlayerItems();
	virtual void RemoveAllItems(bool);
	bool IsDying();
	bool IsDead();
	bool HasPhysicsFlag(unsigned int);
	void SetPhysicsFlag(unsigned int);
	virtual CBaseCombatCharacter * ActivePlayerCombatCharacter();
	virtual void Weapon_ThrowInfo(Vector *, Vector *, QAngle *, AngularImpulse *, int);
	virtual Vector Weapon_ShootPosition(int);
	virtual QAngle Weapon_ShootAngles(int);
	virtual bool Weapon_CanUse(CBaseCombatWeapon *);
	virtual void Weapon_Equip(CBaseCombatWeapon *);
	virtual void Weapon_Drop(CBaseCombatWeapon *, const Vector *, const Vector *);
	virtual bool Weapon_Switch(CBaseCombatWeapon *, int);
	virtual void Weapon_SetLast(CBaseCombatWeapon *);
	virtual bool Weapon_ShouldSetLast(CBaseCombatWeapon *, CBaseCombatWeapon *);
	virtual bool Weapon_ShouldSelectItem(CBaseCombatWeapon *);
	void Weapon_DropSlot(int);
	CBaseCombatWeapon * Weapon_GetLast();
	virtual bool ShouldDropActiveWeaponWhenKilled();
	virtual bool HasUnlockableWeapons(int);
	bool HasUnlockedWpn(int);
	bool HasAnyAmmoOfType(int);
	virtual void UpdateClientData();
	virtual void RumbleEffect(unsigned char, unsigned char, unsigned char);
	virtual int ObjectCaps();
	virtual void Precache(const CEntityPrecacheContext *);
	bool IsOnLadder();
	virtual void ExitLadder();
	virtual const CPhysSurfaceProperties * GetLadderSurface(const Vector &);
	virtual bool IsAbleToAutoCenterOnLadders();
	virtual void SetFlashlightEnabled(bool);
	virtual int FlashlightIsOn();
	virtual bool FlashlightTurnOn(bool);
	virtual void FlashlightTurnOff(bool);
	virtual bool IsIlluminatedByFlashlight(CBaseEntity *, float *);
	virtual void UpdatePlayerSound();
	virtual void UpdateStepSound(const CPhysSurfaceProperties *, const Vector &, const Vector &);
	virtual void PlayStepSound(Vector &, const CPhysSurfaceProperties *, float, bool);
	virtual void GetStepSoundVelocities(float *, float *);
	virtual void SetStepSoundTime(stepsoundtimes_t, bool);
	virtual void DeathSound(const CTakeDamageInfo &);
	const Vector & GetMovementCollisionNormal();
	const Vector & GetGroundNormal();
	virtual CBaseEntity * GetSoundscapeListener();
	virtual bool WeaponHasInfiniteAmmo(CBaseCombatWeapon *);
	virtual Class_T Classify();
	virtual void SetAnimation(PLAYER_ANIM);
	virtual void OnMainActivityComplete(Activity, Activity);
	virtual void OnMainActivityInterrupted(Activity, Activity);
	void SetWeaponAnimType(const char *);
	virtual void OnClientFullyConnect();
	virtual void ImpulseCommands();
	virtual void CheatImpulseCommands(int);
	virtual bool ClientCommand(const CCommand &);
	void NotifySinglePlayerGameEnding();
	bool IsSinglePlayerGameEnding();
	bool HandleVoteCommands(const CCommandContext &, const CCommand &);
	IntervalTimer & GetLastHeldVoteTimer();
	virtual bool StartObserverMode(int);
	virtual void StopObserverMode();
	virtual bool ModeWantsSpectatorGUI(int);
	virtual bool SetObserverMode(int);
	virtual int GetObserverMode();
	virtual bool SetObserverTarget(CBaseEntity *);
	virtual void ObserverUse(bool);
	virtual CBaseEntity * GetObserverTarget();
	virtual CBaseEntity * FindNextObserverTarget(bool);
	virtual CEntityIndex GetNextObserverSearchStartPoint(bool);
	virtual bool PassesObserverFilter(const CBaseEntity *);
	virtual bool IsValidObserverTarget(CBaseEntity *);
	virtual void CheckObserverSettings();
	virtual void JumptoPosition(const Vector &, const QAngle &);
	virtual void ForceObserverMode(int);
	virtual void ResetObserverMode();
	virtual void ValidateCurrentObserverTarget();
	virtual void AttemptToExitFreezeCam();
	virtual bool WantsRoamingObserverMode();
	virtual bool StartReplayMode(float, float, CEntityIndex);
	virtual void StopReplayMode();
	virtual int GetDelayTicks();
	virtual CEntityIndex GetReplayEntity();
	CLogicPlayerProxy * GetPlayerProxy();
	void FirePlayerProxyOutput(const char *, variant_t, CBaseEntity *, CBaseEntity *);
	virtual void CreateCorpse();
	virtual CBaseEntity * EntSelectSpawnPoint();
	virtual bool IsInAVehicle();
	bool CanEnterVehicle(IServerVehicle *, int);
	virtual bool GetInVehicle(IServerVehicle *, int);
	virtual void LeaveVehicle(const Vector &, const QAngle &);
	int GetVehicleAnalogControlBias();
	void SetVehicleAnalogControlBias(int);
	virtual void OnVehicleStart();
	virtual void OnVehicleEnd(Vector &);
	virtual IServerVehicle * GetVehicle();
	virtual const IServerVehicle * GetVehicle();
	virtual CBaseEntity * GetVehicleEntity();
	bool UsingStandardWeaponsInVehicle();
	void AddPoints(int, bool);
	void AddPointsToTeam(int, bool);
	virtual bool BumpWeapon(CBaseCombatWeapon *);
	virtual bool RemovePlayerItem(CBaseCombatWeapon *);
	CBaseEntity * HasNamedPlayerItem(const char *);
	bool HasWeapons();
	virtual void SelectLastItem();
	virtual void SelectItem(const char *, int);
	virtual void SelectItem(CBaseCombatWeapon *);
	void ItemPreFrame();
	virtual void ItemPostFrame();
	virtual CBaseEntity * GiveNamedItem(const char *, int, bool, CBaseEntity *, bool);
	void EnableControl(bool);
	virtual void CheckTrainUpdate();
	void AbortReload();
	void SendAmmoUpdate();
	void WaterMove();
	float GetWaterJumpTime();
	void SetWaterJumpTime(float);
	float GetSwimSoundTime();
	void SetSwimSoundTime(float);
	virtual void SetPlayerUnderwater(bool);
	void UpdateUnderwaterState();
	bool IsPlayerUnderwater();
	virtual void PlayWadeSound();
	virtual bool CanBreatheUnderwater();
	virtual bool CanRecoverCurrentDrowningDamage();
	virtual void PlayerUse(CBaseEntity *);
	virtual void PlayUseDenySound();
	void SetPreventUseTime(float);
	float GetUseSuspendTime();
	virtual CBaseEntity * FindUseEntity(float, float, float, bool *, bool);
	virtual bool IsUseableEntity(CBaseEntity *, unsigned int);
	virtual void OnUseEntity(CBaseEntity *, USE_TYPE);
	virtual bool ClearUseEntity(CBaseEntity *);
	virtual bool HasUseEntity();
	CBaseEntity * DoubleCheckUseNPC(CBaseEntity *, const Vector &, const Vector &);
	bool CanPickupObject(CBaseEntity *, float, float);
	virtual void PickupObject(CBaseEntity *, bool, int);
	virtual void ForceDropOfCarriedPhysObjects(CBaseEntity *);
	virtual float GetHeldObjectMass(IPhysicsObject *);
	virtual bool IsHoldingEntity(CBaseEntity *);
	CBasePlayer * PlayerHoldingEntity(CBaseEntity *);
	virtual void UpdateGeigerCounter();
	void CheckTimeBasedDamage();
	void ResetAutoaim();
	virtual void FindAutoAimTargets();
	virtual Vector GetAutoaimVector(float);
	virtual Vector GetAutoaimVector(float, float);
	virtual Vector GetAutoaimVector(float, float, float, AimResults *);
	virtual void GetAutoaimVector(autoaim_params_t &);
	virtual bool ShouldAutoaim();
	void SetTargetInfo(Vector &, float);
	void SetViewEntity(CBaseEntity *);
	CBaseEntity * GetViewEntity();
	virtual void ForceClientDllUpdate();
	void DeathMessage(CBaseEntity *);
	virtual void ProcessUsercmds(CUserCmd *, int, int, int, bool);
	bool HasQueuedUsercmds();
	void AvoidPhysicsProps(CUserCmd *);
	virtual void PlayerRunCommand(CUserCmd *, IMoveHelper *);
	void RunNullCommand();
	virtual void ChangeTeam(int);
	virtual void ChangeTeam(int, bool, bool);
	virtual bool CanHearAndReadChatFrom(CBasePlayer *);
	virtual bool CanSpeak();
	audioparams_t & GetAudioParams();
	virtual void ModifyOrAppendPlayerCriteria(CResponseCriteriaSet &);
	const QAngle & GetPunchAngle();
	void SetPunchAngle(const QAngle &);
	void SetPunchAngle(int, float);
	virtual void DoMuzzleFlash();
	virtual void OnNavAreaChanged(CNavArea *, CNavArea *);
	const char * GetLastKnownPlaceName();
	virtual void CheckChatText(char *, int);
	virtual void CreateRagdollEntity();
	virtual bool IsPlayerHoldingRagdoll();
	virtual void HandleAnimEvent(animevent_t *);
	CEntityInstance * GetTonemapController();
	virtual bool ShouldAnnounceAchievement();
	bool IsSplitScreenPartner(CBasePlayer *);
	void SetSplitScreenPlayer(bool, CBasePlayer *);
	bool IsSplitScreenPlayer();
	const CBasePlayer * GetSplitScreenPlayerOwner();
	bool IsSplitScreenUserOnEntity(CEntityIndex);
	CSplitScreenSlot GetSplitScreenPlayerSlot();
	CPlayerSlot GetPlayerSlot();
	void AddSplitScreenPlayer(CBasePlayer *);
	void RemoveSplitScreenPlayer(CBasePlayer *);
	CUtlVector<CHandle<CBasePlayer>, CUtlMemory<CHandle<CBasePlayer>, int> > & GetSplitScreenPlayers();
	virtual bool EnsureSplitScreenTeam();
	virtual void ForceChangeTeam(int);
	void UpdateFXVolume();
	void SetupVPhysicsShadow(const Vector &, const Vector &, CPhysCollide *, const char *, CPhysCollide *, const char *);
	IPhysicsPlayerController * GetPhysicsController();
	virtual void VPhysicsCollision(int, gamevcollisionevent_t *);
	virtual void VPhysicsUpdate(IPhysicsObject *);
	virtual bool IsFollowingPhysics();
	bool IsRideablePhysics(IPhysicsObject *);
	IPhysicsObject * GetGroundVPhysics();
	virtual void Touch(CBaseEntity *);
	void SetTouchedPhysics(bool);
	bool TouchedPhysics();
	virtual Vector GetSmoothedVelocity();
	virtual void VPhysicsDestroyObject();
	void PostThinkVPhysics();
	virtual void UpdatePhysicsShadowToCurrentPosition();
	void UpdatePhysicsShadowToPosition(const Vector &);
	void UpdateVPhysicsPosition(const Vector &, const Vector &, float);
	virtual CHintSystem * Hints();
	bool ShouldShowHints();
	void SetShowHints(bool);
	bool HintMessage(int, bool);
	void HintMessage(const char *);
	void StartHintTimer(int);
	void StopHintTimer(int);
	void RemoveHintTimer(int);
	int FragCount();
	int DeathCount();
	bool IsConnected();
	bool IsDisconnecting();
	bool IsSuitEquipped();
	int ArmorValue();
	bool HUDNeedsRestart();
	float MaxSpeed();
	Activity GetActivity();
	void SetActivity(Activity);
	bool IsPlayerLockedInPlace();
	bool IsObserver();
	bool IsOnTarget();
	float MuzzleFlashTime();
	float PlayerDrownTime();
	float GetSurfaceFriction();
	bool IsLowViolence();
	void SetPlayerLocked(int);
	int GetPlayerLocked();
	int GetObserverMode();
	CBaseEntity * GetObserverTarget();
	virtual bool IsReadyToPlay();
	virtual bool IsReadyToSpawn();
	virtual bool ShouldGainInstantSpawn();
	virtual void ResetPerRoundStats();
	void AllowInstantSpawn();
	virtual void ResetScores();
	void ResetFragCount();
	void IncrementFragCount(int);
	void ResetDeathCount();
	void IncrementDeathCount(int);
	void SetArmorValue(int);
	void IncrementArmorValue(int, int);
	void SetConnected(PlayerConnectedState);
	virtual void EquipSuit(bool);
	virtual void RemoveSuit();
	void SetMaxSpeed(float);
	void NotifyNearbyRadiationSource(float);
	void SetAnimationExtension(const char *);
	void SetAdditionalPVSOrigin(const Vector &);
	void SetCameraPVSOrigin(const Vector &);
	void SetMuzzleFlashTime(float);
	virtual void SetUseEntity(CBaseEntity *, bool, int, CBaseEntity *, matrix3x4_t *);
	virtual CBaseEntity * GetUseEntity();
	CBaseEntity * GetHeldEntity();
	virtual CBaseEntity * GetPotentialUseEntity();
	virtual int GetNumUseEntities();
	virtual CBaseEntity * GetUseEntity(int);
	virtual void OnUseEntityChanged();
	void SetPhysicsFlag(int, bool);
	void AllowImmediateDecalPainting();
	virtual void CommitSuicide(bool, bool);
	virtual void CommitSuicide(const Vector &, bool, bool);
	void ForceOrigin(const Vector &);
	void SetTimeBase(float);
	float GetTimeBase();
	void SetLastUserCommand(const CUserCmd &);
	const CUserCmd * GetLastUserCommand();
	virtual bool IsBot();
	bool IsPredictingWeapons();
	int CurrentCommandNumber();
	const CUserCmd * GetCurrentUserCommand();
	float GetFOV();
	float GetFOV();
	float GetDefaultFOV();
	int GetFOVForNetworking();
	bool SetFOV(CBaseEntity *, int, float, int);
	void SetDefaultFOV(int);
	CBaseEntity * GetFOVOwner();
	float GetFOVDistanceAdjustFactor();
	float GetFOVDistanceAdjustFactorForNetworking();
	int GetImpulse();
	void ActivateMovementConstraint(CBaseEntity *, const Vector &, float, float, float, bool);
	void DeactivateMovementConstraint();
	void NotePlayerTalked();
	float LastTimePlayerTalked();
	void DisableButtons(ButtonBitMask_t);
	void EnableButtons(ButtonBitMask_t);
	void ForceButtons(ButtonBitMask_t);
	void UnforceButtons(ButtonBitMask_t);
	void GetPlayerForecast(float, Vector *, float *, bool *);
	void InputSetHealth(inputdata_t &);
	void InputSetHUDVisibility(inputdata_t &);
	const CPhysSurfaceProperties * GetSurfaceData();
	void SetLadderNormal(Vector);
	const Vector & GetLadderNormal();
	void ClearImpulse();
	virtual CAI_Expresser * GetExpresser();
	void SendFixAngle();
	void SetUnHoldableButtons(ButtonBitMask_t);
	ButtonBitMask_t GetUnHoldableButtons();
	bool GetSteamID(CSteamID *);
	uint64 GetSteamIDAsUInt64();
	void AdjustPlayerTimeBase(UserCommandQueue_t &);
	int GetOffset_m_Local();
	int GetOffset_m_PlayerFog();
	void InitFogController();
	void InputSetFogController(inputdata_t &);
	void TonemapControllerActivated(CTonemapController2 *);
	void TonemapControllerDeactivated(CTonemapController2 *);
	void TonemapControllerRemoved(CTonemapController2 *);
	virtual void UpdateTonemapController();
	void InitPostProcessController();
	void InputSetPostProcessController(inputdata_t &);
	void InitColorCorrectionController();
	void InputSetColorCorrectionController(inputdata_t &);
	float GetDeathTime();
	void ClearZoomOwner();
	void SetPreviouslyPredictedOrigin(const Vector &);
	const Vector & GetPreviouslyPredictedOrigin();
	float GetFOVTime();
	void AdjustDrownDmg(int);
	bool ReceiveClientMsg_DevPaletteVisibilityChangedEvent(const CClientMsg_DevPaletteVisibilityChangedEvent_t &);

protected:

	virtual void CalcPlayerView(Vector &, QAngle &, float &);
	void CalcVehicleView(IServerVehicle *, Vector &, QAngle &, float &, float &, float &);
	void CalcObserverView(Vector &, QAngle &, float &);
	void CalcViewModelView(const Vector &, const QAngle &);
	Activity GetIdealActivityForPlayerAnim(PLAYER_ANIM);
	float GetNextTauntTime();
	void SetNextTauntTime(float);
	void UpdateButtonState(ButtonBitMask_t);
	virtual int SpawnArmorValue();

private:

	void HandleFuncTrain();
	bool GetToggledDuckState();
	void ToggleDuck();
	float GetStickDist();
	virtual void OnActiveAttachmentChanged(CPropVRHand *, CBaseVRHandAttachment *, CBaseVRHandAttachment *);
	bool IsDucked();
	bool IsDucking();
	float GetStepSize();
	virtual bool IsAutoCrouched();
	CBaseCombatCharacter * GetStuckCharacter();
	void SetStuckCharacter(CBaseCombatCharacter *);
	float GetLaggedMovementValue();
	void SetLaggedMovementValue(float);
	bool IsAutoKickDisabled();
	void DisableAutoKick(bool);
	void DumpPerfToRecipient(CBasePlayer *, int);
	virtual CBaseEntity * FindEntityClassForward(char *);
	virtual CBaseEntity * FindEntityForward(bool);
	virtual CBaseEntity * FindPickerEntityClass(char *);
	virtual CBaseEntity * FindPickerEntity();
	virtual CBaseEntity * FindEntityInheritingFromForward(const CSchemaClassBindingBase *);
	virtual CBaseEntity * FindPickerEntityInheritingFrom(const CSchemaClassBindingBase *);
	virtual int GetAvailableSteadyStateSlots();
	void OnEntitySteadyStateStart();
	void SetPlayerInPVS(CEntityIndex, bool);
	bool IsPlayerInPVS(const CBasePlayer *);
	virtual void PrepareForFullUpdate();
	virtual void OnSpeak(CBasePlayer *, const char *, float);
	virtual void OnVoiceTransmit();
	virtual bool HasHaptics();
	virtual void SetHaptics(bool);
	virtual uint64 PlayerSolidMask(bool);
	float GetAutoaimScore(const Vector &, const Vector &, const Vector &, CBaseEntity *, float, CBaseCombatWeapon *);
	virtual QAngle AutoaimDeflection(Vector &, autoaim_params_t &);
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[370] CreateViewModel
	// vtable[20] RequiredEdictIndex
	// vtable[14] DrawEntityDebugOverlays
	// vtable[371] SetupVisibility
	// vtable[64] UpdateTransmitState
	// vtable[65] ShouldTransmit
	// vtable[372] BuildTransmitInfo
	// vtable[373] WantsLagCompensationOnEntity
	// vtable[374] SetOrResetInitialState
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[11] UpdateOnRemove
	// vtable[39] OnNewModel
	// vtable[375] ForceRespawn
	// vtable[76] ApplySessionPersisterValues
	// vtable[376] InitialSpawn
	// vtable[377] InitHUD
	// vtable[378] ShowViewPortPanel
	// vtable[379] PlayerDeathThink
	// vtable[380] Jump
	// vtable[381] Duck
	// vtable[382] Cough
	// vtable[133] GetTracerType
	// vtable[131] MakeTracer
	// vtable[130] DoImpactEffect
	// vtable[119] PhysicsSimulate
	// vtable[121] ForceSimulation
	// vtable[123] PhysicsSolidMaskForEntity
	// vtable[383] PreThink
	// vtable[384] PostThink
	// vtable[91] TakeHealth
	// vtable[135] TraceAttack
	// vtable[90] OnTakeDamage
	// vtable[385] DamageEffect
	// vtable[386] OnDamagedByExplosion
	// vtable[164] EyePosition
	// vtable[165] EyeAngles
	// vtable[166] LocalEyeAngles
	// vtable[167] EarPosition
	// vtable[387] FindValidSpawnLocation
	// vtable[388] GetHMDModel
	// vtable[389] SetHMDData
	// vtable[271] BodyAngles
	// vtable[169] BodyTarget
	// vtable[390] ShouldFadeOnDeath
	// vtable[262] GetPhysicsImpactDamageTable
	// vtable[319] OnTakeDamage_Alive
	// vtable[92] Event_Killed
	// vtable[93] Event_KilledOther
	// vtable[338] Event_Dying
	// vtable[140] IsPlayer
	// vtable[100] IsNetClient
	// vtable[391] IsFakeClient
	// vtable[106] GetPlayerName
	// vtable[392] GetCharacterDisplayName
	// vtable[393] GetPlayerID
	// vtable[394] GetPlayerMins
	// vtable[395] GetPlayerMaxs
	// vtable[396] UpdateCollisionBounds
	// vtable[397] NoClipStateChanged
	// vtable[398] CalcRoll
	// vtable[15] Save
	// vtable[16] Restore
	// vtable[48] ShouldSavePhysics
	// vtable[18] OnRestore
	// vtable[399] PackDeadPlayerItems
	// vtable[400] RemoveAllItems
	// vtable[401] ActivePlayerCombatCharacter
	// vtable[402] Weapon_ThrowInfo
	// vtable[311] Weapon_ShootPosition
	// vtable[312] Weapon_ShootAngles
	// vtable[306] Weapon_CanUse
	// vtable[307] Weapon_Equip
	// vtable[309] Weapon_Drop
	// vtable[310] Weapon_Switch
	// vtable[403] Weapon_SetLast
	// vtable[404] Weapon_ShouldSetLast
	// vtable[405] Weapon_ShouldSelectItem
	// vtable[335] ShouldDropActiveWeaponWhenKilled
	// vtable[406] HasUnlockableWeapons
	// vtable[407] UpdateClientData
	// vtable[408] RumbleEffect
	// vtable[19] ObjectCaps
	// vtable[6] Precache
	// vtable[409] ExitLadder
	// vtable[410] GetLadderSurface
	// vtable[411] IsAbleToAutoCenterOnLadders
	// vtable[412] SetFlashlightEnabled
	// vtable[413] FlashlightIsOn
	// vtable[414] FlashlightTurnOn
	// vtable[415] FlashlightTurnOff
	// vtable[416] IsIlluminatedByFlashlight
	// vtable[417] UpdatePlayerSound
	// vtable[418] UpdateStepSound
	// vtable[419] PlayStepSound
	// vtable[420] GetStepSoundVelocities
	// vtable[421] SetStepSoundTime
	// vtable[422] DeathSound
	// vtable[423] GetSoundscapeListener
	// vtable[424] WeaponHasInfiniteAmmo
	// vtable[47] Classify
	// vtable[425] SetAnimation
	// vtable[426] OnMainActivityComplete
	// vtable[427] OnMainActivityInterrupted
	// vtable[428] OnClientFullyConnect
	// vtable[429] ImpulseCommands
	// vtable[430] CheatImpulseCommands
	// vtable[431] ClientCommand
	// vtable[432] StartObserverMode
	// vtable[433] StopObserverMode
	// vtable[434] ModeWantsSpectatorGUI
	// vtable[435] SetObserverMode
	// vtable[436] GetObserverMode
	// vtable[437] SetObserverTarget
	// vtable[438] ObserverUse
	// vtable[439] GetObserverTarget
	// vtable[440] FindNextObserverTarget
	// vtable[441] GetNextObserverSearchStartPoint
	// vtable[442] PassesObserverFilter
	// vtable[443] IsValidObserverTarget
	// vtable[444] CheckObserverSettings
	// vtable[445] JumptoPosition
	// vtable[446] ForceObserverMode
	// vtable[447] ResetObserverMode
	// vtable[448] ValidateCurrentObserverTarget
	// vtable[449] AttemptToExitFreezeCam
	// vtable[450] WantsRoamingObserverMode
	// vtable[451] StartReplayMode
	// vtable[452] StopReplayMode
	// vtable[453] GetDelayTicks
	// vtable[454] GetReplayEntity
	// vtable[455] CreateCorpse
	// vtable[456] EntSelectSpawnPoint
	// vtable[346] IsInAVehicle
	// vtable[457] GetInVehicle
	// vtable[458] LeaveVehicle
	// vtable[459] OnVehicleStart
	// vtable[460] OnVehicleEnd
	// vtable[347] GetVehicle
	// vtable[348] GetVehicle
	// vtable[349] GetVehicleEntity
	// vtable[461] BumpWeapon
	// vtable[317] RemovePlayerItem
	// vtable[462] SelectLastItem
	// vtable[463] SelectItem
	// vtable[464] SelectItem
	// vtable[465] ItemPostFrame
	// vtable[466] GiveNamedItem
	// vtable[467] CheckTrainUpdate
	// vtable[468] SetPlayerUnderwater
	// vtable[469] PlayWadeSound
	// vtable[470] CanBreatheUnderwater
	// vtable[471] CanRecoverCurrentDrowningDamage
	// vtable[472] PlayerUse
	// vtable[473] PlayUseDenySound
	// vtable[474] FindUseEntity
	// vtable[475] IsUseableEntity
	// vtable[476] OnUseEntity
	// vtable[477] ClearUseEntity
	// vtable[478] HasUseEntity
	// vtable[479] PickupObject
	// vtable[480] ForceDropOfCarriedPhysObjects
	// vtable[481] GetHeldObjectMass
	// vtable[482] IsHoldingEntity
	// vtable[483] UpdateGeigerCounter
	// vtable[484] FindAutoAimTargets
	// vtable[485] GetAutoaimVector
	// vtable[486] GetAutoaimVector
	// vtable[487] GetAutoaimVector
	// vtable[488] GetAutoaimVector
	// vtable[489] ShouldAutoaim
	// vtable[490] ForceClientDllUpdate
	// vtable[491] ProcessUsercmds
	// vtable[492] PlayerRunCommand
	// vtable[70] ChangeTeam
	// vtable[493] ChangeTeam
	// vtable[494] CanHearAndReadChatFrom
	// vtable[495] CanSpeak
	// vtable[496] ModifyOrAppendPlayerCriteria
	// vtable[354] DoMuzzleFlash
	// vtable[367] OnNavAreaChanged
	// vtable[497] CheckChatText
	// vtable[498] CreateRagdollEntity
	// vtable[499] IsPlayerHoldingRagdoll
	// vtable[229] HandleAnimEvent
	// vtable[500] ShouldAnnounceAchievement
	// vtable[501] EnsureSplitScreenTeam
	// vtable[502] ForceChangeTeam
	// vtable[57] VPhysicsCollision
	// vtable[52] VPhysicsUpdate
	// vtable[503] IsFollowingPhysics
	// vtable[112] Touch
	// vtable[172] GetSmoothedVelocity
	// vtable[51] VPhysicsDestroyObject
	// vtable[504] UpdatePhysicsShadowToCurrentPosition
	// vtable[505] Hints
	// vtable[506] IsReadyToPlay
	// vtable[507] IsReadyToSpawn
	// vtable[508] ShouldGainInstantSpawn
	// vtable[509] ResetPerRoundStats
	// vtable[510] ResetScores
	// vtable[511] EquipSuit
	// vtable[512] RemoveSuit
	// vtable[513] SetUseEntity
	// vtable[514] GetUseEntity
	// vtable[515] GetPotentialUseEntity
	// vtable[516] GetNumUseEntities
	// vtable[517] GetUseEntity
	// vtable[518] OnUseEntityChanged
	// vtable[519] CommitSuicide
	// vtable[520] CommitSuicide
	// vtable[521] IsBot
	// vtable[522] GetExpresser
	// vtable[523] UpdateTonemapController
	// vtable[524] CalcPlayerView
	// vtable[525] SpawnArmorValue
	// vtable[526] OnActiveAttachmentChanged
	// vtable[527] IsAutoCrouched
	// vtable[528] FindEntityClassForward
	// vtable[529] FindEntityForward
	// vtable[530] FindPickerEntityClass
	// vtable[531] FindPickerEntity
	// vtable[532] FindEntityInheritingFromForward
	// vtable[533] FindPickerEntityInheritingFrom
	// vtable[534] GetAvailableSteadyStateSlots
	// vtable[535] PrepareForFullUpdate
	// vtable[536] OnSpeak
	// vtable[537] OnVoiceTransmit
	// vtable[538] HasHaptics
	// vtable[539] SetHaptics
	// vtable[540] PlayerSolidMask
	// vtable[541] AutoaimDeflection
	// vtable[4] GetScriptDesc
	// sizeof = 4488
};

// src/game/server/player.h:2182
class CTraceFilterSkipTwoEntitiesAndTeammates : public CTraceFilterSkipTwoEntities {
public:

	CTraceFilterSkipTwoEntitiesAndTeammates(const CBaseEntity *, const CBaseEntity *, int);
	virtual bool ShouldHitEntity(CBaseEntity *);
	virtual ~CTraceFilterSkipTwoEntitiesAndTeammates();

	// vtable[2] ShouldHitEntity
	// sizeof = 72
};
