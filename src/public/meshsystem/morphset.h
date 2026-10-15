// Reconstructed from DWARF by pahole; not original source.

// src/public/meshsystem/morphset.h:12
struct MorphCompositeDesc_t {
	const CMorphData * m_pMorphData;  // +0x0
	float m_flWeight;  // +0x8
	float m_flDelayedWeight;  // +0xc

	// sizeof = 24
};

// src/public/meshsystem/morphset.h:22
class CMorphCompositeSet {
private:

	int m_nTransformSlotIndexForMorphInfo;  // +0x0
	int m_nWidthWithinCMTAtlas;  // +0xc
	int m_nHeightWithinCMTAtlas;  // +0x10

	CMorphCompositeSet();
	~CMorphCompositeSet();
	CUtlIntrusiveList<MorphCompositeDesc_t> * GetMorphCompositeDescList();
	CMorphCompositeSet * GetNext();
	void SetNext(CMorphCompositeSet *);
	void MarkTransformTextureMorphingUnused(matrix3x4a_t *);
	bool IsTransformTextureMorphingUnused(matrix3x4a_t *);
	void SetTransformTextureMorphSubrect(float, float, float, float, matrix3x4a_t *);
	void SetTransformSlotIndexForMorphInfo(int);
	int GetTransformSlotIndexForMorphInfo();
	void SetOriginWithinCMTAtlas(const Vector2D &);
	const Vector2D & GetOriginWithinCMTAtlas();
	void SetWidthWithinCMTAtlas(int);
	int GetWidthWithinCMTAtlas();
	void SetHeightWithinCMTAtlas(int);
	int GetHeightWithinCMTAtlas();

	// sizeof = 40
};

// src/public/meshsystem/morphset.h:93
struct FlexControllerMapping_t {
	const CMorphSetData * m_pMorphSetData;  // +0x0
	const CFlexController * m_pFlexController;  // +0x8

	// sizeof = 16
};

// src/public/meshsystem/morphset.h:99
struct FlexDescMapping_t {
	const CMorphData * m_pMorphData;  // +0x8
	const CFlexRule * m_pFlexRule;  // +0x10
	const CFlexDesc * m_pFlexDesc;  // +0x18
	const CUtlVector<int, CUtlMemory<int, int> > * m_pLocalToMainControllerIndex;  // +0x20
	const CUtlVector<int, CUtlMemory<int, int> > * m_pLocalToMainDescIndex;  // +0x28

	// sizeof = 48
};

// src/public/meshsystem/morphset.h:111
class CMorphSet {
private:

	uint32 m_nFrameCount;  // +0x70

	CMorphSet();
	~CMorphSet();
	void InitFromV0Data(CConvertOldDiskCtx &, const MorphSetData_t *, const char *);
	bool ConvertMorphRuleToExpressionString(CUtlString &, int);
	void RunFlexRules(const int16 *, const float *, float *);
	CUtlIntrusiveList<CMorphCompositeSet> * GetMorphCompositeSetList();
	CMorphSet * GetNext();
	void SetNext(CMorphSet *);
	uint GetFrame();
	bool UpdateFrameCountTS(int, int);
	const CMorphSetData * GetMorphSetData();
	int GetFlexControllerCount();
	const CFlexController * GetFlexController(int);
	int GetFlexDescCount();
	int GetFlexRuleCount();
	const CFlexRule * GetFlexRule(int);
	const CFlexDesc * GetFlexDesc(int);
	int GetFlexDescIndex(int);
	const CMorphData * FindMorphData(int, CMorphSet * *);
	void Initialize();

	// sizeof = 136
};
