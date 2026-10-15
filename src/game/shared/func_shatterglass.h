// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/func_shatterglass.h:48
struct ShatterGenerationSetting_t {
	int m_nNumSpokesMin;  // +0x0
	int m_nNumSpokesMax;  // +0x4
	float m_flTipScaleMin;  // +0x8
	float m_flTipScaleMax;  // +0xc
	float m_flTipSpawnChance;  // +0x10
	float m_flTipScale;  // +0x14
	float m_flShardScale;  // +0x18
	float m_flSecondTipSpawnChance;  // +0x1c
	float m_flSecondShardScale;  // +0x20
	bool m_bCenterChunk;  // +0x24

	float m_flCenterChunkScale;  // +0x28
	int m_nShardGenerationLimit;  // +0x2c

	// sizeof = 48
};

// src/game/shared/func_shatterglass.h:69
class CShatterGlassShardPhysics : public CPhysicsProp {
public:

private:

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
	CShatterGlassShardPhysics(CShatterGlassShardPhysics &);
	CShatterGlassShardPhysics(CShatterGlassShardPhysics &);
	CShatterGlassShardPhysics();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void VPhysicsCollision(int, gamevcollisionevent_t *);
	virtual int OnTakeDamage(const CTakeDamageInfo &);
	virtual int UpdateTransmitState();
	virtual void OnRestore();
	virtual ~CShatterGlassShardPhysics();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[57] VPhysicsCollision
	// vtable[90] OnTakeDamage
	// vtable[64] UpdateTransmitState
	// vtable[18] OnRestore
	// sizeof = 1968
};

// src/game/shared/func_shatterglass.h:85
class CShatterGlassShard {
private:

	HModelStrong m_hModel;  // +0x18

	bool m_bCreatedModel;  // +0x48

	float m_flLongestEdge;  // +0x4c
	float m_flShortestEdge;  // +0x50
	float m_flLongestAcross;  // +0x54
	float m_flShortestAcross;  // +0x58
	float m_flSumOfAllEdges;  // +0x5c
	float m_flArea;  // +0x60
	int m_nParentPanelsNthShard;  // +0x68
	int m_nSubShardGeneration;  // +0x6c
	bool m_bShattered;  // +0x70

	bool m_bAverageVertPositionIsValid;  // +0x7c

	bool m_bStressPositionAIsValid;  // +0x90
	bool m_bStressPositionBIsValid;  // +0x91
	bool m_bFlaggedForRemoval;  // +0x92

	float m_flPhysicsEntitySpawnedAtTime;  // +0x94
	bool m_bShatterRateLimited;  // +0x98

	CShatterGlassShard(CFuncShatterglass *, CShatterGlassShard *);
	void FreezeInPlace();
	void UnFreeze();
	bool IsFrozen();
	void ApplyParentImpactVelocity();
	void DentShardInwards();
	void ApplyVelocity(Vector, Vector);
	void SetStressType(ShatterGlassStressType);
	void SetStressPositionA(Vector2D);
	void SetStressPositionB(Vector2D);
	void SetStressVelocity(Vector);
	CFuncShatterglass * GetParentPanel();
	int GetPanelVertexCount();
	Vector2D GetPanelVertexAverage();
	Vector2D GetStressPositionA();
	Vector2D GetStressPositionB();
	Vector GetStressVelocity();
	const matrix3x4_t & GetSpawnTransform();
	int GetSubShardGeneration();
	bool IsPrimaryShard();
	bool IsLongAndSkinnySliver();
	bool IsTooSmallToShatter();
	bool IsTooSmallToSpawn();
	bool IsOnFrameEdge();
	float GetLongestEdge();
	float GetShortestEdge();
	float GetLongestAcross();
	float GetShortestAcross();
	float GetSumOfAllEdges();
	float GetArea();
	bool IsEligibleToDeSpawn();
	bool IsShardNearPanelSpacePosition();
	bool IsShatterRateLimited();
	void TakeDamage(Vector, Vector, ShatterDamageCause, CBaseEntity *);
	void Shatter();
	void Shatter(Vector2D);
	void Shatter(Vector);
	bool IsFlaggedForRemoval();
	bool GenerateProceduralShatterGlassShardModel();
	void EmitShatterSound(Vector);
	bool GetIsNeighborOf(CShatterGlassShard *, bool);
	void SetIsNeighborOf(CShatterGlassShard *);
	bool IsPointWithinConvexBounds(Vector2D, float);
	bool GetLineIntersectionPoint(Vector2D, Vector2D, Vector2D, Vector2D, Vector2D &);
	void AddVertex(Vector2D);
	void ScaleVerts(float);
	void ResetVertexStats();
	bool WeldNearbyVerts();
	void DestroyProceduralResources();
	void FlagForRemoval();
	void DisableAndHidePhysics();
	bool IsShattered();
	void ResetRestoreMove(float);
	const CUtlVector<Vector2D, CUtlMemory<Vector2D, int> > * GetRawPanelVerts();
	Vector GetWorldPositionAverage();
	Vector LocalToWorldSpace(Vector2D);
	~CShatterGlassShard();

	// sizeof = 184
};

// src/game/shared/func_shatterglass.h:209
class CFuncShatterglass : public CBaseModelEntity {
public:

private:

	static datamap_t m_DataMap;

	HMaterialStrong m_hGlassMaterialDamaged;  // +0x480
	HMaterialStrong m_hGlassMaterialUndamaged;  // +0x488
	HMaterialStrong m_hConcreteMaterialEdgeFace;  // +0x490
	HMaterialStrong m_hConcreteMaterialEdgeCaps;  // +0x498
	HMaterialStrong m_hConcreteMaterialEdgeFins;  // +0x4a0
	bool m_bBroken;  // +0x4a8

	int m_nNumShardsEverCreated;  // +0x554
	float m_flRestoreStartTime;  // +0x558
	float m_flLastShatterSoundEmitTime;  // +0x55c
	float m_flLastCleanupTime;  // +0x560
	bool m_bHasRateLimitedShards;  // +0x564

	float m_flInitAtTime;  // +0x568
	bool m_bGlassNavIgnore;  // +0x56c

	float m_flGlassThickness;  // +0x570
	bool m_bGlassInFrame;  // +0x574

	float m_flSpawnInvulnerability;  // +0x578
	bool m_bStartBroken;  // +0x57c

	string_t m_szDamagePositioningEntityName;  // +0x580

	COutputEvent m_OnBroken;  // +0x590
	uint8 m_iSurfaceType;  // +0x5ac
	typedef CBaseModelEntity BaseClass;

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
	CFuncShatterglass(CFuncShatterglass &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CFuncShatterglass();
	virtual ~CFuncShatterglass();
	CShatterGlassShard * CreateNewShard(CShatterGlassShard *);
	int GetNumShards();
	void SetIsBroken(bool);
	bool IsBroken();
	const matrix3x4_t & GetPanelTransform();
	Vector2D GetPanelSize();
	int GetShardCreatedCount();
	void IncrementNumShardsEverCreated();
	float GetLastShatterSoundEmitTime();
	void ResetLastShatterSoundEmitTime();
	void GlassThink();
	void BreakLargestShard(ShatterDamageCause, bool);
	void InputHit();
	void InputHit(inputdata_t &);
	void InputShatter(inputdata_t &);
	void InputRestore(inputdata_t &);
	void InputRestoreSlow(inputdata_t &);
	void StartRestore();
	void StartRestoreSlow();
	bool IsRestoring();
	void RestoreThink();
	void PurgeAll();
	void Init();
	bool ShouldNavIgnore();
	float GetHalfThickness();
	bool IsInAFrame();
	int IncrementShardsCreatedRecently(int);
	void SetHasRateLimitedShards();
	bool SpawnInvulnerabilityElapsed();
	void OutputOnBroken(CBaseEntity *);
	Vector GetPanelNormalWorldSpace();
	bool SliceVoronoiFragVerts(CUtlVector<Vector2D, CUtlMemory<Vector2D, int> > &, Vector2D, Vector2D);
	ShatterPanelMode GetShatterPanelMode();
	ShatterGlassStressType DetermineImpactStressTypeFromDamageCause(ShatterDamageCause);
	void UnfreezeAllShardsThatCantFindLinkageToFrame();
	virtual void OnRestore();

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	/* tag__fprintf: const_type tag not supported! */;
	CBodyComponent * GetComponent<CBodyComponent>(CBodyComponent *);
	CBodyComponent * GetComponent<CBodyComponent>();

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[18] OnRestore
	// vtable[8] Spawn
	// vtable[6] Precache
	// sizeof = 1456
};
