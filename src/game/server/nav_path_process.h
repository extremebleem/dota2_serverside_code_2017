// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nav_path_process.h:17
class CPathOptimizer {
	int ()() * * _vptr.CPathOptimizer;  // +0x0
	CPathOptimizer(CPathOptimizer &);
	CPathOptimizer(const CPathOptimizer &);
	CPathOptimizer();
	virtual void OptimizePath(CPath &, const CPathCostBase &);

	// vtable[0] OptimizePath
	// sizeof = 8
};

// src/game/server/nav_path_process.h:29
class CPathOptimizerStraightener : public CPathOptimizer {
public:

	CPathOptimizerStraightener(CPathOptimizerStraightener &);
	CPathOptimizerStraightener(const CPathOptimizerStraightener &);
	CPathOptimizerStraightener();
	virtual void OptimizePath(CPath &, const CPathCostBase &);

protected:

	virtual int FindNextOccludedNode(CPath &, const CPathCostBase &, int);

	// vtable[0] OptimizePath
	// vtable[1] FindNextOccludedNode
	// sizeof = 8
};

// src/game/server/nav_path_process.h:44
class CPathOptimizerNavmesh : public CPathOptimizerStraightener {
public:

	CPathOptimizerNavmesh(CPathOptimizerNavmesh &);
	CPathOptimizerNavmesh(const CPathOptimizerNavmesh &);
	CPathOptimizerNavmesh();

protected:

	virtual int FindNextOccludedNode(CPath &, const CPathCostBase &, int);

	// vtable[1] FindNextOccludedNode
	// sizeof = 8
};

// src/game/server/nav_path_process.h:55
class CNavPathJumpProcess {
	int ()() * * _vptr.CNavPathJumpProcess;  // +0x0
	CNavPathJumpProcess(CNavPathJumpProcess &);
	CNavPathJumpProcess(const CNavPathJumpProcess &);
	CNavPathJumpProcess();
	virtual void PostProcessJumps(CPath &, const CPathCostBase &);

	// vtable[0] PostProcessJumps
	// sizeof = 8
};

// src/game/server/nav_path_process.h:67
class CNavPathJumpProcessLandingZone : public CNavPathJumpProcess {
public:

	float m_flLandingZoneBuffer;  // +0x8
	CNavPathJumpProcessLandingZone();
	virtual void PostProcessJumps(CPath &, const CPathCostBase &);

protected:

	void PostProcessJump(CPath &, const CPathCostBase &, int);
	bool FindLandingBoxExit(CPath &, int, float, float, Vector *, Vector *, int *, bool *);

	// vtable[0] PostProcessJumps
	// sizeof = 16
};
