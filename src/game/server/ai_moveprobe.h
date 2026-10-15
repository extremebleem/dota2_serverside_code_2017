// Reconstructed from DWARF by pahole; not original source.

// src/game/server/ai_moveprobe.h:40
class CAI_MoveProbe : public CAI_Component {
	struct CheckStepArgs_t {
		float flStepSize;  // +0x18
		float flStepHeight;  // +0x1c
		float flStepDownMultiplier;  // +0x20
		float flMinStepLanding;  // +0x24

		uint64 nInteractsWithMask;  // +0x30
		uint32 nMoveProbeFlags;  // +0x38
		uint32 nTestGroundMoveFlags;  // +0x3c
		CheckStepArgs_t();

		// sizeof = 64
	};

	struct CheckStepResult_t {
		bool bStartSolid;  // +0x20
		bool bCrawling;  // +0x21
		CheckStepResult_t();

		// sizeof = 40
	};

public:

private:

	EHANDLE m_hLastBlockingEnt;  // +0x10

	static datamap_t m_DataMap;
	CAI_MoveProbe(const CAI_MoveProbe &);
	CAI_MoveProbe(CAI_BaseNPC *);
	virtual ~CAI_MoveProbe();
	bool MoveLimit(Navigation_t, const Vector &, const Vector &, AIMoveTrace_t *);
	bool MoveLimit(Navigation_t, const Vector &, const Vector &, const CBaseEntity *, AIMoveTrace_t *);
	bool MoveLimit(Navigation_t, const Vector &, const Vector &, const CBaseEntity *, uint64, AIMoveTrace_t *);
	bool MoveLimit(Navigation_t, const Vector &, const Vector &, const CBaseEntity *, uint64, uint32, AIMoveTrace_t *);
	bool MoveLimit(Navigation_t, const Vector &, const Vector &, const CBaseEntity *, uint64, uint32, float, AIMoveTrace_t *);
	bool CheckStandPosition(const Vector &);
	bool CheckStandPosition(const Vector &, uint64);
	bool FloorPoint(const Vector &, float, float, Vector *);
	bool FloorPoint(const Vector &, float, float, uint64, Vector *);
	Vector CalcJumpLaunchVelocity(const Vector &, const Vector &, float, float, float *, Vector *);
	void TraceMover(const Vector &, const Vector &, CGameTrace *);
	void TraceMover(const Vector &, const Vector &, uint64, uint32, CGameTrace *);
	void TraceAABB(const Vector &, const Vector &, const Vector &, const Vector &, CGameTrace *);
	void TraceAABB(const Vector &, const Vector &, const Vector &, const Vector &, uint64, uint32, CGameTrace *);
	bool TestGroundMove(const Vector &, const Vector &, uint64, uint32, uint32, AIMoveTrace_t *);
	bool TestGroundMove(const Vector &, const Vector &, uint64, uint32, uint32, float, AIMoveTrace_t *);
	Vector TestGroundMove_Navmesh(const Vector &, const Vector &, NavHull_t);
	void GetHullMinMax(Vector *, Vector *, bool);
	bool ShouldBrushBeIgnored(CBaseEntity *);
	void ClearBlockingEntity();
	CBaseEntity * GetBlockingEntity();
	void TraceLine(const Vector &, const Vector &, uint64, uint32, bool, CGameTrace *);
	void TraceMoverGround(const Vector &, const Vector &, uint64, uint32, CGameTrace *);
	void TraceMoverCapsule(const Vector &, const Vector &, uint64, uint32, CGameTrace *, const CCollisionProperty *);
	void TraceMoverCylinder(const Vector &, const Vector &, uint64, uint32, CGameTrace *, const CCollisionProperty *);
	bool CheckStep(const CheckStepArgs_t &, CheckStepResult_t *);
	/* tag__fprintf: const_type tag not supported! */;
	void GroundMoveLimit(const Vector &, const Vector &, uint64, uint32, uint32, const CBaseEntity *, float, AIMoveTrace_t *);
	void FlyMoveLimit(const Vector &, const Vector &, uint64, uint32, const CBaseEntity *, AIMoveTrace_t *);
	void JumpMoveLimit(const Vector &, const Vector &, uint64, uint32, const CBaseEntity *, AIMoveTrace_t *);
	void ClimbMoveLimit(const Vector &, const Vector &, uint64, uint32, const CBaseEntity *, AIMoveTrace_t *);
	bool IterativeFloorPoint(const Vector &, uint64, Vector *);
	bool IterativeFloorPoint(const Vector &, uint64, float, Vector *);
	void CheckStepOverLargeCrawl(const CheckStepArgs_t &, const Vector &, const Vector &, const CGameTrace &, CheckStepResult_t *);
	bool Confirm3DConnectivity(AIMoveTrace_t *, uint32, const Vector &);
	float StepHeight();
	bool CanStandOn(CBaseEntity *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// sizeof = 24
};
