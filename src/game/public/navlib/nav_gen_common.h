// Reconstructed from DWARF by pahole; not original source.

// src/game/public/navlib/nav_gen_common.h:121
class CNavGenPolyConn {
	int m_nThisPoly;  // +0x0
	int m_nThisEdge;  // +0x4
	int m_nOtherPoly;  // +0x8
	int m_nOtherEdge;  // +0xc
	double m_flThisPortalLength;  // +0x10
	double m_flThisPortalCoord;  // +0x18
	double m_flOtherPortalLength;  // +0x38
	double m_flOtherPortalCoord;  // +0x40
	bool m_bDummyConnection;  // +0x60
	bool m_bRemoved;  // +0x61
	CNavGenPolyConn();
	bool operator<(const CNavGenPolyConn &);
	double Length();
	double LengthSqr();
	void UpdatePortalInfo(CUtlVector<CNavGenPoly, CUtlMemory<CNavGenPoly, int> > &, CUtlVector<VecDouble3, CUtlMemory<VecDouble3, int> > &, double);
	void UpdatePortalInfoFromEdges(CUtlVector<CNavGenPoly, CUtlMemory<CNavGenPoly, int> > &, CUtlVector<VecDouble3, CUtlMemory<VecDouble3, int> > &, double);
	double GetThisPortalCentreAlongEdge();

	// sizeof = 104
};

// src/game/public/navlib/nav_gen_common.h:159
class CNavGenPolyConnList {
private:

	CNavGenPolyConnList();
	int AddToTail(CNavGenPolyConn &);
	int Count();
	int Count(int);
	int CountNonDummy(int);
	CNavGenPolyConn & Get(int);
	CNavGenPolyConn & Get(int, int);
	void Remove(int);
	void Remove(int, int);
	void RemoveForPoly(int, int);
	void CopyCons(CNavGenPolyConnList &, int, int);
	void CopyConsForEdge(CNavGenPolyConnList &, int, int, int);
	void CopyConsForEdgeWithExclude(CNavGenPolyConnList &, int, int, int, int);
	void MoveConsToEdge(CNavGenPoly &, int, int);
	void ReplaceThisPoly(int);

	// sizeof = 1136
};

// src/game/public/navlib/nav_gen_common.h:273
class CNavGenPoly : public CNavGenPolyBase<4ul> {
public:

private:

	float m_flClearance;  // +0x78
	CNavGenPoly();
	~CNavGenPoly();
	bool IsConnectedTo(int);
	void DisconnectOthers(CUtlVector<CNavGenPoly, CUtlMemory<CNavGenPoly, int> > &);
	void ConnectToOutgoing(int, int, int, int, bool, CUtlVector<CNavGenPoly, CUtlMemory<CNavGenPoly, int> > &, CUtlVector<VecDouble3, CUtlMemory<VecDouble3, int> > &, double);
	void ConnectToPoly(CNavGenPolyConn &);
	void ConnectToPolyAndBack(CNavGenPolyConn &, CUtlVector<CNavGenPoly, CUtlMemory<CNavGenPoly, int> > &, CUtlVector<VecDouble3, CUtlMemory<VecDouble3, int> > &, double, bool);
	void ValidateConnections(CUtlVector<CNavGenPoly, CUtlMemory<CNavGenPoly, int> > &);
	float GetClearance();
	void SetClearance(float);
	void CalcClearance(float, float, float, CUtlVector<VecDouble3, CUtlMemory<VecDouble3, int> > &, const IVPhysics2World *);
	bool TestCapsuleForEdge(int, CUtlVector<VecDouble3, CUtlMemory<VecDouble3, int> > &, float, float, float, const IVPhysics2World *);
	bool TestCapsuleForAllEdges(CUtlVector<VecDouble3, CUtlMemory<VecDouble3, int> > &, float, float, float, const IVPhysics2World *, bool *);

	// sizeof = 128
};
