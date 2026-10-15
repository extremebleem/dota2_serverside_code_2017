// Reconstructed from DWARF by pahole; not original source.

// src/public/schemalib/schemaprimitives.h:77
struct SchemaArrayBase_t<32ul, 8ul> {
	void * m_pImplElements;  // +0x0
	int32 m_nImplLength;  // +0x8
	void * Element(int);
	const void * Element(int);
	int Count();
	bool IsStaticData();
	void TruncateStaticCount(int);
	int SetCountDynamic(int);
	void DeallocateDynamic();

	// sizeof = 16
};

// src/public/schemalib/schemaprimitives.h:77
struct SchemaArrayBase_t<56ul, 8ul> {
	void * m_pImplElements;  // +0x0
	int32 m_nImplLength;  // +0x8
	void * Element(int);
	const void * Element(int);
	int Count();
	bool IsStaticData();
	void TruncateStaticCount(int);
	int SetCountDynamic(int);
	void DeallocateDynamic();

	// sizeof = 16
};

// src/public/schemalib/schemaprimitives.h:77
struct SchemaArrayBase_t<16ul, 8ul> {
	void * m_pImplElements;  // +0x0
	int32 m_nImplLength;  // +0x8
	void * Element(int);
	const void * Element(int);
	int Count();
	bool IsStaticData();
	void TruncateStaticCount(int);
	int SetCountDynamic(int);
	void DeallocateDynamic();

	// sizeof = 16
};

// src/public/schemalib/schemaprimitives.h:157
struct SchemaArray_t<SchemaMetadataEntryData_t> {
	SchemaMetadataEntryData_t & Element(int);
	const SchemaMetadataEntryData_t & Element(int);
	SchemaMetadataEntryData_t & operator[](int);
	const SchemaMetadataEntryData_t & operator[](int);
	int Count();
	bool IsStaticData();
	void TruncateStaticCount(int);
	void SetCountDynamic(int);
	void RecursiveDeallocateDynamic();
	void DeallocateDynamic();
	int AddToTailDynamic(const SchemaMetadataEntryData_t &);
	int AddToTailDynamic();

	// sizeof = 16
};

// src/public/schemalib/schemaprimitives.h:157
struct SchemaArray_t<SchemaEnumeratorInfoData_t> {
	SchemaEnumeratorInfoData_t & Element(int);
	const SchemaEnumeratorInfoData_t & Element(int);
	SchemaEnumeratorInfoData_t & operator[](int);
	const SchemaEnumeratorInfoData_t & operator[](int);
	int Count();
	bool IsStaticData();
	void TruncateStaticCount(int);
	void SetCountDynamic(int);
	void RecursiveDeallocateDynamic();
	void DeallocateDynamic();
	int AddToTailDynamic(const SchemaEnumeratorInfoData_t &);
	int AddToTailDynamic();

	// sizeof = 16
};

// src/public/schemalib/schemaprimitives.h:157
struct SchemaArray_t<SchemaMetaModifyAdd_t> {
	SchemaMetaModifyAdd_t & Element(int);
	const SchemaMetaModifyAdd_t & Element(int);
	SchemaMetaModifyAdd_t & operator[](int);
	const SchemaMetaModifyAdd_t & operator[](int);
	int Count();
	bool IsStaticData();
	void TruncateStaticCount(int);
	void SetCountDynamic(int);
	void RecursiveDeallocateDynamic();
	void DeallocateDynamic();
	int AddToTailDynamic(const SchemaMetaModifyAdd_t &);
	int AddToTailDynamic();

	// sizeof = 16
};

// SchemaArrayBase_t: 2 more instantiations (full list in INDEX.tsv)
//   SchemaArrayBase_t<64ul, 8ul>
//   SchemaArrayBase_t<8ul, 8ul>

// SchemaArray_t: 7 more instantiations (full list in INDEX.tsv)
//   SchemaArray_t<SchemaString_t>
//   SchemaArray_t<SchemaClassFieldData_t>
//   SchemaArray_t<SchemaStaticFieldData_t>
//   SchemaArray_t<SchemaBaseClassInfoData_t>
//   SchemaArray_t<SchemaFieldMetadataOverrideData_t>
//   SchemaArray_t<const CSchemaClassInfo*>
//   SchemaArray_t<const CSchemaEnumInfo*>
