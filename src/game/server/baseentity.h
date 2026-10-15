// Reconstructed from DWARF by pahole; not original source.

// src/game/server/baseentity.h:126
struct ResponseContext_t {
private:

	static datamap_t m_DataMap;

	string_t m_iszName;  // +0x0
	string_t m_iszValue;  // +0x8
	float m_fExpirationTime;  // +0x10
	ResponseContext_t();

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	ResponseContext_t & operator=(const ResponseContext_t &);

	// sizeof = 24
};

// src/game/server/baseentity.h:177
class CEntityDamageHandlerProxy : public IDamageHandler {
public:

	CEntityDamageHandlerProxy();
	virtual bool RejectDamage(CBaseEntity *, const CTakeDamageInfo &);
	virtual void ModifyDamage(CBaseEntity *, CTakeDamageInfo &);
	virtual void ReactToDamage(CBaseEntity *, const CTakeDamageInfo &);

	// vtable[1] RejectDamage
	// vtable[2] ModifyDamage
	// vtable[3] ReactToDamage
	// sizeof = 8
};

// src/game/server/baseentity.h:190
class CBaseEntity : public CGameEntity {
	enum UseType {
		USE_DUPLICATE = 0,
		USE_DOWNGRADE = 0x1,
		USE_NORMAL = 0x2,
		USE_UPGRADE = 0x3,
		USE_NO_GLOW = 0x4,
	};

	enum thinkmethods_t {
		THINK_FIRE_ALL_FUNCTIONS = 0,
		THINK_FIRE_BASE_ONLY = 0x1,
		THINK_FIRE_ALL_BUT_BASE = 0x2,
	};

	class NetworkVar_m_iHealth {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iMaxHealth {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_lifeState {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_takedamage {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_MoveCollide {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_MoveType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flAnimTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flSimulationTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flCreateTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bClientSideRagdoll {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_ubInterpolationFrame {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iTeamNum {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_spawnflags {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nNextThinkTick {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_fFlags {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_vecAbsVelocity {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_vecBaseVelocity {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hEffectEntity {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hOwnerEntity {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_fEffects {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hGroundEntity {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flFriction {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flElasticity {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_Gender {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nWaterLevel {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bSimulatedEveryTick {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bAnimatedEveryTick {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nMinCPULevel {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nMaxCPULevel {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nMinGPULevel {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nMaxGPULevel {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iTextureFrameIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flNavIgnoreUntilTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

protected:

	Storage_t m_CBodyComponent;  // +0x30

	static datamap_t m_DataMap;

	static bool sm_bAccurateTriggerBboxChecks;
	int m_iCurrentThinkContext;  // +0xb0
	int m_nLastThinkTick;  // +0xb4
private:

	float m_lastNetworkChange;  // +0xc8
	int touchStamp;  // +0xcc
	BASEPTR m_think;  // +0xd0
protected:

	string_t m_iszResponseContext;  // +0xf8
	ENTITYFUNCPTR m_pfnTouch;  // +0x100
	USEPTR m_pfnUse;  // +0x110
	ENTITYFUNCPTR m_pfnBlocked;  // +0x120
	BASEPTR m_pfnMoveDone;  // +0x130

	static bool sm_bDisableTouchFuncs;
private:

protected:

	bool m_bIsNPC;  // +0x152
	bool m_bIsDOTANPC;  // +0x153
private:

	unsigned char m_nWaterTouch;  // +0x156
	unsigned char m_nSlimeTouch;  // +0x157
	string_t m_target;  // +0x158
	float m_flMoveDoneTime;  // +0x160
	EHANDLE m_hDamageFilter;  // +0x164
	string_t m_iszDamageFilterName;  // +0x168

	static bool m_bAllowPrecache;
protected:

	string_t m_iGlobalname;  // +0x180
	int m_iSentToClients;  // +0x188
	float m_flSpeed;  // +0x18c
	int m_iHammerID;  // +0x190

	static bool s_bAbsQueriesValid;
	static bool s_bPreventingSetAnimRunAnimEvents;
	int m_nSimulationTick;  // +0x19c
	COutputEvent m_OnKilled;  // +0x1a0
private:

	class Cm_vecVelocityInitializer : public INetworkStateChangedRouter {
	public:

		Cm_vecVelocityInitializer(Cm_vecVelocityInitializer &);
		Cm_vecVelocityInitializer(const Cm_vecVelocityInitializer &);
		Cm_vecVelocityInitializer & operator=(Cm_vecVelocityInitializer &);
		Cm_vecVelocityInitializer & operator=(const Cm_vecVelocityInitializer &);
		~Cm_vecVelocityInitializer();
		Cm_vecVelocityInitializer();
		virtual void NetworkStateChanged(void *, int32, int32, ChangeAccessorFieldPathIndex_t);
		virtual void NetworkStateChangedLog(const char *);

	private:

		ThisClass * GetOuter();
		const ThisClass * GetOuter();

		// vtable[0] NetworkStateChanged
		// vtable[1] NetworkStateChangedLog
		// sizeof = 8
	};

	int m_nPushEnumCount;  // +0x20c
	bool m_bSessionPersister;  // +0x239
	bool m_bDisableLowViolence;  // +0x23a
	unsigned char m_nWaterType;  // +0x23b
	int m_iEFlags;  // +0x23c
	string_t m_AIAddOn;  // +0x270
	COutputEvent m_OnUser1;  // +0x278
	COutputEvent m_OnUser2;  // +0x290
	COutputEvent m_OnUser3;  // +0x2a8
	COutputEvent m_OnUser4;  // +0x2c0
	int m_iInitialTeamNum;  // +0x2d8
	float m_flGroundChangeTime;  // +0x2ec
	float m_flGravity;  // +0x2f0
	bool m_bNetworkQuantizeOriginAndAngles;  // +0x2f4
	bool m_bLagCompensate;  // +0x2f5

	float m_flOverriddenFriction;  // +0x2f8
	EHANDLE m_pBlocker;  // +0x2fc
	float m_flLocalTime;  // +0x300
	float m_flVPhysicsUpdateLocalTime;  // +0x304

	static int m_nPredictionRandomSeed;
	static CBasePlayer * m_pPredictionPlayer;
	static bool sm_bDatadescValidating;
	typedef CBaseEntity ThisClass;

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
	CBaseEntity & operator=(CBaseEntity &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CBodyComponent * GetComponent_CBodyComponent();
	const CBodyComponent * GetComponent(const CBodyComponent *);
	CBodyComponent * GetComponent(CBodyComponent *);
	void EntCmpOverride_CBodyComponent();
	CBodyComponentPoint * GetComponent_CBodyComponentPoint();
	const CBodyComponentPoint * GetComponent(const CBodyComponentPoint *);
	CBodyComponentPoint * GetComponent(CBodyComponentPoint *);
	virtual bool RejectDamage(const CTakeDamageInfo &);
	virtual void ModifyDamage(CTakeDamageInfo &);
	virtual void ReactToDamage(const CTakeDamageInfo &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	bool PerformDataDescValidation(ValidationSpewType_t, ValidationResult_t &);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CBaseEntity();
	CBaseEntity(CBaseEntity &);
	virtual ~CBaseEntity();
	void * operator new(size_t);
	void * operator new(size_t, int, const char *, int);
	void operator delete(void *);
	void operator delete(void *, int, const char *, int);
	void * operator new(size_t, void *);

protected:

	virtual void Connect();
	virtual void AddedToEntityDatabase();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void SpawnShared(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	CBaseEntity * Create(const char *, const Vector &, const QAngle &, CBaseEntity *);
	CBaseEntity * CreateNoSpawn(const char *, const Vector &, const QAngle &, CBaseEntity *);
	CEntityIndex entindex();
	CBaseEntity * Instance(CEntityIndex);
	virtual void Precache(const CEntityPrecacheContext *);
	void SetAbsQueriesValid(bool);
	bool IsAbsQueriesValid();
	void PreventSetAnimRunAnimEvents(bool);
	bool IsPreventingSetAnimRunAnimEvents();
	bool IsDatadescValidating();
	void ScriptInputKill();
	const Vector & ScriptGetForward();
	const Vector & ScriptGetRight();
	const Vector & ScriptGetUp();
	HSCRIPT ScriptGetModelKeyValues();
	const char * ScriptGetModelName();
	HSCRIPT ScriptGetMoveParent();
	HSCRIPT ScriptGetRootMoveParent();
	HSCRIPT ScriptFirstMoveChild();
	HSCRIPT ScriptNextMovePeer();
	HSCRIPT ScriptGetOwnerEntity();
	HSCRIPT Script_GetChildren();
	void ScriptSetParent(HSCRIPT, const char *);
	void ScriptSetConstraint(Vector);
	const Vector & ScriptEyePosition();
	void ScriptSetAngles(float, float, float);
	const Vector & ScriptGetAngles();
	const QAngle & ScriptEyeAngles();
	void ScriptSetOrigin(const Vector &);
	void ScriptSetLocalAngles(float, float, float);
	const QAngle & ScriptGetLocalAngles();
	void ScriptSetLocalOrigin(const Vector &);
	const Vector & ScriptGetLocalOrigin();
	void ScriptSetForward(const Vector &);
	const Vector & ScriptGetBoundingMins();
	const Vector & ScriptGetBoundingMaxs();
	ScriptVariant_t ScriptGetBounds();
	const Vector & ScriptGetLocalAngularVelocity();
	void ScriptSetLocalAngularVelocity(float, float, float);
	void ScriptAddEffects(int);
	void ScriptRemoveEffects(int);
	void ScriptSetAttributeFloatValue(const char *, float);
	float ScriptGetAttributeFloatValue(const char *, float);
	void ScriptSetAttributeIntValue(const char *, int);
	float ScriptGetAttributeIntValue(const char *, int);
	bool ScriptHasAttribute(const char *);
	void ScriptDeleteAttribute(const char *);
	virtual ICollideable * GetCollideable();
	HModel GetModel();
	string_t GetModelName();
	const CModel * GetModelData();
	virtual void PopulatePoseParameters();
	virtual void OnNewModel(HModel, HModel);
	CBaseEntity * GetOwnerEntity();
	virtual void SetOwnerEntity(CBaseEntity *);
	CBaseEntity * GetEffectEntity();
	void SetEffectEntity(CBaseEntity *);
	HSCRIPT GetScriptOwnerEntity();
	void SetScriptOwnerEntity(HSCRIPT);
	bool IsServer();
	bool IsClient();
	const char * GetDLLType();
	int GetEFlags();
	void SetEFlags(int);
	void AddEFlags(int);
	void RemoveEFlags(int);
	bool IsEFlagSet(int);
	bool IsBaseModelEntity();
	virtual CBaseModelEntity * GetBaseModelEntity();
	virtual const CBaseModelEntity * GetBaseModelEntity();
	virtual CBaseAnimating * GetBaseAnimating();
	virtual const CBaseAnimating * GetBaseAnimating();
	virtual CBaseAnimatingOverlay * GetBaseAnimatingOverlay();
	virtual const CBaseAnimatingOverlay * GetBaseAnimatingOverlay();
	virtual Class_T Classify();
	CCollisionProperty * OptCollisionProp();
	virtual bool ShouldSavePhysics();
	virtual bool CreateVPhysics();
	virtual void DrawVCollide(bool);
	virtual void VPhysicsDestroyObject();
	virtual void VPhysicsUpdate(IPhysicsObject *);
	IPhysicsObject * VPhysicsGetObject();
	HPhysicsBody VPhysicsBody();
	IVPhysics2World * VPhysicsWorld();
	IPhysAggregateInstance * VPhysicsGetAggregate();
	float VPhysicsGetTotalMass();
	virtual int VPhysicsGetObjectList(IPhysicsObject * *, int);
	virtual bool VPhysicsIsFlesh();
	void PhysicsEnableMotion(bool);
	VPhysicsMotionType_t PhysicsGetMotionType();
	void VPhysicsUpdatePusher(IPhysicsObject *);
	virtual int VPhysicsTakeDamage(const CTakeDamageInfo &);
	virtual void VPhysicsShadowCollision(int, gamevcollisionevent_t *);
	virtual void VPhysicsCollision(int, gamevcollisionevent_t *);
	virtual void VPhysicsFriction(IPhysicsObject *, float, CUtlStringToken, CUtlStringToken);
	virtual void UpdatePhysicsShadowToCurrentPosition(float);
	virtual bool ForceVPhysicsCollide(CBaseEntity *);
	SpawnGroupHandle_t GetPhysicalSpawnGroupHandle();
	const Vector & GetAbsOrigin();
	const QAngle & GetAbsAngles();
	float GetAbsScale();
	void SetAbsScale(float);
	float GetLocalScale();
	void SetLocalScale(float);
	void ComputeAbsPosition(const Vector &, Vector *);
	void ComputeAbsDirection(const Vector &, Vector *);
	const Vector & GetLocalOrigin();
	const QAngle & GetLocalAngles();
	void SetAbsOrigin(const Vector &);
	void SetLocalOrigin(const Vector &);
	void SetAbsAngles(const QAngle &);
	void SetLocalAngles(const QAngle &);
	void SetLocalTransform(const matrix3x4_t &);
	void SetEntityToWorldTransform(const matrix3x4_t &);
	virtual void GetVectors(Vector *, Vector *, Vector *);
	Vector Forward();
	Vector Left();
	Vector Up();
	MoveType_t GetMoveType();
	void SetMoveType(MoveType_t, MoveCollide_t);
	MoveCollide_t GetMoveCollide();
	void SetMoveCollide(MoveCollide_t);
	const Vector & WorldAlignMins();
	const Vector & WorldAlignMaxs();
	void WorldSpaceAABB(Vector *, Vector *);
	void WorldSpaceSurroundingBounds(Vector *, Vector *);
	void WorldSpaceTriggerBounds(Vector *, Vector *);
	void RandomPointInBounds(const Vector &, const Vector &, Vector *);
	const Vector & NormalizedToCollisionSpace(const Vector &, Vector *);
	const Vector & NormalizedToWorldSpace(const Vector &, Vector *);
	void CalcNearestPoint(const Vector &, Vector *);
	float CalcDistanceFromPoint(const Vector &);
	float CalcSqrDistanceFromPoint(const Vector &);
	Vector WorldAlignSize();
	bool IsPointSized();
	virtual Vector WorldSpaceCenter();
	float BoundingRadius();
	virtual void ComputeWorldSpaceSurroundingBox(Vector *, Vector *);
	const Vector & CollisionMins();
	const Vector & CollisionMaxs();
	Vector CollisionSize();
	Vector CollisionCenter();
	matrix3x4_t & EntityToWorldTransform();
	const matrix3x4_t & EntityToWorldTransform();
	const matrix3x4_t EntityToWorldTransformUnscaled();
	void TransformPointEntityToWorld(const Vector &, Vector *);
	void TransformPointWorldToEntity(const Vector &, Vector *);
	void RotateVectorEntityToWorld(const Vector &, Vector *);
	void RotateVectorWorldToEntity(const Vector &, Vector *);
	matrix3x4a_t & GetParentToWorldTransform(matrix3x4a_t &);
	void AddFlag(int);
	void RemoveFlag(int);
	void ToggleFlag(int);
	int GetFlags();
	void ClearFlags();
	bool HasSpawnFlags(int);
	int GetSpawnFlags();
	void AddSpawnFlags(int);
	void RemoveSpawnFlags(int);
	void ClearSpawnFlags();
	void SetBlocksLOS(bool);
	bool BlocksLOS();
	void SetAIWalkable(bool);
	bool IsAIWalkable();
	bool IsFloating();
	bool IsSimulatedEveryTick();
	void SetSimulatedEveryTick(bool);
	bool IsAnimatedEveryTick();
	void SetAnimatedEveryTick(bool);
	bool IsStandable();
	CEntityIndex GetSoundSourceIndex();
	int SetTransmitState(int);
	int GetTransmitState();
	virtual int UpdateTransmitState();
	int DispatchUpdateTransmitState();
	virtual int ShouldTransmit(const CGameCheckTransmitInfo *);
	virtual void SetTransmit(CCheckTransmitInfo *, bool);
	void IncrementTransmitStateOwnedCounter();
	void DecrementTransmitStateOwnedCounter();
	void RecalcHasPlayerChildBit();
	bool DoesHavePlayerChild();
	void SetNavIgnore(float);
	void ClearNavIgnore();
	bool IsNavIgnored();
	bool BecomeSteadyStateForPlayer(CBasePlayer *, CEntityIndex, float);
	bool IsSteadyStateForPlayer(CEntityIndex);
	void LeaveSteadyStateForPlayer(CEntityIndex);
	bool DetectInSkybox();
	CSkyCamera * GetEntitySkybox();
	virtual void PostClientActive();
	void ValidateEntityConnections();
	void FireNamedOutput(const char *, CBaseEntity *, CBaseEntity *, float);
	CBaseEntityOutput * FindNamedOutput(const char *);

private:

	void TransformStepData_WorldToParent(CBaseEntity *);
	void TransformStepData_ParentToParent(CBaseEntity *, CBaseEntity *);
	void TransformStepData_ParentToWorld(CBaseEntity *);
	int ComputeLatchTickInterval(InterpolatedVarPhase_t, EInterpolatedVarFlagBits);
	void SetStasis(bool);
	bool IsInStasis();

protected:

	void EnterStasis();
	void LeaveStasis();
	void RebaseTimeEntriesForStasis(bool);
	void RemoveDeferred();
	CBaseEntity * GetMoveParent();
	CBaseEntity * GetRootMoveParent();
	CBaseEntity * FirstMoveChild();
	CBaseEntity * NextMovePeer();
	virtual CBaseEntity * GetRootPVSParent();
	virtual void OnBoneTransformsChanged();
	CTeam * GetTeam();
	int GetTeamNumber();
	int Script_GetTeamNumber();
	virtual void ChangeTeam(int);
	const char * TeamID();
	bool InSameTeam(CBaseEntity *);
	bool IsInTeam(CTeam *);
	void FollowEntity(CBaseEntity *, bool);
	void Script_FollowEntity(HSCRIPT, bool);
	void StopFollowingEntity();
	bool IsFollowingEntity();
	CBaseEntity * GetFollowedEntity();
	virtual UseType GetUseType(CBaseEntity *);
	virtual CBaseModelEntity * GetGlowEntity();
	virtual IResponseSystem * GetResponseSystem();
	virtual void DispatchResponse(const char *, CResponseCriteriaSet *);
	virtual int Save(ISave &);
	virtual int Restore(IRestore &);
	virtual void OnSave();
	virtual void OnRestore();
	virtual int ObjectCaps();
	virtual bool IsSaveNonNetworkable();
	virtual void ApplySessionPersisterValues(KeyValues &, KeyValues &);
	virtual void LoadSessionPersisterValues(KeyValues &);
	bool IsSessionPersister();
	void SetSessionPersister(bool);
	virtual bool ShouldDraw();

private:

	void InputAlternativeSorting(inputdata_t &);
	void InputSetParent(inputdata_t &);
	void SetParentAttachmentHelper(const char *, const char *, bool);
	void InputSetParentAttachment(inputdata_t &);
	void InputSetParentAttachmentMaintainOffset(inputdata_t &);
	void InputClearParent(inputdata_t &);
	void InputSetTeam(inputdata_t &);
	void InputUse(inputdata_t &);
	void InputKill(inputdata_t &);
	void InputKillHierarchy(inputdata_t &);
	void InputSetDamageFilter(inputdata_t &);
	void InputDispatchEffect(inputdata_t &);
	void InputEnableDamageForces(inputdata_t &);
	void InputDisableDamageForces(inputdata_t &);
	void InputAddContext(inputdata_t &);
	void InputRemoveContext(inputdata_t &);
	void InputClearContext(inputdata_t &);
	void InputDispatchResponse(inputdata_t &);
	void InputDisableShadow(inputdata_t &);
	void InputEnableShadow(inputdata_t &);
	void InputFireUser1(inputdata_t &);
	void InputFireUser2(inputdata_t &);
	void InputFireUser3(inputdata_t &);
	void InputFireUser4(inputdata_t &);
	void InputSetKinematic(CEntityInstance *, CEntityInstance *, CEntityInstance *, const CVariant &);
	void InputSetScale(CEntityInstance *, CEntityInstance *, CEntityInstance *, const float &);
	void Script_Trigger();
	virtual void DrawEntityDebugOverlays(uint64);
	void EntityText(int, const char *, float, int, int, int, int);
	void EntityText(int, const char *, float, Color);
	virtual int DrawDebugTextOverlays(uint64, int);
	void DrawBBoxOverlay(float);
	void DrawRBoxOverlay();
	void DrawAbsBoxOverlay();
	void DrawAutoAimOverlay();
	void DrawAxisOverlay();
	void DrawInputOverlay(const char *, CBaseEntity *, variant_t);
	void DrawOutputOverlay(EntityIOConnection_t *);
	void AddTimedOverlay(const char *, int);
	int GetTextureFrameIndex();
	void SetTextureFrameIndex(int);
	int GetHammerID();
	virtual const char * GetHammerUniqueID();
	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	virtual ChangeAccessorFieldPathIndex_t AddChangeAccessorPath(const CFieldPath &);
	virtual CEntityIndex RequiredEdictIndex();
	CGameSceneNode * GetGameSceneNode();
	const CGameSceneNode * GetGameSceneNode();

protected:

	int GetIndexForThinkContext(CUtlStringToken);
	void DispatchScriptThink(int);
	void Script_SetContextThink(const char *, HSCRIPT, float);
	void FakeScriptThinkFunc();
	void RemoveExpiredConcepts();
	bool ContextExpired(int);
	virtual void AddContext(const char *);
	virtual void RemoveContext(const char *);
	virtual void ClearAllContexts();
	void AddContext(const char *, const char *, float);
	void AddContextForScript(const char *, const char *, float);
	void AddContextForScriptNumeric(const char *, float, float);
	int GetContextCount();
	int FindContextByName(const char *);
	const char * GetContextName(int);
	const char * GetContextValue(int);
	const ResponseContext_t * GetContextData(int);
	ScriptVariant_t GetContextForScript(const char *);
	void GatherCriteria(CResponseCriteriaSet &);
	void ScriptGatherCriteria(HSCRIPT);
	virtual void DeathNotice(CBaseEntity *);
	virtual bool ShouldAttractAutoAim(CBaseEntity *);
	virtual float GetAutoAimRadius();
	virtual Vector GetAutoAimCenter();
	virtual bool PassesDamageFilter(const CTakeDamageInfo &);
	virtual bool CanBeHitByMeleeAttack(CBaseEntity *);
	virtual int OnTakeDamage(const CTakeDamageInfo &);
	int TakeDamage(CTakeDamageInfo &);
	int Script_TakeDamage(HSCRIPT);
	virtual int TakeHealth(float, int);
	virtual void UpdateOnRemove();
	virtual void OnSetDormant(EntityDormancyType_t, EntityDormancyType_t);

private:

	int SaveDataDescBlock(ISave &, datamap_t *);
	int RestoreDataDescBlock(IRestore &, datamap_t *);
	virtual void Event_Killed(const CTakeDamageInfo &);
	void SendOnKilledGameEvent(const CTakeDamageInfo &);
	void SendOnHurtGameEvent(const CTakeDamageInfo &);
	virtual void Event_KilledOther(CBaseEntity *, const CTakeDamageInfo &);
	virtual bool IsTriggered(CBaseEntity *);
	virtual float GetDelay();
	virtual void DecalTrace(trace_t *, const char *);
	virtual void ImpactTrace(trace_t *, int, char *);
	void AddPoints(int, bool);
	void AddPointsToTeam(int, bool);
	void RemoveAllDecals();
	virtual bool OnControls(CBaseEntity *);
	virtual bool HasTarget(string_t);
	virtual bool IsNetClient();
	virtual IServerVehicle * GetServerVehicle();
	virtual bool IsViewable();
	virtual void OnEntityEvent(EntityEvent_t, void *);
	virtual bool CanStandOn(CBaseEntity *);
	virtual CBaseEntity * GetEnemy();
	void ViewPunch(const QAngle &);
	void VelocityPunch(const Vector &);
	CBaseEntity * GetNextTarget();
	const char * GetClassname();
	const char * GetCPPClassname();
	virtual const char * GetPlayerName();
	bool FixupPrecacheModelName(const char *, char *, int);
	void PrecacheModel(const char *, IEntityResourceManifest *);
	void PrecacheModel(const char *, const CEntityPrecacheContext *);
	void PrecacheModel(const char *, const CEntityPrecacheContext *, SecondaryPrecacheStaticCallback_t);
	bool PrecacheModelFromKeyValues(const CEntityPrecacheContext *, const char *, bool);
	bool PrecacheSound(const char *);
	void PrefetchSound(const char *);
	CBaseEntity * GetParent();
	bool IsPhysicallyConstrainted(uint);
	void SetParent(CBaseEntity *, CUtlStringToken, const matrix3x4a_t *);
	void SetParent(string_t, CBaseEntity *, CUtlStringToken);
	CUtlStringToken GetParentAttachmentName();
	HierarchyType_t GetHierarchyAttachType();
	int GetAllChildren(CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int> > &);
	int GetAllInHierarchy(CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int> > &);
	virtual UsePriorityType GetUsePriority(CBaseEntity *);
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	virtual void UseEx(inputdata_t &);
	virtual void PullStart();
	bool IsCurrentlyTouching();
	virtual void StartTouch(CBaseEntity *);
	virtual void Touch(CBaseEntity *);
	virtual void EndTouch(CBaseEntity *);
	virtual void StartBlocked(CBaseEntity *);
	virtual void Blocked(CBaseEntity *);
	virtual void EndBlocked();
	virtual void Think();
	int RegisterThinkContext(CUtlStringToken);
	void ThinkSet(BASEPTR, float, CUtlStringToken, HSCRIPT);
	void SetNextThink(float, CUtlStringToken);
	float GetNextThink(CUtlStringToken);
	float GetLastThink(CUtlStringToken);
	int GetNextThinkTick(CUtlStringToken);
	int GetLastThinkTick(CUtlStringToken);
	int GetFirstThinkTick();
	void RebaseThinkTicks(bool);
	virtual void MoveDone();
	virtual void PhysicsSimulate();
	virtual void SimulateThinkInternal();
	virtual void ForceSimulation();
	const trace_t & GetTouchTrace();
	bool PhysicsRunThink(thinkmethods_t);
	bool PhysicsRunSpecificThink(int, BASEPTR);
	void PhysicsImpact(CBaseEntity *, trace_t &);
	void PhysicsMarkEntitiesAsTouching(CBaseEntity *, trace_t &);
	void VPhysicsStartTouch(CBaseEntity *, const Manifold_t *);
	void VPhysicsEndTouch(CBaseEntity *);
	void PhysicsTouchTriggers(const Vector *);
	void PhysicsTouch(CBaseEntity *);
	bool PhysicsCheckWater();
	virtual void PhysicsLandedOnGround(float);
	void PhysicsRemoveTouchedList();
	void PhysicsNotifyOtherOfUntouch(CBaseEntity *);
	void PhysicsRemoveToucher(touchlink_t *);
	groundlink_t * AddEntityToGroundList(CBaseEntity *);
	void PhysicsStartGroundContact(CBaseEntity *);
	void PhysicsNotifyOtherOfGroundRemoval(CBaseEntity *);
	void PhysicsRemoveGround(groundlink_t *);
	void PhysicsRemoveGroundList();
	void StartGroundContact(CBaseEntity *);
	void EndGroundContact(CBaseEntity *);
	void SetGroundChangeTime(float);
	float GetGroundChangeTime();
	void WakeRestingObjects();
	bool HasNPCsOnIt();
	virtual uint64 PhysicsSolidMaskForEntity();
	bool PhysicsTestEntityPosition(CBaseEntity * *);
	void PhysicsPushEntity(const Vector &, trace_t *);
	void PhysicsCheckWaterTransition();
	void PhysicsCheckForEntityUntouch();
	void PhysicsStepRecheckGround();
	virtual void * ClothGetEntityInstanceSettings();
	virtual void StopLoopingSounds();

protected:

	void PerformFlyCollisionResolution(trace_t &, Vector &);
	void ResolveFlyCollisionBounce(trace_t &, Vector &, float);
	void ResolveFlyCollisionSlide(trace_t &, Vector &);
	virtual void ResolveFlyCollisionCustom(trace_t &, Vector &);
	virtual void NotifySystemEvent(CBaseEntity *, notify_system_event_t, const notify_system_event_params_t &);
	void SUB_Remove();
	void SUB_RemoveIfUncarried();
	void SUB_DoNothing();
	void SUB_Vanish();
	void SUB_CallUseToggle();
	virtual void Teleport(const Vector *, const QAngle *, const Vector *);
	int ShouldToggle(USE_TYPE, int);
	virtual void FireBullets(const FireBulletsInfo_t &);
	virtual void DoImpactEffect(trace_t &, int);
	virtual void MakeTracer(const Vector &, const trace_t &, int);
	virtual int GetTracerAttachment();
	virtual const char * GetTracerType();
	virtual CTraceFilter * GetBeamTraceFilter();
	void TraceBleed(float, const Vector &, trace_t *, int);
	void DispatchTraceAttack(const CTakeDamageInfo &, const Vector &, trace_t *);
	void TraceAttackToTriggers(const CTakeDamageInfo &, const Vector &, const Vector &, const Vector &);
	virtual void TraceAttack(const CTakeDamageInfo &, const Vector &, trace_t *);
	virtual void ComputeTracerStartPosition(const Vector &, Vector *);
	virtual bool ShouldDrawWaterImpacts();
	bool ShouldDrawUnderwaterBulletBubbles();
	bool HandleShotImpactingWater(const FireBulletsInfo_t &, const Vector &, CTraceFilter *, Vector *);
	void HandleShotImpactingGlass(const FireBulletsInfo_t &, const trace_t &, const Vector &, CTraceFilter *);
	void CreateBubbleTrailTracer(const Vector &, const Vector &, const Vector &);
	virtual int BloodColor();
	virtual bool IsAlive();
	bool IsInWorld();
	virtual bool IsPlayer();
	virtual bool IsControlledByPlayer();
	virtual bool IsHMDAvatar();
	virtual bool IsWorld();
	virtual CAI_BaseNPC * MyNPCPointer();
	virtual void UpdateParameters(IAnimParameterListInstance *);
	bool IsNPC();
	bool IsDOTANPC();
	virtual bool IsBaseCombatCharacter();
	virtual CBaseCombatCharacter * MyCombatCharacterPointer();
	virtual const CBaseCombatCharacter * MyCombatCharacterPointer();
	virtual bool IsBaseCombatWeapon();
	virtual CBaseCombatWeapon * MyCombatWeaponPointer();
	virtual bool IsBaseObject();
	virtual bool IsBaseTrain();
	bool IsNextBot();
	virtual INextBot * MyNextBotPointer();
	virtual CBaseEntity * Respawn();
	bool Intersects(CBaseEntity *);
	virtual bool IsLockedByMaster();
	virtual int GetMaxHealth();
	void SetMaxHealth(int);
	virtual void SetHealth(int);
	int GetHealth();
	virtual int UpdateHealth(const CTakeDamageInfo &);
	virtual void ModifyOrAppendCriteria(CResponseCriteriaSet &);
	virtual void ModifyOrAppendDerivedCriteria(CResponseCriteriaSet &);
	void AppendContextToCriteria(CResponseCriteriaSet &, const char *);
	void DumpResponseCriteria();
	LifeState_t GetLifeState();
	void SetLifeState(LifeState_t);
	DamageOptions_t GetDamageOptions();
	void SetDamageOptions(DamageOptions_t);
	bool IsUsingNewDamageSystem();
	int EntTakeDamageS1PortHack(CTakeDamageInfo &);
	int TakeDamageOld(const CTakeDamageInfo &);
	virtual int GetDamageType();
	virtual float GetDamage();
	virtual void SetDamage(float);
	void SetDebugBits(uint64);
	bool HasDebugBitsSet(uint64);
	void ClearDebugBits(uint64);
	void ToggleDebugBits(uint64);
	int64 GetDebugBits();
	int GetCollisionGroup();
	bool IsTriggerCollisionGroup();
	SolidType_t GetSolid();
	bool IsSolid();
	bool IsSolidTo(CBaseEntity *);
	int GetSolidFlags();
	bool IsSolidFlagSet(int);
	bool IsSolidContactEnabled();
	void CollisionRulesChanged();
	virtual Vector EyePosition();
	virtual const QAngle & EyeAngles();
	virtual const QAngle & LocalEyeAngles();
	void EyePositionZOnly(Vector *);
	virtual Vector EarPosition();
	Vector EyePosition();
	const QAngle & EyeAngles();
	const QAngle & LocalEyeAngles();
	Vector EarPosition();
	float GetGravity();
	void SetGravity(float);
	virtual float GetFriction();
	void SetFriction(float);
	void SetLocalVelocity(const Vector &);
	void SetAbsVelocity(const Vector &);
	const Vector & GetLocalVelocity();
	const Vector & GetAbsVelocity();
	void ApplyLocalVelocityImpulse(const Vector &);
	void ApplyAbsVelocityImpulse(const Vector &);
	void ApplyLocalAngularVelocityImpulse(const AngularImpulse &);
	void SetLocalAngularVelocity(const QAngle &);
	const QAngle & GetLocalAngularVelocity();
	float GetDistanceToEntity(const CBaseEntity *);
	virtual Vector BodyTarget(const Vector &, bool);
	virtual Vector HeadTarget(const Vector &);
	virtual const Vector & GetViewOffset();
	const Vector & GetBaseVelocity();
	void SetBaseVelocity(const Vector &);
	virtual Vector GetSmoothedVelocity();
	virtual void GetVelocity(Vector *, AngularImpulse *);
	virtual bool IsMoving();
	void SetGroundEntity(CBaseEntity *);
	CBaseEntity * GetGroundEntity();
	CBaseEntity * GetGroundEntity();
	virtual void OnGroundChanged(CBaseEntity *, CBaseEntity *);
	virtual void GetGroundVelocityToApply(Vector &);
	int GetWaterLevel();
	void SetWaterLevel(int);
	uint64 GetWaterType();
	void SetWaterType(uint64);
	float GetElasticity();
	void SetElasticity(float);
	void SetCheckUntouch(bool);
	bool GetCheckUntouch();
	virtual float GetAttackDamageScale(CBaseEntity *);
	virtual float GetReceivedDamageScale(CBaseEntity *);
	void OverrideFriction(float, float);
	virtual bool FVisible(CBaseEntity *, uint64, CBaseEntity * *);
	virtual bool FVisible(const Vector &, uint64, CBaseEntity * *);
	virtual bool CanBeSeenBy(CAI_BaseNPC *);
	virtual CBaseEntity * OnSeenBy(CAI_BaseNPC *);
	virtual bool PhysicsSplash(const Vector &, const Vector &, float, float);
	virtual void Splash();
	gender_t GetGender();
	virtual string_t GetAIAddOn();
	void SetAIAddOn(string_t);
	bool DisableInLowViolence();
	float GetLocalTime();
	void IncrementLocalTime(float);
	float GetMoveDoneTime();
	void SetMoveDoneTime(float);
	virtual Vector GetSoundEmissionOrigin();
	SndOpEventGuid_t EmitSound(const char *, float, float *);
	SndOpEventGuid_t EmitSound(IRecipientFilter &, CEntityIndex, const EmitSound_t &, HSOUNDSCRIPTHANDLE &);
	SndOpEventGuid_t EmitSound(IRecipientFilter &, const char *, float, float *);
	SndOpEventGuid_t EmitSound(IRecipientFilter &, CEntityIndex, const char *, const Vector *, float, float *);
	SndOpEventGuid_t EmitSound(IRecipientFilter &, CEntityIndex, const EmitSound_t &);
	void StopSound(const char *);
	void StopSound(CEntityIndex, const char *);
	void StopSound(SndOpEventGuid_t &);
	void StopSound(CEntityIndex, int, const char *, bool);
	virtual void ScriptEmitSound(const char *);
	void ScriptEmitSoundParams(const char *, int, float, float);
	void ScriptStopSound(const char *);
	void GenderExpandString(const char *, char *, int);
	float GetSoundDuration(const char *, const char *);
	float ScriptSoundDuration(const char *, const char *);
	bool GetParametersForSound(const char *, CSoundParameters &, const char *);
	SndOpEventGuid_t EmitAmbientSound(CEntityIndex, const Vector &, const char *, int, float, float *);
	void PrecacheScriptSound(const char *, IEntityResourceManifest *);
	void PrecacheScriptSound(const char *, const CEntityPrecacheContext *);
	void Script_PrecacheScriptSound(const char *);
	void PrefetchScriptSound(const char *);
	void RemoveRecipientsIfNotCloseCaptioning(CRecipientFilter &);
	void EmitCloseCaption(IRecipientFilter &, CEntityIndex, const char *, CUtlVector<Vector, CUtlMemory<Vector, int> > &, float, bool);
	bool IsPrecacheAllowed();
	void SetAllowPrecache(bool);
	bool IsSimulatingOnAlternateTicks();
	void InvalidatePhysicsRecursive(int);
	bool InPrediction();
	bool IsFirstTimePredicted();
	int GetEffects();
	void AddEffects(int);
	void RemoveEffects(int);
	void ClearEffects();
	void SetEffects(int);
	bool IsEffectActive(int);
	virtual void InternalSetEffects(int);
	float GetAnimTime();
	bool SetAnimTime(float, SetAnimTimeFlags_t);
	float GetSimulationTime();
	void SetSimulationTime(float);
	float GetCreateTime();
	void SetCreateTime(float);

private:

	bool WillSimulateGamePhysics();
	bool IsComputingInterpolatedValues();
	void SetLatchPermissions(LatchDirtyPermission_t);
	bool IsLatchedPermissible();
	void MarkInterpolationLatchFlagsDirty(EInterpolatedVarFlagBits);
	void IncrementInterpolationFrame();
	int GetPredictionRandomSeed();
	void SetPredictionRandomSeed(const CUserCmd *);
	CBasePlayer * GetPredictionPlayer();
	void SetPredictionPlayer(CBasePlayer *);
	void SetNetworkQuantizeOriginAngAngles(bool);
	void NetworkQuantize(Vector &, QAngle &);
	void NetworkQuantize();
	bool ShouldLagCompensate();
	virtual bool CanPushEntity(CBaseEntity *);
	virtual CBasePlayer * HasPhysicsAttacker(float);
	void SetPredictionEligible(bool);
	virtual void OnCreatedServerRagdoll(CBaseModelEntity *);

protected:

	void PhysicsRelinkChildren(float);
	int PhysicsClipVelocity(const Vector &, const Vector &, Vector &, float);

private:

	void PhysicsStep();
	void PhysicsPusher();
	void PhysicsNone();
	void PhysicsNoclip();
	void PhysicsStepRunTimestep(float);
	void PhysicsToss();
	void PhysicsCustom();
	void PerformPush(float);
	void PhysicsRigidChild();
	void CalcAbsoluteVelocity();
	void CalcAbsoluteAngularVelocity();
	void SimulateAngles(float);
	void UpdateBaseVelocity();
	virtual void PerformCustomPhysics(Vector *, Vector *, QAngle *, QAngle *);
	void PhysicsDispatchThink(int, BASEPTR);
	touchlink_t * PhysicsMarkEntityAsTouched(CBaseEntity *);
	void PhysicsStartTouch(CBaseEntity *);
	CBaseEntity * PhysicsPushMove(float);
	CBaseEntity * PhysicsPushRotate(float);
	CBaseEntity * PhysicsCheckRotateMove(rotatingpushmove_t &, CBaseEntity * *, int);
	CBaseEntity * PhysicsCheckPushMove(const Vector &, CBaseEntity * *, int);
	int PhysicsTryMove(float, trace_t *);
	void PhysicsCheckVelocity();
	void PhysicsAddHalfGravity(float);
	void PhysicsAddGravityMove(Vector &);

protected:

	void UpdateWaterState();

private:

	void CheckStepSimulationChanged();
	void StepSimulationThink(float);
	void ComputeStepSimulationNetwork(StepSimulationData *);
	bool UseStepSimulationNetworkOrigin(const Vector * *, uint16 *);
	bool UseStepSimulationNetworkAngles(const QAngle * *);
	bool AddStepDiscontinuity(float, const Vector &, const QAngle &);
	virtual Vector GetStepOrigin();
	virtual QAngle GetStepAngles();
	void PrecacheModelComponents(ResourceHandle_t, const CEntityPrecacheContext *);
	void CheckHasThinkFunction();
	void CheckHasGamePhysicsSimulation();
	void SetNextThink(int, float);
	void SetLastThink(int, float);
	float GetNextThink(int);
	int GetNextThinkTick(int);
	void UpdateShotStatistics(const trace_t &);
	int ShouldBeSentToClient(CEntityIndex, int);
	int GetOffset_m_vecVelocity();
	CNetworkVelocityVector & Get_m_vecVelocity();
	void FrictionRevertThink();
	void FireBullets(int, const Vector &, const Vector &, const Vector &, float, int, int, int, int, float, CBaseEntity *, bool, bool);
	virtual bool Spawn();
	virtual int Precache();
	virtual bool OnParseMapDataFinished();
	virtual void ShouldPrecache();
	virtual bool SetName(string_t);
	virtual void PreFirstNetworkUpdate();
	virtual float KeyValue(CUtlStringToken, const char *);
	virtual float KeyValue(CUtlStringToken, float);
	virtual float KeyValue(CUtlStringToken, const Vector &);
	virtual void GetKeyValue(const char *, char *, int);
	virtual bool PostConstructor(const char *);
	virtual void ModifyEconParticles(int, Color *);
	Vector ScriptGetAbsOrigin();
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	CBodyComponent * GetComponent<CBodyComponent>();

	// vtable[0] Schema_DynamicBinding
	// vtable[31] RejectDamage
	// vtable[32] ModifyDamage
	// vtable[33] ReactToDamage
	// vtable[34] GetDataDescMap
	// vtable[28] HackToMakeAVTable
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[5] Connect
	// vtable[7] AddedToEntityDatabase
	// vtable[8] Spawn
	// vtable[37] SpawnShared
	// vtable[10] Activate
	// vtable[6] Precache
	// vtable[29] GetCollideable
	// vtable[38] PopulatePoseParameters
	// vtable[39] OnNewModel
	// vtable[40] SetOwnerEntity
	// vtable[41] GetBaseModelEntity
	// vtable[42] GetBaseModelEntity
	// vtable[43] GetBaseAnimating
	// vtable[44] GetBaseAnimating
	// vtable[45] GetBaseAnimatingOverlay
	// vtable[46] GetBaseAnimatingOverlay
	// vtable[47] Classify
	// vtable[48] ShouldSavePhysics
	// vtable[49] CreateVPhysics
	// vtable[50] DrawVCollide
	// vtable[51] VPhysicsDestroyObject
	// vtable[52] VPhysicsUpdate
	// vtable[53] VPhysicsGetObjectList
	// vtable[54] VPhysicsIsFlesh
	// vtable[55] VPhysicsTakeDamage
	// vtable[56] VPhysicsShadowCollision
	// vtable[57] VPhysicsCollision
	// vtable[58] VPhysicsFriction
	// vtable[59] UpdatePhysicsShadowToCurrentPosition
	// vtable[60] ForceVPhysicsCollide
	// vtable[61] GetVectors
	// vtable[62] WorldSpaceCenter
	// vtable[63] ComputeWorldSpaceSurroundingBox
	// vtable[64] UpdateTransmitState
	// vtable[65] ShouldTransmit
	// vtable[66] SetTransmit
	// vtable[67] PostClientActive
	// vtable[68] GetRootPVSParent
	// vtable[69] OnBoneTransformsChanged
	// vtable[70] ChangeTeam
	// vtable[71] GetUseType
	// vtable[72] GetGlowEntity
	// vtable[73] GetResponseSystem
	// vtable[74] DispatchResponse
	// vtable[15] Save
	// vtable[16] Restore
	// vtable[17] OnSave
	// vtable[18] OnRestore
	// vtable[19] ObjectCaps
	// vtable[75] IsSaveNonNetworkable
	// vtable[76] ApplySessionPersisterValues
	// vtable[77] LoadSessionPersisterValues
	// vtable[78] ShouldDraw
	// vtable[14] DrawEntityDebugOverlays
	// vtable[79] DrawDebugTextOverlays
	// vtable[80] GetHammerUniqueID
	// vtable[21] NetworkStateChanged
	// vtable[22] NetworkStateChanged
	// vtable[23] NetworkStateChangedLog
	// vtable[24] AddChangeAccessorPath
	// vtable[20] RequiredEdictIndex
	// vtable[81] AddContext
	// vtable[82] RemoveContext
	// vtable[83] ClearAllContexts
	// vtable[84] DeathNotice
	// vtable[85] ShouldAttractAutoAim
	// vtable[86] GetAutoAimRadius
	// vtable[87] GetAutoAimCenter
	// vtable[88] PassesDamageFilter
	// vtable[89] CanBeHitByMeleeAttack
	// vtable[90] OnTakeDamage
	// vtable[91] TakeHealth
	// vtable[11] UpdateOnRemove
	// vtable[12] OnSetDormant
	// vtable[92] Event_Killed
	// vtable[93] Event_KilledOther
	// vtable[94] IsTriggered
	// vtable[95] GetDelay
	// vtable[96] DecalTrace
	// vtable[97] ImpactTrace
	// vtable[98] OnControls
	// vtable[99] HasTarget
	// vtable[100] IsNetClient
	// vtable[101] GetServerVehicle
	// vtable[102] IsViewable
	// vtable[103] OnEntityEvent
	// vtable[104] CanStandOn
	// vtable[105] GetEnemy
	// vtable[106] GetPlayerName
	// vtable[107] GetUsePriority
	// vtable[108] Use
	// vtable[109] UseEx
	// vtable[110] PullStart
	// vtable[111] StartTouch
	// vtable[112] Touch
	// vtable[113] EndTouch
	// vtable[114] StartBlocked
	// vtable[115] Blocked
	// vtable[116] EndBlocked
	// vtable[117] Think
	// vtable[118] MoveDone
	// vtable[119] PhysicsSimulate
	// vtable[120] SimulateThinkInternal
	// vtable[121] ForceSimulation
	// vtable[122] PhysicsLandedOnGround
	// vtable[123] PhysicsSolidMaskForEntity
	// vtable[124] ClothGetEntityInstanceSettings
	// vtable[125] StopLoopingSounds
	// vtable[126] ResolveFlyCollisionCustom
	// vtable[127] NotifySystemEvent
	// vtable[128] Teleport
	// vtable[129] FireBullets
	// vtable[130] DoImpactEffect
	// vtable[131] MakeTracer
	// vtable[132] GetTracerAttachment
	// vtable[133] GetTracerType
	// vtable[134] GetBeamTraceFilter
	// vtable[135] TraceAttack
	// vtable[136] ComputeTracerStartPosition
	// vtable[137] ShouldDrawWaterImpacts
	// vtable[138] BloodColor
	// vtable[139] IsAlive
	// vtable[140] IsPlayer
	// vtable[141] IsControlledByPlayer
	// vtable[142] IsHMDAvatar
	// vtable[143] IsWorld
	// vtable[144] MyNPCPointer
	// vtable[145] UpdateParameters
	// vtable[146] IsBaseCombatCharacter
	// vtable[147] MyCombatCharacterPointer
	// vtable[148] MyCombatCharacterPointer
	// vtable[149] IsBaseCombatWeapon
	// vtable[150] MyCombatWeaponPointer
	// vtable[151] IsBaseObject
	// vtable[152] IsBaseTrain
	// vtable[153] MyNextBotPointer
	// vtable[154] Respawn
	// vtable[155] IsLockedByMaster
	// vtable[156] GetMaxHealth
	// vtable[157] SetHealth
	// vtable[158] UpdateHealth
	// vtable[159] ModifyOrAppendCriteria
	// vtable[160] ModifyOrAppendDerivedCriteria
	// vtable[161] GetDamageType
	// vtable[162] GetDamage
	// vtable[163] SetDamage
	// vtable[164] EyePosition
	// vtable[165] EyeAngles
	// vtable[166] LocalEyeAngles
	// vtable[167] EarPosition
	// vtable[168] GetFriction
	// vtable[169] BodyTarget
	// vtable[170] HeadTarget
	// vtable[171] GetViewOffset
	// vtable[172] GetSmoothedVelocity
	// vtable[173] GetVelocity
	// vtable[174] IsMoving
	// vtable[175] OnGroundChanged
	// vtable[176] GetGroundVelocityToApply
	// vtable[177] GetAttackDamageScale
	// vtable[178] GetReceivedDamageScale
	// vtable[179] FVisible
	// vtable[180] FVisible
	// vtable[181] CanBeSeenBy
	// vtable[182] OnSeenBy
	// vtable[183] PhysicsSplash
	// vtable[184] Splash
	// vtable[185] GetAIAddOn
	// vtable[186] GetSoundEmissionOrigin
	// vtable[187] ScriptEmitSound
	// vtable[188] InternalSetEffects
	// vtable[189] CanPushEntity
	// vtable[190] HasPhysicsAttacker
	// vtable[191] OnCreatedServerRagdoll
	// vtable[192] PerformCustomPhysics
	// vtable[193] GetStepOrigin
	// vtable[194] GetStepAngles
	// vtable[195] Spawn
	// vtable[196] Precache
	// vtable[197] OnParseMapDataFinished
	// vtable[198] ShouldPrecache
	// vtable[199] SetName
	// vtable[200] PreFirstNetworkUpdate
	// vtable[201] KeyValue
	// vtable[202] KeyValue
	// vtable[203] KeyValue
	// vtable[204] GetKeyValue
	// vtable[205] PostConstructor
	// vtable[206] ModifyEconParticles
	// vtable[4] GetScriptDesc
	// sizeof = 776
};

// src/game/server/baseentity.h:1924
class CServerOnlyEntity : public CBaseEntity {
public:

private:

	static datamap_t m_DataMap;
	typedef CBaseEntity BaseClass;

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
	CServerOnlyEntity(CServerOnlyEntity &);
	CServerOnlyEntity(CServerOnlyEntity &);
	CServerOnlyEntity();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual int ObjectCaps();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CServerOnlyEntity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[19] ObjectCaps
	// vtable[34] GetDataDescMap
	// sizeof = 776
};

// src/game/server/baseentity.h:1937
class CServerOnlyPointEntity : public CServerOnlyEntity {
public:

private:

	static datamap_t m_DataMap;
	typedef CServerOnlyEntity BaseClass;

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
	CServerOnlyPointEntity(CServerOnlyPointEntity &);
	CServerOnlyPointEntity(CServerOnlyPointEntity &);
	CServerOnlyPointEntity();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CServerOnlyPointEntity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[34] GetDataDescMap
	// sizeof = 776
};

// src/game/server/baseentity.h:1950
class CLogicalEntity : public CServerOnlyEntity {
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

	static datamap_t m_DataMap;
	CLogicalEntity(CLogicalEntity &);
	CLogicalEntity(CLogicalEntity &);
	CLogicalEntity();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CLogicalEntity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[34] GetDataDescMap
	// sizeof = 776
};

// src/game/server/baseentity.h:1962
class CAbsQueryScopeGuard {
private:

	bool m_bSavedState;  // +0x0
	CAbsQueryScopeGuard(bool);
	~CAbsQueryScopeGuard();

	// sizeof = 1
};

// src/game/server/baseentity.h:1981
class CPreventSetAnimRunAnimEventsScopeGuard {
private:

	bool m_bSavedState;  // +0x0
	CPreventSetAnimRunAnimEventsScopeGuard(bool);
	~CPreventSetAnimRunAnimEventsScopeGuard();

	// sizeof = 1
};
