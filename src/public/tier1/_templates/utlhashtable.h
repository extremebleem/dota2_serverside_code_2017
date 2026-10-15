// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlhashtable.h:79
class CUtlHashtableEntry<CUtlStringToken, float> {
	enum {
		FLAG_FREE = 0x80000000,
		FLAG_LAST = 0x40000000,
		MASK_HASH = 0x3fffffff,
	};
	typedef type storage_t;

	storage_t flags_and_hash;  // +0x0
	int data[2];  // +0x4
	typedef CUtlKeyValuePair<CUtlStringToken, float> KVPair;
	typedef type uint16_if16BitStorage;
	typedef type uint32_if32BitStorage;
	bool IsValid();
	void MarkInvalid();
	const KVPair * Raw();
	/* tag__fprintf: const_type tag not supported! */;
	const KVPair * operator->();
	KVPair * Raw();
	KVPair * operator->();
	uint32 IdealIndex(uint32);
	uint32 IdealIndex(uint16_if16BitStorage, uint32);
	uint32 IdealIndex(uint32_if32BitStorage, uint32);
	void MoveDataFrom(CUtlHashtableEntry<CUtlStringToken, float> &);

	// sizeof = 12
};

// src/public/tier1/utlhashtable.h:79
class CUtlHashtableEntry<short unsigned int, empty_t> {
	enum {
		FLAG_FREE = 0x8000,
		FLAG_LAST = 0x4000,
		MASK_HASH = 0x3fff,
	};
	typedef type storage_t;

	storage_t flags_and_hash;  // +0x0
	short int data[1];  // +0x2
	typedef CUtlKeyValuePair<short unsigned int, empty_t> KVPair;
	typedef type uint16_if16BitStorage;
	typedef type uint32_if32BitStorage;
	bool IsValid();
	void MarkInvalid();
	const KVPair * Raw();
	/* tag__fprintf: const_type tag not supported! */;
	const KVPair * operator->();
	KVPair * Raw();
	KVPair * operator->();
	uint32 IdealIndex(uint32);
	uint32 IdealIndex(uint16_if16BitStorage, uint32);
	uint32 IdealIndex(uint32_if32BitStorage, uint32);
	void MoveDataFrom(CUtlHashtableEntry<short unsigned int, empty_t> &);

	// sizeof = 4
};

// src/public/tier1/utlhashtable.h:79
class CUtlHashtableEntry<CSkeletonInstance*, IPhysicsJoint*> {
	enum {
		FLAG_FREE = 0x80000000,
		FLAG_LAST = 0x40000000,
		MASK_HASH = 0x3fffffff,
	};
	typedef type storage_t;

	storage_t flags_and_hash;  // +0x0
	int data[4];  // +0x4
	typedef CUtlKeyValuePair<CSkeletonInstance*, IPhysicsJoint*> KVPair;
	typedef type uint16_if16BitStorage;
	typedef type uint32_if32BitStorage;
	bool IsValid();
	void MarkInvalid();
	const KVPair * Raw();
	/* tag__fprintf: const_type tag not supported! */;
	const KVPair * operator->();
	KVPair * Raw();
	KVPair * operator->();
	uint32 IdealIndex(uint32);
	uint32 IdealIndex(uint16_if16BitStorage, uint32);
	uint32 IdealIndex(uint32_if32BitStorage, uint32);
	void MoveDataFrom(CUtlHashtableEntry<CSkeletonInstance*, IPhysicsJoint*> &);

	// sizeof = 20
};

// src/public/tier1/utlhashtable.h:127
class CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> > {
protected:

	int m_nUsed;  // +0x10
	int m_nMinSize;  // +0x14
	bool m_bSizeLocked;  // +0x18

	typedef UtlHashHandle_t handle_t;
	typedef Arg_t KeyArg_t;
	typedef Arg_t ValueArg_t;
	typedef Arg_t KeyAlt_t;
	typedef CUtlHashtableEntry<CUtlStringToken, float> entry_t;
	typedef ValueReturn_t Element_t;
	void DoRealloc(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, int);
	void BumpEntry(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, unsigned int);
	int DoInsertUnconstructed(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, unsigned int, bool);
	CUtlHashtable(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, int);
	CUtlHashtable(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, int, const VarNameHash_t &, const DefaultEqualFunctor<CUtlStringToken> &);
	CUtlHashtable(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, entry_t *, unsigned int, const VarNameHash_t &, const DefaultEqualFunctor<CUtlStringToken> &);
	~CUtlHashtable(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, int);
	CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa operator=(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, const CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<);
	void SetExternalBuffer(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, uint8 *, unsigned int, bool, bool);
	void SetExternalBuffer(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, entry_t *, unsigned int, bool, bool);
	VarNameHash_t & GetHashRef(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa);
	DefaultEqualFunctor<CUtlStringToken> & GetEqualRef(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa);
	const VarNameHash_t & GetHashRef(const CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<);
	const DefaultEqualFunctor<CUtlStringToken> & GetEqualRef(const CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<);
	bool IsValidHandle(const CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<, handle_t);
	handle_t InvalidHandle();
	handle_t FirstHandle(const CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<);
	UtlHashHandle_t NextHandle(const CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<, handle_t);
	int Count(const CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<);
	handle_t Find(const CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<, KeyArg_t);
	handle_t Find(const CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<, KeyArg_t, unsigned int);
	handle_t Find(const CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<, KeyAlt_t);
	handle_t Find(const CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<, KeyAlt_t, unsigned int);
	bool HasElement(const CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<, KeyArg_t);
	bool HasElement(const CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<, KeyAlt_t);
	handle_t Insert(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, KeyArg_t);
	handle_t InsertIfNotFound(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, KeyArg_t, bool *);
	handle_t Insert(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, KeyArg_t, ValueArg_t, bool *);
	handle_t Insert(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, KeyArg_t, ValueArg_t, unsigned int, bool *);
	handle_t Insert(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, KeyAlt_t);
	handle_t InsertIfNotFound(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, KeyAlt_t, bool *);
	handle_t Insert(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, KeyAlt_t, ValueArg_t, bool *);
	handle_t Insert(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, KeyAlt_t, ValueArg_t, unsigned int, bool *);
	bool Remove(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, KeyArg_t);
	bool Remove(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, KeyArg_t, unsigned int);
	bool Remove(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, KeyAlt_t);
	bool Remove(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, KeyAlt_t, unsigned int);
	UtlHashHandle_t RemoveAndAdvance(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, UtlHashHandle_t);
	void RemoveByHandle(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, UtlHashHandle_t);
	void RemoveAll(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa);
	void Purge(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa);
	void Reserve(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, int);
	void Compact(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, bool);
	const CUtlStringToken & Key(const CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<, handle_t);
	const Element_t & Element(const CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<, handle_t);
	/* tag__fprintf: const_type tag not supported! */;
	Element_t & Element(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, handle_t);
	const Element_t & operator[](const CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<, handle_t);
	Element_t & operator[](CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, handle_t);
	void ReplaceKey(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, handle_t, KeyArg_t);
	void ReplaceKey(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, handle_t, KeyAlt_t);
	const Element_t & Get(const CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<, KeyArg_t, const Element_t &);
	const Element_t & Get(const CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<, KeyAlt_t, const Element_t &);
	const Element_t * GetPtr(const CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<, KeyArg_t);
	const Element_t * GetPtr(const CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<, KeyAlt_t);
	Element_t * GetPtr(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, KeyArg_t);
	Element_t * GetPtr(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, KeyAlt_t);
	void Swap(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa);
	size_t GetMemoryUsage(const CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<);
	size_t GetReserveCount(const CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<);

private:

	void Init(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa);
	CUtlHashtable(CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHa, const CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<);

	// sizeof = 32
};

// src/public/tier1/utlhashtable.h:127
class CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, empty_t>, int> > {
	enum {
		FLAG_LAST = 0x4000,
	};

	enum {
		MASK_HASH = 0x3fff,
	};

protected:

	int m_nUsed;  // +0x10
	int m_nMinSize;  // +0x14
	bool m_bSizeLocked;  // +0x18

	typedef UtlHashHandle_t handle_t;
	typedef Arg_t KeyArg_t;
	typedef Arg_t ValueArg_t;
	typedef Arg_t KeyAlt_t;
	typedef CUtlHashtableEntry<short unsigned int, empty_t> entry_t;
	typedef ValueReturn_t Element_t;
	void DoRealloc(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, int);
	void BumpEntry(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, unsigned int);
	int DoInsertUnconstructed(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, unsigned int, bool);
	CUtlHashtable(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, int);
	CUtlHashtable(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, int, const DefaultHashFunctor<short unsigned int> &, const DefaultEqualFunctor<short unsigned int> &);
	CUtlHashtable(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, entry_t *, unsigned int, const DefaultHashFunctor<short unsigned int> &, const DefaultEqualFunctor<short unsigned int> &);
	~CUtlHashtable(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, int);
	CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int operator=(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign);
	void SetExternalBuffer(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, uint8 *, unsigned int, bool, bool);
	void SetExternalBuffer(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, entry_t *, unsigned int, bool, bool);
	DefaultHashFunctor<short unsigned int> & GetHashRef(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int);
	DefaultEqualFunctor<short unsigned int> & GetEqualRef(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int);
	const DefaultHashFunctor<short unsigned int> & GetHashRef(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign);
	const DefaultEqualFunctor<short unsigned int> & GetEqualRef(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign);
	bool IsValidHandle(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign, handle_t);
	handle_t InvalidHandle();
	handle_t FirstHandle(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign);
	UtlHashHandle_t NextHandle(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign, handle_t);
	int Count(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign);
	handle_t Find(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign, KeyArg_t);
	handle_t Find(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign, KeyArg_t, unsigned int);
	handle_t Find(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign, KeyAlt_t);
	handle_t Find(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign, KeyAlt_t, unsigned int);
	bool HasElement(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign, KeyArg_t);
	bool HasElement(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign, KeyAlt_t);
	handle_t Insert(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, KeyArg_t);
	handle_t InsertIfNotFound(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, KeyArg_t, bool *);
	handle_t Insert(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, KeyArg_t, ValueArg_t, bool *);
	handle_t Insert(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, KeyArg_t, ValueArg_t, unsigned int, bool *);
	handle_t Insert(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, KeyAlt_t);
	handle_t InsertIfNotFound(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, KeyAlt_t, bool *);
	handle_t Insert(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, KeyAlt_t, ValueArg_t, bool *);
	handle_t Insert(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, KeyAlt_t, ValueArg_t, unsigned int, bool *);
	bool Remove(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, KeyArg_t);
	bool Remove(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, KeyArg_t, unsigned int);
	bool Remove(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, KeyAlt_t);
	bool Remove(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, KeyAlt_t, unsigned int);
	UtlHashHandle_t RemoveAndAdvance(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, UtlHashHandle_t);
	void RemoveByHandle(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, UtlHashHandle_t);
	void RemoveAll(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int);
	void Purge(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int);
	void Reserve(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, int);
	void Compact(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, bool);
	const short unsigned int & Key(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign, handle_t);
	Element_t & Element(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign, handle_t);
	Element_t & Element(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, handle_t);
	Element_t & operator[](const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign, handle_t);
	Element_t & operator[](CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, handle_t);
	void ReplaceKey(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, handle_t, KeyArg_t);
	void ReplaceKey(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, handle_t, KeyAlt_t);
	Element_t & Get(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign, KeyArg_t, Element_t &);
	Element_t & Get(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign, KeyAlt_t, Element_t &);
	Element_t * GetPtr(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign, KeyArg_t);
	Element_t * GetPtr(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign, KeyAlt_t);
	Element_t * GetPtr(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, KeyArg_t);
	Element_t * GetPtr(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, KeyAlt_t);
	void Swap(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int);
	size_t GetMemoryUsage(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign);
	size_t GetReserveCount(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign);

private:

	void Init(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int);
	CUtlHashtable(CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int, const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign);

protected:

	UtlHashHandle_t DoLookup<short unsigned int>(const CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsign, short unsigned int, unsigned int, handle_t *);
	/* tag__fprintf: const_type tag not supported! */;

	// sizeof = 32
};

// src/public/tier1/utlhashtable.h:127
class CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*, IPhysicsJoint*>, int> > {
	enum {
		FLAG_LAST = 0x40000000,
	};

	enum {
		MASK_HASH = 0x3fffffff,
	};

protected:

	int m_nUsed;  // +0x10
	int m_nMinSize;  // +0x14
	bool m_bSizeLocked;  // +0x18

	typedef UtlHashHandle_t handle_t;
	typedef Arg_t KeyArg_t;
	typedef Arg_t ValueArg_t;
	typedef Arg_t KeyAlt_t;
	typedef CUtlHashtableEntry<CSkeletonInstance*, IPhysicsJoint*> entry_t;
	typedef ValueReturn_t Element_t;
	void DoRealloc(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, int);
	void BumpEntry(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, unsigned int);
	int DoInsertUnconstructed(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, unsigned int, bool);
	CUtlHashtable(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, int);
	CUtlHashtable(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, int, const PointerHashFunctor &, const PointerEqualFunctor &);
	CUtlHashtable(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, entry_t *, unsigned int, const PointerHashFunctor &, const PointerEqualFunctor &);
	~CUtlHashtable(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, int);
	CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa operator=(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, const CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<);
	void SetExternalBuffer(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, uint8 *, unsigned int, bool, bool);
	void SetExternalBuffer(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, entry_t *, unsigned int, bool, bool);
	PointerHashFunctor & GetHashRef(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa);
	PointerEqualFunctor & GetEqualRef(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa);
	const PointerHashFunctor & GetHashRef(const CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<);
	const PointerEqualFunctor & GetEqualRef(const CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<);
	bool IsValidHandle(const CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<, handle_t);
	handle_t InvalidHandle();
	handle_t FirstHandle(const CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<);
	UtlHashHandle_t NextHandle(const CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<, handle_t);
	int Count(const CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<);
	handle_t Find(const CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<, KeyArg_t);
	handle_t Find(const CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<, KeyArg_t, unsigned int);
	handle_t Find(const CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<, KeyAlt_t);
	handle_t Find(const CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<, KeyAlt_t, unsigned int);
	bool HasElement(const CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<, KeyArg_t);
	bool HasElement(const CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<, KeyAlt_t);
	handle_t Insert(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, KeyArg_t);
	handle_t InsertIfNotFound(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, KeyArg_t, bool *);
	handle_t Insert(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, KeyArg_t, ValueArg_t, bool *);
	handle_t Insert(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, KeyArg_t, ValueArg_t, unsigned int, bool *);
	handle_t Insert(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, KeyAlt_t);
	handle_t InsertIfNotFound(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, KeyAlt_t, bool *);
	handle_t Insert(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, KeyAlt_t, ValueArg_t, bool *);
	handle_t Insert(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, KeyAlt_t, ValueArg_t, unsigned int, bool *);
	bool Remove(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, KeyArg_t);
	bool Remove(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, KeyArg_t, unsigned int);
	bool Remove(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, KeyAlt_t);
	bool Remove(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, KeyAlt_t, unsigned int);
	UtlHashHandle_t RemoveAndAdvance(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, UtlHashHandle_t);
	void RemoveByHandle(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, UtlHashHandle_t);
	void RemoveAll(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa);
	void Purge(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa);
	void Reserve(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, int);
	void Compact(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, bool);
	CSkeletonInstance * const & Key(const CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<, handle_t);
	const Element_t & Element(const CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<, handle_t);
	/* tag__fprintf: const_type tag not supported! */;
	Element_t & Element(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, handle_t);
	const Element_t & operator[](const CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<, handle_t);
	Element_t & operator[](CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, handle_t);
	void ReplaceKey(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, handle_t, KeyArg_t);
	void ReplaceKey(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, handle_t, KeyAlt_t);
	const Element_t & Get(const CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<, KeyArg_t, const Element_t &);
	const Element_t & Get(const CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<, KeyAlt_t, const Element_t &);
	const Element_t * GetPtr(const CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<, KeyArg_t);
	const Element_t * GetPtr(const CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<, KeyAlt_t);
	Element_t * GetPtr(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, KeyArg_t);
	Element_t * GetPtr(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, KeyAlt_t);
	void Swap(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa);
	size_t GetMemoryUsage(const CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<);
	size_t GetReserveCount(const CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<);

private:

	void Init(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa);
	CUtlHashtable(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, const CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<);

protected:

	UtlHashHandle_t DoLookup<CSkeletonInstance*>(const CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<, CSkeletonInstance *, unsigned int, handle_t *);
	/* tag__fprintf: const_type tag not supported! */;
	int DoRemove<CSkeletonInstance*>(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, CSkeletonInstance *, unsigned int);
	UtlHashHandle_t DoInsert<CSkeletonInstance*>(CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHa, CSkeletonInstance *, Arg_t, unsigned int, bool *);

	// sizeof = 32
};

// src/public/tier1/utlhashtable.h:836
class CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunctor<char const*>, short unsigned int, undefined_t> {
	struct IndirectIndex {
		IndexStorage_t m_index;  // +0x0
		IndirectIndex(IndexStorage_t);

		// sizeof = 2
	};
	typedef type IndexStorage_t;
	/* tag__fprintf: const_type tag not supported! */;

	struct EqualProxy {
		unsigned int operator()(IndirectIndex, IndirectIndex);
		unsigned int operator()(IndirectIndex, KeyArg_t);
		unsigned int operator()(IndirectIndex, KeyAlt_t);

		// sizeof = 1
	};
	/* tag__fprintf: const_type tag not supported! */;
	typedef Arg_t KeyArg_t;
	typedef Arg_t KeyAlt_t;

	struct HashProxy {
		unsigned int operator()(IndirectIndex);
		unsigned int operator()(KeyArg_t);
		unsigned int operator()(KeyAlt_t);

		// sizeof = 1
	};
	/* tag__fprintf: const_type tag not supported! */;

	class CCustomLinkedList : public CUtlLinkedList<CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, short unsigned int>, short unsigned int> > {
	public:

		CCustomLinkedList();
		int AddToTailUnconstructed();
		~CCustomLinkedList();

		// sizeof = 40
	};
	typedef CUtlHashtable<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::HashProxy, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::EqualProxy, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, int> > Hashtable_t;

protected:

	Hashtable_t m_table;  // +0x0
	typedef Arg_t ValueArg_t;
	typedef ValueReturn_t Element_t;
	CUtlStableHashtable(CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunctor<cha);
	DefaultHashFunctor<char const*> & GetHashRef(CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunctor<cha);
	DefaultEqualFunctor<char const*> & GetEqualRef(CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunctor<cha);
	const DefaultHashFunctor<char const*> & GetHashRef(const CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunct);
	const DefaultEqualFunctor<char const*> & GetEqualRef(const CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunct);
	UtlHashHandle_t Insert(CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunctor<cha, KeyArg_t);
	UtlHashHandle_t Insert(CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunctor<cha, KeyAlt_t);
	UtlHashHandle_t Insert(CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunctor<cha, KeyArg_t, ValueArg_t);
	UtlHashHandle_t Insert(CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunctor<cha, KeyAlt_t, ValueArg_t);
	UtlHashHandle_t Find(const CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunct, KeyArg_t);
	UtlHashHandle_t Find(const CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunct, KeyAlt_t);
	bool Remove(CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunctor<cha, KeyArg_t);
	bool Remove(CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunctor<cha, KeyAlt_t);
	void RemoveAll(CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunctor<cha);
	void Purge(CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunctor<cha);
	int Count(const CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunct);
	const char * const & Key(const CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunct, UtlHashHandle_t);
	const Element_t & Element(const CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunct, UtlHashHandle_t);
	/* tag__fprintf: const_type tag not supported! */;
	Element_t & Element(CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunctor<cha, UtlHashHandle_t);
	const Element_t & operator[](const CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunct, UtlHashHandle_t);
	Element_t & operator[](CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunctor<cha, UtlHashHandle_t);
	void ReplaceKey(CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunctor<cha, UtlHashHandle_t, KeyArg_t);
	void ReplaceKey(CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunctor<cha, UtlHashHandle_t, KeyAlt_t);
	const Element_t & Get(const CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunct, KeyArg_t, const Element_t &);
	const Element_t & Get(const CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunct, KeyAlt_t, const Element_t &);
	const Element_t * GetPtr(const CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunct, KeyArg_t);
	const Element_t * GetPtr(const CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunct, KeyAlt_t);
	Element_t * GetPtr(CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunctor<cha, KeyArg_t);
	Element_t * GetPtr(CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunctor<cha, KeyAlt_t);
	UtlHashHandle_t FirstHandle(const CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunct);
	UtlHashHandle_t NextHandle(const CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunct, UtlHashHandle_t);
	bool IsValidHandle(const CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunct, UtlHashHandle_t);
	UtlHashHandle_t InvalidHandle(const CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunct);
	void RemoveByHandle(CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunctor<cha, UtlHashHandle_t);
	UtlHashHandle_t RemoveAndAdvance(CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunctor<cha, UtlHashHandle_t);
	void Compact(CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunctor<cha, bool);
	void Swap(CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunctor<cha, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunctor<cha);
	size_t GetMemoryUsage(const CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunct);
	UtlHashHandle_t ExtendInvalidHandle(uint32);
	UtlHashHandle_t ExtendInvalidHandle(uint16);
	~CUtlStableHashtable(CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunctor<cha, int);
	UtlHashHandle_t DoFind<char const*>(const CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunct, const char *);
	UtlHashHandle_t DoInsert<char const*, CMarkupManager::MarkupGroup_t*>(CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunctor<cha, const char *, MarkupGroup_t *);

	// sizeof = 72
};

// CUtlHashtableEntry: 30 more instantiations (full list in INDEX.tsv)
//   CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>
//   CUtlHashtableEntry<unsigned int, WorldInfo_t*>
//   CUtlHashtableEntry<unsigned int, empty_t>
//   CUtlHashtableEntry<unsigned int, CNavNodesForArea>
//   CUtlHashtableEntry<int, INavObstacle*>
//   CUtlHashtableEntry<short unsigned int, empty_t>
//   CUtlHashtableEntry<int, CNavSearchElement>
//   CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>
//   CUtlHashtableEntry<CUtlStringToken, long long int>
//   CUtlHashtableEntry<CBaseEntity*, int>
//   CUtlHashtableEntry<int, empty_t>
//   CUtlHashtableEntry<short unsigned int, int>
//   CUtlHashtableEntry<int, short unsigned int>
//   CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>
//   CUtlHashtableEntry<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>
//   CUtlHashtableEntry<int, CDOTAPseudoRandom>
//   CUtlHashtableEntry<int, CDOTAHeroSlots>
//   CUtlHashtableEntry<int, CHeroBaseItems>
//   CUtlHashtableEntry<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*>
//   CUtlHashtableEntry<unsigned int, bool>
//   CUtlHashtableEntry<unsigned int, CNavObstacle*>
//   CUtlHashtableEntry<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>
//   CUtlHashtableEntry<const ResourceBindingBase_t*, empty_t>
//   CUtlHashtableEntry<const ResourceBindingBase_t*, empty_t>
//   CUtlHashtableEntry<unsigned int, short unsigned int>
//   CUtlHashtableEntry<unsigned int, GCSDK::WaitAnalysisNode_t*>
//   CUtlHashtableEntry<long long unsigned int, GCSDK::WaitAnalysisNode_t*>
//   CUtlHashtableEntry<ResourceId_t, char const*>
//   CUtlHashtableEntry<const CSchemaClassInfo*, CClassVisitInfo*>
//   CUtlHashtableEntry<const CSchemaClassInfo*, CClassVisitInfo*>

// CUtlHashtable: 36 more instantiations (full list in INDEX.tsv)
//   CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFun
//   CUtlHashtable<unsigned int, WorldInfo_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined
//   CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, C
//   CUtlHashtable<unsigned int, CNavNodesForArea, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undef
//   CUtlHashtable<int, INavObstacle*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtab
//   CUtlHashtable<int, CNavSearchElement, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHas
//   CUtlHashtable<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t, CUtlStableHashta
//   CUtlHashtable<CUtlStringToken, long long int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>,
//   CUtlHashtable<CBaseEntity*, int, DefaultHashFunctor<CBaseEntity*>, DefaultEqualFunctor<CBaseEntity*>, undefined_t, CUtlM
//   CUtlHashtable<CUtlStringToken, float, AutoStyleHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUt
//   CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntr
//   CUtlHashtable<short unsigned int, int, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int>, 
//   CUtlHashtable<int, short unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHa
//   CUtlHashtable<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*, DefaultHashFunctor<CUtlStringToken>, DefaultEq
//   CUtlHashtable<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunc
//   CUtlHashtable<int, CDOTAPseudoRandom, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHas
//   CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashta
//   CUtlHashtable<int, CHeroBaseItems, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashta
//   CUtlHashtable<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*, DefaultHashFunctor<int>, Defau
//   CUtlHashtable<CUtlStringToken, float, AutoStyleHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUt
//   CUtlHashtable<unsigned int, CNavNodesForArea, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undef
//   CUtlHashtable<int, CNavSearchElement, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHas
//   CUtlHashtable<int, INavObstacle*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtab
//   CUtlHashtable<unsigned int, bool, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtl
//   CUtlHashtable<unsigned int, CNavObstacle*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefine
//   CUtlHashtable<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*, DefaultHashFunctor<unsigned int>, DefaultEqualFunct
//   CUtlHashtable<const ResourceBindingBase_t*, empty_t, DefaultHashFunctor<const ResourceBindingBase_t*>, DefaultEqualFunct
//   CUtlHashtable<const ResourceBindingBase_t*, empty_t, DefaultHashFunctor<const ResourceBindingBase_t*>, DefaultEqualFunct
//   CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlH
//   CUtlHashtable<unsigned int, short unsigned int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und
//   CUtlHashtable<unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned i
//   CUtlHashtable<long long unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<long long unsigned int>, DefaultEqu
//   CUtlHashtable<ResourceId_t, char const*, DefaultHashFunctor<ResourceId_t>, DefaultEqualFunctor<ResourceId_t>, undefined_
//   CUtlHashtable<const CSchemaClassInfo*, CClassVisitInfo*, DefaultHashFunctor<const CSchemaClassInfo*>, DefaultEqualFuncto
//   CUtlHashtable<ResourceId_t, char const*, DefaultHashFunctor<ResourceId_t>, DefaultEqualFunctor<ResourceId_t>, undefined_
//   CUtlHashtable<const CSchemaClassInfo*, CClassVisitInfo*, DefaultHashFunctor<const CSchemaClassInfo*>, DefaultEqualFuncto
