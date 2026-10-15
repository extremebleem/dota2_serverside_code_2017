// Reconstructed from DWARF by pahole; not original source.

// src/public/entity2/entitysystem.h:75
class CPreserveValueScopeGuard<bool> {
private:

	bool * m_pValue;  // +0x0
	bool m_Saved;  // +0x8
	CPreserveValueScopeGuard(bool *);
	~CPreserveValueScopeGuard();
	void Release();

	// sizeof = 16
};

// src/public/entity2/entitysystem.h:359
struct TypedEntityInstanceByClassIter_t<CFogController> : protected EntityInstanceByClassIter_t {
protected:

	TypedEntityInstanceByClassIter_t(const char *, IEntityFindFilter *, EntityIterType_t);
	TypedEntityInstanceByClassIter_t(string_t, IEntityFindFilter *, EntityIterType_t);
	TypedEntityInstanceByClassIter_t(CFogController *, const char *, IEntityFindFilter *, EntityIterType_t);
	CFogController * First();
	CFogController * Next();

	// sizeof = 40
};

// src/public/entity2/entitysystem.h:359
struct TypedEntityInstanceByClassIter_t<CColorCorrection> : protected EntityInstanceByClassIter_t {
protected:

	TypedEntityInstanceByClassIter_t(const char *, IEntityFindFilter *, EntityIterType_t);
	TypedEntityInstanceByClassIter_t(string_t, IEntityFindFilter *, EntityIterType_t);
	TypedEntityInstanceByClassIter_t(CColorCorrection *, const char *, IEntityFindFilter *, EntityIterType_t);
	CColorCorrection * First();
	CColorCorrection * Next();

	// sizeof = 40
};

// src/public/entity2/entitysystem.h:359
struct TypedEntityInstanceByClassIter_t<CInfoLadderDismount> : protected EntityInstanceByClassIter_t {
protected:

	TypedEntityInstanceByClassIter_t(const char *, IEntityFindFilter *, EntityIterType_t);
	TypedEntityInstanceByClassIter_t(string_t, IEntityFindFilter *, EntityIterType_t);
	TypedEntityInstanceByClassIter_t(CInfoLadderDismount *, const char *, IEntityFindFilter *, EntityIterType_t);
	CInfoLadderDismount * First();
	CInfoLadderDismount * Next();

	// sizeof = 40
};

// TypedEntityInstanceByClassIter_t: 4 more instantiations (full list in INDEX.tsv)
//   TypedEntityInstanceByClassIter_t<CPointEntity>
//   TypedEntityInstanceByClassIter_t<CPostProcessController>
//   TypedEntityInstanceByClassIter_t<CPropZipline>
//   TypedEntityInstanceByClassIter_t<CMarkupVolumeTagged>
