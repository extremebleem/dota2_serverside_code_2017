// Reconstructed from DWARF by pahole; not original source.

// src/public/choreoobjects/expressionsample.h:26
struct CExpressionSample {
	short unsigned int m_curvetype;  // +0x8
private:

	short int m_nBezierHandleIndex:15;  // +0xa:0
	short unsigned int m_bSelected:1;  // +0xa:15
	CExpressionSample();
	CExpressionSample(float, float, bool);
	void setTime(float);
	const float & time();
	void setValue(float);
	const float & value();
	void SetCurveType(int);
	int GetCurveType();
	void SetSelected(bool);
	bool IsSelected();
	void Init(float, float, bool);
	void offsetTime(float);
	int GetBezierHandleIndex();
	bool IsBezierSample();
	void SetBezierHandleIndex(int);

	// sizeof = 12
};

// src/public/choreoobjects/expressionsample.h:120
struct CBezierHandlesForSample {
	struct CBezierHandleTangent {
		float m_flAngleDegrees;  // +0x0
		float m_flWeight;  // +0x4
		CBezierHandleTangent();
		void ResetAngle(int);
		void ResetWeight();
		void Reset(int);
		void NormalizeInPlace();
		Vector2D GetTangentPoint();
		Vector2D GetControlPointAbsPos(const CExpressionSample &, float);
		Vector2D GetControlPointPos(float);
		void SetControlPointAbsPos(const CExpressionSample &, const Vector2D &, bool, float);

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

	bool m_bUnifiedTangents;  // +0x10
	bool m_bUnweightedTangents;  // +0x11
	CBezierHandlesForSample();
	Vector2D GetControlPointAbsPos(const CExpressionSample &, int, float);
	Vector2D GetControlPointPos(int, float);
	void SetControlPointAbsPos(const CExpressionSample &, int, const Vector2D &, float);
	void SetToDefaults();
	void SmoothTangents(int);
	void ResetWeights();
	CUtlString ToString();
	bool FromString(const CUtlString &);

	// sizeof = 20
};

// src/public/choreoobjects/expressionsample.h:243
struct EdgeInfo_t {
private:

	bool m_bActive;  // +0xc
	EdgeInfo_t();
	void SetActive(bool);
	bool IsActive();
	void SetCurveType(int);
	int GetCurveType();
	void SetValue(float);
	float GetValue();

	// sizeof = 16
};

// src/public/choreoobjects/expressionsample.h:298
class ICurveDataAccessor {
	int ()() * * _vptr.ICurveDataAccessor;  // +0x0
	~ICurveDataAccessor();
	ICurveDataAccessor(ICurveDataAccessor &);
	ICurveDataAccessor(const ICurveDataAccessor &);
	ICurveDataAccessor & operator=(ICurveDataAccessor &);
	ICurveDataAccessor & operator=(const ICurveDataAccessor &);
	ICurveDataAccessor();
	virtual float GetDuration();
	virtual bool CurveHasEndTime();
	virtual int GetDefaultCurveType();
	virtual float GetDefaultEdgeValue();

	// vtable[0] GetDuration
	// vtable[1] CurveHasEndTime
	// vtable[2] GetDefaultCurveType
	// vtable[3] GetDefaultEdgeValue
	// sizeof = 8
};

// src/public/choreoobjects/expressionsample.h:311
struct CCurveBoundedSampleResult_t {
private:

	int m_nSampleIndex;  // +0x0
	CCurveBoundedSampleResult_t();
	void SetIndex(int);
	void Clear();
	bool IsValid();
	int First();
	int Second();

	// sizeof = 4
};

// src/public/choreoobjects/expressionsample.h:311
struct CCurveBoundedSampleResult_t {
	enum {
		CurveBoundedSampleResultInvalid = 0xfffffffffffffffe,
	};

private:

	int m_nSampleIndex;  // +0x0
	CCurveBoundedSampleResult_t();
	void SetIndex(int);
	void Clear();
	bool IsValid();
	int First();
	int Second();

	// sizeof = 4
};

// src/public/choreoobjects/expressionsample.h:350
class CCurveData {
private:

	CCurveData();
	CCurveData(ICurveDataAccessor *);
	~CCurveData();
	void SetDataAccessor(ICurveDataAccessor *);
	void CopyFrom(const CCurveData &);
	int Count();
	CExpressionSample * Get(int);
	const CExpressionSample * Get(int);
	CBezierHandlesForSample * GetBezierHandles(int);
	const CBezierHandlesForSample * GetBezierHandles(int);
	int Add(const CExpressionSample &, const CBezierHandlesForSample *);
	void Delete(int, bool);
	void Clear();
	void Resort();
	void RemoveOutOfRangeSamples();
	void SaveToBuffer(CUtlBuffer &, IChoreoStringPool *);
	void SaveSamples(CUtlBuffer &, int, const CChoreoScene *);
	bool RestoreFromBuffer(SceneBinaryVersion_t, CUtlBuffer &, IChoreoStringPool *);
	void Parse(ISceneTokenProcessor *, const CChoreoScene *);
	void FileSave(CUtlBuffer &, int, const char *, const CChoreoScene *);
	float GetIntensity(float);
	const CExpressionSample * GetBoundedSample(int);
	const CBezierHandlesForSample * GetBoundedBezierSample(int);
	CCurveBoundedSampleResult_t FindSamples(float);
	EdgeInfo_t * GetEdgeInfo(int);
	const EdgeInfo_t * GetEdgeInfo(int);
	void SetEdgeInfo(bool, int, float, bool);
	void GetEdgeInfo(bool, int &, float &, bool &);
	void SetEdgeActive(bool, bool);
	bool IsEdgeActive(bool);
	int GetEdgeCurveType(bool);
	float GetEdgeZeroValue(bool);
	int FindSampleIndex(const CExpressionSample *);
	void SetCurveTypeForSample(int, int);
	int NumSelected();
	void ParseSample(ISceneTokenProcessor *, const CChoreoScene *, SamplesRestore_t &, bool, float);
	CCurveData(const CCurveData &);
	CCurveData & operator=(const CCurveData &);
	void AddBezierData();
	void RemoveBezierData();
	void ValidateBezier();

	// sizeof = 72
};

// src/public/choreoobjects/expressionsample.h:435
struct SamplesRestore_t {
	SamplesRestore_t();
	void AddSamples(CCurveData *);

	// sizeof = 48
};
