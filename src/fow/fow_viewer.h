// Reconstructed from DWARF by pahole; not original source.

// src/fow/fow_viewer.h:19
class CFoW_Viewer {
private:

	unsigned int m_nViewerTeam;  // +0xc
	float m_flRadius;  // +0x10
	char m_szName[64];  // +0x18
	int m_nGridX;  // +0x58
	int m_nGridY;  // +0x5c
	bool m_bInGrid;  // +0x6c

	CFoW_Viewer(CFoW *, unsigned int, FoWViewerType_t);
	~CFoW_Viewer();
	bool IsInGrid();
	bool UpdateSize(float);
	bool UpdateLocation(const Vector &, Vector *);
	bool UpdateHeightGroup();
	bool UpdateViewerOccludeMode(FoWOccluderMode_t);
	bool UpdateTeam(unsigned int);
	unsigned int GetTeam();
	float GetSize();
	Vector & GetLocation();
	int GetGridX();
	int GetGridY();
	uint32 GetOccludeMode();
	FoWViewerType_t GetFoWViewerType();
	void SetName(const char *);
	const char * GetName();
	bool MergeViewerVisibility(bool);
	CFoW * GetFoW();

	// sizeof = 168
};
