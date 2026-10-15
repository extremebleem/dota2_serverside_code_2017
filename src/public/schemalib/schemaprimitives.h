// Reconstructed from DWARF by pahole; not original source.

// src/public/schemalib/schemaprimitives.h:29
struct SchemaString_t {
	const char * m_pImplChars;  // +0x0
	int32 m_nImplBufferSize;  // +0x8
	void SetDynamic(const char *);
	void DeallocateDynamic();
	const char * Get();

	// sizeof = 16
};
