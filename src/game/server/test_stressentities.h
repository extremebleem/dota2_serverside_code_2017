// Reconstructed from DWARF by pahole; not original source.

// src/game/server/test_stressentities.h:23
class CStressEntityReg {
private:

	static CStressEntityReg * s_pHead;
	StressEntityFn m_pFn;  // +0x8
	CStressEntityReg(StressEntityFn);
	CStressEntityReg * GetListHead();
	CStressEntityReg * GetNext();
	StressEntityFn GetFn();

	// sizeof = 16
};
