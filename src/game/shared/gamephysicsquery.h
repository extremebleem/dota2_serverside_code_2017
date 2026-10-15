// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/gamephysicsquery.h:30
class locatehandle_t {
private:

	uint16 m_Data;  // +0x0
	locatehandle_t(uint16);
	uint16 GetRaw();
	void SetRaw(uint16);
	uint16 * GetRawPtrForWrite();
	bool operator==(const locatehandle_t &);
	bool operator!=(const locatehandle_t &);
	bool operator<(const locatehandle_t &);
	bool operator<=(const locatehandle_t &);
	bool operator>(const locatehandle_t &);
	bool operator>=(const locatehandle_t &);
	locatehandle_t & operator++();
	locatehandle_t operator++(int);
	locatehandle_t & operator--();
	locatehandle_t operator--(int);
	locatehandle_t & operator=(uint16);

	// sizeof = 2
};

// src/game/shared/gamephysicsquery.h:61
class IPartitionEnumerator {
	int ()() * * _vptr.IPartitionEnumerator;  // +0x0
	IPartitionEnumerator(IPartitionEnumerator &);
	IPartitionEnumerator(const IPartitionEnumerator &);
	IPartitionEnumerator();
	virtual IterationRetval_t EnumElement(CBaseEntity *);

	// vtable[0] EnumElement
	// sizeof = 8
};

// src/game/shared/gamephysicsquery.h:76
class CGameQueryAttributes : public RnQueryAttr_t {
public:

	CGameQueryAttributes();
	CGameQueryAttributes(const CBaseEntity *, uint64, RnQueryObjectSet, int, bool);
	void Init(const CBaseEntity *, uint64, RnQueryObjectSet, int);
	void HitWorldAndEntitiesByContents(uint64);
	void HitStaticOnlyByContents(uint64);
	void HitEntitiesOnlyByContents(uint64);
	void HitEntitiesOnlyByCollisionGroup(int);
	void IgnoreOneEntityFindByContents(const CBaseEntity *, uint64);
	void IgnoreOneEntityFindByCollisionGroup(const CBaseEntity *, int);
	void IgnoreOneEntitySkipPlayersAndNPCs(const CBaseEntity *, uint64);
	void IgnoreOneEntityHitOnlyPlayersAndNPCs(const CBaseEntity *);
	void SetIgnore(const CBaseEntity *);
	void SetQueryAttributesFromEntity(const CBaseModelEntity &);

	// sizeof = 40
};

// src/game/shared/gamephysicsquery.h:156
class CTraceFilter {
	int ()() * * _vptr.CTraceFilter;  // +0x0
	CTraceFilter(const CTraceFilter &);
	virtual ~CTraceFilter();
	void EnableInteractsAs(uint64);
	void DisableInteractsAs(uint64);
	void EnableInteractsWith(uint64);
	void DisableInteractsWith(uint64);
	void EnableInteractsExclude(uint64);
	void DisableInteractsExclude(uint64);
	IntersectionLayerIndex GetCollisionGroup();
	void SetCollisionGroup(int);
	uint64 GetInteractsWith();
	uint64 GetInteractsExclude();
	uint64 GetInteractsAs();
	CTraceFilter(RnQueryObjectSet);
	CTraceFilter(RnQueryObjectSet, const CBaseEntity *);
	CTraceFilter(const CBaseEntity *, uint64, RnQueryObjectSet, int);
	void Init(const CBaseEntity *, uint64, RnQueryObjectSet, int);
	void SetIgnoreEntity(const CBaseEntity *);
	RnQueryObjectSet GetObjectSetMask();
	virtual bool ShouldHitEntity(CBaseEntity *);

	// vtable[2] ShouldHitEntity
	// sizeof = 48
};

// src/game/shared/gamephysicsquery.h:220
class CTraceFilterEntitiesOnly : public CTraceFilter {
public:

	CTraceFilterEntitiesOnly(RnQueryObjectSet, const CBaseEntity *);
	virtual bool ShouldHitEntity(CBaseEntity *);
	virtual ~CTraceFilterEntitiesOnly();

	// vtable[2] ShouldHitEntity
	// sizeof = 48
};

// src/game/shared/gamephysicsquery.h:233
class CTraceFilterSimple : public CTraceFilter {
public:

private:

	const CBaseEntity * m_pPassEnt;  // +0x30
	ShouldHitFunc_t m_pExtraShouldHitCheckFunction;  // +0x38
	CTraceFilterSimple(CTraceFilterSimple &);
	CTraceFilterSimple(const CTraceFilterSimple &);
	CTraceFilterSimple(RnQueryObjectSet, const CBaseEntity *, int, ShouldHitFunc_t);
	CTraceFilterSimple(const CBaseEntity *, int, ShouldHitFunc_t);
	virtual bool ShouldHitEntity(CBaseEntity *);
	virtual void SetPassEntity(const CBaseEntity *);
	const CBaseEntity * GetPassEntity();
	virtual ~CTraceFilterSimple();

	// vtable[2] ShouldHitEntity
	// vtable[3] SetPassEntity
	// sizeof = 64
};

// src/game/shared/gamephysicsquery.h:257
class CTraceFilterSkipTwoEntities : public CTraceFilterSimple {
public:

private:

	const CBaseEntity * m_pPassEnt2;  // +0x40
	CTraceFilterSkipTwoEntities(CTraceFilterSkipTwoEntities &);
	CTraceFilterSkipTwoEntities(const CTraceFilterSkipTwoEntities &);
	CTraceFilterSkipTwoEntities(const CBaseEntity *, const CBaseEntity *, int);
	virtual bool ShouldHitEntity(CBaseEntity *);
	virtual void SetPassEntity2(const CBaseEntity *);
	virtual ~CTraceFilterSkipTwoEntities();

	// vtable[2] ShouldHitEntity
	// vtable[4] SetPassEntity2
	// sizeof = 72
};

// src/game/shared/gamephysicsquery.h:274
class CTraceFilterSimpleList : public CTraceFilterSimple {
public:

protected:

	CTraceFilterSimpleList(CTraceFilterSimpleList &);
	CTraceFilterSimpleList(const CTraceFilterSimpleList &);
	CTraceFilterSimpleList(int);
	virtual bool ShouldHitEntity(CBaseEntity *);
	void AddEntityToIgnore(CBaseEntity *);
	void AddEntitiesToIgnore(int, CBaseEntity * *);
	virtual ~CTraceFilterSimpleList();

	// vtable[2] ShouldHitEntity
	// sizeof = 88
};

// src/game/shared/gamephysicsquery.h:290
class CTraceFilterNoNPCsOrPlayer : public CTraceFilterSimple {
public:

	CTraceFilterNoNPCsOrPlayer(const CBaseEntity *, int);
	virtual bool ShouldHitEntity(CBaseEntity *);
	virtual ~CTraceFilterNoNPCsOrPlayer();

	// vtable[2] ShouldHitEntity
	// sizeof = 64
};

// src/game/shared/gamephysicsquery.h:303
class CTraceFilterLOS : public CTraceFilterSkipTwoEntities {
public:

	CTraceFilterLOS(CTraceFilterLOS &);
	CTraceFilterLOS(const CTraceFilterLOS &);
	CTraceFilterLOS(CBaseEntity *, int, CBaseEntity *);
	virtual bool ShouldHitEntity(CBaseEntity *);
	virtual ~CTraceFilterLOS();

	// vtable[2] ShouldHitEntity
	// sizeof = 72
};

// src/game/shared/gamephysicsquery.h:332
class CTraceFilterSimpleClassnameList : public CTraceFilterSimple {
public:

private:

	CTraceFilterSimpleClassnameList(CTraceFilterSimpleClassnameList &);
	CTraceFilterSimpleClassnameList(const CTraceFilterSimpleClassnameList &);
	CTraceFilterSimpleClassnameList(const CBaseEntity *, int);
	virtual bool ShouldHitEntity(CBaseEntity *);
	void AddClassnameToIgnore(const char *);
	virtual ~CTraceFilterSimpleClassnameList();

	// vtable[2] ShouldHitEntity
	// sizeof = 88
};

// src/game/shared/gamephysicsquery.h:346
class CTraceFilterChain : public CTraceFilter {
public:

private:

	CTraceFilterChain(CTraceFilterChain &);
	CTraceFilterChain(const CTraceFilterChain &);
	CTraceFilterChain(CTraceFilter *, CTraceFilter *);
	virtual bool ShouldHitEntity(CBaseEntity *);
	virtual ~CTraceFilterChain();

	// vtable[2] ShouldHitEntity
	// sizeof = 64
};

// src/game/shared/gamephysicsquery.h:361
class CTraceFilterSkipClassname : public CTraceFilter {
public:

private:

	const char * m_pchClassname;  // +0x30
	CTraceFilterSkipClassname(CTraceFilterSkipClassname &);
	CTraceFilterSkipClassname(const CTraceFilterSkipClassname &);
	CTraceFilterSkipClassname(const CBaseEntity *, uint64, const char *, int);
	virtual bool ShouldHitEntity(CBaseEntity *);
	virtual ~CTraceFilterSkipClassname();

	// vtable[2] ShouldHitEntity
	// sizeof = 56
};

// src/game/shared/gamephysicsquery.h:374
struct CGameSweep {
	const CPhysSurfaceProperties * m_pSurfaceProperties;  // +0x8
	HPhysicsBody m_hBody;  // +0x10
	HPhysicsShape m_hShape;  // +0x18
	const CHitBox * m_pHitbox;  // +0x20
	int m_nHitboxBone;  // +0x28
	float m_flHitTime;  // +0x2c
	CGameSweep();
	bool DidHit();
	bool StartInSolid();
	CBaseEntity * GetHitEntity();
	bool IsHitboxHit();

	// sizeof = 72
};

// src/game/shared/gamephysicsquery.h:456
class CGamePhysicsQueryInterface {
private:

	void SetWorld(IVPhysics2World *);
	IVPhysics2World * GetWorld();
	bool TraceRay(const Ray_t &, CGameQueryAttributes *, trace_t *);
	bool TraceRay(const Ray_t &, CGameQueryAttributes &, trace_t *);
	bool TraceRay(const Vector &, const Vector &, CGameQueryAttributes *, CGameTrace *);
	bool TraceRay(const Vector &, const Vector &, float, CGameQueryAttributes *, CGameTrace *);
	int RaycastMultiple(const Vector &, const Vector &, CGameQueryAttributes *, CGameTraceList &);
	int RaycastMultiple(const Vector &, const Vector &, CTraceFilter *, CGameTraceList &);
	void SphereCastSingle(const Vector &, const Vector &, float, CGameQueryAttributes *, CGameTrace *);
	int SphereCastMultiple(const Vector &, const Vector &, float, CGameQueryAttributes *, CGameTraceList &);
	int EntitiesInBox(const Vector &, const Vector &, CGameQueryAttributes &, OverlapTest_t, COverlapList &);
	int EntitiesInSphere(const Vector &, float, CGameQueryAttributes &, OverlapTest_t, COverlapList &);
	int EntitiesAlongRay(const Ray_t &, CGameQueryAttributes &, COverlapList &);
	int EntitiesInBox(const Vector &, const Vector &, CTraceFilter &, OverlapTest_t, COverlapList &);
	int EntitiesAlongRay(const Ray_t &, CTraceFilter &, COverlapList &);
	int EntitiesInSphere(const Vector &, float, CTraceFilter &, OverlapTest_t, COverlapList &);
	bool CheckOverlap(const CBaseEntity *, const CBaseEntity *);
	void EnumerateElementsAlongRay(const Ray_t &, IPartitionEnumerator *);
	void EnumerateElementsInSphere(const Vector &, float, IPartitionEnumerator *);
	void EnumerateElementsInBox(const Vector &, const Vector &, IPartitionEnumerator *);
	int FilterTraceResults(CGameTraceList &, CTraceFilter *);
	int FilterOverlapResults(COverlapList &, CTraceFilter *);
	int FilterSweepResults(CSweepResultVector &, CTraceFilter *);
	int FilterLinearSweepResults(CLinearSweepResultVector &, CTraceFilter *);
	int FilterCollideResults(PlaneBuffer &, int, CTraceFilter *);
	uint64 GetPointContents(const Vector &, uint64);
	uint64 GetPointContents_WorldOnly(const Vector &, uint64);
	void ClipRayToEntity(const Ray_t &, uint64, CBaseEntity *, trace_t *);
	bool TraceRay(const Ray_t &, CTraceFilter *, trace_t *);
	bool TraceRay(const Ray_t &, CTraceFilter &, trace_t *);
	bool TraceRay(const Ray_t &, uint64, CTraceFilter *, trace_t *);
	bool TraceRayWithSortedResults(const Ray_t &, const RnQueryAttr_t &, CGameTraceList &);
	void SweepCollideable(CBaseEntity *, const Vector &, const Vector &, CTraceFilter *, CGameTrace *);
	void SweepCollideable(CBaseEntity *, const Vector &, const Vector &, CGameQueryAttributes &, CGameTrace *);
	bool PointOutsideWorld(const Vector &);
	CSweepResult SweepBody(const CTransform &, const CTransform &, const HPhysicsBody &, CGameQueryAttributes *, bool);
	int SweepBodyMultiple(CSweepResultVector &, const CTransform &, const CTransform &, const HPhysicsBody &, CGameQueryAttributes *, bool);
	CSweepResult SweepShape(const CTransform &, const CTransform &, const HPhysicsShape &, CGameQueryAttributes *, bool);
	CSweepResult SweepShape(const CTransform &, const CTransform &, const RnSphere_t &, CGameQueryAttributes *, bool);
	CSweepResult SweepShape(const CTransform &, const CTransform &, const RnSphere_t &, CTraceFilter *, bool);
	CSweepResult SweepShape(const CTransform &, const CTransform &, const RnCapsule_t &, CGameQueryAttributes *, bool);
	CSweepResult SweepShape(const CTransform &, const CTransform &, const RnCapsule_t &, CTraceFilter *, bool);
	CSweepResult SweepShape(const CTransform &, const CTransform &, const RnHull_t &, CGameQueryAttributes *, bool);
	CSweepResult SweepShape(const CTransform &, const CTransform &, const RnHull_t &, CTraceFilter *, bool);
	int SweepShapeMultiple(CSweepResultVector &, const CTransform &, const CTransform &, const HPhysicsShape &, CGameQueryAttributes &, bool);
	int SweepShapeMultiple(CSweepResultVector &, const CTransform &, const CTransform &, const RnSphere_t &, CGameQueryAttributes &, bool);
	int SweepShapeMultiple(CSweepResultVector &, const CTransform &, const CTransform &, const RnCapsule_t &, CGameQueryAttributes &, bool);
	int SweepShapeMultiple(CSweepResultVector &, const CTransform &, const CTransform &, const RnHull_t &, CGameQueryAttributes &, bool);
	CLinearSweepResult LinearCast(const Vector &, const Vector &, const RnSphere_t &, CGameQueryAttributes *, float);
	CLinearSweepResult LinearCast(const Vector &, const Vector &, const RnCapsule_t &, CGameQueryAttributes *, float);
	CLinearSweepResult LinearCast(const Vector &, const Vector &, const RnHull_t &, CGameQueryAttributes *, float);
	CLinearSweepResult LinearCast(const Vector &, const Vector &, const RnSphere_t &, CTraceFilter *, float);
	CLinearSweepResult LinearCast(const Vector &, const Vector &, const RnCapsule_t &, CTraceFilter *, float);
	CLinearSweepResult LinearCast(const Vector &, const Vector &, const RnHull_t &, CTraceFilter *, float);
	void SweepShapeAgainstEntity(const CTransform &, const CTransform &, const RnSphere_t &, CGameQueryAttributes *, CBaseEntity *, CGameSweep &);
	void SweepShapeAgainstEntity(const CTransform &, const CTransform &, const RnCapsule_t &, CGameQueryAttributes *, CBaseEntity *, CGameSweep &);
	void SweepShapeAgainstEntity(const CTransform &, const CTransform &, const RnHull_t &, CGameQueryAttributes *, CBaseEntity *, CGameSweep &);
	bool CheckShapeOverlapAgainstEntity(const CTransform &, const RnSphere_t &, CGameQueryAttributes *, const CBaseEntity *);
	bool CheckShapeOverlapAgainstEntity(const CTransform &, const RnCapsule_t &, CGameQueryAttributes *, const CBaseEntity *);
	bool CheckShapeOverlapAgainstEntity(const CTransform &, const RnHull_t &, CGameQueryAttributes *, const CBaseEntity *);
	RnPlane_t ContactPlane(const CTransform &, const CTransform &, const RnSphere_t &, const CSweepResult &);
	RnPlane_t ContactPlane(const CTransform &, const CTransform &, const RnCapsule_t &, const CSweepResult &);
	RnPlane_t ContactPlane(const CTransform &, const CTransform &, const RnHull_t &, const CSweepResult &);
	void CollideShape(PlaneBuffer &, const CTransform &, const RnSphere_t &, CGameQueryAttributes *, bool);
	void CollideShape(PlaneBuffer &, const CTransform &, const RnCapsule_t &, CGameQueryAttributes *, bool);
	void CollideShape(PlaneBuffer &, const CTransform &, const RnHull_t &, CGameQueryAttributes *, bool);
	locatehandle_t AddLocatableEntity(CBaseEntity *);
	void RemoveLocatableEntity(locatehandle_t, CBaseEntity *);
	void UpdateLocatableEntity(locatehandle_t, CBaseEntity *);
	Vector FindClosestPointToTarget(const Vector &, const Vector &, const RnSphere_t &, const RnQueryAttr_t &, const PlaneBuffer *);
	void UpdateEntitiesBeforeQuery();
	bool ClipRayToAggregate(const Ray_t &, IPhysAggregateInstance *, const RnQueryShapeAttr_t &, trace_t *);
	bool SweepBoxMultiple(const Ray_t &, const RnQueryAttr_t &, CTraceVector &);
	CLinearSweepResult LinearCast(const Vector &, const Vector &, const matrix3x4_t &, const CGJKShapeProxy &, const CSweepResult &, CGameQueryAttributes *, float);
	int LinearCastMultiple(CLinearSweepResultVector &, const Vector &, const Vector &, const RnSphere_t &, CGameQueryAttributes *, float);
	int LinearCastMultiple(CLinearSweepResultVector &, const Vector &, const Vector &, const RnHull_t &, CGameQueryAttributes *, float);
	int LinearCastMultiple(CLinearSweepResultVector &, const Vector &, const Vector &, const RnCapsule_t &, CGameQueryAttributes *, float);
	void ConvertAndSortTraceList(CGameTraceList *, const Vector &, const Vector &, const CTraceVector &);
	void ConvertTraceList(CGameTraceList *, const Vector &, const Vector &, const CTraceVector &);
	bool ConvertTrace(CGameTrace *, const Vector &, const Vector &, const PhysicsTrace_t &);
	CSweepResult SweepBodyMultipleAndProcess(const CTransform &, const CTransform &, const HPhysicsBody &, CGameQueryAttributes *, bool);
	CSweepResult ProcessSweepResults(const Vector &, const Vector &, CTraceFilter *, CSweepResultVector &);
	CSweepResult ProcessSweepResults(const Vector &, const Vector &, CSweepResultVector &);

	// sizeof = 8
};
