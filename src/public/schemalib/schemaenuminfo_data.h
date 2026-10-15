// Reconstructed from DWARF by pahole; not original source.

// src/public/schemalib/schemaenuminfo_data.h:21
struct SchemaEnumeratorInfoData_t {
private:

	SchemaEnumeratorValue_t m_nValue;  // +0x10

	void DeallocateDynamic();

	// sizeof = 56
};

// src/public/schemalib/schemaenuminfo_data.h:49
struct SchemaEnumInfoData_t {
private:

	const char * m_pNote;  // +0x10
	uint32 m_nSizeOf;  // +0x18
	uint32 m_nAlignOf;  // +0x1c
	const CSchemaEnumBindingBase * m_pBinding;  // +0x60
	bool m_bInitialized;  // +0x68

	SchemaEnumeratorValue_t m_nMinValue;  // +0x70
	SchemaEnumeratorValue_t m_nMaxValue;  // +0x78

	void DeallocateDynamic();

	// sizeof = 128
};
