// Reconstructed from DWARF by pahole; not original source.

// src/public/navlib/nav_ladder.h:21
class CNavLadder {
	enum LadderDirectionType {
		LADDER_UP = 0,
		LADDER_DOWN = 0x1,
		NUM_LADDER_DIRECTIONS = 0x2,
	};

	float m_flLength;  // +0x18
	float m_flWidth;  // +0x1c
private:

	int m_nLadderTeam;  // +0x48

	static uint32 m_nextID;
	uint32 m_id;  // +0x5c
	const CNavMesh & m_rNavMesh;  // +0x60
	CNavLadder(CNavMesh &);
	~CNavLadder();
	void OnRoundRestart();
	void Save(CUtlBuffer &, unsigned int);
	void Load(CUtlBuffer &, unsigned int);
	const CNavMesh & GetNavMesh();
	unsigned int GetID();
	void CompressIDs(const NavLadderVector &);
	Vector GetCenter();
	Vector GetPosAtHeight(float);
	bool IsConnected(const CNavArea *, LadderDirectionType);
	void ConnectGeneratedLadder(float);
	void ConnectTo(CNavArea *);
	void Disconnect(CNavArea *);
	void OnSplit(CNavArea *, CUtlVectorFixed<CNavArea*, 3ul> &);
	void OnDestroyNotify(CNavArea *);
	void UpdateDangling();
	void SetDir(NavDirType);
	NavDirType GetDir();
	const Vector & GetNormal();
	void Shift(const Vector &);
	bool IsUsableByTeam(int);
	CNavArea * * GetConnection(NavLadderConnectionType);
	const CNavArea * GetConnection(NavLadderConnectionType);

	// sizeof = 104
};
