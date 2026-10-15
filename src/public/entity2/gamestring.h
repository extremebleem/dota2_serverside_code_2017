// Reconstructed from DWARF by pahole; not original source.

// src/public/entity2/gamestring.h:19
class CGameString {
private:

	string_t m_iszString;  // +0x0
	const char * m_pszString;  // +0x8
	uint32 m_iSerial:31;  // +0x10:0
	uint32 m_bCopy:1;  // +0x10:31

	static uint32 gm_iSerialNumber;
	CGameString();
	CGameString(const char *, bool);
	~CGameString();
	void Set(const char *, bool);
	string_t Get();
	const char * operator char const*();
	string_t operator string_t();
	void IncrementSerialNumber();

	// sizeof = 24
};
