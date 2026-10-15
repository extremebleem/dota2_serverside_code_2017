// Reconstructed from DWARF by pahole; not original source.

// src/public/rendersystem/sheet.h:56
struct SequenceFloatParam_t {
private:

	float m_value;  // +0x4
	SequenceFloatParam_t();

	// sizeof = 8
};

// src/public/rendersystem/sheet.h:63
struct SheetSequence_t {
private:

	uint32 m_nId;  // +0x0
	bool m_bClamp;  // +0x4
	bool m_bAlphaCrop;  // +0x5
	bool m_bNoColor;  // +0x6
	bool m_bNoAlpha;  // +0x7
	float32 m_flTotalTime;  // +0x10
	SheetSequence_t();

	float FindFloatParam(const char *, float);

	// sizeof = 32
};

// src/public/rendersystem/sheet.h:93
struct SheetSequenceFrame_t {
private:

	float32 m_flDisplayTime;  // +0x0
	SheetSequenceFrame_t();

	// sizeof = 12
};

// src/public/rendersystem/sheet.h:100
struct SheetFrameImage_t {
private:

	SheetFrameImage_t();

	// sizeof = 32
};

// src/public/rendersystem/sheet.h:107
struct Sheet_t {
private:

	Sheet_t();

	const SheetSequence_t * FindSequence(const char *);

	// sizeof = 8
};
