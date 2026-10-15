// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_gridnav_shared.h:35
class CGridNavBase : public CAutoGameSystem {
public:

protected:

	float m_flEdgeSize;  // +0x10
	float m_flOffsetX;  // +0x14
	float m_flOffsetY;  // +0x18
	int m_nWidth;  // +0x1c
	int m_nHeight;  // +0x20
	int m_nMinX;  // +0x24
	int m_nMaxX;  // +0x28
	int m_nMinY;  // +0x2c
	int m_nMaxY;  // +0x30

private:

	CGridNavBase(CGridNavBase &);
	CGridNavBase(const CGridNavBase &);
	CGridNavBase();
	int WorldToGridPosX(float);
	int WorldToGridPosY(float);
	float GridPosToWorldCenterX(int);
	float GridPosToWorldCenterY(int);
	Vector ClampToWorldEdge(Vector, float);
	Vector ClampToWorldEdge(Vector, CDOTA_BaseNPC *);
	bool IsPositionValidForMovement(Vector);
	bool IsInWorld(Vector, float);
	bool SetCellBlocked(int, int, bool);
	int GetCellIndex(int, int);
	bool OutOfBounds(int, int);
	bool IsCellPassable(int, int);
	bool IsCellPassableForUnit(int, int, CDOTA_BaseNPC *);
	bool IsCellPassableForFlags(int, int, GridNavCellFlags_t, GridNavCellFlags_t);
	GridNavCellFlags_t GetCellFlags(int, int);
	GridNavCellFlags_t GetFlagsForCellAtPosition(const Vector &);
	bool IsTraversable(const Vector &);
	bool IsBlocked(const Vector &);
	int GridPosToSectorX(int);
	int GridPosToSectorY(int);
	int SectorToMinGridPosX(int);
	int SectorToMinGridPosY(int);
	float GetEdgeSize();
	int GetWidth();
	int GetHeight();
	int GetNumCells();
	int GetMinGridX();
	int GetMaxGridX();
	int GetMinGridY();
	int GetMaxGridY();

protected:

	void ClearData();
	bool LoadDataFromFile(const char *);
	bool LoadDataFromBuffer(CUtlBuffer &);
	void ComputePassabilityFlagsForUnit(CDOTA_BaseNPC *, GridNavCellFlags_t *, GridNavCellFlags_t *);
	void ShowGridNav(GridNavDisplayMode_t, const Vector &);
	const uint8 * GetCellFlagData();
	virtual ~CGridNavBase();

	// sizeof = 80
};
