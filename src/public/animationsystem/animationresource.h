// Reconstructed from DWARF by pahole; not original source.

// src/public/animationsystem/animationresource.h:26
struct CAnimBoneDifference {
	AnimString_t m_name;  // +0x0
	AnimString_t m_parent;  // +0x10
	bool m_bHasRotation;  // +0x2c
	bool m_bHasMovement;  // +0x2d
	CAnimBoneDifference();

	// sizeof = 48
};

// src/public/animationsystem/animationresource.h:37
struct CAnimMorphDifference {
	AnimString_t m_name;  // +0x0
	CAnimMorphDifference();

	// sizeof = 16
};

// src/public/animationsystem/animationresource.h:42
struct CAnimUserDifference {
	AnimString_t m_name;  // +0x0
	int32 m_nType;  // +0x10
	CAnimUserDifference();

	// sizeof = 24
};

// src/public/animationsystem/animationresource.h:50
struct CAnimEncodeDifference {
	CAnimEncodeDifference();
	bool bHasRotation(int);
	bool bHasMovement(int);
	bool bHasMorph(int);
	bool bHasUser(int);

	// sizeof = 168
};

// src/public/animationsystem/animationresource.h:76
struct CAnimAnimEvent {
	int32 m_nFrame;  // +0x0
	float32 m_flCycle;  // +0x4
	AnimString_t m_sOptions;  // +0x8
	AnimString_t m_sEventName;  // +0x18
	const char * GetOptionsString();
	const char * GetEventName();
	CAnimAnimEvent();

	// sizeof = 40
};

// src/public/animationsystem/animationresource.h:91
struct CAnimMovement {
	int32 endframe;  // +0x0
	int32 motionflags;  // +0x4
	float32 v0;  // +0x8
	float32 v1;  // +0xc
	float32 angle;  // +0x10
	CAnimMovement();

private:

	CAnimMovement(const CAnimMovement &);

	// sizeof = 44
};

// src/public/animationsystem/animationresource.h:108
struct CAnimIKRuleStallFrame {
	int16 chain;  // +0x0
	int16 slot;  // +0x2
	float32 start;  // +0x4
	float32 peak;  // +0x8
	float32 tail;  // +0xc
	float32 end;  // +0x10
	CAnimIKRuleStallFrame();

	// sizeof = 20
};

// src/public/animationsystem/animationresource.h:166
struct CAnimIKRule {
	int32 index;  // +0x0
	int32 type;  // +0x4
	int32 chain;  // +0x8
	int32 bone;  // +0xc
	int32 slot;  // +0x10
	float32 height;  // +0x14
	float32 radius;  // +0x18
	float32 floor;  // +0x1c

	int32 iStart;  // +0x58
	float32 start;  // +0x5c
	float32 peak;  // +0x60
	float32 tail;  // +0x64
	float32 end;  // +0x68
	float32 contact;  // +0x6c
	float32 drop;  // +0x70
	float32 top;  // +0x74
	const char * GetAttachmentName();
	CAnimIKRule();

	// sizeof = 128
};

// src/public/animationsystem/animationresource.h:213
struct CAnimLocalHierarchy {
	AnimString_t m_sBone;  // +0x0
	AnimString_t m_sNewParent;  // +0x10
	int32 m_nStartFrame;  // +0x20
	int32 m_nPeakFrame;  // +0x24
	int32 m_nTailFrame;  // +0x28
	int32 m_nEndFrame;  // +0x2c
	CAnimLocalHierarchy();

	// sizeof = 48
};

// src/public/animationsystem/animationresource.h:264
struct CAnimFrameBlockAnim {
	int32 m_nStartFrame;  // +0x0
	int32 m_nEndFrame;  // +0x4
	CAnimFrameBlockAnim();

	// sizeof = 32
};

// src/public/animationsystem/animationresource.h:278
struct CAnimEncodedFrames {
	AnimString_t m_fileName;  // +0x0
	int32 m_nFrames;  // +0x10
	int32 m_nFramesPerBlock;  // +0x14
	const char * GetFileName();
	const CAnimFrameBlockAnim * pAnim(int *, float &);
	const CAnimFrameBlockAnim * pAnim(int *);
	CAnimEncodedFrames();

private:

	CAnimEncodedFrames(const CAnimEncodedFrames &);

	// sizeof = 216
};

// src/public/animationsystem/animationresource.h:310
struct CAnimDesc_Flag {
	bool m_bLooping;  // +0x0
	bool m_bAllZeros;  // +0x1
	bool m_bHidden;  // +0x2
	bool m_bDelta;  // +0x3
	bool m_bLegacyWorldspace;  // +0x4

	// sizeof = 5
};

// src/public/animationsystem/animationresource.h:326
struct CAnimSequenceParams {
	float m_flFadeInTime;  // +0x0
	float m_flFadeOutTime;  // +0x4
	CAnimSequenceParams();

private:

	CAnimSequenceParams(const CAnimSequenceParams &);

	// sizeof = 8
};

// src/public/animationsystem/animationresource.h:338
struct CAnimDesc {
	AnimString_t m_name;  // +0x0

	float32 fps;  // +0x18

	float32 framestalltime;  // +0xb8

	~CAnimDesc();
	const char * GetName();
	int NumFrames();
	int MaxFrame();
	const CAnimEncodeDifference * GetUsageDifferences();
	bool PrecacheData();
	CAnimDesc();

private:

	CAnimDesc(const CAnimDesc &);

	// sizeof = 272
};

// src/public/animationsystem/animationresource.h:400
struct CAnimActivity {
	AnimString_t m_name;  // +0x0
	int32 m_nActivity;  // +0x10
	int32 m_nFlags;  // +0x14
	int32 m_nWeight;  // +0x18
	const char * GetName();
	CAnimActivity();

	// sizeof = 32
};
