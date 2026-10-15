// Reconstructed from DWARF by pahole; not original source.

// src/public/responserules/iresponserulescache.h:21
class CGameResponseSystem : public CResponseSystem {
public:

protected:

	bool m_bPrecache;  // +0x50e0
	CGameResponseSystem(const char *, IResponseRulesFileCache *, bool);
	virtual ~CGameResponseSystem();
	virtual const char * GetScriptFile();
	virtual void PrecacheResponses(bool);
	bool ShouldPrecache();

	// vtable[6] GetScriptFile
	// vtable[4] PrecacheResponses
	// sizeof = 20712
};
