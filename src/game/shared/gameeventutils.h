// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/gameeventutils.h:52
struct GameEventRegister_t {
	const char * m_pName;  // +0x0
	CUtlDelegate<bool()> m_init;  // +0x8
	CUtlDelegate<void()> m_shutdown;  // +0x20
	GameEventRegister_t(const char *, const CUtlDelegate<bool()> &, const CUtlDelegate<void()> &);

	// sizeof = 64
};
