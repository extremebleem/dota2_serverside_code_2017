// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/interpolatedvarhistory.h:16
struct InterpolationRecordTyped_t<EnableRenderingInfo_t> {
	const EnableRenderingInfo_t * m_pValue;  // +0x0
	int m_nChangeTick;  // +0x8
	InterpolationRecordTyped_t();
	const EnableRenderingInfo_t * GetValue();

	// sizeof = 16
};

// src/public/tier1/interpolatedvarhistory.h:46
class CInterpolatedVarHistory<EnableRenderingInfo_t> {
	struct InterpolatedVarEntry_t {
		int32 m_nChangeTick;  // +0x0
		int16 m_nIndex;  // +0x4
		int16 m_nReserved;  // +0x6

		// sizeof = 8
	};

private:

	uint32 m_firstElement:6;  // +0x8:0
	uint32 m_nDataArrayCount:6;  // +0x8:6
	uint32 m_bIsMemcopyable:1;  // +0x8:12
	uint32 m_count:6;  // +0x8:13
	uint32 m_maxElement:6;  // +0x8:19
	uint32 m_growSize:6;  // +0x8:25

	uint32 m_nFreeDataElements;  // +0xc
	typedef InterpolationRecordTyped_t<EnableRenderingInfo_t> InterpolationRecord_t;
	CInterpolatedVarHistory(int);
	~CInterpolatedVarHistory();
	int Count();
	int Head();
	bool IsIdxValid(int);
	bool IsValidIndex(int);
	int InvalidIndex();
	void SetEntry(int, const EnableRenderingInfo_t *, int);
	void GetEntry(int, InterpolationRecord_t *);
	EnableRenderingInfo_t * Value(int);
	const EnableRenderingInfo_t * Value(int);
	int Tick(int);
	void Swap(int, int);
	void SetDataArrayCount(int);
	int GetDataArrayCount();
	void SetIsMemcopyableType(bool);
	void EnsureCapacity(int);
	int GetCapacity();
	int AddToHead();
	int AddToTail();
	void RemoveAll();
	void RemoveAtHead();
	void Truncate(int);
	void TransferDataTo(CInterpolatedVarHistory<EnableRenderingInfo_t> *);
	void CopyIntoElement(EnableRenderingInfo_t *, const EnableRenderingInfo_t *);
	void Purge();
	int AllocateData();
	void FreeData(int);

	// sizeof = 16
};

// src/public/tier1/interpolatedvarhistory.h:413
struct InterpolationInfoTyped_t<EnableRenderingInfo_t> {
	float frac;  // +0x30
	bool m_bHermite;  // +0x34
	bool m_bExtrapolated;  // +0x35
	InterpolationInfoTyped_t();

	// sizeof = 56
};

// src/public/tier1/interpolatedvarhistory.h:427
class CVarHistoryPairIteratorTyped<EnableRenderingInfo_t> {
	typedef CInterpolatedVarHistory<EnableRenderingInfo_t> CVarHistory;

private:

	const const CVarHistory & m_varHistory;  // +0x0
	/* tag__fprintf: const_type tag not supported! */;

	int m_nLastSample;  // +0x8
	bool m_bValid;  // +0xc
	typedef InterpolationRecordTyped_t<EnableRenderingInfo_t> InterpolationRecord_t;
	CVarHistoryPairIteratorTyped(const CVarHistory &);
	bool IsValid();
	bool First(InterpolationRecord_t *, InterpolationRecord_t *);
	void Next(InterpolationRecord_t *, InterpolationRecord_t *);
	bool PeekNext(InterpolationRecord_t *);

	// sizeof = 16
};
