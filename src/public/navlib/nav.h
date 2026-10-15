// Reconstructed from DWARF by pahole; not original source.

// src/public/navlib/nav.h:28
struct NavGenDataMarkup_t {
	uint32 m_nFlags;  // +0x48
	NavGenDataMarkup_t();

	// sizeof = 76
};

// src/public/navlib/nav.h:38
struct NavCellCoord_t {
	uint16 m_nX;  // +0x0
	uint16 m_nY;  // +0x2
	NavCellCoord_t(int, int);

	// sizeof = 4
};

// src/public/navlib/nav.h:145
class CNavFlags {
protected:

	uint64 m_Flags;  // +0x0
	int GetNumFlags();
	CNavFlags(uint64);
	void Clear();
	bool IsEmpty();
	void AddFlags(CNavFlags);
	void RemoveFlags(CNavFlags);
	bool HasAnyFlags(CNavFlags);
	bool operator==(CNavFlags);
	CNavFlags operator~();
	CNavFlags operator|(CNavFlags);
	CNavFlags operator&(CNavFlags);
	CNavFlags operator|=(CNavFlags);
	void Save(CUtlBuffer &);
	void Load(CUtlBuffer &);
	uint64 GetAsUint64();

	// sizeof = 8
};

// src/public/navlib/nav.h:237
class CNavAttribute : public CNavFlags {
public:

	CNavAttribute(uint64);
	CNavAttribute(CNavFlags);
	void AddAttributeSet(CUtlVector<NavAttributeEnum, CUtlMemory<NavAttributeEnum, int> > &);

	// sizeof = 8
};

// src/public/navlib/nav.h:266
class CNavAttributeLookup {
	const char * m_Name;  // +0x0
	CNavAttributeLookup(const char *, CNavAttribute);

	// sizeof = 16
};

// src/public/navlib/nav.h:281
class CNavConfig {
	static long long unsigned int ms_TeamBlockerAttributes[32];
protected:

	static uint64 ms_TraceMaskSolidBrushOnly;
	static uint64 ms_TraceMaskSolid;
	static CUtlVector<CNavAttributeLookup, CUtlMemory<CNavAttributeLookup, int> > ms_AttributeTable;
	static bool ms_bExpectHullClearance;
	uint64 GetTraceMaskSolidBrushOnly();
	uint64 GetTraceMaskSolid();
	const CUtlVector<CNavAttributeLookup, CUtlMemory<CNavAttributeLookup, int> > & GetAttributeTable();
	void NavAttributeAutocomplete(const char *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	CNavAttribute NameToNavAttribute(const char *);
	const char * NavAttributeToName(CNavAttribute);
	bool IsAttributeTableEmpty();
	void FillAttributeTableBase();
	bool GetExpectHullClearance();

	// sizeof = 1
};

// src/public/navlib/nav.h:340
struct NavHull_t {
	uint32 m_hullCategory;  // +0x0
	float m_flHullRadius;  // +0x4
	float m_flHullHeight;  // +0x8
	NavHull_t(float, float, uint32);
	void Set(float, float, uint32);
	NavHull_t NavHullAny();

	// sizeof = 12
};

// src/public/navlib/nav.h:424
class Extent {
private:

	Extent();
	Extent(const Vector &);
	Extent(const Vector &, const Vector &);
	void Init(const Vector &, const Vector &);
	void Init();
	void Expand(float);
	void Expand(const Vector &);
	float SizeX();
	float SizeY();
	float SizeZ();
	float Area();
	float Size(int);
	Vector Center();
	void Encompass(const Vector &);
	void Encompass(const Extent &);
	bool Contains(const Vector &);
	bool Contains(const Vector &, float);
	bool Contains2D(const Vector2D &, float);
	float DistSqToPoint2D(const Vector2D &);
	float DistSqToPoint(const Vector &);
	bool IsOverlapping(const Extent &);
	bool IsOverlapping2D(const Extent &);
	bool IsOverlappingHalfPlane2D(const Vector2D &, const Vector2D &);
	bool IsOverlappingTriangle(const Vector2D &, const Vector2D &, const Vector2D &);
	bool IsOverlappingSphere(const Vector &, float);

	// sizeof = 24
};
