// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/predictioncopy.h:63
struct field_spew_info_t {
	const datamap_t * m_pMap;  // +0x0
	const typedescription_t * m_pField;  // +0x8
	int m_nArrayIndex;  // +0x10
	field_spew_info_t();

	// sizeof = 24
};

// src/game/shared/predictioncopy.h:74
struct PredictionCopyField_t {
	void * m_pField;  // +0x8

	// sizeof = 16
};

// src/game/shared/predictioncopy.h:80
struct PredictionCopyFieldInfo_t {
	PredictionCopyFieldInfo_t();

	// sizeof = 64
};

// src/game/shared/predictioncopy.h:147
struct datarun_t {
	int m_nStartFlatField;  // +0x0
	int m_nEndFlatField;  // +0x4
	int m_nStartOffset[2];  // +0x8
	int m_nRunLengthInBytes;  // +0x10
	datarun_t();

	// sizeof = 20
};

// src/game/shared/predictioncopy.h:174
struct datacopyruns_t {
	datacopyruns_t();

	// sizeof = 24
};

// src/game/shared/predictioncopy.h:180
struct flattenedoffsets_t {
	int m_nPackedSize;  // +0x30
	int m_nPackedStartOffset;  // +0x34
	flattenedoffsets_t();
	bool IsMutated(const flattenedoffsets_t &);

	// sizeof = 56
};

// src/game/shared/predictioncopy.h:190
struct datamapinfo_t {
	datamapinfo_t();
	bool IsMutated(const datamapinfo_t &);

	// sizeof = 80
};

// src/game/shared/predictioncopy.h:200
struct customfield_t {
	const datamap_t * m_pSourceDatamap;  // +0x68
	bool IsMutated(const customfield_t &);

	// sizeof = 112
};

// src/game/shared/predictioncopy.h:217
struct optimized_datamap_t {
	optimized_datamap_t();
	bool IsMutated(const optimized_datamap_t &);

	// sizeof = 184
};

// src/game/shared/predictioncopy.h:226
class CPredictionCopy {
	enum {
		TRANSFERDATA_COPYONLY = 0,
		TRANSFERDATA_ERRORCHECK_NOSPEW = 0x1,
		TRANSFERDATA_ERRORCHECK_SPEW = 0x2,
		TRANSFERDATA_ERRORCHECK_DESCRIBE = 0x3,
	};

	enum pcverbosity_t {
		PCVERBOSITY_SIMPLE = 0,
		PCVERBOSITY_FULL = 0x1,
	};

	typedef enum {
		TRANSFERDATA_COPYONLY = 0,
		TRANSFERDATA_ERRORCHECK_NOSPEW = 0x1,
		TRANSFERDATA_ERRORCHECK_SPEW = 0x2,
		TRANSFERDATA_ERRORCHECK_DESCRIBE = 0x3,
	} optype_t;

private:

	optype_t m_OpType;  // +0x0
	int m_nTypeMask;  // +0x8

	int m_nDestOffsetIndex;  // +0x28
	int m_nSrcOffsetIndex;  // +0x2c
	int m_nErrorCount;  // +0x30
	pfnPredictionCopyFieldCompareFunction m_FieldCompareFunc;  // +0x40
	bool m_bSearchForWatchField;  // +0x48

	const typedescription_t * m_pWatchField;  // +0x50
	const char * m_pOperation;  // +0x58

	bool m_bVerbose;  // +0x80
	void CPredictionCopy(CPredictionCopy *, PredictionCopyType_t, IPredictionCopyable *, IPredictionCopyable *, optype_t, pfnPredictionCopyFieldCompareFunction);
	int TransferData(CPredictionCopy *, const char *, CEntityIndex, datamap_t *);
	void PrepareDataMap(datamap_t *, bool);
	const typedescription_t * FindFlatFieldByName(const char *, const datamap_t *);
	void DescribeFlattenedList(const datamap_t *, PredictionCopyType_t, TypedescriptionOffsetType_t, pcverbosity_t);
	void Print(datamap_t *);
	void ReportOverrideChains();
	int GetIntermediateDataSize(const datamap_t *);
	int ComputePackedDataSize_R(const uint8 *, const datamap_t *);
	void ConstructSpecialFields(const datamap_t *, void *);
	void DestructSpecialFields(const datamap_t *, void *);
	void ReportFieldsDiffer(CPredictionCopy *, const field_spew_info_t &, const char *, ...);
	void OutputFieldDescription(CPredictionCopy *, const CFieldPath &, const field_spew_info_t &, difftype_t, const char *, const char *, ...);
	void DescribeFields(CPredictionCopy *, const CFieldPath &, const CUtlVector<const datamap_t*, CUtlMemory<const datamap_t*, int> > &, const datamap_t *, PredictionCopyType_t, const uint8 *, const uint8 *, int);
	const char * LookupFieldTypeName(const CPredictionCopy *, fieldtype_t);
	PredictionCopyType_t GetType(const CPredictionCopy *);
	optype_t GetOpType(const CPredictionCopy *);
	const CEntityIndex & GetEntityIndex(const CPredictionCopy *);
	void CopyFlatFieldsUsingRuns(CPredictionCopy *, const CFieldPath &, const datamap_t *, PredictionCopyType_t, uint8 *, uint8 *, int);
	void CopyFlatFields(CPredictionCopy *, const CFieldPath &, const datamap_t *, PredictionCopyType_t, uint8 *, uint8 *, int);
	void TransferDataCopyOnly(CPredictionCopy *, const CFieldPath &, const datamap_t *, uint8 *, uint8 *);
	void TransferDataErrorCheckNoSpew(CPredictionCopy *, const CFieldPath &, const char *, const datamap_t *, uint8 *, uint8 *);
	void TransferDataErrorCheckSpew(CPredictionCopy *, const CFieldPath &, const char *, const datamap_t *, uint8 *, uint8 *);
	void TransferDataDescribe(CPredictionCopy *, const CFieldPath &, const char *, const datamap_t *, const uint8 *, const uint8 *, int);
	void InsertDescribeNote(CPredictionCopy *, const CFieldPath &, const PredictionCopyFieldInfo_t &, const char *, const char *, ...);
	void SetVerbose(CPredictionCopy *, bool);
	bool IsVerbose(const CPredictionCopy *);
	bool ShouldProcessCustom(CPredictionCopy *, const typedescription_t *);
	void ErrorCheckFlatFields_NoSpew(CPredictionCopy *, const CFieldPath &, const datamap_t *, PredictionCopyType_t, uint8 *, uint8 *, int);
	void ErrorCheckFlatFields_Spew(CPredictionCopy *, const CFieldPath &, const datamap_t *, PredictionCopyType_t, uint8 *, uint8 *, int);
	void DetermineWatchField(CPredictionCopy *, const char *, CEntityIndex, const datamap_t *);
	void WatchMsg(CPredictionCopy *, const typedescription_t *, const char *, ...);
	void DumpWatchField(CPredictionCopy *, const typedescription_t *, const uint8 *, int);
	void VerboseSpewField(const CPredictionCopy *, const CFieldPath &, bool, uint32, const typedescription_t *);
	void VerboseSpewRun(const CPredictionCopy *, const CFieldPath &, uint32, const CUtlVector<typedescription_t, CUtlMemory<typedescription_t, int> > &, const datarun_t *);
	void PrepareDataMap_R(datamap_t *, bool);
};
