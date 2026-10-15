// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlflags.h:18
class CUtlFlags<int> {
private:

	int m_nFlags;  // +0x0
	CUtlFlags(int);
	void SetFlag(int);
	void SetFlag(int, bool);
	void ClearFlag(int);
	void ClearAllFlags();
	bool IsFlagSet(int);
	bool IsAnyFlagSet();

	// sizeof = 4
};
