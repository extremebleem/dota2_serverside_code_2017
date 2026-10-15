// Reconstructed from DWARF by pahole; not original source.

// src/public/navlib/nav_handle.h:21
class CNavHandle<CNavArea> {
private:

	const CNavMesh * m_pAssociatedNavMesh;  // +0x8
	CNavHandle();
	CNavHandle(const CNavArea *);
	bool IsInCurrentNavMesh();
	const CNavHandle<CNavArea> & operator=(const CNavArea *);
	bool operator==(const CNavArea *);
	bool operator==(CNavArea *);
	bool operator!=(const CNavArea *);
	CNavArea * Get();
	CNavArea * operator->();
	CNavArea * operator CNavArea*();
	CNavArea * operator CNavArea*();
	bool operator bool();
	bool operator!();

	// sizeof = 16
};

// src/public/navlib/nav_handle.h:21
class CNavHandle<CNavLadder> {
private:

	const CNavMesh * m_pAssociatedNavMesh;  // +0x8
	CNavHandle();
	CNavHandle(const CNavLadder *);
	bool IsInCurrentNavMesh();
	const CNavHandle<CNavLadder> & operator=(const CNavLadder *);
	bool operator==(const CNavLadder *);
	bool operator==(CNavLadder *);
	bool operator!=(const CNavLadder *);
	CNavLadder * Get();
	CNavLadder * operator->();
	CNavLadder * operator CNavLadder*();
	CNavLadder * operator CNavLadder*();
	bool operator bool();
	bool operator!();

	// sizeof = 16
};

// src/public/navlib/nav_handle.h:119
class CSchemaTypeOf<CNavHandle<CNavLadder> > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/public/navlib/nav_handle.h:119
class CSchemaTypeOf<CNavHandle<CNavArea> > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};
