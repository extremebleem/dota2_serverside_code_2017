// Reconstructed from DWARF by pahole; not original source.

// src/game/public/meshutils/heightcellgrid.h:19
class CHeightCellGrid {
	struct HeightCell_t {
		uint32 m_HeightDataOffset;  // +0x0
		float m_flConstantHeight;  // +0x4
		float m_flSecondaryHeight;  // +0x8

		// sizeof = 12
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	static const uint32 INVALID_HEIGHT_DATA = 18446744073709551615;
	static const int INVALID_HEIGHT_CELL = 18446744073709551615;
	int m_nNumCellsX;  // +0x0
	int m_nNumCellsY;  // +0x4
	int m_nCellSamplesPerAxis;  // +0x8
	float m_flCellSize;  // +0xc
	typedef int HeightCellIndex_t;
	CHeightCellGrid();
	CHeightCellGrid & operator=(const CHeightCellGrid &);
	bool operator==(const CHeightCellGrid &);
	void InitalizeHeightCellGrid(int, int, float, int, const Vector2D &);
	void Purge();
	bool SetCellConstantHeight(int, int, float);
	bool SetCellSecondaryHeight(int, int, float);
	bool SetCellHeightSamples(int, int, float *);
	bool ComputeCellsSamplePoints(int, int, Vector *);
	bool GetCellConstantHeight(int, int, float *);
	bool GetCellSecondaryHeight(int, int, float *);
	void GetCellCorners(int, int, Vector2D *, Vector2D *);
	void GetNumCells(int *, int *);
	float GetHeightForLocation(float, float, float);
	float GetSecondaryHeightForLocation(float, float, float);
	void SerializeToBuffer(CUtlBuffer *);
	bool UnserializeFromBuffer(CUtlBuffer &);
	const int GetNumTotalSamplesPerCell();
	const int GetNumAxisSamplesPerCell();
	CHeightCellGrid(const CHeightCellGrid &);
	HeightCellIndex_t GetCellIndex(int, int);
	HeightCell_t & GetCell(HeightCellIndex_t);
	const HeightCell_t & GetCell(HeightCellIndex_t);
	float * GetCellHeightData(HeightCellIndex_t);
	const float * GetCellHeightData(HeightCellIndex_t);
	float ComputeHeightInCell(float, float, const float *);

	// sizeof = 72
};
