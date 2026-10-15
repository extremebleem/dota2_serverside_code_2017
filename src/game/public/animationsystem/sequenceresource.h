// Reconstructed from DWARF by pahole; not original source.

// src/game/public/animationsystem/sequenceresource.h:13
struct CSeqAutoLayerFlag {
	bool m_bPost;  // +0x0
	bool m_bSpline;  // +0x1
	bool m_bXFade;  // +0x2
	bool m_bNoBlend;  // +0x3
	bool m_bLocal;  // +0x4
	bool m_bPose;  // +0x5
	bool m_bFetchFrame;  // +0x6
	bool m_bSubtract;  // +0x7
	CSeqAutoLayerFlag();

	// sizeof = 8
};

// src/game/public/animationsystem/sequenceresource.h:28
struct CSeqAutoLayer {
	int16 m_nLocalReference;  // +0x0
	int16 m_nLocalPose;  // +0x2
	float32 m_start;  // +0xc
	float32 m_peak;  // +0x10
	float32 m_tail;  // +0x14
	float32 m_end;  // +0x18
	CSeqAutoLayer();

	// sizeof = 28
};

// src/game/public/animationsystem/sequenceresource.h:61
struct CSeqBoneMaskList {
	AnimString_t m_sName;  // +0x0
	CSeqBoneMaskList();

	// sizeof = 64
};

// src/game/public/animationsystem/sequenceresource.h:72
struct CSeqMultiFetchFlag {
	bool m_bRealtime;  // +0x0
	bool m_bCylepose;  // +0x1
	bool m_b0D;  // +0x2
	bool m_b1D;  // +0x3
	bool m_b2D;  // +0x4
	bool m_b2D_TRI;  // +0x5
	CSeqMultiFetchFlag();

	// sizeof = 6
};

// src/game/public/animationsystem/sequenceresource.h:87
struct CSeqMultiFetch {
	int m_nGroupSize[2];  // +0x20
	int m_nLocalPose[2];  // +0x28
	int32 m_nLocalCyclePoseParameter;  // +0x60
	bool m_bCalculatePoseParameters;  // +0x64
	int nElement(int, int);
	int nLocalReference(int, int);
	const float * pPoseKey0(int, int);
	const float * pPoseKey1(int, int);
	float poseKey0(int, int);
	float poseKey1(int, int);
	CSeqMultiFetch();

	// sizeof = 104
};

// src/game/public/animationsystem/sequenceresource.h:134
struct CSeqSeqDescFlag {
	bool m_bLooping;  // +0x0
	bool m_bSnap;  // +0x1
	bool m_bAutoplay;  // +0x2
	bool m_bPost;  // +0x3
	bool m_bHidden;  // +0x4
	bool m_bMulti;  // +0x5
	bool m_bLegacyDelta;  // +0x6
	bool m_bLegacyWorldspace;  // +0x7
	bool m_bLegacyCyclepose;  // +0x8
	bool m_bLegacyRealtime;  // +0x9
	CSeqSeqDescFlag();

	// sizeof = 10
};

// src/game/public/animationsystem/sequenceresource.h:155
struct CSeqTransition {
	float32 m_flFadeInTime;  // +0x0
	float32 m_flFadeOutTime;  // +0x4
	CSeqTransition();

	// sizeof = 8
};

// src/game/public/animationsystem/sequenceresource.h:173
struct CSeqS1SeqDesc {
	AnimString_t m_sName;  // +0x0

	int32 m_nLocalWeightlist;  // +0x88

	AnimString_t m_keyValueText;  // +0xc8
	const char * GetName();
	const char * GetKeyValueText();
	CSeqS1SeqDesc();

private:

	CSeqS1SeqDesc(const CSeqS1SeqDesc &);

	// sizeof = 240
};

// src/game/public/animationsystem/sequenceresource.h:210
struct CSeqSynthAnimDesc {
	AnimString_t m_sName;  // +0x0

	int16 m_nLocalBaseReference;  // +0x24
	int16 m_nLocalBoneMask;  // +0x26
	const char * GetName();
	CSeqSynthAnimDesc();

private:

	CSeqSynthAnimDesc(const CSeqSynthAnimDesc &);

	// sizeof = 64
};

// src/game/public/animationsystem/sequenceresource.h:255
struct CSeqCmdLayer {
	int16 m_cmd;  // +0x0
	int16 m_nLocalReference;  // +0x2
	int16 m_nLocalBonemask;  // +0x4
	int16 m_nDstResult;  // +0x6
	int16 m_nSrcResult;  // +0x8
	bool m_bSpline;  // +0xa

	float m_flVar1;  // +0xc
	float m_flVar2;  // +0x10
	int16 m_nLineNumber;  // +0x14
	CSeqCmdLayer();

	// sizeof = 24
};

// src/game/public/animationsystem/sequenceresource.h:297
struct CSeqPoseSetting {
	AnimString_t m_sPoseParameter;  // +0x0
	AnimString_t m_sAttachment;  // +0x10
	AnimString_t m_sReferenceSequence;  // +0x20
	float32 m_flValue;  // +0x30
	bool m_bX;  // +0x34
	bool m_bY;  // +0x35
	bool m_bZ;  // +0x36

	int32 m_eType;  // +0x38
	CSeqPoseSetting();

private:

	CSeqPoseSetting(const CSeqPoseSetting &);

	// sizeof = 64
};

// src/game/public/animationsystem/sequenceresource.h:317
struct CSeqCmdSeqDesc {
	AnimString_t m_sName;  // +0x0

	int16 m_nFrameRangeSequence;  // +0x24
	int16 m_nFrameCount;  // +0x26
	float32 m_flFPS;  // +0x28
	int16 m_nSubCycles;  // +0x2c
	int16 m_numLocalResults;  // +0x2e
	const char * GetName();
	CSeqCmdSeqDesc();

private:

	CSeqCmdSeqDesc(const CSeqCmdSeqDesc &);

	// sizeof = 144
};

// src/game/public/animationsystem/sequenceresource.h:355
struct CSeqPoseParamDesc {
	AnimString_t m_sName;  // +0x0
	float32 m_flStart;  // +0x10
	float32 m_flEnd;  // +0x14
	float32 m_flLoop;  // +0x18
	bool m_bLooping;  // +0x1c
	const char * GetName();
	CSeqPoseParamDesc();

	// sizeof = 32
};

// src/game/public/animationsystem/sequenceresource.h:372
struct CSequenceGroupData {
	AnimString_t m_sName;  // +0x0
	uint32 m_nFlags;  // +0x10

	AnimString_t m_localNodeName;  // +0xc0
	AnimString_t m_keyValueText;  // +0xe8
	const char * GetName();
	const char * GetLocalNodeName();
	const char * GetKeyValueText();
	CSequenceGroupData();

private:

	CSequenceGroupData(const CSequenceGroupData &);

	// sizeof = 272
};
