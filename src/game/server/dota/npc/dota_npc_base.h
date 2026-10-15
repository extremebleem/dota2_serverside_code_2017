// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/npc/dota_npc_base.h:77
class CDOTA_PreviousTargetData {
	EHANDLE m_hTarget;  // +0x0
	int m_nRelationshipClass;  // +0x4
	CDOTA_PreviousTargetData();

	// sizeof = 8
};

// src/game/server/dota/npc/dota_npc_base.h:84
class CLocalNPCObstructionsCache {
private:

	int m_nLastUpdatedTick;  // +0x0
	float m_flRadius;  // +0x4

	CLocalNPCObstructionsCache();
	~CLocalNPCObstructionsCache();
	CLocalNPCObstructionsCache & operator=(const CLocalNPCObstructionsCache &);

	// sizeof = 32
};

// src/game/server/dota/npc/dota_npc_base.h:99
class CDOTAPseudoRandom {
	float m_flCurrentChance;  // +0x0

	// sizeof = 4
};

// src/game/server/dota/npc/dota_npc_base.h:155
class CDOTA_BaseNPC : public NextBotCombatCharacter, public CObstructionObject {
	class NetworkVar_m_bSelectionRingVisible {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iCurrentLevel {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flMana {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flMaxMana {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flManaThinkRegen {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flHealthThinkRegen {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nHealthBarOffsetOverride {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bIsPhantom {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bIsAncient {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bIsNeutralUnitType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bIsSummoned {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bCanBeDominated {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bHasUpgradeableAbilities {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iBKBChargesUsed {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iBotDebugData {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bIsMoving {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nTotalDamageTaken {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iMoveSpeed {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flTauntCooldown {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iDayTimeVisionRange {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iNightTimeVisionRange {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flPhysicalArmorValue {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flMagicalResistanceValue {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iAttackCapabilities {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iSpecialAbility {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nPlayerOwnerID {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nUnitState64 {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	struct sDamageEvent {
		float fTime;  // +0x0
		int iDamage;  // +0x4
		EHANDLE hAttacker;  // +0x8
		sDamageEvent();
		sDamageEvent(const sDamageEvent &);
		sDamageEvent & operator=(const sDamageEvent &);

		// sizeof = 12
	};
	/* tag__fprintf: const_type tag not supported! */;

	class NetworkVar_m_iTaggedAsVisibleByTeam {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iIsControllableByPlayer64 {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hAbilities {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_iszUnitName {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iUnitNameIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iDamageMin {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iDamageMax {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iDamageBonus {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bIsWaitingToSpawn {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bIsIllusion {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nUnitLabelIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iCurShop {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bStolenScepter {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_anglediff {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_NetworkActivity {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_NetworkSequenceIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bShouldDoFlyHeightVisual {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flStartSequenceCycle {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_CustomHealthLabel {
		void NetworkStateChanged(void *);

		// sizeof = 1
	};

	class NetworkVar_m_CustomHealthLabelColor {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class CDOTA_BaseNPCIntention : public IIntention {
	public:

	private:

		CDOTA_BaseNPCIntention(const CDOTA_BaseNPCIntention &);
		CDOTA_BaseNPCIntention(CDOTA_BaseNPC *);
		virtual ~CDOTA_BaseNPCIntention();
		virtual const char * GetName();
		virtual void Reset();
		virtual void Update();
		virtual INextBotEventResponder * FirstContainedResponder();
		virtual INextBotEventResponder * NextContainedResponder(INextBotEventResponder *);

		// vtable[65] GetName
		// vtable[62] Reset
		// vtable[63] Update
		// vtable[3] FirstContainedResponder
		// vtable[4] NextContainedResponder
		// sizeof = 48
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

	static datamap_t m_DataMap;

protected:

	uint32 m_iUnitType;  // +0x828
private:

protected:

	string_t m_iszBaseClass;  // +0x840
	int m_iStartingMaxHealth;  // +0x848
	int m_iStartingMaxMana;  // +0x84c
	int m_iStartingMana;  // +0x850
	float m_flBaseMaxMana;  // +0x85c
	float m_flBaseMaxHealth;  // +0x868
	bool m_bAutoAttacksByDefault;  // +0x877
	bool m_bConsideredHero;  // +0x87a
	bool m_bUsesConstantGesture;  // +0x87b
	bool m_bIsPlayingSingleForcedActivity;  // +0x87c

	int m_iLastAbilityPlayer;  // +0x8a0
	bool m_bIsPhantomBlocker;  // +0x8a4
	bool m_bBlocksCreepSpawn;  // +0x8a5
	bool m_bCanSellItems;  // +0x8a6
	bool m_bCanRespawn;  // +0x8a7
	bool m_bTrackDamageTaken;  // +0x8ac

	int m_nNextRegenThink;  // +0x8b0
	int m_nNextModifierThink;  // +0x8b4
	int m_nNextUnitThink;  // +0x8b8
	float m_flHealthRegen;  // +0x8bc
	float m_flManaRegen;  // +0x8c8
	float m_flHealthRegenCounter;  // +0x8cc
	float m_flManaRegenCounter;  // +0x8d0
	float m_flAccumulatedHeal;  // +0x8d4
	int m_iBaseDamageMin;  // +0x8d8
	int m_iBaseDamageMax;  // +0x8dc
	int m_iAttackRange;  // +0x8e0
	int m_iAttackRangeBuffer;  // +0x8e4
	float m_flTurnRate;  // +0x8ec
	int m_iHasAggressiveStance;  // +0x8f0
	bool m_bInAggressiveStance;  // +0x8f4
	bool m_bInInjuredAggressiveStance;  // +0x8f5

	float m_flFollowRange;  // +0x8f8
	int m_iAcquisitionRange;  // +0x8fc
	float m_flAttackAnimationPoint;  // +0x900
	float m_flHullRadius;  // +0x904
	float m_flCollisionPadding;  // +0x908
	float m_flProjectileCollisionSize;  // +0x910
	int m_iProjectileMoveSpeed;  // +0x918

	string_t m_iszAutoAttackRangedParticle;  // +0x920
	string_t m_iszParticleFolder;  // +0x928
	string_t m_iszGameSoundsFile;  // +0x930
	string_t m_iszVoiceFile;  // +0x938
	string_t m_iszSoundSet;  // +0x940
	string_t m_iszSelectionGroup;  // +0x948
	string_t m_iszAnimationModifier;  // +0x950
	float m_flBaseAttackTime;  // +0x958
	float m_fBotAttackDesire;  // +0x964
	int m_iCombatClass;  // +0x968
	int m_iCombatClassAttack;  // +0x96c
	int m_iCombatClassDefend;  // +0x970
	int m_iUnitRelationshipClass;  // +0x974
	int m_iTeamName;  // +0x980
	int m_iMoveCapabilities;  // +0x98c
	int m_iXPBounty;  // +0x990
	int m_iXPBountyExtra;  // +0x994
	int m_iGoldBountyMin;  // +0x998
	int m_iGoldBountyMax;  // +0x99c
	int m_nFarmClaimPlayerID;  // +0x9a0
	int m_iAttackDamageType;  // +0xa68
	bool m_bIsIdle;  // +0xa6c
	bool m_bHold;  // +0xa6d
	bool m_bWasKilledPassively;  // +0xa6e

	EHANDLE m_hAngerTarget;  // +0xaa0
	EHANDLE m_hAlertTarget;  // +0xaa4
	EHANDLE m_hForceAttackTarget;  // +0xaa8
	bool m_bAllowAllyForceAttack;  // +0xaac

	float m_flLastAttackTime;  // +0xad8
	float m_flTimeSinceLastAbilityNag;  // +0xadc
	bool m_bFirstSpawn;  // +0xb28

	EHANDLE m_hAttackTarget;  // +0xb2c
	EHANDLE m_hAggroTarget;  // +0xb30
	EHANDLE m_hCommandAttackTarget;  // +0xb34
	string_t m_iszOriginalModel;  // +0xb38
	bool m_bPseudoQueueOrders;  // +0xb40
	bool m_bCastLocked;  // +0xb41

	float m_flAttackRegulator;  // +0xb60
	float m_fAttackPhaseEndTime;  // +0xb64
	float m_flPositionUpdateTime;  // +0xb68

	int m_nControllingPlayerID;  // +0xb88
	bool m_bRunAIWhenControllableByPlayer;  // +0xb8c

	EHANDLE m_hActiveAbility;  // +0xc08
	EHANDLE m_hCursorTarget;  // +0xc18
	bool m_bCursorTargetingNothing;  // +0xc1c

	class NetworkVar_m_ModifierManager : public CDOTA_ModifierManager {
	public:

		NetworkVar_m_ModifierManager & operator=(NetworkVar_m_ModifierManager &);
		NetworkVar_m_ModifierManager & operator=(const NetworkVar_m_ModifierManager &);
		NetworkVar_m_ModifierManager(NetworkVar_m_ModifierManager &);
		NetworkVar_m_ModifierManager(const NetworkVar_m_ModifierManager &);
		~NetworkVar_m_ModifierManager();
		NetworkVar_m_ModifierManager();
		virtual void NetworkStateChanged();
		virtual void NetworkStateChangedLog(const char *, const char *);
		virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);

		// vtable[1] NetworkStateChanged
		// vtable[3] NetworkStateChangedLog
		// vtable[2] NetworkStateChanged
		// sizeof = 256
	};

	float m_flInvisibilityLevel;  // +0xd28

	string_t m_iszMapUnitName;  // +0xd30

	int m_iLeashType;  // +0xd54

	bool m_bNeverMoveToClearSpace;  // +0xda8

	bool m_bMustReachEachGoalEntity;  // +0xdb0

	class NetworkVar_m_Inventory : public CDOTA_UnitInventory {
	public:

		NetworkVar_m_Inventory & operator=(NetworkVar_m_Inventory &);
		NetworkVar_m_Inventory & operator=(const NetworkVar_m_Inventory &);
		NetworkVar_m_Inventory(NetworkVar_m_Inventory &);
		NetworkVar_m_Inventory(const NetworkVar_m_Inventory &);
		~NetworkVar_m_Inventory();
		NetworkVar_m_Inventory();
		void CopyFrom(const CDOTA_UnitInventory &);
		virtual void NetworkStateChanged();
		virtual void NetworkStateChangedLog(const char *, const char *);
		virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);

		// vtable[1] NetworkStateChanged
		// vtable[3] NetworkStateChangedLog
		// vtable[2] NetworkStateChanged
		// sizeof = 200
	};

	EHANDLE m_hItemToDrop;  // +0xf20
	EHANDLE m_hLastNearShop;  // +0xf28
	bool m_bHasInventory;  // +0xf2c

	float m_flBaselineModelScale;  // +0xf30
	float m_fModelScaleMultiplier;  // +0xf34
	float m_flPreviousModelScale;  // +0xf38
	bool m_bIsCamped;  // +0xf3c
	bool m_bIsReturningHome;  // +0xf3d
	bool m_bWantsToFlee;  // +0xf3e
	bool m_bWakesNeutrals;  // +0xf3f
	bool m_bIdleAcquire;  // +0xf40
	bool m_bCanFollowUnseenUnits;  // +0xf41
	bool m_bExpired;  // +0xf42

	bool m_bCurrentOrderIsMovement;  // +0xf68
	bool m_bPreviousOrderIsMovement;  // +0xf69
	bool m_bResumePreviousMovement;  // +0xf6a
	bool m_bIsPatrolling;  // +0xf6b
	float m_flCreationTime;  // +0xf6c
	bool m_bTargetMovedOutOfRange;  // +0xf70
	bool m_bChaseTargetMoves;  // +0xf71

	float m_flChaseDistance;  // +0xf74

	bool m_bActivityModifiersDirty;  // +0xf98

	float m_flBlinkDaggerTime;  // +0xf9c
	float m_flAdditionalBattleMusicWeight;  // +0xfa0

	float m_flCritBashFailUntil;  // +0xfe8
	float m_flCompanionDistance;  // +0xfec
	bool m_bIsPartyCompanion;  // +0xff0
	bool m_bCanPartyCompanionAttack;  // +0xff1

	bool m_bFacePlayer;  // +0xff8

	float m_flLastIdleChangeTime;  // +0xffc
	bool m_bUseNeutralCreepBehavior;  // +0x1000

private:

protected:

	int m_nPoseParameterTurn;  // +0x1048
	float m_flLean;  // +0x104c

	bool m_bMidLoading;  // +0x1064

private:

	int8 m_nArcanaLevel;  // +0x1172
	int8 m_nDefaultArcanaLevel;  // +0x1173
	float m_flPathfindingSearchDepthScale;  // +0x1178

	typedef CDOTA_BaseNPC ThisClass;

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
	typedef ThisClass ThisClass_m_ModifierManager;
	typedef ThisClass ThisClass_m_Inventory;
	CDOTA_BaseNPC & operator=(CDOTA_BaseNPC &);
	CDOTA_BaseNPC(CDOTA_BaseNPC &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_BaseNPC();
	virtual ~CDOTA_BaseNPC();
	virtual void UpdateOnRemove();
	void SetBot(CDOTA_Bot *);
	CDOTA_Bot * GetBot();
	CDOTA_Bot_Script * GetBotScript();
	void SetBotDebugData(int);
	virtual void SetModelScale(float);
	float GetModelScaleAnimationRateMultiplier();
	void SetHealthBarOffsetOverride(int);
	virtual IIntention * GetIntentionInterface();
	virtual CDOTALocomotor * GetLocomotionInterface();
	virtual CDOTABody * GetBodyInterface();
	void SetNeverMoveToClearSpace(bool);
	bool GetNeverMoveToClearSpace();
	void SetIsIdle(bool);
	virtual void OnIdleChanged();
	bool IsIdle();
	float GetLastIdleChangeTime();
	virtual bool IsPartOfFOWSystem();
	virtual void Connect();
	virtual bool IsDebuggingOverride(unsigned int);
	void SetInitialGoalEntity(CBaseEntity *);
	CBaseEntity * GetInitialGoalEntity();
	void Script_SetInitialGoalEntity(HSCRIPT);
	HSCRIPT Script_GetInitialGoalEntity();
	void SetMustReachEachGoalEntity(bool);
	bool GetMustReachEachGoalEntity();
	void SetInitialGoalPosition(Vector);
	Vector GetInitialGoalPosition();
	CDOTA_BaseNPC * GetBestEnemy(float, CDOTA_PreviousTargetData *);
	CDOTA_BaseNPC * FindWakingEnemy(float);
	CDOTA_BaseNPC * GetAutoAttackTarget(CDOTA_PreviousTargetData *, bool);
	AutoattackUnitType_t GetAutoattackUnitType();
	virtual bool UsesConstantGesture(bool);
	virtual float GetConstantGestureWeight(float);
	virtual float GetConstantGestureCycle(float);
	virtual void GestureCycleComplete(Activity, int, bool);
	virtual void OnSequenceFinished(bool);

protected:

	virtual void Spawn(const CEntityKeyValues *);
	void DirectRespawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void CalculateGenericBonuses();
	virtual void ChangeTeam(int);
	virtual void UnitThink();
	virtual float GetIdealSpeed();
	virtual void DeathComplete();
	virtual void Teleport(const Vector *, const QAngle *, const Vector *);
	void UnserializeUnitName(const CEntityKeyValues *);
	void GetUnitNameFromKeyValues(const CEntityKeyValues *, CUtlString &);
	void SUB_DeadDisappear();
	virtual void SetLevel(int);
	int GetLevel();
	bool IsAncient();
	bool IsNeutralUnitType();
	bool IsSummoned();
	bool CanBeDominated();
	virtual void OnDominated();
	virtual CDOTA_BaseNPC * GetCloneSource();
	HSCRIPT Script_GetCloneSource();
	bool IsClone();
	bool CanAutoAttackTarget(CDOTA_BaseNPC *, bool);
	bool CanCastOn(CBaseEntity *, CDOTABaseAbility *);
	virtual bool CanAcceptTargetToAttack(CDOTA_BaseNPC *);
	virtual void Activate(ActivateType_t);
	virtual void InitialSpawn();
	virtual int ShouldTransmit(const CGameCheckTransmitInfo *);
	float GetTurnRate();
	float GetFollowRange();
	virtual void Event_Killed(const CTakeDamageInfo &);
	virtual int DrawDebugTextOverlays(uint64, int);
	virtual int UpdateTransmitState();
	virtual CAI_BaseNPC * MyNPCPointer();
	float GetHullRadius();
	float GetCollisionPadding();
	float GetPaddedCollisionRadius();
	void SetHullRadius(float);
	float GetProjectileCollisionSize();
	int GetHealthPercent();
	int GetHealthDeficit();
	virtual int OnTakeDamage_Alive(const CTakeDamageInfo &);
	virtual int OnTakeDamage(const CTakeDamageInfo &);
	int GetHealthEstimate(float);
	float GetEstimatedDeathTime();
	float GetEstimatedTimeUntilDeath();
	float GetRecentIncomingDPS(bool);
	int64 GetTotalDamageTaken();
	float HealthFraction();
	void MoveToPosition(Vector);
	void MoveToDirection(Vector);
	void MoveToPositionAggressive(Vector);
	void Input_MoveToPositionAggressive(inputdata_t &);
	void MoveToNPC(CDOTA_BaseNPC *);
	void Script_MoveToNPC(HSCRIPT);
	virtual void Input_MoveTo(inputdata_t &);
	void MoveToTargetToAttack(CBaseEntity *);
	void Script_MoveToTargetToAttack(HSCRIPT);
	virtual void Input_MoveToAttack(inputdata_t &);
	void PatrolToPosition(Vector);
	void DropItemAtPosition(Vector, CBaseEntity *);
	void Script_DropItemAtPosition(Vector, HSCRIPT);
	void MoveToNPCToGiveItem(CBaseEntity *, CBaseEntity *);
	void Script_MoveToNPCToGiveItem(HSCRIPT, HSCRIPT);
	void PickupDroppedItem(CBaseEntity *);
	void Script_PickupDroppedItem(HSCRIPT);
	void PickupRune(CBaseEntity *);
	void Script_PickupRune(HSCRIPT);
	void Input_SpeechBubble(inputdata_t &);
	void Input_DestroyAllSpeechBubbles(inputdata_t &);
	void Input_PlayVCD(inputdata_t &);
	void Input_ForcePlayActivityOnce(inputdata_t &);
	void HandleRunePickup(CDOTA_Item_Rune *);
	void ActivateRuneEffect(int);
	bool HasModifiedAbilityParticleName(const char *);
	const char * GetModifiedAbilityParticleName(const char *);
	virtual int GetRangedProjectileAttachment(CDOTA_AttackRecord *);
	void DuplicateAssetModifiers(CDOTA_BaseNPC *);
	void DumpAssetModifiers();
	virtual void SpendGold(int);
	virtual int GetGold();
	DOTA_INVALID_ORDERS AttemptToPurchaseItem(const char *, int, int);
	void SellItem(CDOTA_Item *);
	void Script_SellItem(HSCRIPT);
	void DisassembleItem(CDOTA_Item *);
	void Script_DisassembleItem(HSCRIPT);
	DOTA_INVALID_ORDERS EjectItemFromStash(CDOTA_Item *);
	void Script_EjectItemFromStash(HSCRIPT);
	void Script_RemoveItem(HSCRIPT);
	HSCRIPT Script_TakeItem(HSCRIPT);
	void SetCanSellItems(bool);
	bool CanSellItems();
	void GiveItem(CDOTA_Item *, CDOTA_BaseNPC *, int, int);
	void GiveItems(CUtlVector<CHandle<CDOTA_Item>, CUtlMemory<CHandle<CDOTA_Item>, int> > *, CDOTA_BaseNPC *, int);
	DOTA_INVALID_ORDERS AddItem(const char *, int, int, CUtlVector<CDOTA_Item*, CUtlMemory<CDOTA_Item*, int> > *);
	HSCRIPT Script_AddItemByName(const char *);
	HSCRIPT Script_AddItem(HSCRIPT);
	HSCRIPT Script_AddAbility(const char *);
	void Script_SwapItems(int, int);
	void Script_RemoveAbility(const char *);
	bool Script_HasAbility(const char *);
	void MoveItem(CDOTA_Item *, int);
	void SetItemCombineLocked(CDOTA_Item *, bool);
	virtual void SetStartingValues();
	void SetBaseMaxHealth(float);
	float GetBaseMaxHealth();
	void ModifyHealth(int, CDOTABaseAbility *, bool, int);
	void Script_ModifyHealth(int, HSCRIPT, bool, int);
	void SetMana(float);
	void SetBaseMaxMana(float);
	void SetMaxMana(float);
	float GetMana();
	float GetBaseMaxMana();
	float GetMaxMana();
	int GetManaPercent();
	void ReduceMana(float);
	void Script_GiveMana(float);
	void GiveMana(float, CBaseEntity *, bool);
	void SpendMana(float, CDOTABaseAbility *, CDOTA_BaseNPC *);
	void Script_SpendMana(float, HSCRIPT);
	void Heal(float, CBaseEntity *, bool, bool);
	void Script_Heal(float, HSCRIPT);
	float GetAcquisitionRange();
	void SetAcquisitionRange(int);
	void SetStartingTeam();
	float GetAttackRange();
	float GetAttackRangeBuffer();
	int GetBaseAttackRange();
	int GetAttackDamage();
	int GetAverageTrueAttackDamage(CDOTA_BaseNPC *);
	int Script_GetAverageTrueAttackDamage(HSCRIPT);
	float GetThreatRange();
	float GetRemainingSequenceDuration(HSequence);
	bool ShouldDrawPath();
	float GetLastNagTime();
	void StartNagTime();
	virtual bool CanBeAutoAttacked();
	bool CanAutoAttack(bool);
	void CreateCollisionBounds();
	float GetTauntCooldown();
	void SetTauntCooldown(float);
	void CreateAbilityTriggerRecord(CDOTABaseAbility *, CDOTA_BaseNPC *, CDOTA_BaseNPC *);
	CDOTA_AttackRecord * CreateAttackRecord(CBaseEntity *, bool, bool, bool, bool, bool);
	void PerformAttack(CDOTA_AttackRecord *, CBaseEntity *, bool, bool, bool, bool);
	void Script_PerformAttack(HSCRIPT, bool, bool, bool, bool, bool, bool, bool);
	void Kill(CDOTABaseAbility *, CDOTA_BaseNPC *, float, bool);
	void Script_Kill(HSCRIPT, HSCRIPT);
	bool IsHero();
	bool IsRealHero();
	bool IsConsideredHero();
	bool IsCreepHero();
	bool IsOther();
	bool IsTower();
	bool IsBuilding();
	bool IsFort();
	bool IsBarracks();
	bool IsCreep();
	bool IsCourier();
	bool IsShop();
	bool IsLaneCreep();
	bool IsBoss();
	bool IsCreature();
	bool IsWard();
	virtual bool IsShrine();
	virtual bool IsAnnouncer();
	uint32 GetUnitType();
	void SetUnitType(uint32);
	virtual bool IsDemon();
	virtual bool IsRoshan();
	bool IsCompanion();
	virtual bool IsPet();
	void SetPartyCompanion(bool);
	bool IsPartyCompanion();
	void SetPartyCompanionAttack(bool);
	bool CanPartyCompanionAttack();
	float GetCompanionDistance();
	void SetCompanionDistance(float);
	void SetCompanionEntity(CBaseEntity *);
	CBaseEntity * GetCompanionEntity();
	bool IsPhantom();
	bool CanBlockCreepSpawn();
	void SetBlockCreepSpawn(bool);
	virtual bool IsZombie();
	virtual bool IsFountain();
	bool IsBot();
	bool IsNeutral();
	void SetNeutralCampType(DOTA_NEUTRAL_TYPE);
	DOTA_NEUTRAL_TYPE GetNeutralCampType();
	bool IsWaitingToSpawn();
	virtual void SetWaitingToSpawn(bool);
	void SetLeashType(int);
	int GetLeashType();
	virtual bool IsAlive();
	virtual void OnNewModel(HModel, HModel);
	virtual void OnPlaybackRateChanged();
	bool CanEntityBeSeenByMyTeam(CBaseEntity *);
	bool Script_CanEntityBeSeenByMyTeam(HSCRIPT);
	bool IsInvisibleTo(CDOTA_BaseNPC *);
	bool IsInvisibleTo(int);
	int GetDayTimeVisionRange();
	int GetBaseDayTimeVisionRange();
	void SetDayTimeVisionRange(int);
	int GetNightTimeVisionRange();
	int GetBaseNightTimeVisionRange();
	void SetNightTimeVisionRange(int);
	int GetCurrentVisionRange();
	int GetCombatClassDefend();
	int GetCombatClassAttack();
	int GetUnitRelationshipClass();
	float GetArmorForDamageType(int);
	void SetDeathXP(int);
	void SetDeathXPExtra(int);
	virtual int GetDeathXP();
	void SetMinimumGoldBounty(int);
	int GetMinimumGoldBounty();
	void SetMaximumGoldBounty(int);
	int GetMaximumGoldBounty();
	virtual int GetGoldBounty();
	virtual float GetAverageGoldBounty();
	int GetTotalPurchasedUpgradeGoldCost();
	int GetFarmClaimPlayerID();
	bool IsControllableByAnyPlayer();
	bool IsOwnedByAnyPlayer();
	bool IsControllableByPlayer(int);
	int GetMainControllingPlayer();
	void SetControllableByPlayer(int, bool);
	void RecalculateControllableStateForNPCS(int, bool, bool, int);
	void UpdateControllableMask();
	bool RunAIWhenControllableByPlayer();
	bool HasUpgradeableAbilities();
	virtual bool CanPreventTreeRegrow();
	virtual CDOTAPlayer * GetPlayerOwner();
	virtual int GetPlayerOwnerID();
	HSCRIPT Script_GetPlayerOwner();
	void ResetPlayerControls();
	bool IsInRangeOfFountain();
	bool IsInRangeOfShop(DOTA_SHOP_TYPE, bool);
	CBaseEntity * GetFountain();
	void AddToHealthRegenCounter(float);
	virtual void StatsRegenerationThink();
	virtual int GetBaseDamageMin();
	virtual int GetBaseDamageMax();
	void SetBaseDamageMin(int);
	void SetBaseDamageMax(int);
	int GetDamageBonus();
	virtual float GetPhysicalArmorValue();
	virtual float GetMagicalArmorValue();
	virtual float GetBonusPhysicalArmor();
	virtual float GetBonusPhysicalArmorFromHero(CDOTA_BaseNPC_Hero *, CModifierParams &);
	virtual float GetPhysicalBlockFromHero(CDOTA_BaseNPC_Hero *, CModifierParams &);
	virtual float GetPhysicalDamageReductionFromHero(CDOTA_BaseNPC_Hero *, CModifierParams &);
	void SetPhysicalArmorBaseValue(float);
	virtual float GetPhysicalArmorBaseValue();
	void SetBaseMagicalResistanceValue(float);
	virtual float GetBaseMagicalResistanceValue();
	virtual float GetStatsBasedManaRegen();
	virtual float GetPercentageBasedManaRegen();
	virtual float GetConstantBasedManaRegen();
	void SetBaseHealthRegen(float);
	virtual float GetBaseHealthRegen();
	virtual float GetHealthRegen();
	void SetBaseManaRegen(float);
	virtual float GetManaRegen();
	virtual float GetManaThinkRegen();
	void SetBaseMoveSpeed(int);
	virtual float GetBaseMoveSpeed();
	virtual bool RequireFacingForActions();
	void SetBaseAttackTime(float);
	float GetBaseAttackTime();
	virtual float GetIncreasedAttackSpeed();
	float GetAttacksPerSecond();
	float GetSecondsPerAttack();
	float GetHasteFactor();
	float GetMinHaste();
	float GetMaxHaste();
	float GetCastPoint(bool);
	float GetAttackSpeed();
	float GetMoveSpeedModifier(float);
	int GetEnemyPriority(int);
	bool IsEnemyPriorityGreater(CDOTA_BaseNPC *, CDOTA_BaseNPC *);
	bool IsEnemyPriorityGreater(int, int);
	bool IsEnemyPriorityEqual(CDOTA_BaseNPC *, CDOTA_BaseNPC *);
	bool IsEnemyPriorityEqual(int, int);
	bool IsEnemyTopPriority(CDOTA_BaseNPC *);
	bool IsEnemyTopPriority(int);
	bool IsIllusion();
	void MakeIllusion();
	bool IsSpecialIllusion();
	bool IsSpecialIllusionWithUltimate();
	bool IsTempestDouble();
	virtual bool IsTemporaryHero();
	virtual bool HasRefcountedModifiers();
	virtual bool IsReincarnating();
	void StartGesture(Activity, float, float, int, IRecipientFilter *, float);
	void RemoveGesture(Activity);
	void FadeGesture(Activity);
	void RemoveAllGestures();
	bool HasStartedGesture(Activity);
	bool HasGestures();
	void Script_StartGesture(int);
	void Script_StartGestureWithPlaybackRate(int, float);
	void Script_RemoveGesture(int);
	void Script_FadeGesture(int);
	void Script_PlayVCD(const char *);
	void ForcePlayActivityOnce(int);
	void StartAbilityAnimation(HSequence, float);
	void StartAttackAnimation(HSequence, float);
	void UpdateAttackAnimSpeed(float);
	void EndAttackAnimation(bool);
	void StartTauntAnimation(HSequence);
	virtual bool UsedGestureBasedAttackAnimation();
	virtual const char * GetOverrideAbilityForCastAttackAnimation();
	bool TriggerSpellAbsorb(CDOTABaseAbility *, bool);
	bool Script_TriggerSpellAbsorb(HSCRIPT);
	bool TriggerModifierDodge();
	void TriggerSpellReflect(CDOTABaseAbility *);
	void Script_TriggerSpellReflect(HSCRIPT);
	SndOpEventGuid_t UnitEmitSound(const char *, float, float *, CRecipientFilter *);
	virtual void ScriptEmitSound(const char *);
	virtual Activity TranslateActivity(Activity);
	void ClearActivityModifiers();
	CUtlSymbol AddActivityModifier(const char *);
	HSequence SelectWeightedSequenceWithEconomy(Activity);
	virtual void CalculateActivityModifiers(Activity);
	bool UpdateWearablesAnimation(Activity, HSequence);
	const char * GetInateAnimationModifier();
	void GetAbilityModifierValues(const char *, float *, float *);
	void CreateAbilities(bool);
	void SwapAbilities(const char *, const char *, bool, bool);
	void SetAbilityHidden(const char *, bool);
	void SetAbilityActive(const char *, bool);
	CDOTABaseAbility * FindAbilityByName(const char *, bool);
	HSCRIPT Script_FindAbilityByName(const char *);
	HSCRIPT Script_GetAbilityByIndex(int);
	int GetAbilityCount();
	CDOTABaseAbility * GetAbilityByIndex(int);
	CDOTABaseAbility * GetUltimateAbility();
	int GetSpecialAbilityIndex(const char *);
	void SetAbilityByIndex(CDOTABaseAbility *, int);
	void Script_SetAbilityByIndex(HSCRIPT, int);
	void RemoveAbilityFromIndex(int);
	CDOTABaseAbility * GetCurrentActiveAbility();
	HSCRIPT Script_GetCurrentActiveAbility();
	int GetLastAbilityPlayer();
	void SetCurrentActiveAbility(CDOTABaseAbility *);
	void CastAbilityOnPosition(Vector, CDOTABaseAbility *, int);
	void Script_CastAbilityOnPosition(Vector, HSCRIPT, int);
	void CastAbilityOnTarget(CBaseEntity *, CDOTABaseAbility *, int);
	void Script_CastAbilityOnTarget(HSCRIPT, HSCRIPT, int);
	void CastAbilityNoTarget(CDOTABaseAbility *, int);
	void Script_CastAbilityNoTarget(HSCRIPT, int);
	void CastAbilityToggle(CDOTABaseAbility *, int);
	void Script_CastAbilityToggle(HSCRIPT, int);
	void CastAbilityImmediately(CDOTABaseAbility *, int);
	void Script_CastAbilityImmediately(HSCRIPT, int);
	void Script_SetOrigin(Vector);
	void Hold();
	void Stop();
	void Continue();
	bool CheckForAbilityRange(Vector);
	void SetCursorCastTarget(CBaseEntity *);
	void SetCursorPosition(Vector);
	void SetCursorTargetingNothing(bool);
	EHANDLE GetCursorCastTarget();
	HSCRIPT Script_GetCursorCastTarget();
	Vector GetCursorPosition();
	bool GetCursorTargetingNothing();
	CDOTA_ModifierManager * GetModifierManager();
	CDOTA_UnitInventory * GetInventory();
	bool HasInventory();
	void SetHasInventory(bool);
	HSCRIPT Script_GetItemInSlot(int);
	void IncrementBKBChargesUsed();
	int GetBKBChargesUsed();
	void SetBKBChargesUsed(int);
	void AddSpecialAbility(int);
	bool HasSpecialAbility(int);
	bool CanUpgradeSpecialAbility(int);
	CDOTABaseAbility * GetSpecialAbility(int);
	int GetSpecialAbilityIndex(CDOTABaseAbility *);
	int GetAlternateSpecialAbilityIndex(int);
	bool IsAllowedToMove();
	bool IsAllowedToBeAttacked();
	bool IsActionLocked();
	bool IsRooted();
	bool IsDisarmed();
	bool IsAttackImmune();
	bool IsSilenced();
	bool IsMuted();
	bool IsStunned();
	bool IsHexed();
	bool IsInvisible();
	bool IsInvulnerable();
	bool IsMagicImmune();
	bool NoUnitCollision();
	bool ProvidesVision();
	bool IsNightmared();
	bool IsBlockDisabled();
	bool IsEvadeDisabled();
	bool IsUnselectable();
	bool IsUnableToTargetEnemies();
	bool IsUnableToMiss();
	bool IsSpeciallyDeniable();
	bool IsCommandRestricted();
	bool NotOnMinimap();
	bool NotOnMinimapForEnemies();
	bool IsLowAttackPriority();
	bool NoHealthBar();
	bool NoTeamSelect();
	bool PassivesDisabled();
	bool IsDominated();
	bool IsBlind();
	bool IsOutOfGame();
	bool IsFakeAlly();
	bool HasInvisibilityBuff();
	virtual bool IsFrozen();
	virtual bool NoTeamMoveTo();
	bool IsPhased();
	bool IsDeniable();
	bool IsMovementImpaired();
	bool HasItemInInventory(const char *);
	int CountItemInInventory(const char *);
	bool HasScepter();
	void SetStolenScepter(bool);
	int GetAttackCapability();
	void SetAttackCapability(int);
	void SetMoveCapability(int);
	bool HasGroundMovementCapability();
	bool HasFlyMovementCapability();
	bool HasMovementCapability();
	bool HasAttackCapability();
	bool HasAnyActiveAbilities();
	virtual bool HasFlyingVision();
	bool IsEnemyInAgressiveStanceRange();
	void UpdateAggressiveStance();
	bool IsInAggressiveStance();
	virtual void OnAggressiveStanceUpdated(bool);
	bool IsInInjuredAggressiveStance();
	bool IsRangedAttacker();
	int GetProjectileSpeed();
	void SetRangedProjectileName(const char *);
	string_t GetRangedProjectileName();
	const char * Script_GetRangedProjectileName();
	void CheckAbilityChannel();
	void SetUnitName(const char *);
	const char * GetUnitName();
	string_t GetUnitString();
	void SetUnitLabelIndex(int);
	void SetUnitLabel(const char *);
	const char * GetUnitLabel();
	uint8 GetUnitLabelIndex();
	void ForceKill(bool);
	void MarkExpired();
	bool IsExpired();
	bool AttackReady();
	void AttackNoEarlierThan(float);
	float TimeUntilNextAttack();
	float GetLastAttackTime();
	float GetTimeUntilAttackPhaseEnds();
	float GetAttackRegulator();
	void SetAttackPhaseEndTime(float);
	float GetAttackAnimationPoint();
	bool IsAttackingEntity(CBaseEntity *);
	bool Script_IsAttackingEntity(HSCRIPT);
	bool IsAttacking();
	virtual void SetAttacking(CBaseEntity *);
	void Script_SetAttacking(HSCRIPT);
	CBaseEntity * GetAttackTarget();
	HSCRIPT Script_GetAttackTarget();
	CDOTA_BaseNPC * GetNPCAttackTarget();
	CDOTA_BaseNPC * GetAggroTarget();
	HSCRIPT Script_GetAggroTarget();
	void SetAggroTarget(CBaseEntity *);
	void Script_SetAggroTarget(HSCRIPT);
	void SetCommandAttackTarget(CBaseEntity *);
	CDOTA_BaseNPC * GetAngerTarget();
	void ClearAngerTarget();
	void SetAngerTarget(CDOTA_BaseNPC *);
	void SetWantsToFlee(bool);
	bool GetWantsToFlee();
	void AlertNearbyUnits(CDOTA_BaseNPC *, EHANDLE);
	void Script_AlertNearbyUnits(HSCRIPT, HSCRIPT);
	CDOTA_BaseNPC * GetAlertTarget();
	void ClearAlertTarget();
	float GetAdditionalBattleMusicWeight();
	void SetAdditionalBattleMusicWeight(float);
	bool GetAllowAllyForceAttack();
	CDOTA_BaseNPC * GetForceAttackTarget();
	HSCRIPT Script_GetForceAttackTarget();
	void SetForceAttackTarget(CDOTA_BaseNPC *, bool);
	void Script_SetForceAttackTarget(HSCRIPT);
	Vector GetTargetLastKnownPosition();
	void SetTargetLastKnownPosition(CBaseEntity *);
	CUtlQueue<Vector, CUtlMemory<Vector, int> > & GetPastGroundHeights();
	bool IsChanneling();
	void Interrupt();
	void InterruptChannel();
	void InterruptMotionControllers(bool);
	void Script_RemoveHorizontalMotionController(HSCRIPT);
	void Script_RemoveVerticalMotionController(HSCRIPT);
	float GetRangeToUnit(CDOTA_BaseNPC *);
	float Script_GetRangeToUnit(HSCRIPT);
	bool IsPositionInRange(Vector, float);
	bool IsEntityInRange(CBaseEntity *, float);
	bool IsEntityInRangeForAttack(CBaseEntity *, float);
	bool IsEntityInRangeForCast(CBaseEntity *, float);
	bool IsEntityExceptToAttack(CBaseEntity *);
	float GetDistanceToEntityForAttack(CBaseEntity *);
	bool ShouldUseCollisionPaddingWithUnit(CDOTA_BaseNPC *);
	float GetCollisionDistanceToUnit(CDOTA_BaseNPC *);
	void QueueOrder(CUnitOrders &);
	CUnitOrders * GetNextQueuedOrder();
	const CUnitOrders * PeekNextQueuedOrder();
	const CUnitOrders * PeekLastQueuedOrder();
	bool HasQueuedOrders();
	void ClearQueuedOrders();
	int QueueLength();
	void SetPseudoQueuedOrder(CUnitOrders &);
	void ClearPseudoQueuedOrder();
	bool ShouldPseudoQueueOrders();
	void UpdatePseudoQueuedOrder(bool);
	bool HasPseudoQueuedOrder();
	void SetCastLock(bool);
	bool IsCamped();
	void SetCamped(bool);
	bool IsReturningHome();
	void SetReturningHome(bool);
	bool ShouldIdleAcquire();
	void SetIdleAcquire(bool);
	virtual bool AlwaysAutoAttack();
	bool CanFollowUnseenUnits();
	void SetCanFollowUnseenUnits(bool);
	CDOTA_Buff * AddNewModifier(CBaseEntity *, CDOTABaseAbility *, const char *, KeyValues *, const CDOTAModifierBuffTableEntry *);
	HSCRIPT Script_AddNewModifier(HSCRIPT, HSCRIPT, const char *, HSCRIPT);
	int Script_GetModifierCount();
	const char * Script_GetModifierNameByIndex(int);
	void RemoveModifierByName(const char *);
	void Script_RemoveModifierByNameAndCaster(const char *, HSCRIPT);
	CDOTA_Buff * FindModifierByName(const char *, CBaseEntity *);
	CDOTA_Buff * FindModifierByName(IModifierFactory *, const char *, CBaseEntity *);
	HSCRIPT Script_FindModifierByName(const char *);
	HSCRIPT Script_FindModifierByNameAndCaster(const char *, HSCRIPT);
	ScriptVariant_t Script_FindAllModifiers();
	ScriptVariant_t Script_FindAllModifiersByName(const char *);
	bool Script_HasModifier(const char *);
	int Script_GetModifierStackCount(const char *, HSCRIPT);
	void Script_SetModifierStackCount(const char *, HSCRIPT, int);
	void PerformMovementLean();
	virtual void GainedModifier(CDOTA_Buff *);
	virtual bool LostModifier(CDOTA_Buff *);
	void RefreshedModifier();
	void GatherStates();
	void AddState(uint);
	void RemoveState(uint);
	bool InState(uint);
	CBaseEntity * GetDropItem();
	void SetDropItem(CBaseEntity *);
	void Script_DropItemAtPositionImmediate(HSCRIPT, Vector);
	bool IsOpposingTeam(int);
	bool CanBeSeenByAnyOpposingTeam();
	int GetOpposingTeamNumber();
	void MakeVisibleToTeam(int, float);
	virtual void MakeVisibleDueToAttack(int);
	float BoundingRadius2D();
	void SetPhantomState(bool);
	void SetSelectionRingVisibility(bool);
	void MakePhantomBlocker();
	bool IsPhantomBlocker();
	virtual float GetObstructionRadius();
	virtual float GetObstructionCollisionPadding();
	virtual ObstructionRelationshipClass_t GetObstructionRelationshipClass();
	virtual const char * GetObstructionName();
	virtual CBaseEntity * GetObstructionBaseEntity();
	virtual ObstructionType_t GetObstructionType();
	virtual ObstructionQuerySetClass_t GetObstructionQuerySetClass();
	void ManageModelChanges();
	void SetOriginalModel();
	void SetOriginalModel(const char *);
	void Script_SetOriginalModel(const char *);
	float GetArmorReductionForDamageType(int);
	bool IsHolding();
	void SetHolding(bool);
	void ClearHolding();
	void UpdateNetworkedTeamVisibility();
	void InitSpeech();
	CDOTA_SpeechHandle * GetSpeech();
	virtual bool CanSpeak(int);
	void AddSpeechBubble(int, const char *, float, unsigned int, unsigned int);
	void DestroyAllSpeechBubbles();
	void SetFirstSpawn(bool);
	float GetModelRadius();
	void AdvanceMovementOrderTracking(bool, Vector, bool);
	void UpdateCurrentOrderDestination(Vector);
	void PrimeResumePreviousMovement();
	void UpdateResumePreviousMovementAfterTeleport(Vector);
	void UpdateResumePreviousMovement(Vector, Vector);
	void ExecuteResumePreviousMovement();
	bool IsPatrolling();
	bool WakesNeutrals();
	void ModifierManagerThink();
	bool DoesUnitCollideAtPosition(Vector, bool);
	virtual const char * GetSoundSet();
	virtual const char * GetSelectionGroup();
	virtual void UpdateVisibility();
	virtual void AddCustomVisibility();
	virtual void PerformTaunt();
	void SetTargetMovedOutOfRange(bool);
	bool DidTargetMoveOutOfRange();
	virtual void EnterShop(int, CBaseEntity *);
	void LeaveShop(int, CBaseEntity *);
	DOTA_SHOP_TYPE GetCurrentShop();
	virtual void OnHealthChanged();
	float GetBotAttackDesire();
	virtual bool OnSaveState(KeyValues *);
	virtual bool OnLoadState(KeyValues *);
	virtual bool WantsToSaveWithLifetime();
	bool CanAttackBoss();
	virtual void OnDying();
	virtual void OnDeath();
	virtual void OnAlive();
	virtual void AttachAmbientEffects();
	bool WasKilledPassively();
	virtual void UpdateOnModelChange(bool);
	virtual bool ShouldPerformLean();
	CDOTAAnimState * GetAnimState();
	void CheckIfActivityModifiersDirty();
	void MarkActivityModifiersDirty();
	bool IsActivityModifiersDirty();
	virtual void EquipWearable(CEconWearable *);
	virtual void NotifyWearablesOfModelChange(bool);
	void MarkBlinkDaggerTime();
	const char * FindReplacementSound(const char *);
	virtual void ModifyOrAppendCriteria(CResponseCriteriaSet &);
	void SetHasAggressiveStance(int);
	virtual bool UnitCanRespawn();
	void SetUnitCanRespawn(bool);
	void Script_RespawnUnit();
	bool CheckForCollisionsWithNPCs(const Vector &, CollisionResultList_t *, bool, bool);
	void InvalidateLocalNPCObstructionCache();
	virtual void OnInventoryContentsChanged();
	virtual void OnItemEquipped(CDOTA_Item *);
	float GetPercentInvisible();
	void AngerNearbyUnits();
	float GetCreationTime();
	bool ShouldFacePlayer();
	void SetFacePlayer(bool);
	void SetChaseTargetMobile(bool);
	bool DoesChaseTargetMove();
	float GetChaseDistance();
	void SetChaseEntity(CBaseEntity *);
	CBaseEntity * GetChaseEntity();
	void AddNoDraw();
	void RemoveNoDraw();
	void SetAbilityViaDraft(int, const char *);
	virtual bool IsInventoryEnabled();
	const CAssetModifierContainer & GetAssetModifierContainer();
	bool HasAssetModifierContainer();
	virtual void ModifyEconParticles(int, Color *);
	Color GetColorGemColor();
	void Script_Purge(bool, bool, bool, bool, bool);
	bool IsGeneratedByEconItem();
	CEconItemView * GetGeneratingEconItem();
	void OnGoalEntityReached(EHANDLE, EHANDLE);
	void ShowAmbientParticles();
	void HideAmbientParticles();
	void RecreateAmbientParticles();
	void SetForceDisableParticles(bool);
	virtual bool UseServerSideAnimation();
	bool WasSeenRecently(int);
	virtual void BuildAttachedParticleFilter(AttachedParticleFilter_t *);
	void LoadVoiceFile(const char *, const CEntityPrecacheContext *);
	int GetEconSpecifyingPlayerID();
	virtual bool IsMoving();
	void EnableAutoStyles();
	void ClearAutoStyleCriteria();
	const CAutoStyleCriteria * GetAutoStyleCriteria();
	void SetAutoStyleCriteria(CUtlStringToken, float);
	void CopyAutoStyleCriteriaFrom(CDOTA_BaseNPC *);
	void SetStyleOverride(style_index_t);
	virtual void HandleAnimEvent(animevent_t *);
	void UpdateAssetModifiers();
	virtual void OnAssetModifiersUpdated();
	virtual void BuildWearableSpawnList(const CEntityKeyValues *, CEntitySpawnerContextBase *, CUtlVector<WearableSpawnInfo_t, CUtlMemory<WearableSpawnInfo_t, int> > *);
	virtual void UpdateNonCacheableWearableData(CEntitySpawnerContextBase *);
	virtual void LoadNPCData(int, const CEntityKeyValues *, CDotaDict *);
	void SharedLoadNPCData(const CEntityKeyValues *);
	void ClearAbilities();
	bool LoadUnitsFile(const CEntityKeyValues *);
	void ComputeColorGemValue(Color *);

private:

	virtual void SetHealth(int);
	void Script_SetCursorCastTarget(HSCRIPT);
	void PrecacheShared(const CEntityPrecacheContext *);
	void PrecacheWearables(const CEntityPrecacheContext *);
	void SpawnWearables(const CEntityKeyValues *);
	void OnSpawnWearable(CEntitySpawnerContext<CBaseEntity> *, CBaseEntity *, CEconItemView *, item_definition_index_t, bool, bool);
	void BuildWearableSpawnListInternal(const CEntityKeyValues *, CEntitySpawnerContextBase *);
	void FreeWearableSpawnListInternal();
	void ApplyWearableModifiers();
	CEconItemView * ComputeGeneratingItem(const CEntityKeyValues *);
	virtual CEconItemView * ComputeOverriddenGeneratingItem(const CEntityKeyValues *);
	CDOTAWearableItem * FindWearableItemForSlotType(int);
	virtual int GetEconSpecifyingPlayerOverrideID();
	bool ShouldWearableMatchAnimation(CDOTAWearableItem *);

protected:

	virtual void UpdateServerSideAnimation();
	void UpdateDamageEventQueue();
	NetworkUserGroupProxyInfo_t * GetExcluderAbilities();
	int GetOffset_m_ModifierManager();
	int GetOffset_m_Inventory();
	bool ShouldUseNeutralCreepBehavior();
	CDOTAPseudoRandom * AddNewPseudoRandomNode(DotaPseudoRandomType);
	CDOTAPseudoRandom * GetPseudoRandomNode(DotaPseudoRandomType);
	bool PreventCritOrBashAnimations();
	virtual bool ShouldDoFlyHeightVisual();
	void SetShouldDoFlyHeightVisual(bool);
	virtual bool IsFlyingVisually();
	void SetCustomHealthLabel(const char *, int, int, int);
	int GetArcanaLevel();
	float GetPathfindingSearchDepthScale();
	virtual ScriptClassDesc_t * GetScriptDesc();
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
	// vtable[11] UpdateOnRemove
	// vtable[222] SetModelScale
	// vtable[375] GetIntentionInterface
	// vtable[376] GetLocomotionInterface
	// vtable[377] GetBodyInterface
	// vtable[378] OnIdleChanged
	// vtable[212] IsPartOfFOWSystem
	// vtable[5] Connect
	// vtable[379] IsDebuggingOverride
	// vtable[380] UsesConstantGesture
	// vtable[381] GetConstantGestureWeight
	// vtable[382] GetConstantGestureCycle
	// vtable[383] GestureCycleComplete
	// vtable[226] OnSequenceFinished
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[384] CalculateGenericBonuses
	// vtable[70] ChangeTeam
	// vtable[385] UnitThink
	// vtable[386] GetIdealSpeed
	// vtable[387] DeathComplete
	// vtable[128] Teleport
	// vtable[388] SetLevel
	// vtable[389] OnDominated
	// vtable[390] GetCloneSource
	// vtable[391] CanAcceptTargetToAttack
	// vtable[10] Activate
	// vtable[392] InitialSpawn
	// vtable[65] ShouldTransmit
	// vtable[92] Event_Killed
	// vtable[79] DrawDebugTextOverlays
	// vtable[64] UpdateTransmitState
	// vtable[144] MyNPCPointer
	// vtable[319] OnTakeDamage_Alive
	// vtable[90] OnTakeDamage
	// vtable[393] Input_MoveTo
	// vtable[394] Input_MoveToAttack
	// vtable[395] GetRangedProjectileAttachment
	// vtable[396] SpendGold
	// vtable[397] GetGold
	// vtable[398] SetStartingValues
	// vtable[399] CanBeAutoAttacked
	// vtable[400] IsShrine
	// vtable[401] IsAnnouncer
	// vtable[402] IsDemon
	// vtable[403] IsRoshan
	// vtable[404] IsPet
	// vtable[405] IsZombie
	// vtable[406] IsFountain
	// vtable[407] SetWaitingToSpawn
	// vtable[408] IsAlive
	// vtable[39] OnNewModel
	// vtable[224] OnPlaybackRateChanged
	// vtable[409] GetDeathXP
	// vtable[410] GetGoldBounty
	// vtable[411] GetAverageGoldBounty
	// vtable[412] CanPreventTreeRegrow
	// vtable[413] GetPlayerOwner
	// vtable[414] GetPlayerOwnerID
	// vtable[415] StatsRegenerationThink
	// vtable[416] GetBaseDamageMin
	// vtable[417] GetBaseDamageMax
	// vtable[418] GetPhysicalArmorValue
	// vtable[419] GetMagicalArmorValue
	// vtable[420] GetBonusPhysicalArmor
	// vtable[421] GetBonusPhysicalArmorFromHero
	// vtable[422] GetPhysicalBlockFromHero
	// vtable[423] GetPhysicalDamageReductionFromHero
	// vtable[424] GetPhysicalArmorBaseValue
	// vtable[425] GetBaseMagicalResistanceValue
	// vtable[426] GetStatsBasedManaRegen
	// vtable[427] GetPercentageBasedManaRegen
	// vtable[428] GetConstantBasedManaRegen
	// vtable[429] GetBaseHealthRegen
	// vtable[430] GetHealthRegen
	// vtable[431] GetManaRegen
	// vtable[432] GetManaThinkRegen
	// vtable[433] GetBaseMoveSpeed
	// vtable[434] RequireFacingForActions
	// vtable[435] GetIncreasedAttackSpeed
	// vtable[436] IsTemporaryHero
	// vtable[437] HasRefcountedModifiers
	// vtable[438] IsReincarnating
	// vtable[439] UsedGestureBasedAttackAnimation
	// vtable[440] GetOverrideAbilityForCastAttackAnimation
	// vtable[187] ScriptEmitSound
	// vtable[441] TranslateActivity
	// vtable[442] CalculateActivityModifiers
	// vtable[443] IsFrozen
	// vtable[444] NoTeamMoveTo
	// vtable[445] HasFlyingVision
	// vtable[446] OnAggressiveStanceUpdated
	// vtable[447] SetAttacking
	// vtable[448] AlwaysAutoAttack
	// vtable[449] GainedModifier
	// vtable[450] LostModifier
	// vtable[451] MakeVisibleDueToAttack
	// vtable[452] GetObstructionRadius
	// vtable[453] GetObstructionCollisionPadding
	// vtable[454] GetObstructionRelationshipClass
	// vtable[455] GetObstructionName
	// vtable[456] GetObstructionBaseEntity
	// vtable[457] GetObstructionType
	// vtable[458] GetObstructionQuerySetClass
	// vtable[459] CanSpeak
	// vtable[460] GetSoundSet
	// vtable[461] GetSelectionGroup
	// vtable[213] UpdateVisibility
	// vtable[462] AddCustomVisibility
	// vtable[463] PerformTaunt
	// vtable[464] EnterShop
	// vtable[465] OnHealthChanged
	// vtable[466] OnSaveState
	// vtable[467] OnLoadState
	// vtable[468] WantsToSaveWithLifetime
	// vtable[469] OnDying
	// vtable[470] OnDeath
	// vtable[471] OnAlive
	// vtable[472] AttachAmbientEffects
	// vtable[473] UpdateOnModelChange
	// vtable[474] ShouldPerformLean
	// vtable[475] EquipWearable
	// vtable[476] NotifyWearablesOfModelChange
	// vtable[159] ModifyOrAppendCriteria
	// vtable[477] UnitCanRespawn
	// vtable[478] OnInventoryContentsChanged
	// vtable[479] OnItemEquipped
	// vtable[480] IsInventoryEnabled
	// vtable[206] ModifyEconParticles
	// vtable[218] UseServerSideAnimation
	// vtable[481] BuildAttachedParticleFilter
	// vtable[174] IsMoving
	// vtable[229] HandleAnimEvent
	// vtable[482] OnAssetModifiersUpdated
	// vtable[483] BuildWearableSpawnList
	// vtable[484] UpdateNonCacheableWearableData
	// vtable[485] LoadNPCData
	// vtable[157] SetHealth
	// vtable[486] ComputeOverriddenGeneratingItem
	// vtable[487] GetEconSpecifyingPlayerOverrideID
	// vtable[217] UpdateServerSideAnimation
	// vtable[488] ShouldDoFlyHeightVisual
	// vtable[489] IsFlyingVisually
	// vtable[4] GetScriptDesc
	// sizeof = 4504
};

// src/game/server/dota/npc/dota_npc_base.h:2118
class CDOTABaseNPCCollector {
	int m_iTeamFilter;  // +0x18
	int m_iTypeFilter;  // +0x1c
	int m_iFlagFilter;  // +0x20
	int m_myTeam;  // +0x24
	CDOTABaseNPCCollector(int, int, int, int);
	bool operator()(INextBot *);
	~CDOTABaseNPCCollector();

	// sizeof = 40
};

// src/game/server/dota/npc/dota_npc_base.h:2152
class CDOTA_BaseNPC_Additive : public CDOTA_BaseNPC {
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

public:

private:

	CDOTA_BaseNPC_Additive & operator=(CDOTA_BaseNPC_Additive &);
	CDOTA_BaseNPC_Additive & operator=(CDOTA_BaseNPC_Additive &);
	CDOTA_BaseNPC_Additive(CDOTA_BaseNPC_Additive &);
	CDOTA_BaseNPC_Additive(CDOTA_BaseNPC_Additive &);
	CDOTA_BaseNPC_Additive();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTA_BaseNPC_Additive();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 4504
};

// src/game/server/dota/npc/dota_npc_base.h:2161
class CDOTAPASFilter : public CPASFilter {
public:

	CDOTAPASFilter(CDOTAPASFilter &);
	CDOTAPASFilter(const CDOTAPASFilter &);
	CDOTAPASFilter(CDOTA_BaseNPC *);
	virtual ~CDOTAPASFilter();

	// sizeof = 312
};

// src/game/server/dota/npc/dota_npc_base.h:2173
class CDOTAPVSFilter : public CRecipientFilter {
public:

	CDOTAPVSFilter(const Vector &);
	void AddRecipientsByDOTAPVS(const Vector &);
	virtual ~CDOTAPVSFilter();

	// sizeof = 312
};
