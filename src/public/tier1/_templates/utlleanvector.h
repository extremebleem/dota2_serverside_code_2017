// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlleanvector.h:41
class CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int> {
	union {
		struct {
			IndexType_t m_nCount;  // +0x0
			IndexType_t m_nAllocated;  // +0x2
		};
		struct {
			IndexType_t m_nFixedCount;  // +0x0
			IndexType_t m_nFixedAllocated;  // +0x2
			void (class *);
		};
		struct {
			IndexType_t m_nAllocCount;  // +0x0
			IndexType_t m_nAllocAllocated;  // +0x2

			ElemType_t * m_pElements;  // +0x8
		};
	};
	typedef short int IndexType_t;
	typedef unsigned int ElemType_t;

protected:

	union {
		struct {
			IndexType_t m_nCount;  // +0x0
			IndexType_t m_nAllocated;  // +0x2
		};
		struct {
			IndexType_t m_nFixedCount;  // +0x0
			IndexType_t m_nFixedAllocated;  // +0x2
			void (class *);
		};
		struct {
			IndexType_t m_nAllocCount;  // +0x0
			IndexType_t m_nAllocAllocated;  // +0x2

			ElemType_t * m_pElements;  // +0x8
		};
	};
	CUtlLeanVectorFixedGrowableBase();
	~CUtlLeanVectorFixedGrowableBase();
	ElemType_t * Base();
	const ElemType_t * Base();
	/* tag__fprintf: const_type tag not supported! */;
	void EnsureCapacity(int, bool);
	void RemoveAll();
	void Purge();
	size_t NonfixedAllocSize();
	IndexType_t GetMinAllocElements();

	// sizeof = 40
};

// src/public/tier1/utlleanvector.h:41
class CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int> {
	union {
		struct {
			IndexType_t m_nCount;  // +0x0
			IndexType_t m_nAllocated;  // +0x2
		};
		struct {
			IndexType_t m_nFixedCount;  // +0x0
			IndexType_t m_nFixedAllocated;  // +0x2
			void (class *);
		};
		struct {
			IndexType_t m_nAllocCount;  // +0x0
			IndexType_t m_nAllocAllocated;  // +0x2

			ElemType_t * m_pElements;  // +0x8
		};
	};
	typedef short int IndexType_t;
	typedef Entry_t ElemType_t;

protected:

	union {
		struct {
			IndexType_t m_nCount;  // +0x0
			IndexType_t m_nAllocated;  // +0x2
		};
		struct {
			IndexType_t m_nFixedCount;  // +0x0
			IndexType_t m_nFixedAllocated;  // +0x2
			void (class *);
		};
		struct {
			IndexType_t m_nAllocCount;  // +0x0
			IndexType_t m_nAllocAllocated;  // +0x2

			ElemType_t * m_pElements;  // +0x8
		};
	};
	CUtlLeanVectorFixedGrowableBase();
	~CUtlLeanVectorFixedGrowableBase();
	ElemType_t * Base();
	const ElemType_t * Base();
	/* tag__fprintf: const_type tag not supported! */;
	void EnsureCapacity(int, bool);
	void RemoveAll();
	void Purge();
	size_t NonfixedAllocSize();
	IndexType_t GetMinAllocElements();

	// sizeof = 32
};

// src/public/tier1/utlleanvector.h:41
class CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int> {
	union {
		struct {
			IndexType_t m_nCount;  // +0x0
			IndexType_t m_nAllocated;  // +0x2
		};
		struct {
			IndexType_t m_nFixedCount;  // +0x0
			IndexType_t m_nFixedAllocated;  // +0x2
			void (class *);
		};
		struct {
			IndexType_t m_nAllocCount;  // +0x0
			IndexType_t m_nAllocAllocated;  // +0x2

			ElemType_t * m_pElements;  // +0x8
		};
	};
	typedef short int IndexType_t;
	typedef unsigned int ElemType_t;

protected:

	union {
		struct {
			IndexType_t m_nCount;  // +0x0
			IndexType_t m_nAllocated;  // +0x2
		};
		struct {
			IndexType_t m_nFixedCount;  // +0x0
			IndexType_t m_nFixedAllocated;  // +0x2
			void (class *);
		};
		struct {
			IndexType_t m_nAllocCount;  // +0x0
			IndexType_t m_nAllocAllocated;  // +0x2

			ElemType_t * m_pElements;  // +0x8
		};
	};
	typedef CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int> ClassType_t;
	CUtlLeanVectorFixedGrowableBase();
	~CUtlLeanVectorFixedGrowableBase();
	ElemType_t * Base();
	const ElemType_t * Base();
	/* tag__fprintf: const_type tag not supported! */;
	void EnsureCapacity(int, bool);
	void RemoveAll();
	void Purge();
	size_t NonfixedAllocSize();
	IndexType_t GetMinAllocElements();

	// sizeof = 40
};

// src/public/tier1/utlleanvector.h:274
class CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int> {
	struct {
		IndexType_t m_nCount;  // +0x0
		IndexType_t m_nAllocated;  // +0x2

		ElemType_t * m_pElements;  // +0x8

		// sizeof = 16
	};
	typedef short int IndexType_t;
	typedef KeyValueInfo_t ElemType_t;

protected:

	struct {
		IndexType_t m_nCount;  // +0x0
		IndexType_t m_nAllocated;  // +0x2

		ElemType_t * m_pElements;  // +0x8
	};
	CUtlLeanVectorBase();
	~CUtlLeanVectorBase();
	ElemType_t * Base();
	const ElemType_t * Base();
	/* tag__fprintf: const_type tag not supported! */;
	void EnsureCapacity(int, bool);
	void RemoveAll();
	void Purge();
	size_t NonfixedAllocSize();
	IndexType_t GetMinAllocElements();

	// sizeof = 16
};

// src/public/tier1/utlleanvector.h:274
class CUtlLeanVectorBase<ParserResponse, short int> {
	struct {
		IndexType_t m_nCount;  // +0x0
		IndexType_t m_nAllocated;  // +0x2

		ElemType_t * m_pElements;  // +0x8

		// sizeof = 16
	};
	typedef short int IndexType_t;
	typedef ParserResponse ElemType_t;

protected:

	struct {
		IndexType_t m_nCount;  // +0x0
		IndexType_t m_nAllocated;  // +0x2

		ElemType_t * m_pElements;  // +0x8
	};
	CUtlLeanVectorBase();
	~CUtlLeanVectorBase();
	ElemType_t * Base();
	const ElemType_t * Base();
	/* tag__fprintf: const_type tag not supported! */;
	void EnsureCapacity(int, bool);
	void RemoveAll();
	void Purge();
	size_t NonfixedAllocSize();
	IndexType_t GetMinAllocElements();

	// sizeof = 16
};

// src/public/tier1/utlleanvector.h:274
class CUtlLeanVectorBase<CAnimIKChain, short int> {
	struct {
		IndexType_t m_nCount;  // +0x0
		IndexType_t m_nAllocated;  // +0x2

		ElemType_t * m_pElements;  // +0x8

		// sizeof = 16
	};
	typedef short int IndexType_t;
	typedef CAnimIKChain ElemType_t;

protected:

	struct {
		IndexType_t m_nCount;  // +0x0
		IndexType_t m_nAllocated;  // +0x2

		ElemType_t * m_pElements;  // +0x8
	};
	CUtlLeanVectorBase();
	~CUtlLeanVectorBase();
	ElemType_t * Base();
	const ElemType_t * Base();
	/* tag__fprintf: const_type tag not supported! */;
	void EnsureCapacity(int, bool);
	void RemoveAll();
	void Purge();
	size_t NonfixedAllocSize();
	IndexType_t GetMinAllocElements();

	// sizeof = 16
};

// src/public/tier1/utlleanvector.h:431
class CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int> : public CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int> {
public:

	typedef short int IndexType_t;

protected:

	static const IndexType_t k_nInvalidIndex;
	/* tag__fprintf: const_type tag not supported! */;
	typedef unsigned int ElemType_t;
	typedef unsigned int * iterator;
	typedef const unsigned int * const_iterator;
	CUtlLeanVectorImpl(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int> *);
	iterator begin(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int> *);
	const_iterator begin(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int> *);
	iterator end(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int> *);
	const_iterator end(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int> *);
	IndexType_t Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int> *);
	IndexType_t NumAllocated(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int> *);
	bool IsEmpty(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int> *);
	unsigned int & operator[](CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int> *, int);
	const unsigned int & operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int> *, int);
	unsigned int & Element(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int> *, int);
	const unsigned int & Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int> *, int);
	IndexType_t Find(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int> *, const unsigned int &);
	IndexType_t FindOrAddToTail(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int> *, const unsigned int &);
	bool FindAndRemove(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int> *, const unsigned int &);
	bool HasElement(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int> *, const unsigned int &);
	void SetCount(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int> *, int);
	unsigned int * AddToTailGetPtr(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int> *);
	IndexType_t AddToTail(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int> *, const unsigned int &);
	IndexType_t AddToTail(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int> *);
	IndexType_t AddMultipleToTail(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int> *, int, const ElemType_t *);
	/* tag__fprintf: const_type tag not supported! */;
	void Remove(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int> *, int);
	void FastRemove(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int> *, int);
	void RemoveMultipleFromTail(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int> *, IndexType_t);
	void CopyArray(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int> *, const ElemType_t *, IndexType_t);
	size_t AllocSize(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int> *);
	IndexType_t InvalidIndex();
	IndexType_t MaxIndex();
	CUtlLeanVectorImpl(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int> *, const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int> &);

	// sizeof = 40
};

// src/public/tier1/utlleanvector.h:431
class CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int> : public CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int> {
public:

	typedef short int IndexType_t;

protected:

	static const IndexType_t k_nInvalidIndex;
	/* tag__fprintf: const_type tag not supported! */;
	typedef KeyValueInfo_t ElemType_t;
	typedef KeyValueInfo_t * iterator;
	typedef const KeyValueInfo_t * const_iterator;
	CUtlLeanVectorImpl(CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, sho);
	iterator begin(CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, sho);
	const_iterator begin(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_);
	iterator end(CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, sho);
	const_iterator end(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_);
	IndexType_t Count(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_);
	IndexType_t NumAllocated(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_);
	bool IsEmpty(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_);
	KeyValueInfo_t & operator[](CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, sho, int);
	const KeyValueInfo_t & operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_, int);
	KeyValueInfo_t & Element(CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, sho, int);
	const KeyValueInfo_t & Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_, int);
	IndexType_t Find(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_, const KeyValueInfo_t &);
	IndexType_t FindOrAddToTail(CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, sho, const KeyValueInfo_t &);
	bool FindAndRemove(CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, sho, const KeyValueInfo_t &);
	bool HasElement(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_, const KeyValueInfo_t &);
	void SetCount(CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, sho, int);
	KeyValueInfo_t * AddToTailGetPtr(CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, sho);
	IndexType_t AddToTail(CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, sho, const KeyValueInfo_t &);
	IndexType_t AddToTail(CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, sho);
	IndexType_t AddMultipleToTail(CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, sho, int, const ElemType_t *);
	/* tag__fprintf: const_type tag not supported! */;
	void Remove(CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, sho, int);
	void FastRemove(CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, sho, int);
	void RemoveMultipleFromTail(CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, sho, IndexType_t);
	void CopyArray(CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, sho, const ElemType_t *, IndexType_t);
	size_t AllocSize(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_);
	IndexType_t InvalidIndex();
	IndexType_t MaxIndex();
	CUtlLeanVectorImpl(CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, sho, const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_);

	// sizeof = 16
};

// src/public/tier1/utlleanvector.h:431
class CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>, CSosPackedFieldData::Entry_t, short int> : public CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int> {
public:

	typedef short int IndexType_t;

protected:

	static const IndexType_t k_nInvalidIndex;
	/* tag__fprintf: const_type tag not supported! */;
	typedef Entry_t ElemType_t;
	typedef Entry_t * iterator;
	typedef const Entry_t * const_iterator;
	CUtlLeanVectorImpl(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>, CSosPackedFieldData::Ent);
	iterator begin(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>, CSosPackedFieldData::Ent);
	const_iterator begin(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>, CSosPackedFieldDat);
	iterator end(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>, CSosPackedFieldData::Ent);
	const_iterator end(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>, CSosPackedFieldDat);
	IndexType_t Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>, CSosPackedFieldDat);
	IndexType_t NumAllocated(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>, CSosPackedFieldDat);
	bool IsEmpty(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>, CSosPackedFieldDat);
	Entry_t & operator[](CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>, CSosPackedFieldData::Ent, int);
	const Entry_t & operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>, CSosPackedFieldDat, int);
	Entry_t & Element(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>, CSosPackedFieldData::Ent, int);
	const Entry_t & Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>, CSosPackedFieldDat, int);
	IndexType_t Find(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>, CSosPackedFieldDat, const Entry_t &);
	IndexType_t FindOrAddToTail(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>, CSosPackedFieldData::Ent, const Entry_t &);
	bool FindAndRemove(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>, CSosPackedFieldData::Ent, const Entry_t &);
	bool HasElement(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>, CSosPackedFieldDat, const Entry_t &);
	void SetCount(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>, CSosPackedFieldData::Ent, int);
	Entry_t * AddToTailGetPtr(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>, CSosPackedFieldData::Ent);
	IndexType_t AddToTail(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>, CSosPackedFieldData::Ent, const Entry_t &);
	IndexType_t AddToTail(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>, CSosPackedFieldData::Ent);
	IndexType_t AddMultipleToTail(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>, CSosPackedFieldData::Ent, int, const ElemType_t *);
	/* tag__fprintf: const_type tag not supported! */;
	void Remove(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>, CSosPackedFieldData::Ent, int);
	void FastRemove(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>, CSosPackedFieldData::Ent, int);
	void RemoveMultipleFromTail(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>, CSosPackedFieldData::Ent, IndexType_t);
	void CopyArray(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>, CSosPackedFieldData::Ent, const ElemType_t *, IndexType_t);
	size_t AllocSize(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>, CSosPackedFieldDat);
	IndexType_t InvalidIndex();
	IndexType_t MaxIndex();
	CUtlLeanVectorImpl(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>, CSosPackedFieldData::Ent, const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>, CSosPackedFieldDat);
	~CUtlLeanVectorImpl(CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>, CSosPackedFieldData::Ent, int);

	// sizeof = 32
};

// src/public/tier1/utlleanvector.h:706
class CUtlLeanVectorFixedGrowable<unsigned int, 9u, short int> : public CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int> {
public:

	CUtlLeanVectorFixedGrowable();
	CUtlLeanVectorFixedGrowable<unsigned int, 9u, short int> & operator=(const CUtlLeanVectorFixedGrowable<unsigned int, 9u, short int> &);

protected:

	CUtlLeanVectorFixedGrowable(const CUtlLeanVectorFixedGrowable<unsigned int, 9u, short int> &);

	// sizeof = 40
};

// src/public/tier1/utlleanvector.h:706
class CUtlLeanVectorFixedGrowable<CSosPackedFieldData::Entry_t, 3u, short int> : public CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>, CSosPackedFieldData::Entry_t, short int> {
public:

	CUtlLeanVectorFixedGrowable();
	CUtlLeanVectorFixedGrowable<CSosPackedFieldData::Entry_t, 3u, short int> & operator=(const CUtlLeanVectorFixedGrowable<CSosPackedFieldData::Entry_t, 3u, short int> &);

protected:

	CUtlLeanVectorFixedGrowable(const CUtlLeanVectorFixedGrowable<CSosPackedFieldData::Entry_t, 3u, short int> &);
	~CUtlLeanVectorFixedGrowable();

	// sizeof = 32
};

// src/public/tier1/utlleanvector.h:706
class CUtlLeanVectorFixedGrowable<unsigned int, 3u, short int> : public CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 3u, short int>, unsigned int, short int> {
public:

	CUtlLeanVectorFixedGrowable();
	CUtlLeanVectorFixedGrowable<unsigned int, 3u, short int> & operator=(const CUtlLeanVectorFixedGrowable<unsigned int, 3u, short int> &);

protected:

	CUtlLeanVectorFixedGrowable(const CUtlLeanVectorFixedGrowable<unsigned int, 3u, short int> &);
	~CUtlLeanVectorFixedGrowable();

	// sizeof = 16
};

// src/public/tier1/utlleanvector.h:725
class CUtlLeanVector<CEntityKeyValues::KeyValueInfo_t, short int> : public CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int> {
public:

	CUtlLeanVector();
	CUtlLeanVector<CEntityKeyValues::KeyValueInfo_t, short int> & operator=(const CUtlLeanVector<CEntityKeyValues::KeyValueInfo_t, short int> &);

protected:

	CUtlLeanVector(const CUtlLeanVector<CEntityKeyValues::KeyValueInfo_t, short int> &);

	// sizeof = 16
};

// src/public/tier1/utlleanvector.h:725
class CUtlLeanVector<ParserResponse, short int> : public CUtlLeanVectorImpl<CUtlLeanVectorBase<ParserResponse, short int>, ParserResponse, short int> {
public:

	CUtlLeanVector();
	CUtlLeanVector<ParserResponse, short int> & operator=(const CUtlLeanVector<ParserResponse, short int> &);

protected:

	CUtlLeanVector(const CUtlLeanVector<ParserResponse, short int> &);
	~CUtlLeanVector();

	// sizeof = 16
};

// src/public/tier1/utlleanvector.h:725
class CUtlLeanVector<CAnimIKChain, short int> : public CUtlLeanVectorImpl<CUtlLeanVectorBase<CAnimIKChain, short int>, CAnimIKChain, short int> {
public:

	CUtlLeanVector();
	CUtlLeanVector<CAnimIKChain, short int> & operator=(const CUtlLeanVector<CAnimIKChain, short int> &);

protected:

	CUtlLeanVector(const CUtlLeanVector<CAnimIKChain, short int> &);

	// sizeof = 16
};

// CUtlLeanVectorFixedGrowableBase: 10 more instantiations (full list in INDEX.tsv)
//   CUtlLeanVectorFixedGrowableBase<unsigned int, 3u, short int>
//   CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>
//   CUtlLeanVectorFixedGrowableBase<unsigned int, 3u, short int>
//   CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t, 8u, short int>
//   CUtlLeanVectorFixedGrowableBase<unsigned char, 200u, short int>
//   CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t, 8u, short int>
//   CUtlLeanVectorFixedGrowableBase<short unsigned int, 6u, short int>
//   CUtlLeanVectorFixedGrowableBase<short unsigned int, 6u, short int>
//   CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t, 3u, short int>
//   CUtlLeanVectorFixedGrowableBase<CFieldPath::Path_t, 6u, short int>

// CUtlLeanVectorImpl: 13 more instantiations (full list in INDEX.tsv)
//   CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 3u, short int>, unsigned int, short int>
//   CUtlLeanVectorImpl<CUtlLeanVectorBase<ParserResponse, short int>, ParserResponse, short int>
//   CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 3u, short int>, unsigned int, short int>
//   CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t, 8u, short int>, CAssetModifier
//   CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 200u, short int>, unsigned char, short int>
//   CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t, 8u, short int>, CAssetModifier
//   CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int>
//   CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, sh
//   CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short unsigned int, 6u, short int>, short unsigned int, short int>
//   CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short unsigned int, 6u, short int>, short unsigned int, short int>
//   CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t, 3u, short int>, CFieldPathReconstruct_t, sho
//   CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CFieldPath::Path_t, 6u, short int>, CFieldPath::Path_t, short int>
//   CUtlLeanVectorImpl<CUtlLeanVectorBase<CAnimIKChain, short int>, CAnimIKChain, short int>

// CUtlLeanVectorFixedGrowable: 5 more instantiations (full list in INDEX.tsv)
//   CUtlLeanVectorFixedGrowable<CAssetModifierCriteria::CriteriaVal_t, 8u, short int>
//   CUtlLeanVectorFixedGrowable<unsigned char, 200u, short int>
//   CUtlLeanVectorFixedGrowable<short unsigned int, 6u, short int>
//   CUtlLeanVectorFixedGrowable<CFieldPathReconstruct_t, 3u, short int>
//   CUtlLeanVectorFixedGrowable<CFieldPath::Path_t, 6u, short int>
