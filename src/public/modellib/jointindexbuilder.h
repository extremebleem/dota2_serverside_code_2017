// Reconstructed from DWARF by pahole; not original source.

// src/public/modellib/jointindexbuilder.h:20
struct CJointIndexData {
	int m_nIndex;  // +0x0
	CJointIndexData();
	CJointIndexData(int, const char *);
	int CompareHash(const CJointIndexData *);
	int CompareString(const CJointIndexData *);
	~CJointIndexData();
	CJointIndexData(const CJointIndexData &);
	CJointIndexData & operator=(const CJointIndexData &);

	// sizeof = 16
};
