// Reconstructed from DWARF by pahole; not original source.

// src/common/vscript_utils.h:333
class VScriptFilter {
private:

	HSCRIPT m_hFunction;  // +0x0
	HSCRIPT m_hContext;  // +0x8
	VScriptFilter();
	~VScriptFilter();
	void ClearFilterFunction();
	void SetFilterFunction(HSCRIPT, HSCRIPT);
	bool HasScriptFilter();
	bool RunScriptFilter(KeyValues * *);

	// sizeof = 16
};
