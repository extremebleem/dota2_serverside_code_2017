// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/gameentitysystem.h:41
struct SchemaInfoFor_N<IEntityListener> {
	const CSchemaClassInfo * Get(ISchemaSystem *, const char *, const char *);

	// sizeof = 1
};

// src/game/shared/gameentitysystem.h:41
struct CallRegisterFunctionForClass_t<IEntityListener> {
	void Call(ISchemaSystem *, const char *, const char *);

	// sizeof = 1
};

// src/game/shared/gameentitysystem.h:551
class CEntityClassList<CPointCamera> : public CBaseEntityClassList {
public:

	static CPointCamera * m_pClassList;
	CEntityClassList();
	void Insert(CPointCamera *);
	void Remove(CPointCamera *);
	~CEntityClassList();

	// sizeof = 8
};

// src/game/shared/gameentitysystem.h:551
class CEntityClassList<CSkyCamera> : public CBaseEntityClassList {
public:

	static CSkyCamera * m_pClassList;
	CEntityClassList();
	void Insert(CSkyCamera *);
	void Remove(CSkyCamera *);
	~CEntityClassList();

	// sizeof = 8
};
