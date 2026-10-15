// Reconstructed from DWARF by pahole; not original source.

// src/game/public/animcontainer.h:56
class CAnimDecodeSwizzle {
	const CAnimKeyData * m_pAnimKey;  // +0x0
	CAnimDecodeSwizzle();
	CAnimDecodeSwizzle(const CAnimKeyData *);
	~CAnimDecodeSwizzle();
	const CAnimKeyData * GetAnimationKeyResourceData();
	int GetNumIKChains();
	const CAnimIKChain * GetIKChain(int);

	// sizeof = 128
};

// src/game/public/animcontainer.h:104
class CAnimRetarget {
	const CRetargetBiped * m_pRetarget;  // +0x8
private:

	float m_flXYMovementScale;  // +0x10
	CAnimRetarget();
	~CAnimRetarget();
	float GetXYMovementScale();
	void SetXYMovementScale(float);

	// sizeof = 24
};

// src/game/public/animcontainer.h:123
class CSeqGroupInstance {
	const CSequenceGroupResource * m_pSequenceGroup;  // +0x0
	int m_nParentAnimGroup;  // +0x98
	const CSequenceGroupResource * GetCSequenceGroupResource();
	const CSequenceGroupData * GetSequenceGroupResourceData();
	CSeqGroupInstance();
	~CSeqGroupInstance();

	// sizeof = 160
};

// src/game/public/animcontainer.h:162
struct AnimInstanceMap_t {
	int m_nAnimGroup;  // +0x0
	int m_nLocalIndex;  // +0x4
	int m_nHAnimIndex;  // +0x8
	int m_nSwizzleIndex;  // +0xc

	// sizeof = 16
};

// src/game/public/animcontainer.h:172
struct SeqInstanceMap_t {
	int m_nGroup;  // +0x0
	int m_nIndex;  // +0x4

	// sizeof = 8
};

// src/game/public/animcontainer.h:181
struct ChannelElementMap_t {
	int m_nIndex;  // +0x0
	int m_nChannel;  // +0x4
	uint32 m_lodUsageMask;  // +0x8

	// sizeof = 12
};

// src/game/public/animcontainer.h:189
struct UserDataElementMap_t : public ChannelElementMap_t {
public:

	int m_nOffset;  // +0xc

	// sizeof = 16
};

// src/game/public/animcontainer.h:199
struct UserDataElement_t : public ChannelElementMap_t {
public:

	// sizeof = 16
};

// src/game/public/animcontainer.h:217
class CAnimDataChannel {
	int nAnimGroupIndex;  // +0x0
	int m_nSwizzleIndex;  // +0x4
	int m_nChannel;  // +0x8
	int m_nRetargetIndex;  // +0xc
	int m_nElementSize;  // +0x14
	int m_nFlags;  // +0x18
	int m_nTotalCount;  // +0x1c
	void * m_defaultData;  // +0x38
	CAnimDataChannel();
	~CAnimDataChannel();

	// sizeof = 64
};

// src/game/public/animcontainer.h:245
struct ElementRequestPattern_t {
	bool m_bMorphData;  // +0x38
	bool m_bUserData;  // +0x39

	ElementRequestPattern_t();

	// sizeof = 88
};

// src/game/public/animcontainer.h:260
struct RequestElementWeights_t {
	uint32 m_nFlags;  // +0x0

	RequestElementWeights_t();

	// sizeof = 56
};

// src/game/public/animcontainer.h:267
struct ChannelElementWeights_t {
	int m_nChannel;  // +0x0

	ChannelElementWeights_t();

	// sizeof = 32
};

// src/game/public/animcontainer.h:278
struct ChannelWeightlist_t {
	uint32 m_nRequestMask;  // +0x68
	ChannelWeightlist_t();

	// sizeof = 112
};

// src/game/public/animcontainer.h:295
struct AnimBounds_t {
	bool m_bInited;  // +0x0

	AnimBounds_t();

	// sizeof = 28
};

// src/game/public/animcontainer.h:307
class CAnimTransitionGraph {
	int m_nNodeCount;  // +0x50

	CAnimTransitionGraph();
	int16 FindOrAddNode(const char *);
	const char * GetNodeName(int16);
	void AllocateGraph();
	int NodeCount();
	int16 GetNodeTransition(int16, int16);
	void SetTransition(int16, int16, int16);
	void CalcTransitions();

	// sizeof = 112
};

// src/game/public/animcontainer.h:330
class CAnimContainer {
	int ()() * * _vptr.CAnimContainer;  // +0x0
private:

	IAnimationGraphPtr m_pAnimationGraph;  // +0x1e0

	int m_nUserDataSize;  // +0x2b0

	int m_nRetargetRequestPatternIndex;  // +0x318

	const CModel * m_pModel;  // +0x338
	virtual bool AppendAnimations(const CModel *, const CAnimationGroupResource * *, int);
	const CAnimationGroupResource * GetAnimGroupResource(int);
	const CAnimationResource * GetAnimResource(int);
	const CAnimDesc * GetAnimdesc(int);
	const CSeqGroupInstance * pSeqGroupInstance(int);
	void GetSeqGroupInstanceName(int, char *, int);
	void GetAnimGroupNameForAnim(int, char *, int);
	const CAnimDecodeSwizzle * GetAnimDecodeSwizzle(int);
	const CAnimDataChannelDesc * GetAnimResourceDataChannel(int);
	int GetAnimGroupIndex(const CAnimationGroupResource *);
	bool HasValidAnimation();
	int GetNumIKChains();
	int GetIKChainIndex(const char *);
	const CAnimIKChain * GetIKChain(const char *);
	const CAnimIKChain * GetIKChain(int);
	const CAnimRetarget * GetAnimRetarget(int);
	const CAnimRetarget * GetAnimGroupRetarget(int);
	const char * GetAnimGroupRetargetName(int);
	bool EncodeAnimGroupBonename(CUtlString &, const char *, int);
	virtual bool GetMaxBounds(int, Vector *, Vector *);
	virtual int FindOrAddNode(const char *);
	virtual const char * GetNodeName(int);
	virtual int GetNodeTransition(int, int);
	virtual IAnimationGraph * GetAnimationGraph();
	virtual void SetAnimationGraph(const IAnimationGraphPtr &);
	float GetXYMovementScaleAnim(int);
	bool GetCachedSequenceAnimResult(CAnimationResult &, HSequence, int);
	bool GetCachedAnimationAnimResult(CAnimationResult &, int, int);
	bool SetCachedSequenceAnimResult(HSequence, int, const CAnimationResult &);
	bool SetCachedAnimationAnimResult(int, int, const CAnimationResult &);
	const CModel * GetModel();
	virtual void PostInitOther(HSequence);

protected:

	CAnimContainer();
	~CAnimContainer();

	// vtable[0] AppendAnimations
	// vtable[1] GetMaxBounds
	// vtable[2] FindOrAddNode
	// vtable[3] GetNodeName
	// vtable[4] GetNodeTransition
	// vtable[5] GetAnimationGraph
	// vtable[6] SetAnimationGraph
	// vtable[7] PostInitOther
	// sizeof = 864
};
