// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_path.h:8
class CGridNavPath {
	enum {
		COMPUTESHORTPATH_DISABLE_FISSURE_LOGIC = 0x1,
	};

private:

	int m_nCurPositionIndex;  // +0x18

	bool m_bPartial;  // +0x38

	float m_flTargetDist;  // +0x48
	bool m_bDirectional;  // +0x4c

	int m_nCurShortPathIndex;  // +0x68
	float m_flShortPathRecomputeDistance;  // +0x6c

	bool m_bShortPathEndedEarly;  // +0x88

	bool m_bTurningToFacePath;  // +0xa8
	bool m_bMovingAlongPathSegment;  // +0xa9

	float m_flTurnAngleToFacePath;  // +0xac

	static float m_flSearchDepthLimit;
	CGridNavPath();
	void Build(CDOTA_BaseNPC *, const Vector &, float);
	void BuildDirectional(CDOTA_BaseNPC *, const Vector &);
	void Rebuild(CDOTA_BaseNPC *);
	void Update(CDOTA_BaseNPC *);
	bool IsValid();
	bool IsPartial();
	void Invalidate();
	const CUtlVector<Vector, CUtlMemory<Vector, int> > & GetPositionArray();
	const Vector & GetFurthestPathPoint();
	bool IsPathEndReached(const Vector &);
	bool IsPathCurrentlyExhausted(const Vector &);
	void LimitPathingSearchDepth(float);
	const Vector & GetFurthestShortPathPoint();
	bool TrySkipAhead(CDOTA_BaseNPC *);
	void ComputeShortPath(CDOTA_BaseNPC *, int);
	void ComputeShortPathGoal(Vector *, float *, CDOTA_BaseNPC *);
	float ComputePathLength(const Vector &, CUtlVector<Vector, CUtlMemory<Vector, int> > &, int);

	// sizeof = 176
};
