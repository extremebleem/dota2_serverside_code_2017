// Reconstructed from DWARF by pahole; not original source.

// src/public/dmxloader/dmxelement.h:53
struct DmxElementUnpackStructure_t {
	const char * m_pAttributeName;  // +0x0
	const char * m_pDefaultString;  // +0x8

	intp m_nOffset;  // +0x18
	int m_nSize;  // +0x20
	int m_nBitOffset;  // +0x24

	const void * m_pUserData;  // +0x30
	const char * m_pTypeName;  // +0x38
	const DmxElementUnpackStructure_t * m_pSub;  // +0x40
	int m_nArrayLength;  // +0x48

	// sizeof = 80
};
