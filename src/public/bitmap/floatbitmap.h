// Reconstructed from DWARF by pahole; not original source.

// src/public/bitmap/floatbitmap.h:20
struct PixRGBAF {
	float Red;  // +0x0
	float Green;  // +0x4
	float Blue;  // +0x8
	float Alpha;  // +0xc

	// sizeof = 16
};

// src/public/bitmap/floatbitmap.h:97
struct DownsampleInfo_t {
	int m_nFlags;  // +0x0
	float m_flAlphaThreshhold;  // +0x4
	float m_flAlphaHiFreqThreshhold;  // +0x8

	// sizeof = 12
};

// src/public/bitmap/floatbitmap.h:136
class FloatBitMap_t : public CSOAContainer {
public:

protected:

	static IThreadPool * sm_pFBMThreadPool;
	FloatBitMap_t();
	FloatBitMap_t(int, int, int, int);
	FloatBitMap_t(const FloatBitMap_t *);
	FloatBitMap_t(const Bitmap_t &);
	void EncodeTo(Bitmap_t *, ImageFormat, int);
	void Init(int, int, int, int);
	void Init(int, int, int, const FloatBitMap_t *);
	void Shutdown();
	int GetAttributeMask();
	bool HasAttributeData(FBMAttribute_t);
	int ComputeValidAttributeList(int *);
	bool HasData();
	bool LoadFromFile(const char *, FBMGammaType_t);
	bool LoadFromPFM(const char *);
	bool LoadFromPSD(const char *, FBMGammaType_t);
	bool LoadFromTIF(const char *, FBMGammaType_t);
	bool LoadFromPNG(const char *, FBMGammaType_t);
	bool LoadFromJPG(const char *, FBMGammaType_t);
	bool LoadFromEXR(const char *);
	void InitializeWithRandomPixelsFromAnotherFloatBM(const FloatBitMap_t &);
	void Clear(float, float, float, float);
	void LoadFromBuffer(const void *, size_t, ImageFormat, FBMGammaType_t);
	void LoadFromFloatBitmap(const FloatBitMap_t *);
	void CopyFloatBitmap(const FloatBitMap_t *);
	void CopyFloatBitmapSubrect(const FloatBitMap_t *, int, int, int, int, int, int);
	void SetChannel(int, float);
	void Rotate90DegreesCW();
	void Rotate90DegreesCCW();
	void Rotate180Degrees();
	void MirrorHorizontally();
	void MirrorVertically();
	FloatBitMap_t(const char *, bool);
	bool WriteTGAFile(const char *);
	bool WritePFM(const char *);
	bool WriteEXR(const char *);
	bool WriteToBuffer(void *, size_t, ImageFormat, bool, bool);
	bool WriteToBufferDXT(void *, size_t, ImageFormat, bool, bool);
	const float & ConstantValue(int);
	float & Pixel(int, int, int, int);
	float & PixelWrapped(int, int, int, int);
	float & PixelClamped(int, int, int, int);
	float & Alpha(int, int, int);
	float & Pixel(const IntVector2D &, int);
	float & Pixel(const IntVector3D &, int);
	int PixelIndex(int, int, int, int);
	Vector RGBPixelAsVector(int, int, int);
	Vector RGBPixelAsVectorWrapped(int, int, int);
	void SetRGBPixelFromVector(const Vector &, int, int, int);
	PixRGBAF PixelRGBAF(int, int, int);
	void WritePixelRGBAF(int, int, int, PixRGBAF);
	void WritePixel(int, int, int, int, float);
	void ConvertGammaToLinear(FBMGammaType_t);
	void ConvertLinearToGamma(FBMGammaType_t);
	CSOAAttributeReference Red();
	CSOAAttributeReference Green();
	CSOAAttributeReference Blue();
	CSOAAttributeReference Alpha();
	CSOAConstAttributeReference Red();
	CSOAConstAttributeReference Green();
	CSOAConstAttributeReference Blue();
	CSOAConstAttributeReference Alpha();
	void SmartPaste(const FloatBitMap_t &, int, int, uint32);
	void Poisson(FloatBitMap_t * *, int, uint32);
	void MakeTileable(int);
	void Resize2D(int, int, bool);
	void ResizeWeightedAlpha(int, int);
	void GetAlphaBounds(int &, int &, int &, int &, float, int);
	void QuarterSize(FloatBitMap_t *);
	void QuarterSizeBlocky(FloatBitMap_t *);
	void QuarterSizeWithGaussian(FloatBitMap_t *);
	void DownsampleNiceFiltered(const DownsampleInfo_t &, FloatBitMap_t *);
	void RaiseToPower(float);
	void ScaleGradients();
	void Logize();
	void UnLogize();
	void CompressTo8Bits(float);
	void Uncompress(float);
	Vector4D AverageColor4D();
	Vector AverageColor();
	float BrightestColor();
	void NormalMapToDXT5NM();
	void ScaleRGB(float);
	void ComputeVertexPositionsAndNormals(float, Vector * *, Vector * *);
	FloatBitMap_t * ComputeSelfShadowedBumpmapFromHeightInAlphaChannel(float, float, const Vector *, int, int, uint32);
	FloatBitMap_t * ComputeBumpmapFromHeightInAlphaChannel(float);
	void TileableBilateralFilter(int, float);
	void EstimateDerivatives(int, int, int);
	void DrawLine(int, int, int, int, int, float);
	void DilateColorsIntoTransparentParts(int);
	void SetThreadPool(IThreadPool *);
	void TileableBilateralFilterPartial(int, int, int, float, FloatBitMap_t *);
	void QuarterSize2D(FloatBitMap_t *, int, int);
	void QuarterSize3D(FloatBitMap_t *, int, int);
	void QuarterSizeBlocky2D(FloatBitMap_t *, int, int);
	void QuarterSizeBlocky3D(FloatBitMap_t *, int, int);
	void PackToRGBA8888_t(RGBA8888_t *, int, int, int, int);
	void LoadFromRGBA8888BufferGammaToLinear(const RGBA8888_t *, int);
	void WriteToBufferRGBA16161616(RGBA16161616_t *, int);
	void WriteToBufferRG1616(RG1616_t *, int);
	void WriteToBufferR16(R16_t *, int);
	int CoordWrap(int, int);

	// sizeof = 1464
};
