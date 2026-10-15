// Reconstructed from DWARF by pahole; not original source.

// src/public/navlib/nav_place.h:20
class CNavPlaceDatabase {
private:

	char * * m_ppPlaceName;  // +0x0
	uint32 m_nPlaceCount;  // +0x8
	CNavPlaceDatabase();
	~CNavPlaceDatabase();
	Place GetPlace(const Vector &);
	const char * PlaceToName(Place);
	Place NameToPlace(const char *);
	Place PartialNameToPlace(const char *);
	void PrintAllPlaces(Place);
	int PlaceNameAutocomplete(const char *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	void LoadPlaceDatabase(bool);

	// sizeof = 16
};

// src/public/navlib/nav_place.h:51
class CNavPlaceDirectory {
private:

	bool m_bHasUnnamedAreas;  // +0x18
	typedef short unsigned int IndexType;
	CNavPlaceDirectory();
	void Reset();
	bool IsKnown(Place);
	IndexType GetIndex(Place);
	void AddPlace(Place);
	Place IndexToPlace(IndexType);
	void Save(const CNavPlaceDatabase &, CUtlBuffer &);
	void Load(const CNavPlaceDatabase &, CUtlBuffer &, int);
	const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > * GetPlaces();
	bool HasUnnamedPlaces();
	CNavPlaceDirectory & operator=(const CNavPlaceDirectory &);
	~CNavPlaceDirectory();

	// sizeof = 32
};
