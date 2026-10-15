// Reconstructed from DWARF by pahole; not original source.

// src/source1_legacy/parseentityioaction/parseentityioaction.h:11
class CEntityIOActionParsedData {
	char * m_pTargetName;  // +0x0
	char * m_pTargetInput;  // +0x8
	char * m_pTargetParam;  // +0x10
	float m_flDelay;  // +0x18
	int m_nTimesToFire;  // +0x1c
protected:

	char m_pTargetNameStorage[260];  // +0x20
	char m_pTargetInputStorage[260];  // +0x124
	char m_pTargetParamStorage[260];  // +0x228
	CEntityIOActionParsedData();
	CEntityIOActionParsedData(const CEntityIOActionParsedData &);
	void SetInput(const char *);
	void SetTarget(const char *);
	void SetParameters(const char *);
	void EncodeToString(char *, size_t);

	// sizeof = 816
};
