// Reconstructed from DWARF by pahole; not original source.

// src/public/rendersystem/texturebits.h:141
class CTextureDesc {
	int16 m_nWidth;  // +0x0
	int16 m_nHeight;  // +0x2
	int16 m_nDepth;  // +0x4
	int16 m_nNumMipLevels;  // +0x6
	int16 m_nPicmip0Res;  // +0x8

	int16 m_nDisplayRectWidth;  // +0x18
	int16 m_nDisplayRectHeight;  // +0x1a
	CTextureDesc();
	~CTextureDesc();
	CTextureDesc(const CTextureDesc &);
	CTextureDesc & operator=(const CTextureDesc &);
	int GetArrayCount();
	int GetDepth();

	// sizeof = 28
};
