// Reconstructed from DWARF by pahole; not original source.

// src/public/mathlib/disjoint_set_forest.h:17
class CDisjointSetForest {
	struct Node_t {
		int nRank;  // +0x0
		int nParent;  // +0x4

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

protected:

	CDisjointSetForest(int);
	int Find(int);
	void Union(int, int);
	void EnsureExists(int);
	int GetNodeCount();
	~CDisjointSetForest();

	// sizeof = 24
};
