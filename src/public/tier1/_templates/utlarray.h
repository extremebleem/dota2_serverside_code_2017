// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlarray.h:33
class CUtlArray<CHandle<CBaseEntity>, 64ul> : public base_array_t {
public:

protected:

	typedef CHandle<CBaseEntity> * iterator;
	typedef const CHandle<CBaseEntity> * const_iterator;
	CUtlArray(CUtlArray<CHandle<CBaseEntity>, 64ul> *);
	CUtlArray(CUtlArray<CHandle<CBaseEntity>, 64ul> *, CHandle<CBaseEntity> *, size_t);
	~CUtlArray(CUtlArray<CHandle<CBaseEntity>, 64ul> *, int);
	CUtlArray<CHandle<CBaseEntity>, 64ul> & operator=(CUtlArray<CHandle<CBaseEntity>, 64ul> *, const CUtlArray<CHandle<CBaseEntity>, 64ul> &);
	CUtlArray(CUtlArray<CHandle<CBaseEntity>, 64ul> *, const CUtlArray<CHandle<CBaseEntity>, 64ul> &);
	CHandle<CBaseEntity> & operator[](CUtlArray<CHandle<CBaseEntity>, 64ul> *, int);
	const CHandle<CBaseEntity> & operator[](const CUtlArray<CHandle<CBaseEntity>, 64ul> *, int);
	CHandle<CBaseEntity> & Element(CUtlArray<CHandle<CBaseEntity>, 64ul> *, int);
	const CHandle<CBaseEntity> & Element(const CUtlArray<CHandle<CBaseEntity>, 64ul> *, int);
	CHandle<CBaseEntity> & Random(CUtlArray<CHandle<CBaseEntity>, 64ul> *);
	const CHandle<CBaseEntity> & Random(const CUtlArray<CHandle<CBaseEntity>, 64ul> *);
	iterator begin(CUtlArray<CHandle<CBaseEntity>, 64ul> *);
	const_iterator begin(const CUtlArray<CHandle<CBaseEntity>, 64ul> *);
	iterator end(CUtlArray<CHandle<CBaseEntity>, 64ul> *);
	const_iterator end(const CUtlArray<CHandle<CBaseEntity>, 64ul> *);
	CHandle<CBaseEntity> * Base(CUtlArray<CHandle<CBaseEntity>, 64ul> *);
	const CHandle<CBaseEntity> * Base(const CUtlArray<CHandle<CBaseEntity>, 64ul> *);
	int Count(const CUtlArray<CHandle<CBaseEntity>, 64ul> *);
	int NumAllocated(const CUtlArray<CHandle<CBaseEntity>, 64ul> *);
	bool IsValidIndex(const CUtlArray<CHandle<CBaseEntity>, 64ul> *, int);
	int InvalidIndex();
	void CopyArray(CUtlArray<CHandle<CBaseEntity>, 64ul> *, const CHandle<CBaseEntity> *, size_t);
	void Swap(CUtlArray<CHandle<CBaseEntity>, 64ul> *, CUtlArray<CHandle<CBaseEntity>, 64ul> &);
	int Find(const CUtlArray<CHandle<CBaseEntity>, 64ul> *, const CHandle<CBaseEntity> &);
	void FillWithValue(CUtlArray<CHandle<CBaseEntity>, 64ul> *, const CHandle<CBaseEntity> &);
	bool HasElement(const CUtlArray<CHandle<CBaseEntity>, 64ul> *, const CHandle<CBaseEntity> &);
	void DeleteElements(CUtlArray<CHandle<CBaseEntity>, 64ul> *);
	void Sort(CUtlArray<CHandle<CBaseEntity>, 64ul> *, int (*)(const CHandle<CBaseEntity> *, const CHandle<CBaseEntity> *));

	// sizeof = 256
};

// src/public/tier1/utlarray.h:33
class CUtlArray<float, 24ul> : public base_array_t {
public:

protected:

	float m_Memory[24];  // +0x0
	typedef float * iterator;
	typedef const float * const_iterator;
	CUtlArray();
	CUtlArray(float *, size_t);
	~CUtlArray();
	CUtlArray<float, 24ul> & operator=(const CUtlArray<float, 24ul> &);
	CUtlArray(const CUtlArray<float, 24ul> &);
	float & operator[](int);
	const float & operator[](int);
	float & Element(int);
	const float & Element(int);
	float & Random();
	const float & Random();
	iterator begin();
	const_iterator begin();
	iterator end();
	const_iterator end();
	float * Base();
	const float * Base();
	int Count();
	int NumAllocated();
	bool IsValidIndex(int);
	int InvalidIndex();
	void CopyArray(const float *, size_t);
	void Swap(CUtlArray<float, 24ul> &);
	int Find(const float &);
	void FillWithValue(const float &);
	bool HasElement(const float &);
	void DeleteElements();
	void Sort(int (*)(const float *, const float *));

	// sizeof = 96
};

// src/public/tier1/utlarray.h:33
class CUtlArray<int, 24ul> : public base_array_t {
public:

protected:

	int m_Memory[24];  // +0x0
	typedef int * iterator;
	typedef const int * const_iterator;
	CUtlArray();
	CUtlArray(int *, size_t);
	~CUtlArray();
	CUtlArray<int, 24ul> & operator=(const CUtlArray<int, 24ul> &);
	CUtlArray(const CUtlArray<int, 24ul> &);
	int & operator[](int);
	const int & operator[](int);
	int & Element(int);
	const int & Element(int);
	int & Random();
	const int & Random();
	iterator begin();
	const_iterator begin();
	iterator end();
	const_iterator end();
	int * Base();
	const int * Base();
	int Count();
	int NumAllocated();
	bool IsValidIndex(int);
	int InvalidIndex();
	void CopyArray(const int *, size_t);
	void Swap(CUtlArray<int, 24ul> &);
	int Find(const int &);
	void FillWithValue(const int &);
	bool HasElement(const int &);
	void DeleteElements();
	void Sort(int (*)(const int *, const int *));

	// sizeof = 96
};

// CUtlArray: 31 more instantiations (full list in INDEX.tsv)
//   CUtlArray<CUtlArray<int, 24ul>, 24ul>
//   CUtlArray<double, 24ul>
//   CUtlArray<CUtlVector<PurchasedItem_t, CUtlMemory<PurchasedItem_t, int> >, 24ul>
//   CUtlArray<bool, 24ul>
//   CUtlArray<bool, 64ul>
//   CUtlArray<int, 64ul>
//   CUtlArray<CUtlVector<float, CUtlMemory<float, int> >, 24ul>
//   CUtlArray<int, 6ul>
//   CUtlArray<CUtlArray<int, 6ul>, 64ul>
//   CUtlArray<DOTALeaverStatus_t, 24ul>
//   CUtlArray<CMsgLeaverState, 24ul>
//   CUtlArray<CUtlVector<DamageShareEvent_t, CUtlMemory<DamageShareEvent_t, int> >, 24ul>
//   CUtlArray<DamageShareEvent_t, 25ul>
//   CUtlArray<CUtlArray<DamageShareEvent_t, 25ul>, 24ul>
//   CUtlArray<PartnerAccountType, 64ul>
//   CUtlArray<CUtlMap<int, int, short unsigned int, bool (*)(int const&, int const&)>, 24ul>
//   CUtlArray<unsigned int, 24ul>
//   CUtlArray<sQueuedNode, 1024ul>
//   CUtlArray<int, 1024ul>
//   CUtlArray<unsigned int, 3ul>
//   CUtlArray<ObstructionGrid_t, 2ul>
//   CUtlArray<CDOTAGamerules::gamestatetransitions_t, 16ul>
//   CUtlArray<long long unsigned int, 64ul>
//   CUtlArray<DotaVoteChoice_t, 16ul>
//   CUtlArray<CDOTA_Bot*, 6ul>
//   CUtlArray<float, 6ul>
//   CUtlArray<DOTA_RUNE_STATUS, 6ul>
//   CUtlArray<float, 14ul>
//   CUtlArray<int, 2ul>
//   CUtlArray<float, 2ul>
//   CUtlArray<int, 3ul>
