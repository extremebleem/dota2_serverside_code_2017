// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/econ/localization_provider.h:181
class CLocalizedStringArgPrintfImpl<unsigned int> {
	enum {
		kBufferSize = 0x80,
	};

private:

	wchar_t m_cBuffer[128];  // +0x0
	CLocalizedStringArgPrintfImpl(unsigned int, const locchar_t *);
	const locchar_t * GetLocArg();

	// sizeof = 512
};

// src/game/shared/econ/localization_provider.h:181
class CLocalizedStringArgPrintfImpl<float> {
	enum {
		kBufferSize = 0x80,
	};

private:

	wchar_t m_cBuffer[128];  // +0x0
	CLocalizedStringArgPrintfImpl(float, const locchar_t *);
	const locchar_t * GetLocArg();

	// sizeof = 512
};
