// Reconstructed from DWARF by pahole; not original source.

// src/game/public/tier1/utlstringexternalizable.h:14
class CUtlStringExternalizable {
	union {
		const char * m_pData;  // +0x0
		struct {
			char m_InlineString[15];  // +0x0
			uint8 m_bOwnsData:1;  // +0xf:0
			uint8 m_bInlineString:1;  // +0xf:1
		} m_Inline;
	};

private:

	union {
		const char * m_pData;  // +0x0
		struct {
			char m_InlineString[15];  // +0x0
			uint8 m_bOwnsData:1;  // +0xf:0
			uint8 m_bInlineString:1;  // +0xf:1
		} m_Inline;
	};
	CUtlStringExternalizable();
	~CUtlStringExternalizable();
	CUtlStringExternalizable(const CUtlStringExternalizable &);
	void Clear();
	const char * operator char const*();
	const char * Get();
	const char * GetPtr();
	void Set(const char *);
	void operator=(const CUtlStringExternalizable &);
	void operator=(const char *);
	bool IsEmpty();
	bool ClearAndSetInline(const char *);

	// sizeof = 16
};
