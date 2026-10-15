// Reconstructed from DWARF by pahole; not original source.

// src/game/server/props.h:21
class CPhysicsProp : public CBreakableProp, public INavObstacle {
	class NetworkVar_m_bAwake {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

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

	COutputEvent m_MotionEnabled;  // +0x658
	COutputEvent m_OnAwakened;  // +0x670
	COutputEvent m_OnAwake;  // +0x688
	COutputEvent m_OnAsleep;  // +0x6a0
	COutputEvent m_OnPhysGunPickup;  // +0x6b8
	COutputEvent m_OnPhysGunPunt;  // +0x6d0
	COutputEvent m_OnPhysGunOnlyPickup;  // +0x6e8
	COutputEvent m_OnPhysGunDrop;  // +0x700
	COutputEvent m_OnPlayerUse;  // +0x718
	COutputEvent m_OnPlayerPickup;  // +0x730
	COutputEvent m_OnOutOfWorld;  // +0x748
	float m_massScale;  // +0x760
	float m_inertiaScale;  // +0x764
	int m_damageType;  // +0x768
	int8 m_contactSoftness;  // +0x76c

	int m_damageToEnableMotion;  // +0x770
	float m_flForceToEnableMotion;  // +0x774
	int m_breakableType;  // +0x778
	bool m_bThrownByPlayer;  // +0x77c
	bool m_bDroppedByPlayer;  // +0x77d
	bool m_bFirstCollisionAfterLaunch;  // +0x77e

	int m_iExploitableByPlayer;  // +0x780
	bool m_bHasBeenAwakened;  // +0x784
	bool m_bIsOverrideProp;  // +0x785

	float m_fNextCheckDisableMotionContactsTime;  // +0x788
	int m_iInitialGlowState;  // +0x78c
	int m_nGlowRange;  // +0x790
	int m_nGlowRangeMin;  // +0x794
	bool m_bForceNavIgnore;  // +0x79c
protected:

	int m_nCollisionGroupOverride;  // +0x7a0
	typedef CBreakableProp BaseClass;
	typedef CPhysicsProp ThisClass;
	CPhysicsProp(CPhysicsProp &);
	CPhysicsProp(CPhysicsProp &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CPhysicsProp();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void UpdateOnRemove();
	virtual bool CreateVPhysics();
	virtual bool OverridePropdata();
	virtual void VPhysicsUpdate(IPhysicsObject *);
	virtual void VPhysicsCollision(int, gamevcollisionevent_t *);
	void InputWake(inputdata_t &);
	void InputSleep(inputdata_t &);
	void InputEnableMotion(inputdata_t &);
	void InputDisableMotion(inputdata_t &);
	void InputDisableFloating(inputdata_t &);
	void InputStartGlowing(inputdata_t &);
	void InputStopGlowing(inputdata_t &);
	void InputSetGlowOverride(inputdata_t &);
	void InputSetGlowRange(inputdata_t &);
	void InputSetMass(inputdata_t &);
	void InputEnablePickup(inputdata_t &);
	void InputDisablePickup(inputdata_t &);
	void EnableMotion();
	bool CanBePickedUpByPhyscannon();
	virtual void OnPhysGunPickup(CBasePlayer *, PhysGunPickup_t, int);
	virtual void OnPhysGunDrop(CBasePlayer *, PhysGunDrop_t, int);
	virtual bool OnAttemptPhysGunPull(CBasePlayer *, int);
	void ScriptDisableMotion();
	void ScriptSetDynamicVsDynamicContinuous(bool);
	bool GetPropDataAngles(const char *, QAngle &);
	float GetCarryDistanceOffset();
	virtual int ObjectCaps();
	virtual void UseEx(inputdata_t &);
	bool ShouldDisableMotionOnFreeze();
	virtual UsePriorityType GetUsePriority(CBaseEntity *);
	void GetMassCenter(Vector *);
	float GetMass();
	int ExploitableByPlayer();
	void ClearFlagsThink();
	virtual int32 GetId();
	virtual void WorldSpaceSurroundingBounds(Vector *, Vector *);
	virtual void WorldSpaceOrientedBounds(Vector *, Vector *, Vector *, QAngle *);
	virtual bool IsNavAvoidanceObstacle();
	virtual bool IsNavAvoidanceObstacleActive();
	virtual float GetNavObstructionHeight();
	bool IsVRTeleportObstacle();
	virtual int OnTakeDamage(const CTakeDamageInfo &);
	virtual int DrawDebugTextOverlays(uint64, int);
	bool IsGib();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	void HandleAnyCollisionInteractions(int, gamevcollisionevent_t *);
	bool IsBreakableByPlayer();
	virtual void OnSpawnBreakProp(CBreakableProp *);
	void SetCollisionGroupOverride(int);
	int GetCollisionGroupOverride();
	bool IsDroppedByPlayer();

private:

	void ComputeEnablingImpulse(int, gamevcollisionevent_t *);
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	virtual ~CPhysicsProp();
	/* tag__fprintf: const_type tag not supported! */;
	CBodyComponent * GetComponent<CBodyComponent>(CBodyComponent *);
	CBodyComponent * GetComponent<CBodyComponent>();

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[11] UpdateOnRemove
	// vtable[49] CreateVPhysics
	// vtable[252] OverridePropdata
	// vtable[52] VPhysicsUpdate
	// vtable[57] VPhysicsCollision
	// vtable[293] OnPhysGunPickup
	// vtable[294] OnPhysGunDrop
	// vtable[296] OnAttemptPhysGunPull
	// vtable[19] ObjectCaps
	// vtable[109] UseEx
	// vtable[107] GetUsePriority
	// vtable[297] GetId
	// vtable[298] WorldSpaceSurroundingBounds
	// vtable[299] WorldSpaceOrientedBounds
	// vtable[300] IsNavAvoidanceObstacle
	// vtable[301] IsNavAvoidanceObstacleActive
	// vtable[302] GetNavObstructionHeight
	// vtable[90] OnTakeDamage
	// vtable[79] DrawDebugTextOverlays
	// vtable[34] GetDataDescMap
	// vtable[290] OnSpawnBreakProp
	// vtable[4] GetScriptDesc
	// sizeof = 1960
};
