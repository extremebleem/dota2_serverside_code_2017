// Reconstructed from DWARF by pahole; not original source.

// src/public/bitmap/bitmap.h:29
struct Bitmap_t {
private:

	int m_nWidth;  // +0x0
	int m_nHeight;  // +0x4
	int m_nPixelSize;  // +0x8
	int m_nStride;  // +0xc
	bool m_bOwnsBuffer;  // +0x10

	unsigned char * m_pBits;  // +0x18
	Bitmap_t();
	~Bitmap_t();
	int Width();
	int Height();
	ImageFormat Format();
	unsigned char * GetBits();
	int Stride();
	bool GetOwnsBuffer();
	void Init(int, int, ImageFormat, int);
	void SetBuffer(int, int, ImageFormat, unsigned char *, bool, int);
	void SetOwnsBuffer(bool);
	void Clear();
	bool IsValid();
	unsigned char * GetPixel(int, int);
	const unsigned char * GetPixel(int, int);
	Color GetColor(int, int);
	void SetColor(int, int, Color);
	void MakeLogicalCopyOf(Bitmap_t &, bool);
	void Crop(int, int, int, int, const Bitmap_t *);
	void SetPixelData(const Bitmap_t &, int, int, int, int, int, int);
	void SetPixelData(const Bitmap_t &, int, int);
	ImageFormat GetImageFormat();
	int NumCols();
	int NumRows();
	int NumSlices();
	void Reset();

	// sizeof = 32
};
