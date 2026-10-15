// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/sequence_transitioner.h:26
class CSequenceTransitioner {
private:

	bool m_bIsInSimulation;  // +0x18

	float m_flSimOrRenderTime;  // +0x1c
	float m_flInterpolatedTime;  // +0x20
	CSequenceTransitioner();

	void CheckForSequenceChange(const CModel *, HSequence, bool, bool);
	void UpdateCurrent(const CModel *, HSequence, float, float);
	void RemoveAll();
	~CSequenceTransitioner();
	CSequenceTransitioner & operator=(const CSequenceTransitioner &);

	// sizeof = 40
};

// src/game/shared/sequence_transitioner.h:74
struct TransitioningLayer_t {
	int ()() * * _vptr.TransitioningLayer_t;  // +0x0
private:

	static datamap_t m_DataMap;

	float m_flStartAnimTime;  // +0x30
	float m_flStartWeight;  // +0x34
	float m_flAnimTime;  // +0x38
	int m_nOrder;  // +0x3c
	float m_flPlaybackRate;  // +0x40
	float m_flFadeOutDuration;  // +0x44
	~TransitioningLayer_t();
	TransitioningLayer_t(TransitioningLayer_t &);
	TransitioningLayer_t(const TransitioningLayer_t &);
	TransitioningLayer_t & operator=(TransitioningLayer_t &);
	TransitioningLayer_t & operator=(const TransitioningLayer_t &);
	TransitioningLayer_t();

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] HackToMakeAVTable
	// sizeof = 72
};

// src/game/shared/sequence_transitioner.h:90
struct TransitioningLaterMetaInfo_t {
	float m_flPlaybackRate;  // +0x0
	float m_flStartTime;  // +0x4
	float m_flPrevCycle;  // +0x8

	// sizeof = 12
};

// src/game/shared/sequence_transitioner.h:114
class CSequenceTransitioner2 {
	int ()() * * _vptr.CSequenceTransitioner2;  // +0x0
private:

	static datamap_t m_DataMap;

	float m_flCurrentPlaybackRate;  // +0x30
	float m_flCurrentAnimTime;  // +0x34
	CSequenceTransitioner2(CSequenceTransitioner2 &);
	CSequenceTransitioner2(const CSequenceTransitioner2 &);
	CSequenceTransitioner2 & operator=(CSequenceTransitioner2 &);
	CSequenceTransitioner2 & operator=(const CSequenceTransitioner2 &);
	~CSequenceTransitioner2();

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CSequenceTransitioner2();
	void Init(CBaseAnimatingController *);
	bool AnimationFrameAdvance(float);
	int GetDecodeOperations(int, CAnimationDecodeOp *, CUtlVector<TransitioningLaterMetaInfo_t, CUtlMemory<TransitioningLaterMetaInfo_t, int> > *);
	int GetDecodeOperationsCount();
	void SetupAnimationHistoryContext(ISkeletonAnimationHistoryContext *);
	void Reset();
	void BlendInLinearVelocity(const CModel *, const float *, Vector *);
	void CopyFrom(CSequenceTransitioner2 *);
	void ForcePreviousSequenceIntoTransitionLayer(float);
	void AddCurrentSequenceToTransition(float);
	void FinishTransitioningLayer(int);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] HackToMakeAVTable
	// vtable[2] GetDataDescMap
	// sizeof = 352
};
