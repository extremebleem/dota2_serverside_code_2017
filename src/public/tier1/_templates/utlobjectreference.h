// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlobjectreference.h:60
class CUtlReference<IParticleCollection> {
	intp m_ThisCheck;  // +0x18
	CUtlReference();
	CUtlReference(IParticleCollection *);
	CUtlReference(const CUtlReference<IParticleCollection> &);
	~CUtlReference();
	void Set(IParticleCollection *);
	IParticleCollection * operator()();
	bool IsValid();
	IParticleCollection * operator IParticleCollection*();
	const IParticleCollection * operator const IParticleCollection*();
	IParticleCollection * GetObject();
	const IParticleCollection * GetObject();
	IParticleCollection * Get();
	const IParticleCollection * Get();
	IParticleCollection * operator->();
	const IParticleCollection * operator->();
	CUtlReference<IParticleCollection> & operator=(const CUtlReference<IParticleCollection> &);
	CUtlReference<IParticleCollection> & operator=(IParticleCollection *);
	bool operator==(const IParticleCollection *);
	bool operator==(IParticleCollection *);
	bool operator==(const CUtlReference<IParticleCollection> &);
	void AddRef(IParticleCollection *);
	void KillRef();

	// sizeof = 32
};

// src/public/tier1/utlobjectreference.h:60
class CUtlReference<CDOTA_AttackRecord> {
	intp m_ThisCheck;  // +0x18
	CUtlReference();
	CUtlReference(CDOTA_AttackRecord *);
	CUtlReference(const CUtlReference<CDOTA_AttackRecord> &);
	~CUtlReference();
	void Set(CDOTA_AttackRecord *);
	CDOTA_AttackRecord * operator()();
	bool IsValid();
	CDOTA_AttackRecord * operator CDOTA_AttackRecord*();
	const CDOTA_AttackRecord * operator const CDOTA_AttackRecord*();
	CDOTA_AttackRecord * GetObject();
	const CDOTA_AttackRecord * GetObject();
	CDOTA_AttackRecord * Get();
	const CDOTA_AttackRecord * Get();
	CDOTA_AttackRecord * operator->();
	const CDOTA_AttackRecord * operator->();
	CUtlReference<CDOTA_AttackRecord> & operator=(const CUtlReference<CDOTA_AttackRecord> &);
	CUtlReference<CDOTA_AttackRecord> & operator=(CDOTA_AttackRecord *);
	bool operator==(const CDOTA_AttackRecord *);
	bool operator==(CDOTA_AttackRecord *);
	bool operator==(const CUtlReference<CDOTA_AttackRecord> &);
	void AddRef(CDOTA_AttackRecord *);
	void KillRef();

	// sizeof = 32
};

// src/public/tier1/utlobjectreference.h:60
class CUtlReference<CDOTA_Buff> {
	intp m_ThisCheck;  // +0x18
	CUtlReference();
	CUtlReference(CDOTA_Buff *);
	CUtlReference(const CUtlReference<CDOTA_Buff> &);
	~CUtlReference();
	void Set(CDOTA_Buff *);
	CDOTA_Buff * operator()();
	bool IsValid();
	CDOTA_Buff * operator CDOTA_Buff*();
	const CDOTA_Buff * operator const CDOTA_Buff*();
	CDOTA_Buff * GetObject();
	const CDOTA_Buff * GetObject();
	CDOTA_Buff * Get();
	const CDOTA_Buff * Get();
	CDOTA_Buff * operator->();
	const CDOTA_Buff * operator->();
	CUtlReference<CDOTA_Buff> & operator=(const CUtlReference<CDOTA_Buff> &);
	CUtlReference<CDOTA_Buff> & operator=(CDOTA_Buff *);
	bool operator==(const CDOTA_Buff *);
	bool operator==(CDOTA_Buff *);
	bool operator==(const CUtlReference<CDOTA_Buff> &);
	void AddRef(CDOTA_Buff *);
	void KillRef();

	// sizeof = 32
};

// src/public/tier1/utlobjectreference.h:222
class CSchemaTypeOf<CUtlReference<CDOTA_Buff> > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/public/tier1/utlobjectreference.h:224
class CUtlReferenceList<IParticleCollection> : public CUtlIntrusiveDList<CUtlReference<IParticleCollection> > {
public:

	CUtlReferenceList();
	~CUtlReferenceList();

	// sizeof = 8
};

// src/public/tier1/utlobjectreference.h:224
class CUtlReferenceList<CDOTA_AttackRecord> : public CUtlIntrusiveDList<CUtlReference<CDOTA_AttackRecord> > {
public:

	CUtlReferenceList();
	~CUtlReferenceList();

	// sizeof = 8
};

// src/public/tier1/utlobjectreference.h:224
class CUtlReferenceList<CDOTA_Bot> : public CUtlIntrusiveDList<CUtlReference<CDOTA_Bot> > {
public:

	CUtlReferenceList();
	~CUtlReferenceList();

	// sizeof = 8
};

// CUtlReference: 2 more instantiations (full list in INDEX.tsv)
//   CUtlReference<CDOTA_Bot>
//   CUtlReference<CDOTA_TeamCommander>

// CUtlReferenceList: 2 more instantiations (full list in INDEX.tsv)
//   CUtlReferenceList<CDOTA_Buff>
//   CUtlReferenceList<CDOTA_TeamCommander>
