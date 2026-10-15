// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utltshash.h:905
class CUtlTSOpenHashConcurrencyModelLockFree {
	CUtlTSOpenHashConcurrencyModelLockFree();
	void LockForPageModification();
	void UnlockForPageModification();
	void LockForSearch();
	void UnlockForSearch();

	// sizeof = 16
};
