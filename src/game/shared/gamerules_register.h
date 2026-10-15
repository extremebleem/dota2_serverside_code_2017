// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/gamerules_register.h:27
class CGameRulesRegister {
private:

	const char * m_pClassName;  // +0x0
	typedef void (*CreateGameRulesFn)();

	CreateGameRulesFn m_pFn;  // +0x8

	static CGameRulesRegister * s_pHead;
	CGameRulesRegister(const char *, CreateGameRulesFn);
	void CreateGameRules();
	CGameRulesRegister * FindByName(const char *);

	// sizeof = 24
};
