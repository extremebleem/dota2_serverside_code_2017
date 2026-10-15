// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlhash.h:27
class CUtlHash<CUtlStringToken, bool (*)(const CUtlStringToken&, const CUtlStringToken&), unsigned int (*)(const CUtlStringToken&)> {
protected:

	typedef bool (*CompareFunc_t)(const CUtlStringToken &, const CUtlStringToken &);

	CompareFunc_t m_CompareFunc;  // +0x18
	typedef unsigned int (*KeyFunc_t)(const CUtlStringToken &);

	KeyFunc_t m_KeyFunc;  // +0x20
	bool m_bPowerOfTwo;  // +0x28

	unsigned int m_ModMask;  // +0x2c
	CUtlHash(CUtlHash<CUtlStringToken, bool (*)(const CUtlStringToken&, const CUtlStringToken&), unsigned int (*)(const CUtlStringToke, int, int, int, CompareFunc_t, KeyFunc_t);
	~CUtlHash(CUtlHash<CUtlStringToken, bool (*)(const CUtlStringToken&, const CUtlStringToken&), unsigned int (*)(const CUtlStringToke, int);
	UtlHashHandle_t InvalidHandle();
	bool IsValidHandle(const CUtlHash<CUtlStringToken, bool (*)(const CUtlStringToken&, const CUtlStringToken&), unsigned int (*)(const CUtlStri, UtlHashHandle_t);
	int Count(const CUtlHash<CUtlStringToken, bool (*)(const CUtlStringToken&, const CUtlStringToken&), unsigned int (*)(const CUtlStri);
	void Purge(CUtlHash<CUtlStringToken, bool (*)(const CUtlStringToken&, const CUtlStringToken&), unsigned int (*)(const CUtlStringToke);
	UtlHashHandle_t Insert(CUtlHash<CUtlStringToken, bool (*)(const CUtlStringToken&, const CUtlStringToken&), unsigned int (*)(const CUtlStringToke, const CUtlStringToken &);
	UtlHashHandle_t Insert(CUtlHash<CUtlStringToken, bool (*)(const CUtlStringToken&, const CUtlStringToken&), unsigned int (*)(const CUtlStringToke, const CUtlStringToken &, bool *);
	UtlHashHandle_t AllocEntryFromKey(CUtlHash<CUtlStringToken, bool (*)(const CUtlStringToken&, const CUtlStringToken&), unsigned int (*)(const CUtlStringToke, const CUtlStringToken &);
	void Remove(CUtlHash<CUtlStringToken, bool (*)(const CUtlStringToken&, const CUtlStringToken&), unsigned int (*)(const CUtlStringToke, UtlHashHandle_t);
	void RemoveAll(CUtlHash<CUtlStringToken, bool (*)(const CUtlStringToken&, const CUtlStringToken&), unsigned int (*)(const CUtlStringToke);
	UtlHashHandle_t Find(const CUtlHash<CUtlStringToken, bool (*)(const CUtlStringToken&, const CUtlStringToken&), unsigned int (*)(const CUtlStri, const CUtlStringToken &);
	CUtlStringToken & Element(CUtlHash<CUtlStringToken, bool (*)(const CUtlStringToken&, const CUtlStringToken&), unsigned int (*)(const CUtlStringToke, UtlHashHandle_t);
	const CUtlStringToken & Element(const CUtlHash<CUtlStringToken, bool (*)(const CUtlStringToken&, const CUtlStringToken&), unsigned int (*)(const CUtlStri, UtlHashHandle_t);
	CUtlStringToken & operator[](CUtlHash<CUtlStringToken, bool (*)(const CUtlStringToken&, const CUtlStringToken&), unsigned int (*)(const CUtlStringToke, UtlHashHandle_t);
	const CUtlStringToken & operator[](const CUtlHash<CUtlStringToken, bool (*)(const CUtlStringToken&, const CUtlStringToken&), unsigned int (*)(const CUtlStri, UtlHashHandle_t);
	UtlHashHandle_t GetFirstHandle(const CUtlHash<CUtlStringToken, bool (*)(const CUtlStringToken&, const CUtlStringToken&), unsigned int (*)(const CUtlStri);
	UtlHashHandle_t GetNextHandle(const CUtlHash<CUtlStringToken, bool (*)(const CUtlStringToken&, const CUtlStringToken&), unsigned int (*)(const CUtlStri, UtlHashHandle_t);
	void Log(CUtlHash<CUtlStringToken, bool (*)(const CUtlStringToken&, const CUtlStringToken&), unsigned int (*)(const CUtlStringToke, const char *);
	void Dump(CUtlHash<CUtlStringToken, bool (*)(const CUtlStringToken&, const CUtlStringToken&), unsigned int (*)(const CUtlStringToke);
	void Swap(CUtlHash<CUtlStringToken, bool (*)(const CUtlStringToken&, const CUtlStringToken&), unsigned int (*)(const CUtlStringToke, CUtlHash<CUtlStringToken, bool (*)(const CUtlStringToken&, const CUtlStringToken&), unsigned int (*)(const CUtlStringToke);
	int GetBucketIndex(const CUtlHash<CUtlStringToken, bool (*)(const CUtlStringToken&, const CUtlStringToken&), unsigned int (*)(const CUtlStri, UtlHashHandle_t);
	int GetKeyDataIndex(const CUtlHash<CUtlStringToken, bool (*)(const CUtlStringToken&, const CUtlStringToken&), unsigned int (*)(const CUtlStri, UtlHashHandle_t);
	UtlHashHandle_t BuildHandle(const CUtlHash<CUtlStringToken, bool (*)(const CUtlStringToken&, const CUtlStringToken&), unsigned int (*)(const CUtlStri, int, int);
	bool DoFind(const CUtlHash<CUtlStringToken, bool (*)(const CUtlStringToken&, const CUtlStringToken&), unsigned int (*)(const CUtlStri, const CUtlStringToken &, unsigned int *, int *);

	// sizeof = 48
};

// src/public/tier1/utlhash.h:27
class CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashFuncs, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashFuncs> {
protected:

	typedef CWrappedInterpolatedVarArrayBaseHashFuncs CompareFunc_t;

	CompareFunc_t m_CompareFunc;  // +0x18

	typedef CWrappedInterpolatedVarArrayBaseHashFuncs KeyFunc_t;

	KeyFunc_t m_KeyFunc;  // +0x19

	bool m_bPowerOfTwo;  // +0x1a

	unsigned int m_ModMask;  // +0x1c
	CUtlHash(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF, int, int, int, CompareFunc_t, KeyFunc_t);
	~CUtlHash(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF, int);
	UtlHashHandle_t InvalidHandle();
	bool IsValidHandle(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas, UtlHashHandle_t);
	int Count(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas);
	void Purge(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF);
	UtlHashHandle_t Insert(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF, const CWrappedIVHashElement_t &);
	UtlHashHandle_t Insert(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF, const CWrappedIVHashElement_t &, bool *);
	UtlHashHandle_t AllocEntryFromKey(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF, const CWrappedIVHashElement_t &);
	void Remove(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF, UtlHashHandle_t);
	void RemoveAll(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF);
	UtlHashHandle_t Find(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas, const CWrappedIVHashElement_t &);
	CWrappedIVHashElement_t & Element(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF, UtlHashHandle_t);
	const CWrappedIVHashElement_t & Element(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas, UtlHashHandle_t);
	CWrappedIVHashElement_t & operator[](CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF, UtlHashHandle_t);
	const CWrappedIVHashElement_t & operator[](const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas, UtlHashHandle_t);
	UtlHashHandle_t GetFirstHandle(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas);
	UtlHashHandle_t GetNextHandle(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas, UtlHashHandle_t);
	void Log(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF, const char *);
	void Dump(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF);
	void Swap(CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF, CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashF);
	int GetBucketIndex(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas, UtlHashHandle_t);
	int GetKeyDataIndex(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas, UtlHashHandle_t);
	UtlHashHandle_t BuildHandle(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas, int, int);
	bool DoFind(const CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBas, const CWrappedIVHashElement_t &, unsigned int *, int *);

	// sizeof = 32
};

// src/public/tier1/utlhash.h:27
class CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const BoneHashPairing_t&)> {
protected:

	typedef bool (*CompareFunc_t)(const BoneHashPairing_t &, const BoneHashPairing_t &);

	CompareFunc_t m_CompareFunc;  // +0x18
	typedef unsigned int (*KeyFunc_t)(const BoneHashPairing_t &);

	KeyFunc_t m_KeyFunc;  // +0x20
	bool m_bPowerOfTwo;  // +0x28

	unsigned int m_ModMask;  // +0x2c
	CUtlHash(CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const BoneHash, int, int, int, CompareFunc_t, KeyFunc_t);
	~CUtlHash(CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const BoneHash, int);
	UtlHashHandle_t InvalidHandle();
	bool IsValidHandle(const CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const Bo, UtlHashHandle_t);
	int Count(const CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const Bo);
	void Purge(CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const BoneHash);
	UtlHashHandle_t Insert(CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const BoneHash, const BoneHashPairing_t &);
	UtlHashHandle_t Insert(CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const BoneHash, const BoneHashPairing_t &, bool *);
	UtlHashHandle_t AllocEntryFromKey(CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const BoneHash, const BoneHashPairing_t &);
	void Remove(CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const BoneHash, UtlHashHandle_t);
	void RemoveAll(CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const BoneHash);
	UtlHashHandle_t Find(const CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const Bo, const BoneHashPairing_t &);
	BoneHashPairing_t & Element(CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const BoneHash, UtlHashHandle_t);
	const BoneHashPairing_t & Element(const CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const Bo, UtlHashHandle_t);
	BoneHashPairing_t & operator[](CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const BoneHash, UtlHashHandle_t);
	const BoneHashPairing_t & operator[](const CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const Bo, UtlHashHandle_t);
	UtlHashHandle_t GetFirstHandle(const CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const Bo);
	UtlHashHandle_t GetNextHandle(const CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const Bo, UtlHashHandle_t);
	void Log(CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const BoneHash, const char *);
	void Dump(CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const BoneHash);
	void Swap(CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const BoneHash, CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const BoneHash);
	int GetBucketIndex(const CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const Bo, UtlHashHandle_t);
	int GetKeyDataIndex(const CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const Bo, UtlHashHandle_t);
	UtlHashHandle_t BuildHandle(const CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const Bo, int, int);
	bool DoFind(const CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const Bo, const BoneHashPairing_t &, unsigned int *, int *);

	// sizeof = 48
};

// src/public/tier1/utlhash.h:1079
class CUtlScalarHash<int, CDefaultHash32> {
	unsigned int m_uiBucketMask;  // +0x0

	struct HashScalarData_t {
		unsigned int m_uiKey;  // +0x0
		int m_Data;  // +0x4

		// sizeof = 8
	};

	int m_maxData;  // +0x10
	int m_dataCount;  // +0x14
	CUtlScalarHash();
	~CUtlScalarHash();
	const UtlHashFastHandle_t InvalidHandle();
	bool Init(int);
	int Count();
	UtlHashFastHandle_t Insert(unsigned int, const int &);
	void FindAndRemove(unsigned int, const int &);
	void Remove(UtlHashFastHandle_t);
	void RemoveAll();
	void Grow();
	UtlHashFastHandle_t Find(unsigned int, const int &);
	UtlHashFastHandle_t FindByUniqueKey(unsigned int);
	int & Element(UtlHashFastHandle_t);
	const int & Element(UtlHashFastHandle_t);
	int & operator[](UtlHashFastHandle_t);
	const int & operator[](UtlHashFastHandle_t);
	unsigned int Key(UtlHashFastHandle_t);
	UtlHashFastHandle_t FirstInorder();
	UtlHashFastHandle_t NextInorder(UtlHashFastHandle_t);
	const uint UnusedElementKey();

	// sizeof = 24
};

// src/public/tier1/utlhash.h:1079
class CUtlScalarHash<EdgeHash_t, CDefaultHash32> {
	unsigned int m_uiBucketMask;  // +0x0

	struct HashScalarData_t {
		unsigned int m_uiKey;  // +0x0

		// sizeof = 20
	};

	int m_maxData;  // +0x10
	int m_dataCount;  // +0x14
	CUtlScalarHash();
	~CUtlScalarHash();
	const UtlHashFastHandle_t InvalidHandle();
	bool Init(int);
	int Count();
	UtlHashFastHandle_t Insert(unsigned int, const EdgeHash_t &);
	void FindAndRemove(unsigned int, const EdgeHash_t &);
	void Remove(UtlHashFastHandle_t);
	void RemoveAll();
	void Grow();
	UtlHashFastHandle_t Find(unsigned int, const EdgeHash_t &);
	UtlHashFastHandle_t FindByUniqueKey(unsigned int);
	EdgeHash_t & Element(UtlHashFastHandle_t);
	const EdgeHash_t & Element(UtlHashFastHandle_t);
	EdgeHash_t & operator[](UtlHashFastHandle_t);
	const EdgeHash_t & operator[](UtlHashFastHandle_t);
	unsigned int Key(UtlHashFastHandle_t);
	UtlHashFastHandle_t FirstInorder();
	UtlHashFastHandle_t NextInorder(UtlHashFastHandle_t);
	const uint UnusedElementKey();

	// sizeof = 24
};

// src/public/tier1/utlhash.h:1079
class CUtlScalarHash<void const*, CDefaultHash32> {
	unsigned int m_uiBucketMask;  // +0x0

	struct HashScalarData_t {
		unsigned int m_uiKey;  // +0x0

		const void * m_Data;  // +0x8

		// sizeof = 16
	};

	int m_maxData;  // +0x10
	int m_dataCount;  // +0x14
	CUtlScalarHash();
	~CUtlScalarHash();
	const UtlHashFastHandle_t InvalidHandle();
	bool Init(int);
	int Count();
	UtlHashFastHandle_t Insert(unsigned int, const void * const &);
	void FindAndRemove(unsigned int, const void * const &);
	void Remove(UtlHashFastHandle_t);
	void RemoveAll();
	void Grow();
	UtlHashFastHandle_t Find(unsigned int, const void * const &);
	UtlHashFastHandle_t FindByUniqueKey(unsigned int);
	const void * & Element(UtlHashFastHandle_t);
	const void * const & Element(UtlHashFastHandle_t);
	const void * & operator[](UtlHashFastHandle_t);
	const void * const & operator[](UtlHashFastHandle_t);
	unsigned int Key(UtlHashFastHandle_t);
	UtlHashFastHandle_t FirstInorder();
	UtlHashFastHandle_t NextInorder(UtlHashFastHandle_t);
	const uint UnusedElementKey();

	// sizeof = 24
};

// CUtlHash: 19 more instantiations (full list in INDEX.tsv)
//   CUtlHash<NameToDecalMaterialParamsMapping_t, bool (*)(const NameToDecalMaterialParamsMapping_t&, const NameToDecalMateri
//   CUtlHash<SkeletonInstanceDecalList_t, bool (*)(const SkeletonInstanceDecalList_t&, const SkeletonInstanceDecalList_t&), 
//   CUtlHash<CGameSaveRestoreInfo::CHashElement, CGameSaveRestoreInfo::CHashFuncs, CGameSaveRestoreInfo::CHashFuncs>
//   CUtlHash<CEntityDataInstantiator<touchlink_t>::HashEntry, bool (*)(const CEntityDataInstantiator<touchlink_t>::HashEntry
//   CUtlHash<CEntityDataInstantiator<groundlink_t>::HashEntry, bool (*)(const CEntityDataInstantiator<groundlink_t>::HashEnt
//   CUtlHash<CEntityDataInstantiator<StepSimulationData>::HashEntry, bool (*)(const CEntityDataInstantiator<StepSimulationDa
//   CUtlHash<CEntityDataInstantiator<ModelScale>::HashEntry, bool (*)(const CEntityDataInstantiator<ModelScale>::HashEntry&,
//   CUtlHash<CEntityDataInstantiator<CWatcherList>::HashEntry, bool (*)(const CEntityDataInstantiator<CWatcherList>::HashEnt
//   CUtlHash<CEntityDataInstantiator<physicspushlist_t>::HashEntry, bool (*)(const CEntityDataInstantiator<physicspushlist_t
//   CUtlHash<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry, bool (*)(const CEntityDataInstantiator<vphysicsupdateai
//   CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivityToSeq
//   CUtlHash<int, CKeyValuesGrowableStringTable::CLookupFunctor&, CKeyValuesGrowableStringTable::CLookupFunctor&>
//   CUtlHash<DefaultMaterialGroupIndex_t, bool (*)(const DefaultMaterialGroupIndex_t&, const DefaultMaterialGroupIndex_t&), 
//   CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict
//   CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare
//   CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CCompare<t
//   CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDi
//   CUtlHash<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlHashDict<const CMorphData*, false, false>::CCompare
//   CUtlHash<CNavNode*, CNodeHashFuncs, CNodeHashFuncs>
