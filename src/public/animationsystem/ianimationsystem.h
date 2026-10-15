// Reconstructed from DWARF by pahole; not original source.

// src/public/animationsystem/ianimationsystem.h:49
struct AnimationDecodeDesc_t {
	HModel m_hModel;  // +0x0
	float m_flRealTime;  // +0x8
	LODGroupMask_t m_nLodMask;  // +0xc
	LODGroupMask_t m_nLodsToSkipMask;  // +0xd
	uint8 m_nOpCount;  // +0xe

	float * m_pPoseParameters;  // +0x18
	const uint32 * m_pBonesToSetUp;  // +0x28
	int m_nOwningEntityIndex;  // +0x30
	uint32 m_nDecodeDescFlags;  // +0x34
private:

	AnimationDecodeDesc_t();

	// sizeof = 64
};

// src/public/animationsystem/ianimationsystem.h:135
struct AnimationSnapshotAdvanceTickOrFrameCount_t {
	float64 m_flTimeBase;  // +0x0
	float m_flRealTime;  // +0x8

	// sizeof = 16
};

// src/public/animationsystem/ianimationsystem.h:143
struct AnimationEventOccurrence_t {
	const AnimEvent_t * m_pAnimEvent;  // +0x0
	void * m_pContext;  // +0x8
	float m_flEventCycleFraction;  // +0x10

	// sizeof = 24
};

// src/public/animationsystem/ianimationsystem.h:151
struct AnimationEventOccurrences_t {
	AnimationEventOccurrences_t();
	int Count();
	AnimationEventOccurrence_t & operator[](int);
	const AnimationEventOccurrence_t & operator[](int);
	AnimationEventOccurrence_t & Element(int);
	const AnimationEventOccurrence_t & Element(int);

	// sizeof = 24
};

// src/public/animationsystem/ianimationsystem.h:183
struct HAnimationDecodeDesc__ {
	int unused;  // +0x0

	// sizeof = 4
};

// src/public/animationsystem/ianimationsystem.h:190
class CAnimationDecodeContext {
private:

	float m_flRealTimeBase;  // +0x0
	int m_nAnimationDecodes;  // +0x8

	bool m_bOwnsAllocator;  // +0x28
	CAnimationDecodeContext();
	~CAnimationDecodeContext();
	void Init(AnimationProcessingType_t, CUtlScratchMemoryPool *);
	void Shutdown();
	void SetAnimationDecodeRealTimeBase(float);
	HAnimationDecodeDesc AddAnimationDecodeDesc(HModel, float, const uint32 *, int, const CAnimationDecodeOp *, int, const float *, int, LODGroupMask_t, uint32);
	bool AddAnimationDecode(HAnimationDecodeDesc, CAnimationState *, int);
	int GetAnimationDecodeCount();
	AnimationDecodeDesc_t * GetFirstActiveAnimationDecode();
	AnimationDecodeDesc_t * GetNextActiveAnimationDecode(AnimationDecodeDesc_t *);
	AnimationDecodeDesc_t * GetAnimationDecode(HAnimationDecodeDesc);
	CUtlScratchMemoryPool * GetMemoryStack();
	AnimationProcessingType_t GetAnimationProcessingType();

	// sizeof = 48
};

// src/public/animationsystem/ianimationsystem.h:239
class CAnimationState {
protected:

	HModelStrong m_hModel;  // +0x0
	void * m_pData;  // +0x8
	uint32 * m_pReadableBones;  // +0x10
	bool m_bOwnsMemory;  // +0x18
	bool m_bHasNonTransformAnimationData;  // +0x19

	int m_pAnimationDataCount[3];  // +0x1c
	CAnimationState();
	~CAnimationState();
	CAnimationState & operator=(const CAnimationState &);
	bool operator==(const CAnimationState &);
	CUtlString GetDebugString();
	CUtlString GetDebugSpeedString(float, float, const CAnimationState *);
	bool IsIdenticalWithinTolerance(const CAnimationState &);
	void Init(HModel);
	void Init(HModel, int, void *, uint32 *);
	void Realloc(HModel);
	void Shutdown();
	int GetAnimationStateSize();
	void * GetAnimationDataBase();
	bool IsBoneReadable(int);
	const uint32 * GetReadableBones();
	uint32 * GetReadableBonesForWrite();
	void MarkBoneReadable(int, bool);
	void MarkBoneReadable(int);
	void MarkBoneUnreadable(int);
	void MarkBonesReadable(const uint32 *);
	void MarkAllBonesUnreadable();
	void CopyTransformAnimationData(const CAnimationState *);
	void CopyNonTransformAnimationData(const CAnimationState *);
	bool HasNonTransformAnimationData();
	const CModel * GetModelData();
	HModel GetModel();
	int GetBonesInWorldSpace(const matrix3x4_t &, int, matrix3x4_t *, const uint32 *);
	int SetBonesFromWorldSpace(const matrix3x4_t &, int, const matrix3x4_t *);
	int SetBonesFromParentSpace(int, const CTransform *, const uint32 *);
	void LerpFrom(const CAnimationState *, const CAnimationState *, float);
	bool HasData();
	void TransferStateTo(CAnimationState &);
	CAnimationState(const CAnimationState &);
	void InitializeState();
	void FreeMemory();
	void ComputeHasNonTransformAnimationData();
	int GetAnimationDataCount<(AnimationStateType_t)0>();
	DataType_t * GetAnimationData<(AnimationStateType_t)0>();
	int GetAnimationDataCount<(AnimationStateType_t)1>();
	DataType_t * GetAnimationData<(AnimationStateType_t)1>();

	// sizeof = 48
};
