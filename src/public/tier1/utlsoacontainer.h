// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlsoacontainer.h:189
class CSOAAttributeIterator {
protected:

	const CSOAContainer * m_pContainer;  // +0x0
	int m_nCurrentIndex;  // +0x8
	CSOAAttributeIterator(const CSOAContainer &);
	CSOAAttributeIterator();
	int AttributeIndex();
	int operator int();
	int64 operator int64();
	bool operator bool();
	void Next();
	void operator++(int);

	// sizeof = 16
};

// src/public/tier1/utlsoacontainer.h:254
struct WeightedSampleDescriptor_t {
	int m_nColumn;  // +0x0
	int m_nRow;  // +0x4
	int m_nSlice;  // +0x8
	float m_flWeight;  // +0xc

	// sizeof = 16
};

// src/public/tier1/utlsoacontainer.h:267
struct WeightedComparisonDescriptor_t : public WeightedSampleDescriptor_t {
public:

	int m_nAttributeIndex;  // +0x10
	float m_flComparisonValue;  // +0x14
	const CSOAContainer * m_pSrcDataToSearch;  // +0x18
	int m_nCoordinateShift;  // +0x20
	WeightedComparisonDescriptor_t();

	// sizeof = 40
};

// src/public/tier1/utlsoacontainer.h:292
class CSOAContainer {
protected:

	int m_nColumns;  // +0x0
	int m_nRows;  // +0x4
	int m_nSlices;  // +0x8
	int m_nPaddedColumns;  // +0xc
	int m_nNumQuadsPerRow;  // +0x10

	uint8 * m_pDataMemory;  // +0x18
	uint8 * m_pAttributePtrs[32];  // +0x20
	long unsigned int m_nStrideInBytes[32];  // +0x1a0
	long unsigned int m_nRowStrideInBytes[32];  // +0x2a0
	long unsigned int m_nSliceStrideInBytes[32];  // +0x3a0
	uint32 m_nFieldPresentMask;  // +0x4a0

	uint8 * m_pConstantDataMemory;  // +0x4a8
	uint8 * m_pSeparateDataMemory[32];  // +0x4b0
	CSOAContainer();
	CSOAContainer(int, int, int, ...);
	~CSOAContainer();
	void SetAttributeType(int, EAttributeDataType, bool);
	EAttributeDataType GetAttributeType(int);
	void EnsureDataType(int, EAttributeDataType);
	void SetAttributeDataTypesFrom(const CSOAContainer &);
	void AssertDataType(int, EAttributeDataType);
	size_t ElementSizeInBytes(EAttributeDataType);
	void Purge();
	void AllocateData(int, int, int);
	void PurgeData();
	bool HasAllocatedMemory(int);
	int NumCols();
	int NumRows();
	int NumSlices();
	int Width();
	int Height();
	int Depth();
	int PaddedWidth();
	IntAABB_t Bounds();
	int NumQuadsPerRow();
	int Count();
	int NumElements();
	bool IsValidCoordinate(int, int, int);
	bool IsValidCoordinate(IntVector3D);
	size_t RowToRowStep(int);
	const void * ConstRowPtr(int, int, int);
	FourVectors * ElementPointer4V(int, int, int, int);
	size_t ItemByteStride(int);
	CSOAAttributeIterator FirstAttr();
	int AllocateAttributeIndex();
	float & FloatValue(int, int, int, int);
	float & FloatValue(int, IntVector3D);
	float & FloatValueClamped(int, int, int, int);
	float & FloatValueWrapped(int, int, int, int);
	float & FloatValueWrappedOrClamped(int, int, int, int, bool);
	void * & PointerValue(int, int, int, int);
	Vector VectorValue(int, int, int, int);
	void SetVectorValue(int, const Vector &, int, int, int);
	float InterpolatedPixel(float, float, int, bool);
	float InterpolatedVoxel(float, float, float, int);
	void CalculateBilinearWeights(float, float, WeightedSampleDescriptor_t *, bool);
	float Tex2D(float, float, int);
	CSOAAttributeReference operator[](int);
	CSOAAttributeReference Attr(int);
	void CopyAttrFrom(const CSOAContainer &, int, int);
	void CopyAttrToAttr(int, int);
	void CopyRegionFrom(const CSOAContainer &, int, int, int, int, int, int, int, int, int, int, int);
	void CopyRegionFrom(const CSOAContainer &, int, int, int, int, int, int, int, int, int);
	void MoveDataFrom(CSOAContainer &);
	void Crop(int, int, int, int, int, int);
	void RandomizeAttribute(int, float, float);
	void FillAttr(int, const Vector &);
	void FillAttr(int, float);
	void GenerateUnsignedDistanceField(int, IntAABB_t, float, int, int);
	void GenerateSignedDistanceField(int, IntAABB_t, float, int, int);
	void ReinitializeSignedDistanceField(int, IntAABB_t, float, bool);
	void GaussianBlurUsingSweeping(int, IntAABB_t, float, int);
	void FillGutterPixels(int);
	void FillAttrWithInterpolatedValues(int, float, float, float, float);
	void FillAttrWithInterpolatedValues(int, Vector, Vector, const Vector &, const Vector &);
	void PackScalarAttributesToVectorAttribute(CSOAContainer *, int, int, int, int);
	void UnPackVectorAttributeToScalarAttributes(CSOAContainer *, int, int, int, int);
	void MulAttr(const CSOAContainer &, int, int);
	void MulAttr(int, float);
	void AddToAttr(int, float);
	void MaxAttr(int, float);
	void MinAttr(int, float);
	void ClampAttr(int, float, float);
	void NormalizeAttr(int);
	void Normalize3ComponentVectorInAttributes(int, int, int, Vector, bool, bool);
	void ScaleAndBiasAttributeToBeBetweenZeroAndOne(int);
	void MultiplyVectorAttribute(CSOAContainer *, int, const Vector &, int);
	void SrgbGammaToLinear(int);
	void SrgbGammaToLinearPartial(CSOAContainer *, int, int, int, int, int, int);
	void SrgbLinearToGamma(int);
	void SrgbLinearToGammaPartial(CSOAContainer *, int, int, int, int, int, int);
	float SumAttributeValue(int);
	float AverageFloatAttributeValue(int);
	float MaxAttributeValue(int);
	float MinAttributeValue(int);
	void FindLargestMagnitudeVector(int, int *, int *, int *);
	void FindIndicesOfClosestPoint(int, const Vector &, int *, int *, int *);
	void AddGaussianSRBF(float, Vector, int, int);
	void AddGaussianSRBF(Vector, Vector, int, int);
	void ResampleAttribute(CSOAContainer &, int, int);
	void FilterFrom(const CSOAContainer &, int, int, int, int, int, const float *, bool);
	void FilterFrom(int, int, int, int, int, const float *, bool);
	void QuarterSizeAttrWithBoxFilter(const CSOAContainer &, int, int, CCallQueue *);
	void Normalized3x3SobelEdgeFilterFrom(const CSOAContainer &, int, int, int, bool);
	void CalculateGradientX(const CSOAContainer &, int, int, bool);
	void CalculateGradientY(const CSOAContainer &, int, int, bool);
	void GaussianBlur(int, int, int, int);
	void GaussianBlurFrom(const CSOAContainer &, int, int, int, int, int);
	void FilterInX(int, IntAABB_t, int, const float *, bool);
	void FilterInY(int, IntAABB_t, int, const float *, bool);
	void FilterInZ(int, IntAABB_t, int, const float *, bool);
	void CalculateStandardDeviationFromMoments(int, int, const CSOAContainer *, int, float);
	void KMeansQuantization(const int *, int, KMeansQuantizedValue *, int, IKMeansErrorMetric *, int, int, int);
	void GenerateDistanceField(int, int, int, Rect3D_t *);
	int FindClosestMatchingRegion(const WeightedComparisonDescriptor_t *, int, int, IntVector3D *, float *, bool, int);
	void ComputeSelfShadowedBumpmapFromHeight(const CSOAContainer *, int, Vector, float, const Vector *, int, const int *, int, bool);
	void SetThreadMode(SOAThreadMode_t);
	IntAABB_CellRangeReference Indices();
	CUtlVector<int, CUtlMemory<int, int> > GetListOfActiveChannels(int);
	void Init();
	void UpdateDistanceRow(int, int, int, int, int, int, int);
	void CopyAttrFromPartial(int, int, int, int, const CSOAContainer *, int, int);
	void FillAttrPartial(int, int, int, int, int, fltx4);
	size_t DataMemorySize();
	size_t ConstantMemorySize();
	size_t AttributeMemorySize(int);
	void AllocateDataMemory();
	void AllocateConstantMemory();

	// sizeof = 1464
};

// src/public/tier1/utlsoacontainer.h:982
class CSOAAttributeReference {
	int m_nAttributeID;  // +0x8
	void operator*=(float);
	void operator+=(float);
	void operator-=(float);
	void operator=(float);
	void operator=(const CSOAAttributeReference &);
	CSOAAttributeReferenceBinaryOp<AddSIMD<(ESIMDLevel)20u>, CSOAAttributeReference> operator+(const CSOAAttributeReference &);
	CSOAAttributeReferenceBinaryOp<MulSIMD<(ESIMDLevel)20u>, CSOAAttributeReference> operator*(const CSOAAttributeReference &);
	CSOAAttributeReferenceBinaryOp<SubSIMD<(ESIMDLevel)20u>, CSOAAttributeReference> operator-(const CSOAAttributeReference &);
	CSOAAttributeReferenceBinaryOp<DivSIMD<(ESIMDLevel)20u>, CSOAAttributeReference> operator/(const CSOAAttributeReference &);
	CSOAAttributeReferenceBinaryOp<Cmp01GtSIMD<(ESIMDLevel)20u>, CSOAAttributeReference> operator>(const CSOAAttributeReference &);
	CSOAAttributeReferenceBinaryOp<Cmp01GeSIMD<(ESIMDLevel)20u>, CSOAAttributeReference> operator>=(const CSOAAttributeReference &);
	CSOAAttributeReferenceBinaryOp<Cmp01LtSIMD<(ESIMDLevel)20u>, CSOAAttributeReference> operator<(const CSOAAttributeReference &);
	CSOAAttributeReferenceBinaryOp<Cmp01LeSIMD<(ESIMDLevel)20u>, CSOAAttributeReference> operator<=(const CSOAAttributeReference &);
	CSOAAttributeReferenceBinaryOp<Cmp01EqSIMD<(ESIMDLevel)20u>, CSOAAttributeReference> operator==(const CSOAAttributeReference &);
	CSOAAttributeReferenceBinaryConstantOp<AddSIMD<(ESIMDLevel)20u>, CSOAAttributeReference> operator+(float);
	CSOAAttributeReferenceBinaryConstantOp<MulSIMD<(ESIMDLevel)20u>, CSOAAttributeReference> operator*(float);
	CSOAAttributeReferenceBinaryConstantOp<SubSIMD<(ESIMDLevel)20u>, CSOAAttributeReference> operator-(float);
	CSOAAttributeReferenceBinaryConstantOp<DivSIMD<(ESIMDLevel)20u>, CSOAAttributeReference> operator/(float);
	CSOAAttributeReferenceBinaryConstantOp<Cmp01GtSIMD<(ESIMDLevel)20u>, CSOAAttributeReference> operator>(float);
	CSOAAttributeReferenceBinaryConstantOp<Cmp01GeSIMD<(ESIMDLevel)20u>, CSOAAttributeReference> operator>=(float);
	CSOAAttributeReferenceBinaryConstantOp<Cmp01LtSIMD<(ESIMDLevel)20u>, CSOAAttributeReference> operator<(float);
	CSOAAttributeReferenceBinaryConstantOp<Cmp01LeSIMD<(ESIMDLevel)20u>, CSOAAttributeReference> operator<=(float);
	CSOAAttributeReferenceBinaryConstantOp<Cmp01EqSIMD<(ESIMDLevel)20u>, CSOAAttributeReference> operator==(float);
	void CopyTo(CSOAAttributeReference &);
	int Width();
	int Height();
	void SetDimensions(int, int);
	float Element(int, int);
	void SetElement(int, int, float);
	float * begin();
	float * end();

	// sizeof = 16
};

// src/public/tier1/utlsoacontainer.h:1276
class CSOAConstAttributeReference : public CSOAAttributeReference {
public:

	CSOAConstAttributeReference(const CSOAContainer *, int);

private:

	void operator*=(float);
	void operator+=(float);
	void operator-=(float);
	void operator=(float);
	void operator=(const CSOAAttributeReference &);
	void operator=(const CSOAConstAttributeReference &);
	void SetElement(int, int, float);

	// sizeof = 16
};

// src/public/tier1/utlsoacontainer.h:1399
class KMeansQuantizedValue {
	float m_fl4Values __attribute__ ((__vector_size__ (16)))[32];  // +0x30
	float m_flValueAccumulators[1][32];  // +0x230
	float m_flWeightAccumulators[1];  // +0x2b0
	KMeansQuantizedValue();
	float operator()(int);

	float [1]:32;
	float [1]:32;
	float [1]:32;

	// sizeof = 704
};
