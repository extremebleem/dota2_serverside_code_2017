// Reconstructed from DWARF by pahole; not original source.

// src/public/tier0/reliabletimer.h:191
class CLimitTimer {
private:

	uint64 m_nTickLimit;  // +0x0
	CLimitTimer();
	CLimitTimer(uint64);
	void SetLimit(uint64);
	bool BLimitReached();
	uint64 CMicroSecOverage();
	uint64 CMicroSecLeft();

	// sizeof = 8
};
