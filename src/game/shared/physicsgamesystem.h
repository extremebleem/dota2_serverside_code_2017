// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/physicsgamesystem.h:82
class CPhysicsGameSystem : public IGameSystem, public IPhysicsWorldEventListener {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	enum anim_update_t {
		DEFER_ANIMATED_OBJECTS = 0,
		UPDATE_ANIMATED_OBJECTS = 0x1,
	};

	struct PhysicsSpawnGroups_t {
		HPhysAggregateData_InternalStrongCopyable m_hPhysicsLevel;  // +0x0
		bool m_bLevelDebugRenderCreated;  // +0x10

		PhysicsSpawnGroups_t();
		~PhysicsSpawnGroups_t();
		PhysicsSpawnGroups_t(const PhysicsSpawnGroups_t &);
		PhysicsSpawnGroups_t & operator=(const PhysicsSpawnGroups_t &);

		// sizeof = 64
	};

	struct PhysicsWorld_t {
		int ()() * * _vptr.PhysicsWorld_t;  // +0x0
		bool bNeedsDebugDraw;  // +0x18
		PhysicsWorld_t & operator=(const PhysicsWorld_t &);
		PhysicsWorld_t(const PhysicsWorld_t &);
		PhysicsWorld_t();
		PhysicsWorld_t(IVPhysics2World *, ISceneWorld *);
		virtual ~PhysicsWorld_t();

		// sizeof = 32
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> m_PhysicsSpawnGroups;  // +0x20
	CUtlMap<CUtlStringToken, CPhysicsGameSystem::PhysicsWorld_t, short unsigned int, bool (*)(const CUtlStringToken&, const CUtlStringToken&)> m_mapLevelWorlds;  // +0x48
	HMaterialStrong m_hMatWireframe;  // +0x70
	HMaterialStrong m_hMatHiddenWireframe;  // +0x78
	HMaterialStrong m_hMatDefault;  // +0x80
	HMaterialStrong m_hMatCollisionGeometry;  // +0x88
	float m_flImpactSoundTime;  // +0x90

	int m_IONotificationKey;  // +0xb8
	int m_nSubStepCount;  // +0xbc
	float m_flSubStepInterval;  // +0xc0

	const Stats_t & m_GlobalProfilerStats;  // +0x160
	bool m_bNeedUpdateDebugSceneObjects:1;  // +0x168:0
	typedef IGameSystem BaseClass;
	CPhysicsGameSystem(CPhysicsGameSystem &);
	CPhysicsGameSystem(const CPhysicsGameSystem &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CPhysicsGameSystem *);
	CPhysicsGameSystem();
	bool StaticInit();
	virtual void GameInit(const EventGameInit_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	virtual void GameActivate(const EventGameActivate_t &);
	virtual void GameDeactivate(const EventGameDeactivate_t &);
	virtual void PreSpawnGroupLoad(const EventPreSpawnGroupLoad_t &);
	virtual void PostSpawnGroupUnload(const EventPostSpawnGroupUnload_t &);
	virtual void ActiveSpawnGroupChanged(const EventActiveSpawnGroupChanged_t &);
	virtual void Update(const EventClientUpdate_t &);
	virtual void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	virtual void PreClientUpdate(const EventServerPreClientUpdate_t &);
	virtual void FrameBoundary(const EventGameFrameBoundary_t &);
	void OnBatchExecute();
	void OnBatchClear();
	IVPhysics2World * CreateLevelWorld(WorldGroupId_t, const char *);
	IVPhysics2World * GetOrCreateLevelWorld(WorldGroupId_t, SpawnGroupHandle_t);
	IVPhysics2World * GetOrCreateLevelWorld(const CBaseEntity *);
	IVPhysics2World * GetExistingLevelWorld(WorldGroupId_t);
	void GetLevelWorldList(CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > *);
	int GetLevelWorldCount();
	ISceneWorld * GetDebugSceneWorld(WorldGroupId_t);
	bool IsLevelAggregateInstance(IPhysAggregateInstance *);
	IPhysAggregateInstance * GetLevelAggregateInstance();
	IPhysIntersectionController * GetIntersectionController();
	IPhysIntersectionDictionary * GetIntersectionDictionary();
	void NotifyAggregateInitialized(CSkeletonInstance *, IPhysAggregateInstance *);
	void NotifyAggregateShutdown(CSkeletonInstance *);
	void MarkChanged(CSkeletonInstance *);
	void MarkChanged(CSkeletonInstance *, uint);
	void MarkChanged(uint, CSkeletonInstance *);
	void ForceUpdateIfKeyframed(CSkeletonInstance *, anim_update_t, bool);
	void ActivateKinematicTransformUpdater(CSkeletonInstance *);
	void DeactivateKinematicTransformUpdater(CSkeletonInstance *);
	void ProcessUpdaterStatusChanges(VPhysXWorldStepResults *);
	bool SetPhysGroupMask(CSkeletonInstance *, MeshGroupMask_t, const RnCollisionAttr_t &);
	void TeleportToAnimationState(CSkeletonInstance *);
	HPhysicsJoint CreateHierarchyConstraint(CSkeletonInstance *);
	void UpdateHierarchyConstraint(CSkeletonInstance *, bool);
	void DestroyHierarchyConstraint(CSkeletonInstance *);
	void UpdateHierarchyConstraint(HPhysicsJoint, HPhysicsBody);
	void UpdateHierarchyJoint(CSkeletonInstance *);
	bool ShouldGroupsCollide(int, int);
	bool ShouldHitQuery(const RnQueryShapeAttr_t &, const RnCollisionAttr_t &);
	float GetStepInterval();
	void UpdateSceneObjects(CCallQueue &);
	void QueueScaleChanged(CSkeletonInstance *);
	void ProcessScaleChanges();
	virtual void OnWorldRequiresDebugRendering(IVPhysXWorld *, bool);
	bool FindSkeletonInstance(CSkeletonInstance *);
	float GetSimulationTimestep();
	void ObjectSound(CLegacyCollisionData &, const VPhysIntersectionNotification_t &, int);
	void PhysCollisionSound(CBaseEntity *, IPhysicsObject *, CUtlStringToken, CUtlStringToken, float);
	void PhysBreakSound(CBaseEntity *, IPhysicsObject *, Vector);
	void PhysicsImpactSound(CBaseEntity *, IPhysicsObject *, CUtlStringToken, CUtlStringToken, float, float);
	void PhysFrictionSound(CBaseEntity *, IPhysicsObject *, float, CUtlStringToken, CUtlStringToken);
	void ShutdownFrictionSounds(CBaseEntity *);
	void UpdateFrictionSounds();

private:

	void AddImpactSound(CBaseEntity *, CEntityIndex, IPhysicsObject *, CUtlStringToken, CUtlStringToken, float, float);
	friction_t * FindFriction(CBaseEntity *);
	void OnBeginProcessing(WorldGroupId_t *);
	void OnEndProcessing(WorldGroupId_t *);
	bool DispatchCallbacks();
	void LogUpdater(const char *, CSkeletonInstance *);
	void ProcessQueuedBecomeRagdollOnClientRequests();
	void UpdateLevelDebugRender();
	void OnSimulate(bool, bool);
	void StartSimulateFrame();
	void FinishSimulateFrame(VPhysXWorldStepResults *);
	void Validate();
	void CreateDebugRenderBuffers();
	void EnableDebugRenderables(CUtlVector<CSceneAnimatableObject*, CUtlMemory<CSceneAnimatableObject*, int> > &, bool);
	void UpdateDebugRenderables(int, CSkeletonInstance * *);
	int PullKinematicTransformsWorker(int, CSkeletonInstance * *);
	void PullSoftbodyTransforms();
	void FlushClothUpdates(bool);
	void PushDynamicTransformsWorker(VPhysXWorldStepResults *);
	void InitializeStandardCollisionRules();
	void InitializeStandardCollisionNames();
	bool LoadSpawnGroupPhysics(SpawnGroupHandle_t);
	bool UnloadSpawnGroupPhysics(SpawnGroupHandle_t);
	void UpdateShadowController(IPhysicsObject *, CBaseEntity *);
	void InitSubSteps();
	void UpdateDebugSceneSession(const PhysicsWorld_t &);
	/* tag__fprintf: const_type tag not supported! */;
	virtual ~CPhysicsGameSystem();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// vtable[4] GameShutdown
	// vtable[8] GameActivate
	// vtable[11] GameDeactivate
	// vtable[14] PreSpawnGroupLoad
	// vtable[17] PostSpawnGroupUnload
	// vtable[18] ActiveSpawnGroupChanged
	// vtable[22] Update
	// vtable[25] FrameUpdatePostEntityThink
	// vtable[26] PreClientUpdate
	// vtable[29] FrameBoundary
	// vtable[40] OnWorldRequiresDebugRendering
	// sizeof = 368
};
