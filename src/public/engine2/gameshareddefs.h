// Reconstructed from DWARF by pahole; not original source.

// src/public/engine2/gameshareddefs.h:33
struct PVSInfo_t {
	short unsigned int * m_pClusters;  // +0x0
	float m_vCenter[3];  // +0x8
	short int m_nHeadNode;  // +0x14
	short int m_nClusterCount;  // +0x16
	short int m_nAreaNum;  // +0x18
	short int m_nAreaNum2;  // +0x1a
private:

	short unsigned int m_pClustersInline[4];  // +0x1c
	PVSInfo_t();

	// sizeof = 40
};

// src/public/engine2/gameshareddefs.h:71
class CGlobalVars : public CGlobalVarsBase {
public:

	const char * mapname;  // +0x38
	int mapversion;  // +0x40

	const char * startspot;  // +0x48
	bool teamplay;  // +0x54

	int maxEntities;  // +0x58
	int serverCount;  // +0x5c
	CGlobalVars();
	CGlobalVars(bool);

	// sizeof = 96
};
