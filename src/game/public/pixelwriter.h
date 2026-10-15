// Reconstructed from DWARF by pahole; not original source.

// src/game/public/pixelwriter.h:30
class CPixelWriter {
	enum {
		PIXELWRITER_USING_FLOAT_FORMAT = 0x1,
		PIXELWRITER_USING_16BIT_FLOAT_FORMAT = 0x2,
		PIXELWRITER_SWAPBYTES = 0x4,
	};

private:

	unsigned char * m_pBase;  // +0x0
	unsigned char * m_pBits;  // +0x8
	short unsigned int m_BytesPerRow;  // +0x10
	unsigned char m_Size;  // +0x12
	unsigned char m_nFlags;  // +0x13
	short int m_RShift;  // +0x14
	short int m_GShift;  // +0x16
	short int m_BShift;  // +0x18
	short int m_AShift;  // +0x1a
	unsigned int m_RMask;  // +0x1c
	unsigned int m_GMask;  // +0x20
	unsigned int m_BMask;  // +0x24
	unsigned int m_AMask;  // +0x28
	void SetPixelMemory(ImageFormat, void *, int);
	void * GetPixelMemory();
	void Seek(int, int);
	void * SkipBytes(int);
	void SkipPixels(int);
	void WritePixel(int, int, int, int);
	void WritePixelNoAdvance(int, int, int, int);
	void WritePixelSigned(int, int, int, int);
	void WritePixelNoAdvanceSigned(int, int, int, int);
	void ReadPixelNoAdvance(int &, int &, int &, int &);
	void WritePixelNoAdvanceF(float, float, float, float);
	void WritePixelF(float, float, float, float);
	void WritePixel(FLTX4);
	void WritePixelNoAdvance(FLTX4);
	unsigned char GetPixelSize();
	bool IsUsingFloatFormat();
	unsigned char * GetCurrentPixel();

	// sizeof = 48
};
