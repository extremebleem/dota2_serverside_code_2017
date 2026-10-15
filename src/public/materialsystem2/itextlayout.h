// Reconstructed from DWARF by pahole; not original source.

// src/public/materialsystem2/itextlayout.h:52
class CTextLayoutInfo {
	FontHandle_t m_FontID;  // +0x14
	bool m_bHorizGradient;  // +0x18
	bool m_bAllCaps;  // +0x21

	bool m_bIsProportional;  // +0x28

	float m_flFontScaleFactor;  // +0x2c
protected:

	CTextLayoutInfo();
	~CTextLayoutInfo();
	CTextLayoutInfo(const CTextLayoutInfo &);
	CTextLayoutInfo & operator=(const CTextLayoutInfo &);
	void SetText(const char *);
	void SetText(const uchar16 *);
	void SetText(const uchar32 *);
	void SetTextAsUTF32(const char *);
	void SetTextAsUTF32(const uchar16 *);
	const char * GetTextAsUTF8();
	const uchar16 * GetTextAsUTF16();
	const uchar32 * GetTextAsUTF32();
	bool IsTextEmpty();
	void SetColor(const Color &);

	// sizeof = 128
};

// src/public/materialsystem2/itextlayout.h:134
struct CCharRenderGeometry {
	FontTextureHandle_t m_FontTextureID;  // +0x60
	CCharRenderGeometry();

	// sizeof = 100
};
