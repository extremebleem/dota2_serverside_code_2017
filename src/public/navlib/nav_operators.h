// Reconstructed from DWARF by pahole; not original source.

// src/public/navlib/nav_operators.h:16
class NavAreaCollector {
private:

	bool m_bCheckForDuplicates;  // +0x0

	NavAreaCollector(bool);
	bool operator()(CNavArea *);
	~NavAreaCollector();

	// sizeof = 32
};

// src/public/navlib/nav_operators.h:42
class NavAreaCollectorExternal {
private:

	bool m_bCheckForDuplicates;  // +0x0

	const CUtlVector<CNavArea*, CUtlMemory<CNavArea*, int> > & m_rAreas;  // +0x8
	NavAreaCollectorExternal(NavAreaVector &, bool);
	bool operator()(CNavArea *);

	// sizeof = 16
};

// src/public/navlib/nav_operators.h:65
class NavAttributeClearer {
	NavAttributeClearer(CNavAttribute);
	bool operator()(CNavArea *);

	// sizeof = 8
};

// src/public/navlib/nav_operators.h:84
class NavAttributeSetter {
	NavAttributeSetter(CNavAttribute);
	bool operator()(CNavArea *);

	// sizeof = 8
};

// src/public/navlib/nav_operators.h:123
class ShiftSet {
private:

	ShiftSet(const Vector &);
	bool operator()(CNavArea *);

	// sizeof = 12
};
