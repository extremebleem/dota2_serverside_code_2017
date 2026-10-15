// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlvector.h:53
class CUtlVectorBase<char*, CUtlMemory<char*, int> > : public base_vector_t {
public:

private:

	int m_Size;  // +0x0

	typedef CUtlMemory<char*, int> CAllocator;

protected:

	CAllocator m_Memory;  // +0x8
	typedef char * * iterator;
	typedef char * const * const_iterator;
	CUtlVectorBase(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int, int);
	CUtlVectorBase(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, char * *, int, int, bool);
	~CUtlVectorBase(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int);
	CUtlVectorBase<char*, CUtlMemory<char*, int> > & operator=(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, const CUtlVectorBase<char*, CUtlMemory<char*, int> > &);
	char * & operator[](CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int);
	char * const & operator[](const CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int);
	char * & Element(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int);
	char * const & Element(const CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int);
	char * & Head(CUtlVectorBase<char*, CUtlMemory<char*, int> > *);
	char * const & Head(const CUtlVectorBase<char*, CUtlMemory<char*, int> > *);
	char * & Tail(CUtlVectorBase<char*, CUtlMemory<char*, int> > *);
	char * const & Tail(const CUtlVectorBase<char*, CUtlMemory<char*, int> > *);
	char * & Random(CUtlVectorBase<char*, CUtlMemory<char*, int> > *);
	char * const & Random(const CUtlVectorBase<char*, CUtlMemory<char*, int> > *);
	iterator begin(CUtlVectorBase<char*, CUtlMemory<char*, int> > *);
	const_iterator begin(const CUtlVectorBase<char*, CUtlMemory<char*, int> > *);
	iterator end(CUtlVectorBase<char*, CUtlMemory<char*, int> > *);
	const_iterator end(const CUtlVectorBase<char*, CUtlMemory<char*, int> > *);
	IntegerRangeIterator_t Indices(const CUtlVectorBase<char*, CUtlMemory<char*, int> > *);
	char * * Base(CUtlVectorBase<char*, CUtlMemory<char*, int> > *);
	char * const * Base(const CUtlVectorBase<char*, CUtlMemory<char*, int> > *);
	void SetCount(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int);
	void EnsureCount(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int);
	void EnsureCapacity(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int);
	int Count(const CUtlVectorBase<char*, CUtlMemory<char*, int> > *);
	bool IsEmpty(const CUtlVectorBase<char*, CUtlMemory<char*, int> > *);
	int NumAllocated(const CUtlVectorBase<char*, CUtlMemory<char*, int> > *);
	size_t AllocSize(const CUtlVectorBase<char*, CUtlMemory<char*, int> > *);
	size_t NonfixedAllocSize(const CUtlVectorBase<char*, CUtlMemory<char*, int> > *);
	bool IsValidIndex(const CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int);
	int InvalidIndex();
	int AddToHead(CUtlVectorBase<char*, CUtlMemory<char*, int> > *);
	int AddToTail(CUtlVectorBase<char*, CUtlMemory<char*, int> > *);
	char * * AddToTailGetPtr(CUtlVectorBase<char*, CUtlMemory<char*, int> > *);
	int InsertBefore(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int);
	int InsertAfter(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int);
	int AddToHead(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, char * const &);
	int AddToTail(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, char * const &);
	int InsertBefore(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int, char * const &);
	int InsertAfter(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int, char * const &);
	int AddMultipleToHead(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int);
	int AddMultipleToTail(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int);
	int AddMultipleToTail(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int, char * const *);
	int InsertMultipleBefore(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int, int);
	int InsertMultipleBefore(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int, int, char * const *);
	int InsertMultipleAfter(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int, int);
	void SetSize(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int);
	void SetCountNonDestructively(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int);
	void CopyArray(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, char * const *, int);
	void Swap(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, CUtlVectorBase<char*, CUtlMemory<char*, int> > &);
	int Find(const CUtlVectorBase<char*, CUtlMemory<char*, int> > *, char * const &);
	void FillWithValue(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, char * const &);
	bool HasElement(const CUtlVectorBase<char*, CUtlMemory<char*, int> > *, char * const &);
	void FastRemove(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int);
	void Remove(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int);
	bool FindAndRemove(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, char * const &);
	bool FindAndFastRemove(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, char * const &);
	void RemoveMultiple(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int, int);
	void RemoveMultipleFromHead(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int);
	void RemoveMultipleFromTail(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int);
	void RemoveAll(CUtlVectorBase<char*, CUtlMemory<char*, int> > *);
	void RemoveAllNonDestructive(CUtlVectorBase<char*, CUtlMemory<char*, int> > *);
	void SetMultiple(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int, int, char * const *);
	void ReplaceMultiple(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int, int, char * const *, int);
	void Purge(CUtlVectorBase<char*, CUtlMemory<char*, int> > *);
	void PurgeAndDeleteElements(CUtlVectorBase<char*, CUtlMemory<char*, int> > *);
	void Compact(CUtlVectorBase<char*, CUtlMemory<char*, int> > *);
	void ConvertToGrowableMemory(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int);
	void ConvertToExternalMemory(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, char * *, int, int, bool, uint32);
	void SetGrowSize(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int);
	int SortedFind(const CUtlVectorBase<char*, CUtlMemory<char*, int> > *, char * const &, bool (*)(char * const &, char * const &, void *), void *);
	int SortedFindFirst(const CUtlVectorBase<char*, CUtlMemory<char*, int> > *, char * const &, bool (*)(char * const &, char * const &, void *), void *);
	int SortedFindLessOrEqual(const CUtlVectorBase<char*, CUtlMemory<char*, int> > *, char * const &, bool (*)(char * const &, char * const &, void *), void *);
	int SortedInsert(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, char * const &, bool (*)(char * const &, char * const &, void *), void *);
	void Sort(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int (*)(char * const *, char * const *));
	void Shuffle(CUtlVectorBase<char*, CUtlMemory<char*, int> > *);
	void SwapElements(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int, int);
	void Reverse(CUtlVectorBase<char*, CUtlMemory<char*, int> > *);
	void Sort(CUtlVectorBase<char*, CUtlMemory<char*, int> > *);
	void VerifyAllocation(const CUtlVectorBase<char*, CUtlMemory<char*, int> > *);
	void ShiftElementsRight(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int, int);
	void ShiftElementsLeft(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int, int);

private:

	void GrowVector(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int);
	void GrowMemory(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, int);
	void ResetDbgInfo(CUtlVectorBase<char*, CUtlMemory<char*, int> > *);
	CUtlVectorBase(CUtlVectorBase<char*, CUtlMemory<char*, int> > *, const CUtlVectorBase<char*, CUtlMemory<char*, int> > &);

	// sizeof = 24
};

// src/public/tier1/utlvector.h:53
class CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > : public base_vector_t {
public:

private:

	int m_Size;  // +0x0

	typedef CUtlMemory<CUtlSymbolTable::StringPool_t*, int> CAllocator;

protected:

	CAllocator m_Memory;  // +0x8
	typedef StringPool_t * * iterator;
	typedef StringPool_t * const * const_iterator;
	CUtlVectorBase(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int, int);
	CUtlVectorBase(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, StringPool_t * *, int, int, bool);
	~CUtlVectorBase(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int);
	CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > & operator=(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, const CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > &);
	StringPool_t * & operator[](CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int);
	StringPool_t * const & operator[](const CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int);
	StringPool_t * & Element(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int);
	StringPool_t * const & Element(const CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int);
	StringPool_t * & Head(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *);
	StringPool_t * const & Head(const CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *);
	StringPool_t * & Tail(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *);
	StringPool_t * const & Tail(const CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *);
	StringPool_t * & Random(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *);
	StringPool_t * const & Random(const CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *);
	iterator begin(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *);
	const_iterator begin(const CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *);
	iterator end(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *);
	const_iterator end(const CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *);
	IntegerRangeIterator_t Indices(const CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *);
	StringPool_t * * Base(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *);
	StringPool_t * const * Base(const CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *);
	void SetCount(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int);
	void EnsureCount(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int);
	void EnsureCapacity(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int);
	int Count(const CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *);
	bool IsEmpty(const CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *);
	int NumAllocated(const CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *);
	size_t AllocSize(const CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *);
	size_t NonfixedAllocSize(const CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *);
	bool IsValidIndex(const CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int);
	int InvalidIndex();
	int AddToHead(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *);
	int AddToTail(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *);
	StringPool_t * * AddToTailGetPtr(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *);
	int InsertBefore(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int);
	int InsertAfter(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int);
	int AddToHead(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, StringPool_t * const &);
	int AddToTail(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, StringPool_t * const &);
	int InsertBefore(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int, StringPool_t * const &);
	int InsertAfter(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int, StringPool_t * const &);
	int AddMultipleToHead(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int);
	int AddMultipleToTail(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int);
	int AddMultipleToTail(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int, StringPool_t * const *);
	int InsertMultipleBefore(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int, int);
	int InsertMultipleBefore(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int, int, StringPool_t * const *);
	int InsertMultipleAfter(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int, int);
	void SetSize(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int);
	void SetCountNonDestructively(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int);
	void CopyArray(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, StringPool_t * const *, int);
	void Swap(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > &);
	int Find(const CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, StringPool_t * const &);
	void FillWithValue(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, StringPool_t * const &);
	bool HasElement(const CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, StringPool_t * const &);
	void FastRemove(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int);
	void Remove(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int);
	bool FindAndRemove(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, StringPool_t * const &);
	bool FindAndFastRemove(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, StringPool_t * const &);
	void RemoveMultiple(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int, int);
	void RemoveMultipleFromHead(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int);
	void RemoveMultipleFromTail(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int);
	void RemoveAll(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *);
	void RemoveAllNonDestructive(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *);
	void SetMultiple(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int, int, StringPool_t * const *);
	void ReplaceMultiple(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int, int, StringPool_t * const *, int);
	void Purge(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *);
	void PurgeAndDeleteElements(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *);
	void Compact(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *);
	void ConvertToGrowableMemory(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int);
	void ConvertToExternalMemory(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, StringPool_t * *, int, int, bool, uint32);
	void SetGrowSize(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int);
	int SortedFind(const CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, StringPool_t * const &, bool (*)(StringPool_t * const &, StringPool_t * const &, void *), void *);
	int SortedFindFirst(const CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, StringPool_t * const &, bool (*)(StringPool_t * const &, StringPool_t * const &, void *), void *);
	int SortedFindLessOrEqual(const CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, StringPool_t * const &, bool (*)(StringPool_t * const &, StringPool_t * const &, void *), void *);
	int SortedInsert(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, StringPool_t * const &, bool (*)(StringPool_t * const &, StringPool_t * const &, void *), void *);
	void Sort(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int (*)(StringPool_t * const *, StringPool_t * const *));
	void Shuffle(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *);
	void SwapElements(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int, int);
	void Reverse(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *);
	void Sort(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *);
	void VerifyAllocation(const CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *);
	void ShiftElementsRight(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int, int);
	void ShiftElementsLeft(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int, int);

private:

	void GrowVector(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int);
	void GrowMemory(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int);
	void ResetDbgInfo(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *);
	CUtlVectorBase(CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, const CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > &);

	// sizeof = 24
};

// src/public/tier1/utlvector.h:53
class CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > : public base_vector_t {
public:

private:

	int m_Size;  // +0x0

	typedef CUtlMemory<CUtlString, int> CAllocator;

protected:

	CAllocator m_Memory;  // +0x8
	typedef CUtlString * iterator;
	typedef const CUtlString * const_iterator;
	CUtlVectorBase(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int, int);
	CUtlVectorBase(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, CUtlString *, int, int, bool);
	~CUtlVectorBase(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int);
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > & operator=(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > &);
	CUtlString & operator[](CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int);
	const CUtlString & operator[](const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int);
	CUtlString & Element(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int);
	const CUtlString & Element(const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int);
	CUtlString & Head(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *);
	const CUtlString & Head(const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *);
	CUtlString & Tail(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *);
	const CUtlString & Tail(const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *);
	CUtlString & Random(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *);
	const CUtlString & Random(const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *);
	iterator begin(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *);
	const_iterator begin(const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *);
	iterator end(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *);
	const_iterator end(const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *);
	IntegerRangeIterator_t Indices(const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *);
	CUtlString * Base(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *);
	const CUtlString * Base(const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *);
	void SetCount(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int);
	void EnsureCount(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int);
	void EnsureCapacity(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int);
	int Count(const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *);
	bool IsEmpty(const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *);
	int NumAllocated(const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *);
	size_t AllocSize(const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *);
	size_t NonfixedAllocSize(const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *);
	bool IsValidIndex(const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int);
	int InvalidIndex();
	int AddToHead(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *);
	int AddToTail(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *);
	CUtlString * AddToTailGetPtr(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *);
	int InsertBefore(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int);
	int InsertAfter(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int);
	int AddToHead(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, const CUtlString &);
	int AddToTail(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, const CUtlString &);
	int InsertBefore(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int, const CUtlString &);
	int InsertAfter(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int, const CUtlString &);
	int AddMultipleToHead(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int);
	int AddMultipleToTail(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int);
	int AddMultipleToTail(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int, const CUtlString *);
	int InsertMultipleBefore(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int, int);
	int InsertMultipleBefore(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int, int, const CUtlString *);
	int InsertMultipleAfter(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int, int);
	void SetSize(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int);
	void SetCountNonDestructively(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int);
	void CopyArray(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, const CUtlString *, int);
	void Swap(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > &);
	int Find(const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, const CUtlString &);
	void FillWithValue(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, const CUtlString &);
	bool HasElement(const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, const CUtlString &);
	void FastRemove(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int);
	void Remove(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int);
	bool FindAndRemove(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, const CUtlString &);
	bool FindAndFastRemove(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, const CUtlString &);
	void RemoveMultiple(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int, int);
	void RemoveMultipleFromHead(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int);
	void RemoveMultipleFromTail(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int);
	void RemoveAll(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *);
	void RemoveAllNonDestructive(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *);
	void SetMultiple(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int, int, const CUtlString *);
	void ReplaceMultiple(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int, int, const CUtlString *, int);
	void Purge(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *);
	void PurgeAndDeleteElements(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *);
	void Compact(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *);
	void ConvertToGrowableMemory(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int);
	void ConvertToExternalMemory(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, CUtlString *, int, int, bool, uint32);
	void SetGrowSize(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int);
	int SortedFind(const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, const CUtlString &, bool (*)(const CUtlString &, const CUtlString &, void *), void *);
	int SortedFindFirst(const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, const CUtlString &, bool (*)(const CUtlString &, const CUtlString &, void *), void *);
	int SortedFindLessOrEqual(const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, const CUtlString &, bool (*)(const CUtlString &, const CUtlString &, void *), void *);
	int SortedInsert(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, const CUtlString &, bool (*)(const CUtlString &, const CUtlString &, void *), void *);
	void Sort(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int (*)(const CUtlString *, const CUtlString *));
	void Shuffle(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *);
	void SwapElements(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int, int);
	void Reverse(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *);
	void Sort(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *);
	void VerifyAllocation(const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *);
	void ShiftElementsRight(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int, int);
	void ShiftElementsLeft(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int, int);

private:

	void GrowVector(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int);
	void GrowMemory(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, int);
	void ResetDbgInfo(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *);
	CUtlVectorBase(CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > *, const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > &);

	// sizeof = 24
};

// src/public/tier1/utlvector.h:394
class CUtlVector<char*, CUtlMemory<char*, int> > : public CUtlVectorBase<char*, CUtlMemory<char*, int> > {
public:

	CUtlVector(CUtlVector<char*, CUtlMemory<char*, int> > *, int, int);
	CUtlVector(CUtlVector<char*, CUtlMemory<char*, int> > *, char * *, int, int, bool);
	CUtlVector(CUtlVector<char*, CUtlMemory<char*, int> > *, initializer_list<char*>);
	CUtlVector(CUtlVector<char*, CUtlMemory<char*, int> > *, CUtlVector<char*, CUtlMemory<char*, int> > &);
	CUtlVector(CUtlVector<char*, CUtlMemory<char*, int> > *, const CUtlVector<char*, CUtlMemory<char*, int> > &);
	void operator=(CUtlVector<char*, CUtlMemory<char*, int> > *, CUtlVector<char*, CUtlMemory<char*, int> > &);
	void operator=(CUtlVector<char*, CUtlMemory<char*, int> > *, const CUtlVector<char*, CUtlMemory<char*, int> > &);
	~CUtlVector(CUtlVector<char*, CUtlMemory<char*, int> > *, int);

	// sizeof = 24
};

// src/public/tier1/utlvector.h:394
class CUtlVector<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > : public CUtlVectorBase<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > {
public:

	CUtlVector(CUtlVector<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, int, int);
	CUtlVector(CUtlVector<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, StringPool_t * *, int, int, bool);
	CUtlVector(CUtlVector<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, initializer_list<CUtlSymbolTable::StringPool_t*>);
	CUtlVector(CUtlVector<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, CUtlVector<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > &);
	CUtlVector(CUtlVector<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, const CUtlVector<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > &);
	void operator=(CUtlVector<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, CUtlVector<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > &);
	void operator=(CUtlVector<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > *, const CUtlVector<CUtlSymbolTable::StringPool_t*, CUtlMemory<CUtlSymbolTable::StringPool_t*, int> > &);

	// sizeof = 24
};

// src/public/tier1/utlvector.h:394
class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > : public CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> > {
public:

	CUtlVector(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, int, int);
	CUtlVector(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, CUtlString *, int, int, bool);
	CUtlVector(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, initializer_list<CUtlString>);
	CUtlVector(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	CUtlVector(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	void operator=(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	void operator=(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);

	// sizeof = 24
};

// src/public/tier1/utlvector.h:439
class CUtlBlockVector<CacheOptimizedTriangle_t, int> : public CUtlVectorBase<CacheOptimizedTriangle_t, CUtlBlockMemory<CacheOptimizedTriangle_t, int> > {
public:

	class iterator {
		// sizeof = 0
	};

	class const_iterator {
		// sizeof = 0
	};
	CUtlBlockVector(int, int);
	iterator begin();
	iterator end();
	const_iterator cbegin();
	const_iterator cend();

	// sizeof = 24
};

// src/public/tier1/utlvector.h:439
class CUtlBlockVector<float const*, int> : public CUtlVectorBase<float const*, CUtlBlockMemory<float const*, int> > {
public:

	class iterator {
		// sizeof = 0
	};

	class const_iterator {
		// sizeof = 0
	};
	CUtlBlockVector(int, int);
	iterator begin();
	iterator end();
	const_iterator cbegin();
	const_iterator cend();
	~CUtlBlockVector();

	// sizeof = 24
};

// src/public/tier1/utlvector.h:518
class CUtlVectorMT<CUtlVector<CUtlSignaller_Base*, CUtlMemory<CUtlSignaller_Base*, int> >, CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1u> > : public CUtlVector<CUtlSignaller_Base*, CUtlMemory<CUtlSignaller_Base*, int> >, public CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1u> {
public:

	CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1u> Mutex_t;  // +0x28
	CUtlVectorMT(CUtlVectorMT<CUtlVector<CUtlSignaller_Base*, CUtlMemory<CUtlSignaller_Base*, int> >, CCopyableLock<CThreadFastMutex, (Cop, int, int);
	CUtlVectorMT(CUtlVectorMT<CUtlVector<CUtlSignaller_Base*, CUtlMemory<CUtlSignaller_Base*, int> >, CCopyableLock<CThreadFastMutex, (Cop, ElemType_t *, int, int);
	~CUtlVectorMT(CUtlVectorMT<CUtlVector<CUtlSignaller_Base*, CUtlMemory<CUtlSignaller_Base*, int> >, CCopyableLock<CThreadFastMutex, (Cop, int);

	// sizeof = 56
};

// src/public/tier1/utlvector.h:518
class CUtlVectorMT<CUtlVector<CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int> >::ConnectedSlot_t, CUtlMemory<CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int> >::ConnectedSlot_t, int> >, CThreadFastMutex> : public CUtlVector<CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int> >::ConnectedSlot_t, CUtlMemory<CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int> >::ConnectedSlot_t, int> >, public CThreadFastMutex {
public:

	CUtlVectorMT(CUtlVectorMT<CUtlVector<CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int> >::ConnectedSlot_t, CUtlM, int, int);
	CUtlVectorMT(CUtlVectorMT<CUtlVector<CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int> >::ConnectedSlot_t, CUtlM, ElemType_t *, int, int);
	~CUtlVectorMT(CUtlVectorMT<CUtlVector<CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int> >::ConnectedSlot_t, CUtlM, int);

	// sizeof = 56
};

// src/public/tier1/utlvector.h:518
class CUtlVectorMT<CUtlVector<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> >*, CUtlMemory<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> >*, int> >, CThreadFastMutex> : public CUtlVector<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> >*, CUtlMemory<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> >*, int> >, public CThreadFastMutex {
public:

	CUtlVectorMT(CUtlVectorMT<CUtlVector<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> >*, CUtlMe, int, int);
	CUtlVectorMT(CUtlVectorMT<CUtlVector<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> >*, CUtlMe, ElemType_t *, int, int);
	~CUtlVectorMT(CUtlVectorMT<CUtlVector<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> >*, CUtlMe, int);

	// sizeof = 56
};

// src/public/tier1/utlvector.h:535
class CUtlVectorFixed<CFieldPathHuffmanEncoder::HuffCode, 40ul> : public CUtlVectorBase<CFieldPathHuffmanEncoder::HuffCode, CUtlMemoryFixed<CFieldPathHuffmanEncoder::HuffCode, 40ul> > {
public:

	CUtlVectorFixed(int, int);
	CUtlVectorFixed(HuffCode *, int, int);
	~CUtlVectorFixed();

	// sizeof = 1608
};

// src/public/tier1/utlvector.h:535
class CUtlVectorFixed<CRenderBufferBinding, 4ul> : public CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4ul> > {
public:

	CUtlVectorFixed(int, int);
	CUtlVectorFixed(CRenderBufferBinding *, int, int);

	// sizeof = 72
};

// src/public/tier1/utlvector.h:535
class CUtlVectorFixed<ConstantBufferHandle_t__*, 4ul> : public CUtlVectorBase<ConstantBufferHandle_t__*, CUtlMemoryFixed<ConstantBufferHandle_t__*, 4ul> > {
public:

	CUtlVectorFixed(int, int);
	CUtlVectorFixed(ConstantBufferHandle_t__ * *, int, int);
	~CUtlVectorFixed();

	// sizeof = 40
};

// src/public/tier1/utlvector.h:551
class CUtlVectorFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t, 8ul> : public CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t, 8ul, int> > {
public:

	CUtlVectorFixedGrowable(int);

	// sizeof = 152
};

// src/public/tier1/utlvector.h:551
class CUtlVectorFixedGrowable<const CSchemaClassInfo*, 32ul> : public CUtlVectorBase<const CSchemaClassInfo*, CUtlMemoryFixedGrowable<const CSchemaClassInfo*, 32ul, int> > {
public:

	CUtlVectorFixedGrowable(int);

	// sizeof = 280
};

// src/public/tier1/utlvector.h:551
class CUtlVectorFixedGrowable<CSceneObjectData, 1ul> : public CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1ul, int> > {
public:

	CUtlVectorFixedGrowable(int);

	// sizeof = 96
};

// src/public/tier1/utlvector.h:562
class CUtlVectorFixedGrowableCompat<Vector, 6ul> : public CUtlVector<Vector, CUtlMemory<Vector, int> > {
public:

	CUtlVectorFixedGrowableCompat(int);
	~CUtlVectorFixedGrowableCompat();

	// sizeof = 96
};

// src/public/tier1/utlvector.h:562
class CUtlVectorFixedGrowableCompat<CDOTA_Tree*, 10ul> : public CUtlVector<CDOTA_Tree*, CUtlMemory<CDOTA_Tree*, int> > {
public:

	CUtlVectorFixedGrowableCompat(int);
	~CUtlVectorFixedGrowableCompat();

	// sizeof = 104
};

// src/public/tier1/utlvector.h:562
class CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>, 64ul> : public CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> > {
public:

	CUtlVectorFixedGrowableCompat(CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>, 64ul> *, int);
	~CUtlVectorFixedGrowableCompat(CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>, 64ul> *, int);

	// sizeof = 280
};

// src/public/tier1/utlvector.h:582
class CUtlVectorConservative<const VPhysXBodyPart_t*> : public CUtlVectorBase<const VPhysXBodyPart_t*, CUtlMemoryConservative<const VPhysXBodyPart_t*> > {
public:

	CUtlVectorConservative(int, int);
	CUtlVectorConservative(const VPhysXBodyPart_t * *, int, int);

	// sizeof = 24
};

// src/public/tier1/utlvector.h:582
class CUtlVectorConservative<CGameSceneNode*> : public CUtlVectorBase<CGameSceneNode*, CUtlMemoryConservative<CGameSceneNode*> > {
public:

	CUtlVectorConservative(int, int);
	CUtlVectorConservative(CGameSceneNode * *, int, int);
	~CUtlVectorConservative();

	// sizeof = 24
};

// src/public/tier1/utlvector.h:582
class CUtlVectorConservative<rr2::CriterionStatic> : public CUtlVectorBase<rr2::CriterionStatic, CUtlMemoryConservative<rr2::CriterionStatic> > {
public:

	CUtlVectorConservative(int, int);
	CUtlVectorConservative(CriterionStatic *, int, int);

	// sizeof = 24
};

// src/public/tier1/utlvector.h:634
class CUtlVectorUltraConservative<HSCRIPT__**, CUtlVectorUltraConservativeAllocator> : CUtlVectorUltraConservativeAllocator {
	struct Data_t {
		int m_Size;  // +0x0

		// sizeof = 8
	};

private:

	CUtlVectorUltraConservative();
	~CUtlVectorUltraConservative();
	CUtlVectorUltraConservative<HSCRIPT__**, CUtlVectorUltraConservativeAllocator> & operator=(const CUtlVectorUltraConservative<HSCRIPT__**, CUtlVectorUltraConservativeAllocator> &);
	int Count();
	HSCRIPT__ * * * Base();
	HSCRIPT__ * * const * Base();
	int InvalidIndex();
	bool IsValidIndex(int);
	HSCRIPT__ * * & operator[](int);
	HSCRIPT__ * * const & operator[](int);
	HSCRIPT__ * * & Element(int);
	HSCRIPT__ * * const & Element(int);
	IntegerRangeIterator_t Indices();
	void EnsureCapacity(int);
	void EnsureCount(int);
	int AddToTail();
	int AddToTail(HSCRIPT__ * * const &);
	HSCRIPT__ * * * AddToTailGetPtr();
	void RemoveAll();
	void Purge();
	void PurgeAndDeleteElements();
	void FastRemove(int);
	void Remove(int);
	int Find(HSCRIPT__ * * const &);
	bool FindAndRemove(HSCRIPT__ * * const &);
	bool FindAndFastRemove(HSCRIPT__ * * const &);
	CUtlVectorUltraConservative(const CUtlVectorUltraConservative<HSCRIPT__**, CUtlVectorUltraConservativeAllocator> &);
	void ShiftElementsLeft(int, int);

	// sizeof = 8
};

// src/public/tier1/utlvector.h:634
class CUtlVectorUltraConservative<CEntityIOOutput, CUtlVectorUltraConservativeAllocator> : CUtlVectorUltraConservativeAllocator {
	struct Data_t {
		// sizeof = 0
	};

private:

	CUtlVectorUltraConservative();
	~CUtlVectorUltraConservative();
	CUtlVectorUltraConservative<CEntityIOOutput, CUtlVectorUltraConservativeAllocator> & operator=(const CUtlVectorUltraConservative<CEntityIOOutput, CUtlVectorUltraConservativeAllocator> &);
	int Count();
	CEntityIOOutput * Base();
	const CEntityIOOutput * Base();
	int InvalidIndex();
	bool IsValidIndex(int);
	CEntityIOOutput & operator[](int);
	const CEntityIOOutput & operator[](int);
	CEntityIOOutput & Element(int);
	const CEntityIOOutput & Element(int);
	IntegerRangeIterator_t Indices();
	void EnsureCapacity(int);
	void EnsureCount(int);
	int AddToTail();
	int AddToTail(const CEntityIOOutput &);
	CEntityIOOutput * AddToTailGetPtr();
	void RemoveAll();
	void Purge();
	void PurgeAndDeleteElements();
	void FastRemove(int);
	void Remove(int);
	int Find(const CEntityIOOutput &);
	bool FindAndRemove(const CEntityIOOutput &);
	bool FindAndFastRemove(const CEntityIOOutput &);
	CUtlVectorUltraConservative(const CUtlVectorUltraConservative<CEntityIOOutput, CUtlVectorUltraConservativeAllocator> &);
	void ShiftElementsLeft(int, int);

	// sizeof = 8
};

// src/public/tier1/utlvector.h:634
class CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator> : CUtlVectorUltraConservativeAllocator {
	struct Data_t {
		int m_Size;  // +0x0

		const char * m_Elements[];  // +0x8

		// sizeof = 8
	};

private:

	CUtlVectorUltraConservative();
	~CUtlVectorUltraConservative();
	CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator> & operator=(const CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator> &);
	int Count();
	const char * * Base();
	const char * const * Base();
	int InvalidIndex();
	bool IsValidIndex(int);
	const char * & operator[](int);
	const char * const & operator[](int);
	const char * & Element(int);
	const char * const & Element(int);
	IntegerRangeIterator_t Indices();
	void EnsureCapacity(int);
	void EnsureCount(int);
	int AddToTail();
	int AddToTail(const char * const &);
	const char * * AddToTailGetPtr();
	void RemoveAll();
	void Purge();
	void PurgeAndDeleteElements();
	void FastRemove(int);
	void Remove(int);
	int Find(const char * const &);
	bool FindAndRemove(const char * const &);
	bool FindAndFastRemove(const char * const &);
	CUtlVectorUltraConservative(const CUtlVectorUltraConservative<char const*, CUtlVectorUltraConservativeAllocator> &);
	void ShiftElementsLeft(int, int);

	// sizeof = 8
};

// src/public/tier1/utlvector.h:942
class CCopyableUtlVector<VsInputSignatureElement_t> : public CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> > {
public:

	CCopyableUtlVector(int, int);
	CCopyableUtlVector(VsInputSignatureElement_t *, int, int, bool);
	CCopyableUtlVector(const CCopyableUtlVector<VsInputSignatureElement_t> &);

	// sizeof = 24
};

// src/public/tier1/utlvector.h:942
class CCopyableUtlVector<attachedparticlecontrolpoint_t> : public CUtlVector<attachedparticlecontrolpoint_t, CUtlMemory<attachedparticlecontrolpoint_t, int> > {
public:

	CCopyableUtlVector(int, int);
	CCopyableUtlVector(attachedparticlecontrolpoint_t *, int, int, bool);
	CCopyableUtlVector(const CCopyableUtlVector<attachedparticlecontrolpoint_t> &);
	~CCopyableUtlVector();

	// sizeof = 24
};

// src/public/tier1/utlvector.h:942
class CCopyableUtlVector<lootlist_attrib_t*> : public CUtlVector<lootlist_attrib_t*, CUtlMemory<lootlist_attrib_t*, int> > {
public:

	CCopyableUtlVector(int, int);
	CCopyableUtlVector(lootlist_attrib_t * *, int, int, bool);
	CCopyableUtlVector(const CCopyableUtlVector<lootlist_attrib_t*> &);

	// sizeof = 24
};

// src/public/tier1/utlvector.h:2244
class CUtlVectorAutoPurge<InstancedRayTracingEnvironmentReference_t*> : public CUtlVector<InstancedRayTracingEnvironmentReference_t*, CUtlMemory<InstancedRayTracingEnvironmentReference_t*, int> > {
public:

	CUtlVectorAutoPurge();
	~CUtlVectorAutoPurge();

	// sizeof = 24
};

// src/public/tier1/utlvector.h:2244
class CUtlVectorAutoPurge<GCSDK::WaitAnalysisNode_t*> : public CUtlVector<GCSDK::WaitAnalysisNode_t*, CUtlMemory<GCSDK::WaitAnalysisNode_t*, int> > {
public:

	CUtlVectorAutoPurge();
	~CUtlVectorAutoPurge();

	// sizeof = 24
};

// src/public/tier1/utlvector.h:2257
class CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > : public CUtlVector<char*, CUtlMemory<char*, int> > {
public:

	CUtlStringList_Base(CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > *);
	~CUtlStringList_Base(CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > *, int);
	void PurgeAndDeleteElements(CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > *);
	void SplitString(CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > *, const char *, const char *);
	void SplitString2(CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > *, const char *, const char * *, int);
	int CopyAndAddToTail(CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > *, const char *);
	void RemoveAndDelete(CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > *, int);
	int SortFunc(char * const *, char * const *);

	// sizeof = 24
};

// src/public/tier1/utlvector.h:2257
class CUtlStringList_Base<CUtlVectorFixedGrowable<char*, 8ul> > : public CUtlVectorFixedGrowable<char*, 8ul> {
public:

	CUtlStringList_Base(CUtlStringList_Base<CUtlVectorFixedGrowable<char*, 8ul> > *);
	~CUtlStringList_Base(CUtlStringList_Base<CUtlVectorFixedGrowable<char*, 8ul> > *, int);
	void PurgeAndDeleteElements(CUtlStringList_Base<CUtlVectorFixedGrowable<char*, 8ul> > *);
	void SplitString(CUtlStringList_Base<CUtlVectorFixedGrowable<char*, 8ul> > *, const char *, const char *);
	void SplitString2(CUtlStringList_Base<CUtlVectorFixedGrowable<char*, 8ul> > *, const char *, const char * *, int);
	int CopyAndAddToTail(CUtlStringList_Base<CUtlVectorFixedGrowable<char*, 8ul> > *, const char *);
	void RemoveAndDelete(CUtlStringList_Base<CUtlVectorFixedGrowable<char*, 8ul> > *, int);
	int SortFunc(char * const *, char * const *);

	// sizeof = 88
};

// src/public/tier1/utlvector.h:2329
class CUtlStringListFixedGrowable<8ul> : public CUtlStringList_Base<CUtlVectorFixedGrowable<char*, 8ul> > {
public:

	CUtlStringListFixedGrowable();
	CUtlStringListFixedGrowable(const char *, const char *);
	CUtlStringListFixedGrowable(const char *, const char * *, int);
	CUtlStringList & ToCUtlStringList();
	const CUtlStringList & ToCUtlStringList();
	CUtlStringList & operator CUtlStringList&();
	const CUtlStringList & operator const CUtlStringList&();
	~CUtlStringListFixedGrowable();

	// sizeof = 88
};

// src/public/tier1/utlvector.h:2375
class CSchemaTypeOf<CUtlVector<CUtlSymbolLarge, CNetworkUtlVector_MemoryType<CUtlSymbolLarge, -1> > > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/public/tier1/utlvector.h:2375
class CSchemaTypeOf<CUtlVector<CHandle<CLightEntity>, CUtlMemory<CHandle<CLightEntity>, int> > > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/public/tier1/utlvector.h:2375
class CSchemaTypeOf<CUtlVector<CHandle<CInfoLadderDismount>, CUtlMemory<CHandle<CInfoLadderDismount>, int> > > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// CUtlVectorBase: 952 more instantiations (full list in INDEX.tsv)
//   CUtlVectorBase<void*, CUtlMemory<void*, int> >
//   CUtlVectorBase<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> >
//   CUtlVectorBase<const CSchemaEnumInfo*, CUtlMemory<const CSchemaEnumInfo*, int> >
//   CUtlVectorBase<char const**, CUtlMemory<char const**, int> >
//   CUtlVectorBase<void (**)(void*), CUtlMemory<void (**)(void*), int> >
//   CUtlVectorBase<bool (**)(void*, char const*), CUtlMemory<bool (**)(void*, char const*), int> >
//   CUtlVectorBase<void (**)(void*, CUtlString*), CUtlMemory<void (**)(void*, CUtlString*), int> >
//   CUtlVectorBase<SerializeInfo_t*, CUtlMemory<SerializeInfo_t*, int> >
//   CUtlVectorBase<DynamicSerializeInfo_t*, CUtlMemory<DynamicSerializeInfo_t*, int> >
//   CUtlVectorBase<void (**)(IPropertyEditDomain*, const PropEdSpecificAttr_t&, CUtlVector<CUtlString, CUtlMemory<CUtlString
//   CUtlVectorBase<int*, CUtlMemory<int*, int> >
//   CUtlVectorBase<PropertyClassAsStringFuncs_t*, CUtlMemory<PropertyClassAsStringFuncs_t*, int> >
//   CUtlVectorBase<void (**)(void*, void*), CUtlMemory<void (**)(void*, void*), int> >
//   CUtlVectorBase<int, CUtlMemory<int, int> >
//   CUtlVectorBase<CFieldPathHuffmanEncoder::HuffCode, CUtlMemoryFixed<CFieldPathHuffmanEncoder::HuffCode, 40ul> >
//   CUtlVectorBase<CFieldPathHuffmanEncoder::composed_t, CUtlMemory<CFieldPathHuffmanEncoder::composed_t, int> >
//   CUtlVectorBase<NetworkOverride_t*, CUtlMemory<NetworkOverride_t*, int> >
//   CUtlVectorBase<NetworkUserGroupProxyInfo_t**, CUtlMemory<NetworkUserGroupProxyInfo_t**, int> >
//   CUtlVectorBase<NetworkVarDecl_t*, CUtlMemory<NetworkVarDecl_t*, int> >
//   CUtlVectorBase<float*, CUtlMemory<float*, int> >
//   CUtlVectorBase<void (**)(void*, void*, void*, CSendProxyRecipients*, int), CUtlMemory<void (**)(void*, void*, void*, CSe
//   CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassT
//   CUtlVectorBase<const CSchemaClassInfo*, CUtlMemoryFixedGrowable<const CSchemaClassInfo*, 32ul, int> >
//   CUtlVectorBase<long long unsigned int*, CUtlMemory<long long unsigned int*, int> >
//   CUtlVectorBase<EntityIOConnectionDescFat_t, CUtlMemory<EntityIOConnectionDescFat_t, int> >
//   CUtlVectorBase<ScriptFunctionBinding_t, CUtlMemory<ScriptFunctionBinding_t, int> >
//   CUtlVectorBase<ComponentUnserializerPtrToClassInfo_t, CUtlMemory<ComponentUnserializerPtrToClassInfo_t, int> >
//   CUtlVectorBase<ComponentPostUnserializerInfo_t, CUtlMemory<ComponentPostUnserializerInfo_t, int> >
//   CUtlVectorBase<EntOutput_t, CUtlMemory<EntOutput_t, int> >
//   CUtlVectorBase<ComponentKeyField_t*, CUtlMemory<ComponentKeyField_t*, int> >
//   CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >
//   CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >
//   CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >
//   CUtlVectorBase<CEntityClass::ClassInputInfo_t, CUtlMemory<CEntityClass::ClassInputInfo_t, int> >
//   CUtlVectorBase<CEntityClass::ClassOutputInfo_t, CUtlMemory<CEntityClass::ClassOutputInfo_t, int> >
//   CUtlVectorBase<bool, CUtlMemory<bool, int> >
//   CUtlVectorBase<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >
//   CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >
//   CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4ul> >
//   CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >
//   CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >
//   CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1ul, int> >
//   CUtlVectorBase<CBaseConstraint*, CUtlMemory<CBaseConstraint*, int> >
//   CUtlVectorBase<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >
//   CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >
//   CUtlVectorBase<float, CUtlMemory<float, int> >
//   CUtlVectorBase<CMorphBundleData, CUtlMemory<CMorphBundleData, int> >
//   CUtlVectorBase<CMorphRectData, CUtlMemory<CMorphRectData, int> >
//   CUtlVectorBase<MorphBundleType_t, CUtlMemory<MorphBundleType_t, int> >
//   CUtlVectorBase<CMorphData, CUtlMemory<CMorphData, int> >
//   CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >
//   CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >
//   CUtlVectorBase<CFlexRule, CUtlMemory<CFlexRule, int> >
//   CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >
//   CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >
//   CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >
//   CUtlVectorBase<TintedCachedSlotInfo_t, CUtlMemory<TintedCachedSlotInfo_t, int> >
//   CUtlVectorBase<Vector, CUtlMemory<Vector, int> >
//   CUtlVectorBase<ISceneView::WorldList_t, CUtlMemoryFixedGrowable<ISceneView::WorldList_t, 16ul, int> >
//   CUtlVectorBase<ConstantBufferHandle_t__*, CUtlMemoryFixed<ConstantBufferHandle_t__*, 4ul> >
//   CUtlVectorBase<CUtlStringToken, CUtlMemoryFixed<CUtlStringToken, 4ul> >
//   CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemoryFixed<CWeakHandle<InfoForResourceTypeCTextureBase
//   CUtlVectorBase<CSceneObjectStateOverideEntry<const CSceneSystemStencilState*>, CUtlMemoryFixedGrowable<CSceneObjectState
//   CUtlVectorBase<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, CUtlMemoryFixedGrow
//   CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1ul, int> >
//   CUtlVectorBase<CMeshDrawPrimitive_t, CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 16ul, int> >
//   CUtlVectorBase<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRender
//   CUtlVectorBase<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >
//   CUtlVectorBase<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> >
//   CUtlVectorBase<const EntityIOOutputDesc_t*, CUtlMemory<const EntityIOOutputDesc_t*, int> >
//   CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >
//   CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >
//   CUtlVectorBase<ValidationResult_t::ValidationResultEntry_t, CUtlMemory<ValidationResult_t::ValidationResultEntry_t, int>
//   CUtlVectorBase<CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >, CUtlMemory<CUtlVector<CUtlStringToken, CU
//   CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4ul, int> >
//   CUtlVectorBase<IPrerequisite*, CUtlMemory<IPrerequisite*, int> >
//   CUtlVectorBase<HResourceManifest__*, CUtlMemory<HResourceManifest__*, int> >
//   CUtlVectorBase<COverlapHit, CUtlMemoryFixedGrowable<COverlapHit, 64ul, int> >
//   CUtlVectorBase<CGameTrace, CUtlMemoryFixedGrowable<CGameTrace, 64ul, int> >
//   CUtlVectorBase<ParticleOperatorId_t*, CUtlMemory<ParticleOperatorId_t*, int> >
//   CUtlVectorBase<char const*, CUtlMemory<char const*, int> >
//   CUtlVectorBase<CRnPlaneResult, CUtlMemoryFixedGrowable<CRnPlaneResult, 32ul, int> >
//   CUtlVectorBase<PropEdIndirectionType_t, CUtlMemory<PropEdIndirectionType_t, int> >
//   CUtlVectorBase<PropEdCustomCommand_t, CUtlMemory<PropEdCustomCommand_t, int> >
//   CUtlVectorBase<PropEdAttributeInfo_t, CUtlMemory<PropEdAttributeInfo_t, int> >
//   CUtlVectorBase<PropEdSpecificElement_t, CUtlMemory<PropEdSpecificElement_t, int> >
//   CUtlVectorBase<CUtlSignaller_Base*, CUtlMemory<CUtlSignaller_Base*, int> >
//   CUtlVectorBase<RenderAttrGatherInfo_t, CUtlMemory<RenderAttrGatherInfo_t, int> >
//   CUtlVectorBase<RenderAttrUpdater_t*, CUtlMemory<RenderAttrUpdater_t*, int> >
//   CUtlVectorBase<HGameResourceManifest__*, CUtlMemory<HGameResourceManifest__*, int> >
//   CUtlVectorBase<CPhysAggregateData*, CUtlMemory<CPhysAggregateData*, int> >
//   CUtlVectorBase<RnIteration_t, CUtlMemory<RnIteration_t, int> >
//   CUtlVectorBase<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrapped
//   CUtlVectorBase<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashEleme
//   CUtlVectorBase<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> >
//   CUtlVectorBase<CEventRegister*, CUtlMemory<CEventRegister*, int> >
//   CUtlVectorBase<MetaExposeToScript_t*, CUtlMemory<MetaExposeToScript_t*, int> >
//   CUtlVectorBase<attachedparticlecontrolpoint_t, CUtlMemory<attachedparticlecontrolpoint_t, int> >
//   CUtlVectorBase<const CAssetModifier*, CUtlMemory<const CAssetModifier*, int> >
//   CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >
//   CUtlVectorBase<lootlist_attrib_t*, CUtlMemory<lootlist_attrib_t*, int> >
//   CUtlVectorBase<CEconLootListDefinition::loot_list_additional_drop_t, CUtlMemory<CEconLootListDefinition::loot_list_addit
//   CUtlVectorBase<random_attrib_t*, CUtlMemory<random_attrib_t*, int> >
//   CUtlVectorBase<autograph_t::level_t, CUtlMemory<autograph_t::level_t, int> >
//   CUtlVectorBase<CEconItemDefinition*, CUtlMemory<CEconItemDefinition*, int> >
//   CUtlVectorBase<static_attrib_t, CUtlMemory<static_attrib_t, int> >
//   CUtlVectorBase<CEconSchemaSymbol, CUtlMemory<CEconSchemaSymbol, int> >
//   CUtlVectorBase<attr_type_t, CUtlMemory<attr_type_t, int> >
//   CUtlVectorBase<CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*>::HashBucket_t, CUtlMemory<CUtlHashMapLarg
//   CUtlVectorBase<CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*>::HashBucket_t, CUtlMemory<CUtlHashMapLarge<CEco
//   CUtlVectorBase<CTimedItemRewardDefinition, CUtlMemory<CTimedItemRewardDefinition, int> >
//   CUtlVectorBase<CEconItemSchema::EquipRegion, CUtlMemory<CEconItemSchema::EquipRegion, int> >
//   CUtlVectorBase<CEconColorDefinition*, CUtlMemory<CEconColorDefinition*, int> >
//   CUtlVectorBase<CItemLevelingDefinition, CUtlMemory<CItemLevelingDefinition, int> >
//   CUtlVectorBase<CThreadSafeMemoryPool::BlockSet_t, CUtlMemory<CThreadSafeMemoryPool::BlockSet_t, int> >
//   CUtlVectorBase<CThreadSafeMultiMemoryPool::MemPoolRecord_t, CUtlMemory<CThreadSafeMultiMemoryPool::MemPoolRecord_t, int>
//   CUtlVectorBase<CThreadSafeMultiMemoryPool::MemPoolRecord_t*, CUtlMemory<CThreadSafeMultiMemoryPool::MemPoolRecord_t*, in
//   CUtlVectorBase<short int*, CUtlMemory<short int*, int> >
//   CUtlVectorBase<GCSDK::MsgInfo_t, CUtlMemory<GCSDK::MsgInfo_t, int> >
//   CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >
//   CUtlVectorBase<CAttributeManager::cached_attribute_float_t, CUtlMemory<CAttributeManager::cached_attribute_float_t, int>
//   CUtlVectorBase<IClientMessageDelegateHook*, CUtlMemory<IClientMessageDelegateHook*, int> >
//   CUtlVectorBase<CKnownEntity, CUtlMemory<CKnownEntity, int> >
//   CUtlVectorBase<CDOTA_AttackRecord*, CUtlMemory<CDOTA_AttackRecord*, int> >
//   CUtlVectorBase<sSharedCooldownInfo, CUtlMemory<sSharedCooldownInfo, int> >
//   CUtlVectorBase<CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t>, CUtlMemory<CCopyableUtlVector<CDOTA_ModifierMa
//   CUtlVectorBase<CDOTA_ModifierManager::BuffModifier_t, CUtlMemory<CDOTA_ModifierManager::BuffModifier_t, int> >
//   CUtlVectorBase<modifierfunction, CUtlMemory<modifierfunction, int> >
//   CUtlVectorBase<CDOTA_ScriptedSpawner::scripted_moveto_t, CUtlMemory<CDOTA_ScriptedSpawner::scripted_moveto_t, int> >
//   CUtlVectorBase<DataTeamPlayer_t, CNetworkUtlVector_MemoryType<DataTeamPlayer_t, -1> >
//   CUtlVectorBase<IResponseSystem*, CUtlMemory<IResponseSystem*, int> >
//   CUtlVectorBase<CMultiplayRules::ResponseRules_t, CUtlMemory<CMultiplayRules::ResponseRules_t, int> >
//   CUtlVectorBase<CUtlVector<VoiceCommandMenuItem_t, CUtlMemory<VoiceCommandMenuItem_t, int> >, CUtlMemory<CUtlVector<Voice
//   CUtlVectorBase<PlayerResourcePlayerTeamData_t, CNetworkUtlVector_MemoryType<PlayerResourcePlayerTeamData_t, -1> >
//   CUtlVectorBase<PlayerResourcePlayerData_t, CNetworkUtlVector_MemoryType<PlayerResourcePlayerData_t, -1> >
//   CUtlVectorBase<PlayerResourceBroadcasterData_t, CNetworkUtlVector_MemoryType<PlayerResourceBroadcasterData_t, -1> >
//   CUtlVectorBase<std::pair<item_definition_index_t, itemid_t>, CUtlMemory<std::pair<item_definition_index_t, itemid_t>, in
//   CUtlVectorBase<sPendingTreeRemoval, CUtlMemory<sPendingTreeRemoval, int> >
//   CUtlVectorBase<PurchasedItem_t, CUtlMemory<PurchasedItem_t, int> >
//   CUtlVectorBase<TimedBalanceRecord_t, CUtlMemory<TimedBalanceRecord_t, int> >
//   CUtlVectorBase<TimedKillEvent_t, CUtlMemory<TimedKillEvent_t, int> >
//   CUtlVectorBase<CHandle<CDOTA_Unit_Courier>, CUtlMemory<CHandle<CDOTA_Unit_Courier>, int> >
//   CUtlVectorBase<DamageShareEvent_t, CUtlMemory<DamageShareEvent_t, int> >
//   CUtlVectorBase<CHandle<CDOTA_BaseNPC_Hero>, CUtlMemory<CHandle<CDOTA_BaseNPC_Hero>, int> >
//   CUtlVectorBase<CDOTAMusicSystemElement, CUtlMemory<CDOTAMusicSystemElement, int> >
//   CUtlVectorBase<CEconItemView*, CUtlMemory<CEconItemView*, int> >
//   CUtlVectorBase<CInventoryManager::inventories_t, CUtlMemory<CInventoryManager::inventories_t, int> >
//   CUtlVectorBase<CDOTA_PlayerChallengeInfo, CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo, 24> >
//   CUtlVectorBase<CDOTA_CombatLogQueryProgress, CNetworkUtlVector_MemoryType<CDOTA_CombatLogQueryProgress, -1> >
//   CUtlVectorBase<CDOTASubChallengeInfo, CNetworkUtlVector_MemoryType<CDOTASubChallengeInfo, -1> >
//   CUtlVectorBase<int, CNetworkUtlVector_MemoryType<int, -1> >
//   CUtlVectorBase<KeyValues*, CUtlMemory<KeyValues*, int> >
//   CUtlVectorBase<CSteamID, CUtlMemory<CSteamID, int> >
//   CUtlVectorBase<VoiceCommandMenuItem_t, CUtlMemory<VoiceCommandMenuItem_t, int> >
//   CUtlVectorBase<CEntityHandle, CUtlMemory<CEntityHandle, int> >
//   CUtlVectorBase<CUtlSymbolLarge, CNetworkUtlVector_MemoryType<CUtlSymbolLarge, -1> >
//   CUtlVectorBase<CHandle<CPointClientUIWorldPanel>, CUtlMemory<CHandle<CPointClientUIWorldPanel>, int> >
//   CUtlVectorBase<prevent_interaction_t, CUtlMemory<prevent_interaction_t, int> >
//   CUtlVectorBase<CHandle<CBaseVRHandAttachment>, CNetworkUtlVector_MemoryType<CHandle<CBaseVRHandAttachment>, -1> >
//   CUtlVectorBase<const VPhysXBodyPart_t*, CUtlMemoryConservative<const VPhysXBodyPart_t*> >
//   CUtlVectorBase<ResourceManifestDesc_t*, CUtlMemory<ResourceManifestDesc_t*, int> >
//   CUtlVectorBase<CBaseAchievement*, CUtlMemory<CBaseAchievement*, int> >
//   CUtlVectorBase<CacheOptimizedKDNode_t, CUtlMemory<CacheOptimizedKDNode_t, int> >
//   CUtlVectorBase<CacheOptimizedTriangle_t, CUtlBlockMemory<CacheOptimizedTriangle_t, int> >
//   CUtlVectorBase<LightDesc_t, CUtlMemory<LightDesc_t, int> >
//   CUtlVectorBase<InstancedRayTracingEnvironmentBVHNode_t, CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int> >
//   CUtlVectorBase<InstancedRayTracingEnvironmentReference_t*, CUtlMemory<InstancedRayTracingEnvironmentReference_t*, int> >
//   CUtlVectorBase<RayTracingEnvironment*, CUtlMemory<RayTracingEnvironment*, int> >
//   CUtlVectorBase<const OffsetIgnore_t*, CUtlMemoryFixedGrowable<const OffsetIgnore_t*, 4ul, int> >
//   CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >
//   CUtlVectorBase<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t*, CUtlMemory<CWorkListTran
//   CUtlVectorBase<CGameSceneNode*, CUtlMemoryConservative<CGameSceneNode*> >
//   CUtlVectorBase<SceneObjectUpdaterHandle_t__*, CUtlMemory<SceneObjectUpdaterHandle_t__*, int> >
//   CUtlVectorBase<__vector(4) float, CUtlMemory<__vector(4) float, int> >
//   CUtlVectorBase<datarun_t, CUtlMemory<datarun_t, int> >
//   CUtlVectorBase<typedescription_t, CUtlMemory<typedescription_t, int> >
//   CUtlVectorBase<customfield_t, CUtlMemory<customfield_t, int> >
//   CUtlVectorBase<SpawnGroupConnectionInfo_t, CUtlMemory<SpawnGroupConnectionInfo_t, int> >
//   CUtlVectorBase<IPVS*, CUtlMemory<IPVS*, int> >
//   CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >
//   CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >
//   CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >
//   CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >
//   CUtlVectorBase<CTSQueue<CNetworkFieldChangedEventQueueChangeInfo_t, false>, CUtlMemory<CTSQueue<CNetworkFieldChangedEven
//   CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32ul, int> >
//   CUtlVectorBase<CNetworkFieldReallocRecord, CUtlMemoryFixedGrowable<CNetworkFieldReallocRecord, 4ul, int> >
//   CUtlVectorBase<CNetworkFieldDeallocRecord, CUtlMemoryFixedGrowable<CNetworkFieldDeallocRecord, 4ul, int> >
//   CUtlVectorBase<CBaseEntity*, CUtlMemory<CBaseEntity*, int> >
//   CUtlVectorBase<thinkfunc_t, CUtlMemory<thinkfunc_t, int> >
//   CUtlVectorBase<LocalFlexController_t, CUtlMemory<LocalFlexController_t, int> >
//   CUtlVectorBase<float, CNetworkUtlVector_MemoryType<float, -1> >
//   CUtlVectorBase<CSceneEventInfo*, CUtlMemory<CSceneEventInfo*, int> >
//   CUtlVectorBase<CChoreoScene*, CUtlMemory<CChoreoScene*, int> >
//   CUtlVectorBase<typedescription_t*, CUtlMemory<typedescription_t*, int> >
//   CUtlVectorBase<CExpressionSample, CUtlMemory<CExpressionSample, int> >
//   CUtlVectorBase<CBezierHandlesForSample, CUtlMemory<CBezierHandlesForSample, int> >
//   CUtlVectorBase<CHandle<CLightEntity>, CUtlMemory<CHandle<CLightEntity>, int> >
//   CUtlVectorBase<CUtlPair<CUtlSymbol, CUtlSymbol>, CUtlMemory<CUtlPair<CUtlSymbol, CUtlSymbol>, int> >
//   CUtlVectorBase<URLArgument_t, CUtlMemory<URLArgument_t, int> >
//   CUtlVectorBase<AddedGameSystem_t, CUtlMemory<AddedGameSystem_t, int> >
//   CUtlVectorBase<IGameSystem*, CUtlMemory<IGameSystem*, int> >
//   CUtlVectorBase<CUtlVector<IGameSystem*, CUtlMemory<IGameSystem*, int> >, CUtlMemory<CUtlVector<IGameSystem*, CUtlMemory<
//   CUtlVectorBase<IGameSystem::FactoryInfo_t, CUtlMemory<IGameSystem::FactoryInfo_t, int> >
//   CUtlVectorBase<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInfo, int> >
//   CUtlVectorBase<CHintMessage*, CUtlMemory<CHintMessage*, int> >
//   CUtlVectorBase<CHandle<CInfoLadderDismount>, CUtlMemory<CHandle<CInfoLadderDismount>, int> >
//   CUtlVectorBase<CFuncLadder*, CUtlMemory<CFuncLadder*, int> >
//   CUtlVectorBase<CAnimationLayer, CUtlMemory<CAnimationLayer, int> >
//   CUtlVectorBase<short int, CUtlMemory<short int, int> >
//   CUtlVectorBase<CUtlVector<BoneHashPairing_t, CUtlMemory<BoneHashPairing_t, int> >, CUtlMemory<CUtlVector<BoneHashPairing
//   CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >
//   CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >
//   CUtlVectorBase<CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int> >::ConnectedSlot_t, CUtlMemory<CU
//   CUtlVectorBase<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> >*, CUtlMemory<CUt
//   CUtlVectorBase<RenderAttrGatherInfo_t, CUtlMemory<RenderAttrGatherInfo_t, int> >
//   CUtlVectorBase<short int, CUtlMemoryConservative<short int> >
//   CUtlVectorBase<CGameSceneNodeHandle, CUtlMemory<CGameSceneNodeHandle, int> >
//   CUtlVectorBase<CSkeletonInstance*, CUtlMemory<CSkeletonInstance*, int> >
//   CUtlVectorBase<physicssound::impactsound_t, CUtlMemory<physicssound::impactsound_t, int> >
//   CUtlVectorBase<physicssound::breaksound_t, CUtlMemory<physicssound::breaksound_t, int> >
//   CUtlVectorBase<physicssound::friction_t, CUtlMemory<physicssound::friction_t, int> >
//   CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >
//   CUtlVectorBase<NavAttributeEnum, CUtlMemory<NavAttributeEnum, int> >
//   CUtlVectorBase<CBasePlayer*, CUtlMemory<CBasePlayer*, int> >
//   CUtlVectorBase<CGameSceneNode*, CUtlMemory<CGameSceneNode*, int> >
//   CUtlVectorBase<CSkeletonInstance*, CUtlMemoryFixedGrowable<CSkeletonInstance*, 64ul, int> >
//   CUtlVectorBase<CBodyGameSystem::HierarchySetupWork_t, CUtlMemoryFixedGrowable<CBodyGameSystem::HierarchySetupWork_t, 256
//   CUtlVectorBase<CSkeletonAnimationController*, CUtlMemory<CSkeletonAnimationController*, int> >
//   CUtlVectorBase<CGameSceneNode*, CUtlMemoryFixedGrowable<CGameSceneNode*, 16ul, int> >
//   CUtlVectorBase<CGameSceneNode*, CUtlMemoryFixedGrowable<CGameSceneNode*, 512ul, int> >
//   CUtlVectorBase<EntityNotification_t, CUtlMemoryFixedGrowable<EntityNotification_t, 256ul, int> >
//   CUtlVectorBase<CCustomGameEventManager::CCustomGameEventListener*, CUtlMemory<CCustomGameEventManager::CCustomGameEventL
//   CUtlVectorBase<CCustomGameEventManager::CCustomGameEventInfo*, CUtlMemory<CCustomGameEventManager::CCustomGameEventInfo*
//   CUtlVectorBase<CDecalMaterialParams, CUtlMemory<CDecalMaterialParams, int> >
//   CUtlVectorBase<CUtlVector<NameToDecalMaterialParamsMapping_t, CUtlMemory<NameToDecalMaterialParamsMapping_t, int> >, CUt
//   CUtlVectorBase<CUtlVector<SkeletonInstanceDecalList_t, CUtlMemory<SkeletonInstanceDecalList_t, int> >, CUtlMemory<CUtlVe
//   CUtlVectorBase<CDecalInfo*, CUtlMemory<CDecalInfo*, int> >
//   CUtlVectorBase<CCompressedResourceManifest::CompressedResourceName_t, CUtlMemory<CCompressedResourceManifest::Compressed
//   CUtlVectorBase<entitytable_t, CUtlMemory<entitytable_t, int> >
//   CUtlVectorBase<CUtlVector<CGameSaveRestoreInfo::CHashElement, CUtlMemory<CGameSaveRestoreInfo::CHashElement, int> >, CUt
//   CUtlVectorBase<SaveRestoreTranslate_t, CUtlMemory<SaveRestoreTranslate_t, int> >
//   CUtlVectorBase<const CDecalInfo*, CUtlMemory<const CDecalInfo*, int> >
//   CUtlVectorBase<CEntityDebugGameSystem::DebugScrollingMessage_t, CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage
//   CUtlVectorBase<CEntityIdentity*, CUtlMemoryFixedGrowable<CEntityIdentity*, 1024ul, int> >
//   CUtlVectorBase<CEntityDebugGrab*, CUtlMemory<CEntityDebugGrab*, int> >
//   CUtlVectorBase<entitynotify_t, CUtlMemory<entitynotify_t, int> >
//   CUtlVectorBase<CSpawnGroupMgrGameSystem::UnloadRequestQueueItem_t, CUtlMemory<CSpawnGroupMgrGameSystem::UnloadRequestQue
//   CUtlVectorBase<CSosMessageQueue<SoundEventGuid_t>::Entry_t, CUtlMemory<CSosMessageQueue<SoundEventGuid_t>::Entry_t, int>
//   CUtlVectorBase<CSosMessageQueue<unsigned int>::Entry_t, CUtlMemory<CSosMessageQueue<unsigned int>::Entry_t, int> >
//   CUtlVectorBase<void (*)(), CUtlMemory<void (*)(), int> >
//   CUtlVectorBase<VPhysIntersectionNotification_t, CUtlMemory<VPhysIntersectionNotification_t, int> >
//   CUtlVectorBase<CGameEventTouchAdaptor, CUtlMemory<CGameEventTouchAdaptor, int> >
//   CUtlVectorBase<Source1_Ray_t, CUtlMemory<Source1_Ray_t, int> >
//   CUtlVectorBase<Ray_t, CUtlMemory<Ray_t, int> >
//   CUtlVectorBase<IPhysicsBody*, CUtlMemory<IPhysicsBody*, int> >
//   CUtlVectorBase<simthinkentry_t, CUtlMemory<simthinkentry_t, int> >
//   CUtlVectorBase<CInfoSpawnGroupLandmark*, CUtlMemory<CInfoSpawnGroupLandmark*, int> >
//   CUtlVectorBase<CInfoSpawnGroupLoadUnload*, CUtlMemory<CInfoSpawnGroupLoadUnload*, int> >
//   CUtlVectorBase<stepsimulationentry_t, CUtlMemory<stepsimulationentry_t, int> >
//   CUtlVectorBase<CEntityInstance*, CUtlMemoryFixedGrowable<CEntityInstance*, 128ul, int> >
//   CUtlVectorBase<rr2::MatchInfo_t, CUtlMemory<rr2::MatchInfo_t, int> >
//   CUtlVectorBase<rr2::CResponseQuery::CFact, CUtlMemory<rr2::CResponseQuery::CFact, int> >
//   CUtlVectorBase<CGameEventCallback*, CUtlMemory<CGameEventCallback*, int> >
//   CUtlVectorBase<CVScriptGameEventListener::GameEventFunc_t, CUtlMemory<CVScriptGameEventListener::GameEventFunc_t, int> >
//   CUtlVectorBase<CUtlSphereTree::Node, CUtlMemory<CUtlSphereTree::Node, int> >
//   CUtlVectorBase<BoneHashPairing_t, CUtlMemory<BoneHashPairing_t, int> >
//   CUtlVectorBase<NameToDecalMaterialParamsMapping_t, CUtlMemory<NameToDecalMaterialParamsMapping_t, int> >
//   CUtlVectorBase<SkeletonInstanceDecalList_t, CUtlMemory<SkeletonInstanceDecalList_t, int> >
//   CUtlVectorBase<CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int> >::EventAndDelegate_t, CUtlMemory
//   CUtlVectorBase<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int> >::RefCountedSignallerPointer_t*, CUtlMemo
//   CUtlVectorBase<CGameSaveRestoreInfo::CHashElement, CUtlMemory<CGameSaveRestoreInfo::CHashElement, int> >
//   CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> >
//   CUtlVectorBase<CAnimationLayer, CNetworkUtlVector_MemoryType<CAnimationLayer, -1> >
//   CUtlVectorBase<ResponseContext_t, CUtlMemory<ResponseContext_t, int> >
//   CUtlVectorBase<Relationship_t, CUtlMemory<Relationship_t, int> >
//   CUtlVectorBase<CHandle<CBaseCombatWeapon>, CNetworkUtlVector_MemoryType<CHandle<CBaseCombatWeapon>, -1> >
//   CUtlVectorBase<CHandle<CEconWearable>, CNetworkUtlVector_MemoryType<CHandle<CEconWearable>, -1> >
//   CUtlVectorBase<CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >, CUtlMemory<CUtlVector<CHandle<C
//   CUtlVectorBase<CHandle<CBasePropDoor>, CUtlMemory<CHandle<CBasePropDoor>, int> >
//   CUtlVectorBase<CAI_Link*, CUtlMemory<CAI_Link*, int> >
//   CUtlVectorBase<CHandle<CAI_DynamicLink>, CUtlMemory<CHandle<CAI_DynamicLink>, int> >
//   CUtlVectorBase<CFish*, CUtlMemory<CFish*, int> >
//   CUtlVectorBase<CHandle<CFish>, CUtlMemory<CHandle<CFish>, int> >
//   CUtlVectorBase<CHandle<CBasePlayer>, CUtlMemory<CHandle<CBasePlayer>, int> >
//   CUtlVectorBase<CPhysBox::RecentlyTouchedEntity_t, CUtlMemory<CPhysBox::RecentlyTouchedEntity_t, int> >
//   CUtlVectorBase<magnetted_objects_t, CUtlMemory<magnetted_objects_t, int> >
//   CUtlVectorBase<CTeamSpawnPoint*, CUtlMemory<CTeamSpawnPoint*, int> >
//   CUtlVectorBase<CHandle<CBasePlayer>, CNetworkUtlVector_MemoryType<CHandle<CBasePlayer>, -1> >
//   CUtlVectorBase<WeaponTextureData_t, CUtlMemory<WeaponTextureData_t, int> >
//   CUtlVectorBase<WeaponSoundData_t, CUtlMemory<WeaponSoundData_t, int> >
//   CUtlVectorBase<vehicle_gear_t, CUtlMemory<vehicle_gear_t, int> >
//   CUtlVectorBase<vehicle_crashsound_t, CUtlMemory<vehicle_crashsound_t, int> >
//   CUtlVectorBase<CPassengerSeatTransition, CUtlMemory<CPassengerSeatTransition, int> >
//   CUtlVectorBase<CPassengerSeat, CUtlMemory<CPassengerSeat, int> >
//   CUtlVectorBase<CPassengerInfo, CUtlMemory<CPassengerInfo, int> >
//   CUtlVectorBase<CPassengerRole, CUtlMemory<CPassengerRole, int> >
//   CUtlVectorBase<CBaseServerVehicle::entryanim_t, CUtlMemory<CBaseServerVehicle::entryanim_t, int> >
//   CUtlVectorBase<CBaseServerVehicle::exitanim_t, CUtlMemory<CBaseServerVehicle::exitanim_t, int> >
//   CUtlVectorBase<CNavAttributeLookup, CUtlMemory<CNavAttributeLookup, int> >
//   CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >
//   CUtlVectorBase<CNavLadder*, CUtlMemory<CNavLadder*, int> >
//   CUtlVectorBase<CFuncNavConnectionBlocker*, CUtlMemory<CFuncNavConnectionBlocker*, int> >
//   CUtlVectorBase<CNavDoorBlocker*, CUtlMemory<CNavDoorBlocker*, int> >
//   CUtlVectorBase<unsigned int, CUtlMemoryFixed<unsigned int, 8ul> >
//   CUtlVectorBase<SosEditItemInfo_t, CUtlMemory<SosEditItemInfo_t, int> >
//   CUtlVectorBase<CUtlHandleTable<CBaseNugget_Private, 16>::EntryType_t, CUtlMemory<CUtlHandleTable<CBaseNugget_Private, 16
//   CUtlVectorBase<rr2::CriterionStatic, CUtlMemoryConservative<rr2::CriterionStatic> >
//   CUtlVectorBase<rr2::CriterionLambda, CUtlMemoryConservative<rr2::CriterionLambda> >
//   CUtlVectorBase<CUtlSymbolLarge, CUtlMemory<CUtlSymbolLarge, int> >
//   CUtlVectorBase<CPropData::propdata_breakablechunk_t, CUtlMemory<CPropData::propdata_breakablechunk_t, int> >
//   CUtlVectorBase<breakmodel_t, CUtlMemory<breakmodel_t, int> >
//   CUtlVectorBase<matrix3x4a_t, CUtlMemoryFixedGrowable<matrix3x4a_t, 2ul, int> >
//   CUtlVectorBase<CBreakModelsPrecached::BreakModelInfo_t, CUtlMemory<CBreakModelsPrecached::BreakModelInfo_t, int> >
//   CUtlVectorBase<char, CUtlMemory<char, int> >
//   CUtlVectorBase<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >
//   CUtlVectorBase<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >
//   CUtlVectorBase<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >
//   CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >
//   CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >
//   CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >
//   CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >
//   CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >
//   CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >
//   CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >
//   CUtlVectorBase<CAnimIKRule, CUtlMemory<CAnimIKRule, int> >
//   CUtlVectorBase<CAnimIKRuleStallFrame, CUtlMemory<CAnimIKRuleStallFrame, int> >
//   CUtlVectorBase<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >
//   CUtlVectorBase<ResponseGroup, CUtlMemoryConservative<ResponseGroup> >
//   CUtlVectorBase<HitBoxSetAndMesh_t, CUtlMemoryFixedGrowable<HitBoxSetAndMesh_t, 16ul, int> >
//   CUtlVectorBase<TransitioningLaterMetaInfo_t, CUtlMemory<TransitioningLaterMetaInfo_t, int> >
//   CUtlVectorBase<CAnimIKTargetInfo, CUtlMemory<CAnimIKTargetInfo, int> >
//   CUtlVectorBase<CAnimIKLink, CUtlMemory<CAnimIKLink, int> >
//   CUtlVectorBase<CIKTarget, CUtlMemoryFixed<CIKTarget, 12ul> >
//   CUtlVectorBase<CUtlVector<ikcontextikrule_t, CUtlMemory<ikcontextikrule_t, int> >, CUtlMemory<CUtlVector<ikcontextikrule
//   CUtlVectorBase<ikcontextikrule_t, CUtlMemory<ikcontextikrule_t, int> >
//   CUtlVectorBase<ClientAnimating_t, CUtlMemory<ClientAnimating_t, int> >
//   CUtlVectorBase<CBaseAnimating*, CUtlMemoryFixedGrowable<CBaseAnimating*, 512ul, int> >
//   CUtlVectorBase<CFoW_Viewer*, CUtlMemory<CFoW_Viewer*, int> >
//   CUtlVectorBase<VertexColor_t, CUtlMemory<VertexColor_t, int> >
//   CUtlVectorBase<const CAttachment*, CUtlMemory<const CAttachment*, int> >
//   CUtlVectorBase<globalentity_t, CUtlMemory<globalentity_t, int> >
//   CUtlVectorBase<SPAWNGROUP_HEADER, CUtlMemory<SPAWNGROUP_HEADER, int> >
//   CUtlVectorBase<CCreateGameServerLoadInfo, CUtlMemory<CCreateGameServerLoadInfo, int> >
//   CUtlVectorBase<filelistelem_t, CUtlMemory<filelistelem_t, int> >
//   CUtlVectorBase<CRnPlaneResult, CUtlMemoryFixedGrowable<CRnPlaneResult, 32ul, int> >
//   CUtlVectorBase<AnimationEventOccurrence_t, CUtlMemory<AnimationEventOccurrence_t, int> >
//   CUtlVectorBase<VectorAligned, CUtlMemory<VectorAligned, int> >
//   CUtlVectorBase<IInterpolatedVar*, CUtlMemory<IInterpolatedVar*, int> >
//   CUtlVectorBase<IWrappedInterpolatedVarAdapter*, CUtlMemory<IWrappedInterpolatedVarAdapter*, int> >
//   CUtlVectorBase<IEntityListener*, CUtlMemory<IEntityListener*, int> >
//   CUtlVectorBase<CEntityIndex, CUtlMemoryFixedGrowable<CEntityIndex, 65ul, int> >
//   CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >
//   CUtlVectorBase<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false>::StringPool_t*, CUtlMemory<CUtlSymbolTableLarg
//   CUtlVectorBase<CCopyableUtlVector<CUtlSymbolLarge>, CUtlMemory<CCopyableUtlVector<CUtlSymbolLarge>, int> >
//   CUtlVectorBase<CGridStringPrinter::ColumnHeader_t, CUtlMemory<CGridStringPrinter::ColumnHeader_t, int> >
//   CUtlVectorBase<CUtlVector<CEntityDataInstantiator<touchlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<touchlink_
//   CUtlVectorBase<CUtlVector<CEntityDataInstantiator<groundlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<groundlin
//   CUtlVectorBase<CUtlVector<CEntityDataInstantiator<StepSimulationData>::HashEntry, CUtlMemory<CEntityDataInstantiator<Ste
//   CUtlVectorBase<CUtlVector<CEntityDataInstantiator<ModelScale>::HashEntry, CUtlMemory<CEntityDataInstantiator<ModelScale>
//   CUtlVectorBase<CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry, CUtlMemory<CEntityDataInstantiator<CWatcherL
//   CUtlVectorBase<CUtlVector<CEntityDataInstantiator<physicspushlist_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<phys
//   CUtlVectorBase<CUtlVector<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<vph
//   CUtlVectorBase<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupCompletionDelegateInfo_t, CUtlMemory<CSpawnGroupComple
//   CUtlVectorBase<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupEntitySpawnCompletionDelegateInfo_t, CUtlMemory<CSpawn
//   CUtlVectorBase<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t, CUtlMemory<CSpawnGroupCompletionCall
//   CUtlVectorBase<EntitySpawnInfo_t, CUtlMemory<EntitySpawnInfo_t, int> >
//   CUtlVectorBase<CEntityClass*, CUtlMemory<CEntityClass*, int> >
//   CUtlVectorBase<ServerClass*, CUtlMemory<ServerClass*, int> >
//   CUtlVectorBase<CGameEventDescriptor, CUtlMemory<CGameEventDescriptor, int> >
//   CUtlVectorBase<IPhysicsShape*, CUtlMemoryFixedGrowable<IPhysicsShape*, 128ul, int> >
//   CUtlVectorBase<PhysicsTrace_t, CUtlMemoryFixedGrowable<PhysicsTrace_t, 128ul, int> >
//   CUtlVectorBase<CSweepResult, CUtlMemoryFixedGrowable<CSweepResult, 128ul, int> >
//   CUtlVectorBase<CLinearSweepResult, CUtlMemoryFixedGrowable<CLinearSweepResult, 128ul, int> >
//   CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 128ul, int> >
//   CUtlVectorBase<StringTableDef_t, CUtlMemory<StringTableDef_t, int> >
//   CUtlVectorBase<ISaveRestoreBlockHandler*, CUtlMemory<ISaveRestoreBlockHandler*, int> >
//   CUtlVectorBase<SaveRestoreBlockHeader_t, CUtlMemory<SaveRestoreBlockHeader_t, int> >
//   CUtlVectorBase<CGameSceneNode*, CUtlMemoryFixedGrowable<CGameSceneNode*, 32ul, int> >
//   CUtlVectorBase<HitBoxAndMesh_t, CUtlMemoryFixedGrowable<HitBoxAndMesh_t, 32ul, int> >
//   CUtlVectorBase<matrix3x4a_t, CUtlMemoryFixedGrowable<matrix3x4a_t, 32ul, int> >
//   CUtlVectorBase<ComponentUnserializerClassInfo_t*, CUtlMemory<ComponentUnserializerClassInfo_t*, int> >
//   CUtlVectorBase<CEntityDataInstantiator<touchlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEnt
//   CUtlVectorBase<CEntityDataInstantiator<groundlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashE
//   CUtlVectorBase<CEntityDataInstantiator<StepSimulationData>::HashEntry, CUtlMemory<CEntityDataInstantiator<StepSimulation
//   CUtlVectorBase<CEntityDataInstantiator<ModelScale>::HashEntry, CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry
//   CUtlVectorBase<CEntityDataInstantiator<CWatcherList>::HashEntry, CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashE
//   CUtlVectorBase<CEntityDataInstantiator<physicspushlist_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<physicspushlist
//   CUtlVectorBase<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<vphysicsupdate
//   CUtlVectorBase<FileWeaponInfo_t*, CUtlMemory<FileWeaponInfo_t*, int> >
//   CUtlVectorBase<CHintMessageTimers::hintmessagetime_t*, CUtlMemory<CHintMessageTimers::hintmessagetime_t*, int> >
//   CUtlVectorBase<CHintSystem::onresethints_t, CUtlMemory<CHintSystem::onresethints_t, int> >
//   CUtlVectorBase<CAI_Expresser*, CUtlMemory<CAI_Expresser*, int> >
//   CUtlVectorBase<IPhysicsBody*, CUtlMemoryFixedGrowable<IPhysicsBody*, 16ul, int> >
//   CUtlVectorBase<TeleportListEntry_t, CUtlMemory<TeleportListEntry_t, int> >
//   CUtlVectorBase<CNavOpenListElement, CUtlMemory<CNavOpenListElement, int> >
//   CUtlVectorBase<CHandle<CVGuiScreen>, CUtlMemory<CHandle<CVGuiScreen>, int> >
//   CUtlVectorBase<modifiedconvars_t, CUtlMemory<modifiedconvars_t, int> >
//   CUtlVectorBase<PreSpawnListInfo_t, CUtlMemory<PreSpawnListInfo_t, int> >
//   CUtlVectorBase<visibility_target_t, CUtlMemory<visibility_target_t, int> >
//   CUtlVectorBase<CDecalEmitterSystem::DecalListEntry, CUtlMemory<CDecalEmitterSystem::DecalListEntry, int> >
//   CUtlVectorBase<CEffectScriptElement, CUtlMemory<CEffectScriptElement, int> >
//   CUtlVectorBase<CHandle<CEnvPlayerSurfaceTrigger>, CUtlMemory<CHandle<CEnvPlayerSurfaceTrigger>, int> >
//   CUtlVectorBase<CBaseIssue*, CUtlMemory<CBaseIssue*, int> >
//   CUtlVectorBase<CVoteController::CallerRecord, CUtlMemory<CVoteController::CallerRecord, int> >
//   CUtlVectorBase<CHandle<CEnvMicrophone>, CUtlMemory<CHandle<CEnvMicrophone>, int> >
//   CUtlVectorBase<LegacyNavData_t::HidingSpotData_t, CUtlMemory<LegacyNavData_t::HidingSpotData_t, int> >
//   CUtlVectorBase<LegacyNavData_t::EncounterSpotData_t::SpotOrder_t, CUtlMemory<LegacyNavData_t::EncounterSpotData_t::SpotO
//   CUtlVectorBase<LegacyNavData_t::EncounterSpotData_t, CUtlMemory<LegacyNavData_t::EncounterSpotData_t, int> >
//   CUtlVectorBase<CUtlVector<CNavArea*, CUtlMemory<CNavArea*, int> >, CUtlMemory<CUtlVector<CNavArea*, CUtlMemory<CNavArea*
//   CUtlVectorBase<INextBot*, CUtlMemory<INextBot*, int> >
//   CUtlVectorBase<EconAttachedParticleSystemInfo_t, CUtlMemory<EconAttachedParticleSystemInfo_t, int> >
//   CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, in
//   CUtlVectorBase<CStrongHandle<InfoForResourceTypeCRenderMesh>, CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, 
//   CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >
//   CUtlVectorBase<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >
//   CUtlVectorBase<const CFlexController*, CUtlMemory<const CFlexController*, int> >
//   CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >
//   CUtlVectorBase<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true>::StringPool_t*, CUtlMemory<CUtlSymbolTableLargeB
//   CUtlVectorBase<CEconStyleInfo*, CUtlMemory<CEconStyleInfo*, int> >
//   CUtlVectorBase<CShatterGlassShard*, CUtlMemory<CShatterGlassShard*, int> >
//   CUtlVectorBase<IndexRange_t, CUtlMemory<IndexRange_t, int> >
//   CUtlVectorBase<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >
//   CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >
//   CUtlVectorBase<BuilderModelExtPart_t, CUtlMemory<BuilderModelExtPart_t, int> >
//   CUtlVectorBase<CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t>, CUtlMemory<CStrongHandle<InfoForResourceT
//   CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >
//   CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<short int
//   CUtlVectorBase<ShatterSpoke_t, CUtlMemory<ShatterSpoke_t, int> >
//   CUtlVectorBase<ShatterEdgeSegment_t, CUtlMemory<ShatterEdgeSegment_t, int> >
//   CUtlVectorBase<CSpeechBubbleInfo, CNetworkUtlVector_MemoryType<CSpeechBubbleInfo, 4> >
//   CUtlVectorBase<SCombatLogReference, CUtlMemory<SCombatLogReference, int> >
//   CUtlVectorBase<sFightInfo, CUtlMemory<sFightInfo, int> >
//   CUtlVectorBase<const CEntityModelModifier*, CUtlMemory<const CEntityModelModifier*, int> >
//   CUtlVectorBase<const CParticleCreateModifier*, CUtlMemory<const CParticleCreateModifier*, int> >
//   CUtlVectorBase<const CParticleModifier*, CUtlMemory<const CParticleModifier*, int> >
//   CUtlVectorBase<EconItemInfo_t, CUtlMemory<EconItemInfo_t, int> >
//   CUtlVectorBase<EconControlPointInfo_t, CUtlMemory<EconControlPointInfo_t, int> >
//   CUtlVectorBase<const CHeroModelChangeModifier*, CUtlMemory<const CHeroModelChangeModifier*, int> >
//   CUtlVectorBase<const CAdditionalWearableModifier*, CUtlMemory<const CAdditionalWearableModifier*, int> >
//   CUtlVectorBase<const CParticleSnapshotModifier*, CUtlMemory<const CParticleSnapshotModifier*, int> >
//   CUtlVectorBase<CEntityTemporaryMover::MovedEntity_t, CUtlMemory<CEntityTemporaryMover::MovedEntity_t, int> >
//   CUtlVectorBase<CGameWeaponManager*, CUtlMemory<CGameWeaponManager*, int> >
//   CUtlVectorBase<char*, CUtlMemory<char*, int> >
//   CUtlVectorBase<CMarkupVolumeTagged*, CUtlMemory<CMarkupVolumeTagged*, int> >
//   CUtlVectorBase<MarkupSearchQuery_t, CUtlMemory<MarkupSearchQuery_t, int> >
//   CUtlVectorBase<CHandle<CMessageEntity>, CUtlMemory<CHandle<CMessageEntity>, int> >
//   CUtlVectorBase<CMoveHelperServer::touchlist_t, CUtlMemory<CMoveHelperServer::touchlist_t, int> >
//   CUtlVectorBase<CBasePlayer::TonemapCountedActivations_t, CUtlMemory<CBasePlayer::TonemapCountedActivations_t, int> >
//   CUtlVectorBase<CParticleSystemQuery*, CUtlMemory<CParticleSystemQuery*, int> >
//   CUtlVectorBase<constraint_anchor_t, CUtlMemory<constraint_anchor_t, int> >
//   CUtlVectorBase<vehiclescript_t, CUtlMemory<vehiclescript_t, int> >
//   CUtlVectorBase<CPhysicsPushedEntities::PhysicsPusherInfo_t, CUtlMemory<CPhysicsPushedEntities::PhysicsPusherInfo_t, int>
//   CUtlVectorBase<CPhysicsPushedEntities::PhysicsPushedInfo_t, CUtlMemory<CPhysicsPushedEntities::PhysicsPushedInfo_t, int>
//   CUtlVectorBase<CBaseEntity*, CUtlMemoryFixedGrowable<CBaseEntity*, 32ul, int> >
//   CUtlVectorBase<CPhysSaveRestoreBlockHandler::QueuedItem_t, CUtlMemory<CPhysSaveRestoreBlockHandler::QueuedItem_t, int> >
//   CUtlVectorBase<CPointEntity*, CUtlMemoryFixedGrowable<CPointEntity*, 8ul, int> >
//   CUtlVectorBase<CFogVolume*, CUtlMemory<CFogVolume*, int> >
//   CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 15ul, int> >
//   CUtlVectorBase<CHandle<CBaseEntity>, CNetworkUtlVector_MemoryType<CHandle<CBaseEntity>, -1> >
//   CUtlVectorBase<const IPropVRTrackedObjectPhysicsOverride*, CUtlMemory<const IPropVRTrackedObjectPhysicsOverride*, int> >
//   CUtlVectorBase<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >*, CUtlMemory<CUtlVector<CUtlString, CUtlMemory<CUtlS
//   CUtlVectorBase<CBaseCombatCharacter*, CUtlMemory<CBaseCombatCharacter*, int> >
//   CUtlVectorBase<const CBaseEntity*, CUtlMemory<const CBaseEntity*, int> >
//   CUtlVectorBase<CBaseVRHandAttachment*, CUtlMemory<CBaseVRHandAttachment*, int> >
//   CUtlVectorBase<CHandle<CSceneListManager>, CUtlMemory<CHandle<CSceneListManager>, int> >
//   CUtlVectorBase<CHandle<CSceneEntity>, CUtlMemory<CHandle<CSceneEntity>, int> >
//   CUtlVectorBase<CSceneManager::CRestoreSceneSound, CUtlMemory<CSceneManager::CRestoreSceneSound, int> >
//   CUtlVectorBase<CHandle<CBaseFlex>, CNetworkUtlVector_MemoryType<CHandle<CBaseFlex>, -1> >
//   CUtlVectorBase<CSheetSimulator::Spring_t, CUtlMemory<CSheetSimulator::Spring_t, int> >
//   CUtlVectorBase<CaptionLookup_t, CUtlMemory<CaptionLookup_t, int> >
//   CUtlVectorBase<AsyncCaption_t, CUtlMemory<AsyncCaption_t, int> >
//   CUtlVectorBase<CSoundPatch*, CUtlMemory<CSoundPatch*, int> >
//   CUtlVectorBase<SoundCommand_t*, CUtlMemory<SoundCommand_t*, int> >
//   CUtlVectorBase<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >, CUtlMemory<CUtlVector<CUtlString, CUtlMemory<CUtlSt
//   CUtlVectorBase<CEnvSoundscape*, CUtlMemory<CEnvSoundscape*, int> >
//   CUtlVectorBase<clusterSoundscapeList_t, CUtlMemory<clusterSoundscapeList_t, int> >
//   CUtlVectorBase<bbox_t, CUtlMemory<bbox_t, int> >
//   CUtlVectorBase<CTeam*, CUtlMemory<CTeam*, int> >
//   CUtlVectorBase<CStressEntityReg*, CUtlMemory<CStressEntityReg*, int> >
//   CUtlVectorBase<CHandle<CTriggerMultiple>, CUtlMemory<CHandle<CTriggerMultiple>, int> >
//   CUtlVectorBase<convartracker_modifiedconvars_t, CUtlMemory<convartracker_modifiedconvars_t, int> >
//   CUtlVectorBase<CGlobalConvarTrackerAndReverter*, CUtlMemory<CGlobalConvarTrackerAndReverter*, int> >
//   CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemoryFixedGrowable<CHandle<CBaseEntity>, 4ul, int> >
//   CUtlVectorBase<CDOTA_ParticleElement*, CUtlMemory<CDOTA_ParticleElement*, int> >
//   CUtlVectorBase<CDOTA_ParticleManager::PortraitParticleMapEntry_t, CUtlMemory<CDOTA_ParticleManager::PortraitParticleMapE
//   CUtlVectorBase<CDOTA_BaseNPC*, CUtlMemory<CDOTA_BaseNPC*, int> >
//   CUtlVectorBase<CDOTABaseAbility*, CUtlMemory<CDOTABaseAbility*, int> >
//   CUtlVectorBase<ICustomNetTableListener*, CUtlMemory<ICustomNetTableListener*, int> >
//   CUtlVectorBase<DelayedAction_t, CUtlMemory<DelayedAction_t, int> >
//   CUtlVectorBase<GestureSlot_t, CUtlMemory<GestureSlot_t, int> >
//   CUtlVectorBase<sPathingInfo, CUtlMemory<sPathingInfo, int> >
//   CUtlVectorBase<CDOTA_Bot::SortedUnit_t, CUtlMemory<CDOTA_Bot::SortedUnit_t, int> >
//   CUtlVectorBase<CDOTA_Bot::sQueuedAction, CUtlMemory<CDOTA_Bot::sQueuedAction, int> >
//   CUtlVectorBase<CDOTA_Bot::sQueuedOrder, CUtlMemory<CDOTA_Bot::sQueuedOrder, int> >
//   CUtlVectorBase<ESocketType, CUtlMemory<ESocketType, int> >
//   CUtlVectorBase<CEconTool_StyleUnlock::StyleUnlock_t, CUtlMemory<CEconTool_StyleUnlock::StyleUnlock_t, int> >
//   CUtlVectorBase<CEconTool_PlayerCardPack::TeamInfo_t, CUtlMemory<CEconTool_PlayerCardPack::TeamInfo_t, int> >
//   CUtlVectorBase<CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*>::HashBucket_t, CUtlMemory<CUtlHashMapLarge<long lo
//   CUtlVectorBase<GCSDK::CJobMgr::JobSleeping_t, CUtlMemory<GCSDK::CJobMgr::JobSleeping_t, int> >
//   CUtlVectorBase<CUtlHashMapLarge<long long unsigned int, int>::HashBucket_t, CUtlMemory<CUtlHashMapLarge<long long unsign
//   CUtlVectorBase<CUtlHashMapLarge<long long int, GCSDK::JobStatsBucket_t>::HashBucket_t, CUtlMemory<CUtlHashMapLarge<long 
//   CUtlVectorBase<CUtlHashMapLarge<unsigned int, int>::HashBucket_t, CUtlMemory<CUtlHashMapLarge<unsigned int, int>::HashBu
//   CUtlVectorBase<CUtlPair<long long unsigned int, char const*>, CUtlMemory<CUtlPair<long long unsigned int, char const*>, 
//   CUtlVectorBase<challenge_variable_t, CUtlMemory<challenge_variable_t, int> >
//   CUtlVectorBase<challenge_var_set_t::var_value_t, CUtlMemory<challenge_var_set_t::var_value_t, int> >
//   CUtlVectorBase<challenge_var_set_t, CUtlMemory<challenge_var_set_t, int> >
//   CUtlVectorBase<challenge_quest_t::challenge_t::instance_t, CUtlMemory<challenge_quest_t::challenge_t::instance_t, int> >
//   CUtlVectorBase<challenge_quest_t::challenge_t::prerequisite_t, CUtlMemory<challenge_quest_t::challenge_t::prerequisite_t
//   CUtlVectorBase<challenge_quest_t::challenge_t::complete_action_t, CUtlMemory<challenge_quest_t::challenge_t::complete_ac
//   CUtlVectorBase<challenge_quest_t::challenge_t*, CUtlMemory<challenge_quest_t::challenge_t*, int> >
//   CUtlVectorBase<CDOTA_Buff*, CUtlMemory<CDOTA_Buff*, int> >
//   CUtlVectorBase<WearableSpawnInfo_t, CUtlMemory<WearableSpawnInfo_t, int> >
//   CUtlVectorBase<CDOTA_BinaryObject*, CUtlMemory<CDOTA_BinaryObject*, int> >
//   CUtlVectorBase<CDOTA_BinaryObjectSystem::SDOTA_PendingActivate, CUtlMemory<CDOTA_BinaryObjectSystem::SDOTA_PendingActiva
//   CUtlVectorBase<const CActivityModifier*, CUtlMemory<const CActivityModifier*, int> >
//   CUtlVectorBase<const CArcanaLevelModifier*, CUtlMemory<const CArcanaLevelModifier*, int> >
//   CUtlVectorBase<const CParticleCombined*, CUtlMemory<const CParticleCombined*, int> >
//   CUtlVectorBase<const CResponseCriteriaModifier*, CUtlMemory<const CResponseCriteriaModifier*, int> >
//   CUtlVectorBase<sSpiritInfo*, CUtlMemory<sSpiritInfo*, int> >
//   CUtlVectorBase<ICLSearchFields*, CUtlMemory<ICLSearchFields*, int> >
//   CUtlVectorBase<CUtlMap<int, event_storage_t, short unsigned int, bool (*)(int const&, int const&)>, CUtlMemory<CUtlMap<i
//   CUtlVectorBase<comparison_test_t, CUtlMemory<comparison_test_t, int> >
//   CUtlVectorBase<AccumulatedEvent_t, CUtlMemory<AccumulatedEvent_t, int> >
//   CUtlVectorBase<CombatLogQuery*, CUtlMemory<CombatLogQuery*, int> >
//   CUtlVectorBase<challenge_template_t, CUtlMemory<challenge_template_t, int> >
//   CUtlVectorBase<CMsgServerToGCRerollPlayerChallenge, CUtlMemory<CMsgServerToGCRerollPlayerChallenge, int> >
//   CUtlVectorBase<challenge_instance_t, CUtlMemory<challenge_instance_t, int> >
//   CUtlVectorBase<challenge_quest_t*, CUtlMemory<challenge_quest_t*, int> >
//   CUtlVectorBase<const CDOTASubChallengeInfo*, CUtlMemory<const CDOTASubChallengeInfo*, int> >
//   CUtlVectorBase<SCombatLogGraphStats, CUtlMemory<SCombatLogGraphStats, int> >
//   CUtlVectorBase<CDOTA_RealtimeCombatAnalyzer::EventToEntry_t, CUtlMemoryFixedGrowable<CDOTA_RealtimeCombatAnalyzer::Event
//   CUtlVectorBase<ICLSearchFields::DynamicValueLookup_t, CUtlMemory<ICLSearchFields::DynamicValueLookup_t, int> >
//   CUtlVectorBase<CKillCamAbilityDamage*, CUtlMemory<CKillCamAbilityDamage*, int> >
//   CUtlVectorBase<CKillCamAttackerEntry*, CUtlMemory<CKillCamAttackerEntry*, int> >
//   CUtlVectorBase<sCombatLogUsageCount, CUtlMemory<sCombatLogUsageCount, int> >
//   CUtlVectorBase<PredictionIdRange_t, CUtlMemory<PredictionIdRange_t, int> >
//   CUtlVectorBase<CUtlHashMapLarge<unsigned int, CDOTACompendiumDefinition*>::HashBucket_t, CUtlMemory<CUtlHashMapLarge<uns
//   CUtlVectorBase<CreatureStateData_t, CUtlMemory<CreatureStateData_t, int> >
//   CUtlVectorBase<CreatureAbilityData_t, CUtlMemory<CreatureAbilityData_t, int> >
//   CUtlVectorBase<ItemDropData_t, CUtlMemory<ItemDropData_t, int> >
//   CUtlVectorBase<CPlayerGroup, CUtlMemory<CPlayerGroup, int> >
//   CUtlVectorBase<const CSkinChangeModifier*, CUtlMemory<const CSkinChangeModifier*, int> >
//   CUtlVectorBase<const CEntityScaleModifier*, CUtlMemory<const CEntityScaleModifier*, int> >
//   CUtlVectorBase<const CEntityHealthBarModifier*, CUtlMemory<const CEntityHealthBarModifier*, int> >
//   CUtlVectorBase<const CSoundModifier*, CUtlMemory<const CSoundModifier*, int> >
//   CUtlVectorBase<GCSDK::CProtoBufMsgMemoryPoolBase*, CUtlMemory<GCSDK::CProtoBufMsgMemoryPoolBase*, int> >
//   CUtlVectorBase<GCSDK::CSharedObject*, CUtlMemoryFixedGrowable<GCSDK::CSharedObject*, 1ul, int> >
//   CUtlVectorBase<CDOTAGameManager::LocalizedToScriptNameItem_t, CUtlMemory<CDOTAGameManager::LocalizedToScriptNameItem_t, 
//   CUtlVectorBase<CUtlHashMapLarge<int, KeyValues*>::HashBucket_t, CUtlMemory<CUtlHashMapLarge<int, KeyValues*>::HashBucket
//   CUtlVectorBase<CUtlHashMapLarge<int, CDOTAGameManager::HeroInfo_t>::HashBucket_t, CUtlMemory<CUtlHashMapLarge<int, CDOTA
//   CUtlVectorBase<CHandle<CDOTA_BaseNPC_Pet>, CUtlMemory<CHandle<CDOTA_BaseNPC_Pet>, int> >
//   CUtlVectorBase<CDOTAGamerules::ARDMReconnectInfo_t, CUtlMemory<CDOTAGamerules::ARDMReconnectInfo_t, int> >
//   CUtlVectorBase<CHeroesPerPlayer, CNetworkUtlVector_MemoryType<CHeroesPerPlayer, -1> >
//   CUtlVectorBase<CDOTAGameStateInfo, CUtlMemory<CDOTAGameStateInfo, int> >
//   CUtlVectorBase<CDOTAHeroPickStateInfo, CUtlMemory<CDOTAHeroPickStateInfo, int> >
//   CUtlVectorBase<CDOTA_ItemStockInfo, CNetworkUtlVector_MemoryType<CDOTA_ItemStockInfo, -1> >
//   CUtlVectorBase<CDOTA_AbilityDraftAbilityState, CNetworkUtlVector_MemoryType<CDOTA_AbilityDraftAbilityState, -1> >
//   CUtlVectorBase<ProjectionAbility_t, CUtlMemory<ProjectionAbility_t, int> >
//   CUtlVectorBase<HeroPickRecord_t, CUtlMemory<HeroPickRecord_t, int> >
//   CUtlVectorBase<HeroDeathRecord_t, CUtlMemory<HeroDeathRecord_t, int> >
//   CUtlVectorBase<VictoryPredictionRecord_t, CUtlMemory<VictoryPredictionRecord_t, int> >
//   CUtlVectorBase<MapCategoryPosition_t, CUtlMemory<MapCategoryPosition_t, int> >
//   CUtlVectorBase<CHandle<CDOTA_BaseNPC_Tower>, CUtlMemory<CHandle<CDOTA_BaseNPC_Tower>, int> >
//   CUtlVectorBase<CHandle<CDOTA_BaseNPC_Building>, CUtlMemory<CHandle<CDOTA_BaseNPC_Building>, int> >
//   CUtlVectorBase<CDOTA_ReconnectInfo, CUtlMemory<CDOTA_ReconnectInfo, int> >
//   CUtlVectorBase<GameChatLogEntry_t, CUtlMemory<GameChatLogEntry_t, int> >
//   CUtlVectorBase<CHeroStatueLiked, CNetworkUtlVector_MemoryType<CHeroStatueLiked, -1> >
//   CUtlVectorBase<CHandle<CIngameEvent_Base>, CNetworkUtlVector_MemoryType<CHandle<CIngameEvent_Base>, -1> >
//   CUtlVectorBase<AABB_t, CNetworkUtlVector_MemoryType<AABB_t, -1> >
//   CUtlVectorBase<CUtlVector<DOTAEventMysteryVOLine_t, CUtlMemory<DOTAEventMysteryVOLine_t, int> >, CUtlMemory<CUtlVector<D
//   CUtlVectorBase<SDOTAEventRewardDefinition, CUtlMemory<SDOTAEventRewardDefinition, int> >
//   CUtlVectorBase<SDOTAEventScoreRewardsDefinition, CUtlMemory<SDOTAEventScoreRewardsDefinition, int> >
//   CUtlVectorBase<const CMsgDOTASeasonRewards_Reward*, CUtlMemory<const CMsgDOTASeasonRewards_Reward*, int> >
//   CUtlVectorBase<SDOTAEventMysteryCategory, CUtlMemory<SDOTAEventMysteryCategory, int> >
//   CUtlVectorBase<DOTAEventMysteryVOGroup_t, CUtlMemory<DOTAEventMysteryVOGroup_t, int> >
//   CUtlVectorBase<const SDOTAEventActionDefinition*, CUtlMemory<const SDOTAEventActionDefinition*, int> >
//   CUtlVectorBase<DOTAEventMysteryVOLine_t, CUtlMemory<DOTAEventMysteryVOLine_t, int> >
//   CUtlVectorBase<CGridNavSectorPortalConnection, CUtlMemory<CGridNavSectorPortalConnection, int> >
//   CUtlVectorBase<CGridNavSectorPortal, CUtlMemory<CGridNavSectorPortal, int> >
//   CUtlVectorBase<float, CUtlMemoryFixed<float, 31ul> >
//   CUtlVectorBase<TempViewerInfo_t, CNetworkUtlVector_MemoryType<TempViewerInfo_t, -1> >
//   CUtlVectorBase<CDOTAHeatmapManager::Building_t, CUtlMemory<CDOTAHeatmapManager::Building_t, int> >
//   CUtlVectorBase<CDOTAGamerules::State_Enter_HERO_SELECTION()::PlayerMMRData, CUtlMemoryFixedGrowable<CDOTAGamerules::Stat
//   CUtlVectorBase<CUtlHashMapLarge<int, CUtlVector<CSteamID>*>::HashBucket_t, CUtlMemory<CUtlHashMapLarge<int, CUtlVector<C
//   CUtlVectorBase<CInfoPlayerStartDota*, CUtlMemory<CInfoPlayerStartDota*, int> >
//   CUtlVectorBase<CHeightCellGrid::HeightCell_t, CUtlMemory<CHeightCellGrid::HeightCell_t, int> >
//   CUtlVectorBase<IntersectionRecord_t, CUtlMemoryFixedGrowable<IntersectionRecord_t, 16ul, int> >
//   CUtlVectorBase<CGridNavOpenList::GridNavHeapEntry_t, CUtlMemoryFixedGrowable<CGridNavOpenList::GridNavHeapEntry_t, 2048u
//   CUtlVectorBase<CDOTA_Tree*, CUtlMemory<CDOTA_Tree*, int> >
//   CUtlVectorBase<VertexColorPos_t, CUtlMemory<VertexColorPos_t, int> >
//   CUtlVectorBase<char*, CUtlMemory<char*, int> >
//   CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >
//   CUtlVectorBase<CDOTAInGamePredictionGameSystem::PredictionInfo_t, CUtlMemory<CDOTAInGamePredictionGameSystem::Prediction
//   CUtlVectorBase<InGamePredictionData_t, CNetworkUtlVector_MemoryType<InGamePredictionData_t, -1> >
//   CUtlVectorBase<const CMsgDOTASeasonPredictions_InGamePrediction*, CUtlMemory<const CMsgDOTASeasonPredictions_InGamePredi
//   CUtlVectorBase<CDOTAInGamePredictionGameSystem::ActivePredictionDesc_t, CUtlMemory<CDOTAInGamePredictionGameSystem::Acti
//   CUtlVectorBase<const SDOTAEventActionDefinition*, CUtlMemory<const SDOTAEventActionDefinition*, int> >
//   CUtlVectorBase<int, CUtlMemory<int, int> >
//   CUtlVectorBase<QAngle, CUtlMemory<QAngle, int> >
//   CUtlVectorBase<IModifierFactory*, CUtlMemory<IModifierFactory*, int> >
//   CUtlVectorBase<CDOTA_BuffParticle, CUtlMemory<CDOTA_BuffParticle, int> >
//   CUtlVectorBase<CDOTA_ModifierManager*, CUtlMemory<CDOTA_ModifierManager*, int> >
//   CUtlVectorBase<CDOTA_BaseNPC_Hero*, CUtlMemory<CDOTA_BaseNPC_Hero*, int> >
//   CUtlVectorBase<DOTABuffStringIndexCache_t, CUtlMemory<DOTABuffStringIndexCache_t, int> >
//   CUtlVectorBase<CDOTA_Buff*, CUtlMemoryFixedGrowable<CDOTA_Buff*, 16ul, int> >
//   CUtlVectorBase<const CDOTA_Buff*, CUtlMemory<const CDOTA_Buff*, int> >
//   CUtlVectorBase<long long unsigned int, CUtlMemoryFixedGrowable<long long unsigned int, 32ul, int> >
//   CUtlVectorBase<CVProfOGSMode::CVProfSample, CUtlMemory<CVProfOGSMode::CVProfSample, int> >
//   CUtlVectorBase<CCompendiumDataFileTemplateHandler::templatekeytoremove_t, CUtlMemory<CCompendiumDataFileTemplateHandler:
//   CUtlVectorBase<CPlayerCardBonusAttributePacked::PlayerCardBonus_t, CUtlMemory<CPlayerCardBonusAttributePacked::PlayerCar
//   CUtlVectorBase<CDOTA_TrackingProjectileInfo, CUtlMemory<CDOTA_TrackingProjectileInfo, int> >
//   CUtlVectorBase<CDOTA_LinearProjectileInfo*, CUtlMemory<CDOTA_LinearProjectileInfo*, int> >
//   CUtlVectorBase<const CParticleControlPointModifier*, CUtlMemory<const CParticleControlPointModifier*, int> >
//   CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 256ul, int> >
//   CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16ul, int> >
//   CUtlVectorBase<CShortPathProbe*, CUtlMemory<CShortPathProbe*, int> >
//   CUtlVectorBase<CDOTAWearableItem*, CUtlMemory<CDOTAWearableItem*, int> >
//   CUtlVectorBase<CDOTA_BaseNPC_Pet*, CUtlMemory<CDOTA_BaseNPC_Pet*, int> >
//   CUtlVectorBase<CDOTA_TrackingProjectileInfo*, CUtlMemory<CDOTA_TrackingProjectileInfo*, int> >
//   CUtlVectorBase<target_t, CUtlMemory<target_t, int> >
//   CUtlVectorBase<float, CUtlMemoryFixed<float, 5ul> >
//   CUtlVectorBase<const CStrangeControlPointModifier*, CUtlMemory<const CStrangeControlPointModifier*, int> >
//   CUtlVectorBase<CDOTA_Response, CUtlMemory<CDOTA_Response, int> >
//   CUtlVectorBase<MatchEvent, CUtlMemory<MatchEvent, int> >
//   CUtlVectorBase<sPlayerSnapshot, CUtlMemory<sPlayerSnapshot, int> >
//   CUtlVectorBase<ReactiveTipDescription_t, CUtlMemory<ReactiveTipDescription_t, int> >
//   CUtlVectorBase<NPCSpeechData_t, CUtlMemory<NPCSpeechData_t, int> >
//   CUtlVectorBase<QuestLogEntry_t, CUtlMemory<QuestLogEntry_t, int> >
//   CUtlVectorBase<CDOTA_AutoBluePrint, CUtlMemory<CDOTA_AutoBluePrint, int> >
//   CUtlVectorBase<CDOTA_Item*, CUtlMemory<CDOTA_Item*, int> >
//   CUtlVectorBase<CHandle<CDOTA_Item>, CUtlMemory<CHandle<CDOTA_Item>, int> >
//   CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemoryFixedGrowable<CHandle<CBaseEntity>, 50ul, int> >
//   CUtlVectorBase<sHealthTime, CUtlMemoryFixedGrowable<sHealthTime, 64ul, int> >
//   CUtlVectorBase<CDOTA_Bot*, CUtlMemory<CDOTA_Bot*, int> >
//   CUtlVectorBase<sItemPickupInfo, CUtlMemory<sItemPickupInfo, int> >
//   CUtlVectorBase<sBotHumanRequest, CUtlMemory<sBotHumanRequest, int> >
//   CUtlVectorBase<sIncomingStun, CUtlMemory<sIncomingStun, int> >
//   CUtlVectorBase<CDOTA_Commander::sBotDebugEntity, CUtlMemory<CDOTA_Commander::sBotDebugEntity, int> >
//   CUtlVectorBase<sIllusionState, CUtlMemory<sIllusionState, int> >
//   CUtlVectorBase<sCreepHealthInfo, CUtlMemory<sCreepHealthInfo, int> >
//   CUtlVectorBase<AbilityDamageAndManaCost_t, CUtlMemory<AbilityDamageAndManaCost_t, int> >
//   CUtlVectorBase<char*, CUtlMemoryFixedGrowable<char*, 8ul, int> >
//   CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >
//   CUtlVectorBase<sGridLocation, CUtlMemory<sGridLocation, int> >
//   CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 32ul, int> >
//   CUtlVectorBase<sDamageEvent, CUtlMemory<sDamageEvent, int> >
//   CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemoryFixedGrowable<CHandle<CBaseEntity>, 16ul, int> >
//   CUtlVectorBase<CHandle<CDOTA_BaseNPC>, CUtlMemory<CHandle<CDOTA_BaseNPC>, int> >
//   CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >
//   CUtlVectorBase<CDOTA_BaseNPC_Hero::COtherHeroTalk::info_t, CUtlMemoryFixed<CDOTA_BaseNPC_Hero::COtherHeroTalk::info_t, 1
//   CUtlVectorBase<CDOTA_BaseNPC_Hero::sHeroDamageInfo, CUtlMemory<CDOTA_BaseNPC_Hero::sHeroDamageInfo, int> >
//   CUtlVectorBase<CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo, CUtlMemory<CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo, int>
//   CUtlVectorBase<sLoadoutItem, CUtlMemory<sLoadoutItem, int> >
//   CUtlVectorBase<sAcquireHistory, CUtlMemory<sAcquireHistory, int> >
//   CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp
//   CUtlVectorBase<const CBuffModifier*, CUtlMemory<const CBuffModifier*, int> >
//   CUtlVectorBase<char const*, CUtlMemoryFixedGrowable<char const*, 8ul, int> >
//   CUtlVectorBase<CDOTAPlayer*, CUtlMemory<CDOTAPlayer*, int> >
//   CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int> >
//   CUtlVectorBase<const CPetModifier*, CUtlMemory<const CPetModifier*, int> >
//   CUtlVectorBase<const CHexModelModifier*, CUtlMemory<const CHexModelModifier*, int> >
//   CUtlVectorBase<const CAbilityNameModifier*, CUtlMemory<const CAbilityNameModifier*, int> >
//   CUtlVectorBase<char, CUtlMemory<char, int> >
//   CUtlVectorBase<CMsgDOTARealtimeGameStats*, CUtlMemory<CMsgDOTARealtimeGameStats*, int> >
//   CUtlVectorBase<PlayerDisconnectInfo, CUtlMemory<PlayerDisconnectInfo, int> >
//   CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 8ul, int> >
//   CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 8ul, int> >
//   CUtlVectorBase<(anonymous namespace)::HeroEvents, CUtlMemory<(anonymous namespace)::HeroEvents, int> >
//   CUtlVectorBase<CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::SavedCooldown, CUtlMemoryFixedGrowable<CDOTA_Modifier_Face
//   CUtlVectorBase<CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::sDamageSources, CUtlMemory<CDOTA_Modifier_FacelessVoid_Time
//   CUtlVectorBase<const CCourierModifier*, CUtlMemory<const CCourierModifier*, int> >
//   CUtlVectorBase<const CCourierFlyingModifier*, CUtlMemory<const CCourierFlyingModifier*, int> >
//   CUtlVectorBase<CDOTA_Modifier_Warlock_FatalBonds*, CUtlMemory<CDOTA_Modifier_Warlock_FatalBonds*, int> >
//   CUtlVectorBase<sBounceInfo, CUtlMemory<sBounceInfo, int> >
//   CUtlVectorBase<NianDamageTaken_t, CUtlMemory<NianDamageTaken_t, int> >
//   CUtlVectorBase<CBaseEntity*, CUtlMemoryFixedGrowable<CBaseEntity*, 128ul, int> >
//   CUtlVectorBase<sGlaiveInfo, CUtlMemory<sGlaiveInfo, int> >
//   CUtlVectorBase<CDOTA_Modifier_Spectre_SpectralDaggerPath::sShadowPathLocation, CUtlMemory<CDOTA_Modifier_Spectre_Spectra
//   CUtlVectorBase<RemnantData_t, CUtlMemory<RemnantData_t, int> >
//   CUtlVectorBase<AttachedParticlesOnItem_t, CUtlMemory<AttachedParticlesOnItem_t, int> >
//   CUtlVectorBase<CDOTA_Modifier_Oracle_FalsePromise::sDamageSources, CUtlMemory<CDOTA_Modifier_Oracle_FalsePromise::sDamag
//   CUtlVectorBase<CDOTA_Modifier_Oracle_FalsePromise::sHealingSources, CUtlMemory<CDOTA_Modifier_Oracle_FalsePromise::sHeal
//   CUtlVectorBase<CDOTA_Modifier_Visage_SoulAssumption::sDamageEvent, CUtlMemory<CDOTA_Modifier_Visage_SoulAssumption::sDam
//   CUtlVectorBase<CDOTA_Modifier_Visage_GravekeepersCloak_Stack*, CUtlMemory<CDOTA_Modifier_Visage_GravekeepersCloak_Stack*
//   CUtlVectorBase<sSpiritDef, CUtlMemory<sSpiritDef, int> >
//   CUtlVectorBase<CDOTA_Modifier_Wisp_Spirits::ImpactRecord_t, CUtlMemory<CDOTA_Modifier_Wisp_Spirits::ImpactRecord_t, int>
//   CUtlVectorBase<const CCustomKillEffectModifier*, CUtlMemory<const CCustomKillEffectModifier*, int> >
//   CUtlVectorBase<CDOTA_TeleportTimer, CUtlMemory<CDOTA_TeleportTimer, int> >
//   CUtlVectorBase<CAssetModifier* (*)(KeyValues*, IEconItemSchema*, bool, int), CUtlMemory<CAssetModifier* (*)(KeyValues*, 
//   CUtlVectorBase<const CEconLootListDefinition*, CUtlMemory<const CEconLootListDefinition*, int> >
//   CUtlVectorBase<CDOTAItemDefinition::AdditionalHeroes_t, CUtlMemory<CDOTAItemDefinition::AdditionalHeroes_t, int> >
//   CUtlVectorBase<const CDOTAItemDefinition*, CUtlMemory<const CDOTAItemDefinition*, int> >
//   CUtlVectorBase<CUtlHashMapLarge<item_definition_index_t, CDOTAItemSchema::AssociatedLeagueInfo_t>::HashBucket_t, CUtlMem
//   CUtlVectorBase<CUtlHashMapLarge<unsigned int, CDOTAItemSchema::LeagueInfo_t>::HashBucket_t, CUtlMemory<CUtlHashMapLarge<
//   CUtlVectorBase<CUtlHashMapLarge<long long unsigned int, CUtlVector<item_definition_index_t>*>::HashBucket_t, CUtlMemory<
//   CUtlVectorBase<CEconItem::attribute_t, CUtlMemory<CEconItem::attribute_t, int> >
//   CUtlVectorBase<CEconItem::EquippedInstance_t, CUtlMemory<CEconItem::EquippedInstance_t, int> >
//   CUtlVectorBase<itemid_t, CUtlMemory<itemid_t, int> >
//   CUtlVectorBase<CEconTool_LeagueViewPass::ItemContribution_t, CUtlMemory<CEconTool_LeagueViewPass::ItemContribution_t, in
//   CUtlVectorBase<econ_item_description_line_t, CUtlMemory<econ_item_description_line_t, int> >
//   CUtlVectorBase<rolled_item_defs_t, CUtlMemory<rolled_item_defs_t, int> >
//   CUtlVectorBase<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >
//   CUtlVectorBase<ContainedItemInfo_t, CUtlMemory<ContainedItemInfo_t, int> >
//   CUtlVectorBase<const CEconItemAttributeDefinition*, CUtlMemory<const CEconItemAttributeDefinition*, int> >
//   CUtlVectorBase<AssetModifierUIInfo_t, CUtlMemory<AssetModifierUIInfo_t, int> >
//   CUtlVectorBase<const CSpeechModifier*, CUtlMemory<const CSpeechModifier*, int> >
//   CUtlVectorBase<CEconItemSetDefinition::itemset_attrib_t, CUtlMemory<CEconItemSetDefinition::itemset_attrib_t, int> >
//   CUtlVectorBase<GCSDK::CGCClient::ServiceCacheVersion_t, CUtlMemory<GCSDK::CGCClient::ServiceCacheVersion_t, int> >
//   CUtlVectorBase<CEconItemAttribute, CNetworkUtlVector_MemoryType<CEconItemAttribute, -1> >
//   CUtlVectorBase<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CountChance_t, CUtlMemory<CEconTool_ItemDynamicRecipe:
//   CUtlVectorBase<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t, CUtlMemory<CEconTool_ItemDyn
//   CUtlVectorBase<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent*, CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeCo
//   CUtlVectorBase<BonusLootInfo_t, CUtlMemory<BonusLootInfo_t, int> >
//   CUtlVectorBase<BundleSetupInfo_t, CUtlMemory<BundleSetupInfo_t, int> >
//   CUtlVectorBase<EconItemStyleInfo_t, CUtlMemory<EconItemStyleInfo_t, int> >
//   CUtlVectorBase<AssetModifierEntry_t, CUtlMemory<AssetModifierEntry_t, int> >
//   CUtlVectorBase<IEconItemTool*, CUtlMemory<IEconItemTool*, int> >
//   CUtlVectorBase<GCSDK::CSharedObject::SharedObjectInfo_t, CUtlMemory<GCSDK::CSharedObject::SharedObjectInfo_t, int> >
//   CUtlVectorBase<CNavGeneratorBase::WalkableSeedSpot, CUtlMemory<CNavGeneratorBase::WalkableSeedSpot, int> >
//   CUtlVectorBase<NavGenDataMarkup_t, CUtlMemory<NavGenDataMarkup_t, int> >
//   CUtlVectorBase<HexIndex_t, CUtlMemoryFixedGrowable<HexIndex_t, 1024ul, int> >
//   CUtlVectorBase<CPathCostRecorder::AreaTransition_t, CUtlMemory<CPathCostRecorder::AreaTransition_t, int> >
//   CUtlVectorBase<const CNavArea*, CUtlMemory<const CNavArea*, int> >
//   CUtlVectorBase<Extent, CUtlMemory<Extent, int> >
//   CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32ul, int> >
//   CUtlVectorBase<CNavObstacleEdge, CUtlMemoryFixed<CNavObstacleEdge, 4ul> >
//   CUtlVectorBase<CNavObstacleMgr::CNavObstacleSplitForest::SplitNodeRoot_t, CUtlMemory<CNavObstacleMgr::CNavObstacleSplitF
//   CUtlVectorBase<FloorInfo, CUtlMemory<FloorInfo, int> >
//   CUtlVectorBase<CMarkupVolumeTagged*, CUtlMemory<CMarkupVolumeTagged*, int> >
//   CUtlVectorBase<CZombieBorder*, CUtlMemory<CZombieBorder*, int> >
//   CUtlVectorBase<CNavVtxEdgeLink, CUtlMemory<CNavVtxEdgeLink, int> >
//   CUtlVectorBase<CNavNode*, CUtlMemory<CNavNode*, int> >
//   CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 24ul, int> >
//   CUtlVectorBase<CNavObstacle*, CUtlMemoryFixedGrowable<CNavObstacle*, 16ul, int> >
//   CUtlVectorBase<CNavObstacleEdge*, CUtlMemoryFixedGrowable<CNavObstacleEdge*, 64ul, int> >
//   CUtlVectorBase<CNavArea*, CUtlMemoryFixedGrowable<CNavArea*, 32ul, int> >
//   CUtlVectorBase<CNavArea*, CUtlMemoryFixedGrowable<CNavArea*, 16ul, int> >
//   CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 512ul, int> >
//   CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16ul, int> >
//   CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 45ul, int> >
//   CUtlVectorBase<CNavEdge, CUtlMemory<CNavEdge, int> >
//   CUtlVectorBase<NavDirType, CUtlMemory<NavDirType, int> >
//   CUtlVectorBase<CNavCrossMeshConnection, CUtlMemory<CNavCrossMeshConnection, int> >
//   CUtlVectorBase<CNavSplice::ExpansionConnection, CUtlMemory<CNavSplice::ExpansionConnection, int> >
//   CUtlVectorBase<NextBotManager::DebugFilter, CUtlMemory<NextBotManager::DebugFilter, int> >
//   CUtlVectorBase<CNextbotLodManager::SourceInfo_t, CUtlMemory<CNextbotLodManager::SourceInfo_t, int> >
//   CUtlVectorBase<CNextbotLodManager::NextBotDistSqPair, CUtlMemory<CNextbotLodManager::NextBotDistSqPair, int> >
//   CUtlVectorBase<const INextBot::NextBotDebugLineType*, CUtlMemory<const INextBot::NextBotDebugLineType*, int> >
//   CUtlVectorBase<INextBot::NextBotDebugLineType*, CUtlMemory<INextBot::NextBotDebugLineType*, int> >
//   CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >
//   CUtlVectorBase<void (*)(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >
//   CUtlVectorBase<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >
//   CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >
//   CUtlVectorBase<HSequence, CUtlMemory<HSequence, int> >
//   CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 16ul, int> >
//   CUtlVectorBase<CAppSystemDict::ModuleInfo_t, CUtlMemory<CAppSystemDict::ModuleInfo_t, int> >
//   CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >
//   CUtlVectorBase<void* (*)(char const*, int*), CUtlMemory<void* (*)(char const*, int*), int> >
//   CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >
//   CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >
//   CUtlVectorBase<CChoreoChannel*, CUtlMemory<CChoreoChannel*, int> >
//   CUtlVectorBase<CChoreoEvent*, CUtlMemory<CChoreoEvent*, int> >
//   CUtlVectorBase<CEventRelativeTag, CUtlMemory<CEventRelativeTag, int> >
//   CUtlVectorBase<CFlexTimingTag, CUtlMemory<CFlexTimingTag, int> >
//   CUtlVectorBase<CEventAbsoluteTag, CUtlMemory<CEventAbsoluteTag, int> >
//   CUtlVectorBase<CFlexAnimationTrack*, CUtlMemory<CFlexAnimationTrack*, int> >
//   CUtlVectorBase<CChoreoActor*, CUtlMemory<CChoreoActor*, int> >
//   CUtlVectorBase<const EntComponentInfo_t*, CUtlMemory<const EntComponentInfo_t*, int> >
//   CUtlVectorBase<UnserializeComponentInfo_t, CUtlMemoryFixedGrowable<UnserializeComponentInfo_t, 64ul, int> >
//   CUtlVectorBase<CUtlSymbolLarge, CUtlMemoryFixedGrowable<CUtlSymbolLarge, 128ul, int> >
//   CUtlVectorBase<CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod>::extractdata_t, CUtlMemory<CUtlTS
//   CUtlVectorBase<FGDFieldInfo_t, CUtlMemory<FGDFieldInfo_t, int> >
//   CUtlVectorBase<CEntitySystem::CreationInfo_t, CUtlMemory<CEntitySystem::CreationInfo_t, int> >
//   CUtlVectorBase<PostDataUpdateInfo_t, CUtlMemory<PostDataUpdateInfo_t, int> >
//   CUtlVectorBase<EntityDeletion_t, CUtlMemory<EntityDeletion_t, int> >
//   CUtlVectorBase<QueuedSetInPVSInfo_t, CUtlMemory<QueuedSetInPVSInfo_t, int> >
//   CUtlVectorBase<CUtlDelegate<void(bool)>, CUtlMemory<CUtlDelegate<void(bool)>, int> >
//   CUtlVectorBase<CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true>::StringPool_t*, CUtlMemory<CUtlSymbolTableLargeBase
//   CUtlVectorBase<CMemoryStack*, CUtlMemory<CMemoryStack*, int> >
//   CUtlVectorBase<CUtlAbstractDelegate, CUtlMemory<CUtlAbstractDelegate, int> >
//   CUtlVectorBase<const CSchemaClassInfo*, CUtlMemoryFixedGrowable<const CSchemaClassInfo*, 128ul, int> >
//   CUtlVectorBase<CEntityHandle, CUtlMemoryFixedGrowable<CEntityHandle, 64ul, int> >
//   CUtlVectorBase<EntityActivation_t, CUtlMemoryFixedGrowable<EntityActivation_t, 50ul, int> >
//   CUtlVectorBase<CEntityHandle, CUtlMemoryFixedGrowable<CEntityHandle, 50ul, int> >
//   CUtlVectorBase<SetInPVSInfo_t, CUtlMemory<SetInPVSInfo_t, int> >
//   CUtlVectorBase<EntityDeletion_t, CUtlMemoryFixedGrowable<EntityDeletion_t, 256ul, int> >
//   CUtlVectorBase<SpewEntityListSummary(const CConcreteEntityList*)::ClassCount_t, CUtlMemoryFixedGrowable<SpewEntityListSu
//   CUtlVectorBase<BuildFlattenedSerializerInfo_t, CUtlMemory<BuildFlattenedSerializerInfo_t, int> >
//   CUtlVectorBase<ScriptEntityIOOutputDesc_t, CUtlMemory<ScriptEntityIOOutputDesc_t, int> >
//   CUtlVectorBase<CResponseFileParser::ScriptEntry, CUtlMemory<CResponseFileParser::ScriptEntry, int> >
//   CUtlVectorBase<CResponseSystem::PendingCriterionRule, CUtlMemory<CResponseSystem::PendingCriterionRule, int> >
//   CUtlVectorBase<CResponseDict<Rule*, short unsigned int>*, CUtlMemoryFixed<CResponseDict<Rule*, short unsigned int>*, 2ul
//   CUtlVectorBase<CRR_Response, CUtlMemory<CRR_Response, int> >
//   CUtlVectorBase<rr2::CRule, CUtlMemory<rr2::CRule, int> >
//   CUtlVectorBase<rr2::CriterionStatic, CUtlMemoryConservative<rr2::CriterionStatic> >
//   CUtlVectorBase<rr2::CriterionLambda, CUtlMemoryConservative<rr2::CriterionLambda> >
//   CUtlVectorBase<int, CUtlMemoryFixed<int, 32ul> >
//   CUtlVectorBase<CFieldPathHuffmanEncoder::INode*, CUtlMemory<CFieldPathHuffmanEncoder::INode*, int> >
//   CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4ul, int> >
//   CUtlVectorBase<CKeyValues3Cluster*, CUtlMemoryFixedGrowable<CKeyValues3Cluster*, 8ul, int> >
//   CUtlVectorBase<KeyValues3*, CUtlMemory<KeyValues3*, int> >
//   CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8ul, int> >
//   CUtlVectorBase<KeyValues3*, CUtlMemoryFixedGrowable<KeyValues3*, 8ul, int> >
//   CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8ul, int> >
//   CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8ul, int> >
//   CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >
//   CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >
//   CUtlVectorBase<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedElementRefer
//   CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 1024ul, int> >
//   CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 256ul, int> >
//   CUtlVectorBase<char const*, CUtlMemoryFixedGrowable<char const*, 256ul, int> >
//   CUtlVectorBase<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimestampedDataCon
//   CUtlVectorBase<matrix3x4_t, CUtlMemoryFixedGrowable<matrix3x4_t, 128ul, int> >
//   CUtlVectorBase<CAnimEncodedFrames, CUtlMemory<CAnimEncodedFrames, int> >
//   CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >
//   CUtlVectorBase<CAnimDecoder, CUtlMemory<CAnimDecoder, int> >
//   CUtlVectorBase<CAnimFrameSegment, CUtlMemory<CAnimFrameSegment, int> >
//   CUtlVectorBase<CSeqAutoLayer, CUtlMemory<CSeqAutoLayer, int> >
//   CUtlVectorBase<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >
//   CUtlVectorBase<CSeqCmdLayer, CUtlMemory<CSeqCmdLayer, int> >
//   CUtlVectorBase<CSeqPoseSetting, CUtlMemory<CSeqPoseSetting, int> >
//   CUtlVectorBase<CUtlStringExternalizable, CUtlMemory<CUtlStringExternalizable, int> >
//   CUtlVectorBase<CSeqS1SeqDesc, CUtlMemory<CSeqS1SeqDesc, int> >
//   CUtlVectorBase<CSeqSynthAnimDesc, CUtlMemory<CSeqSynthAnimDesc, int> >
//   CUtlVectorBase<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >
//   CUtlVectorBase<CSeqBoneMaskList, CUtlMemory<CSeqBoneMaskList, int> >
//   CUtlVectorBase<CSeqPoseParamDesc, CUtlMemory<CSeqPoseParamDesc, int> >
//   CUtlVectorBase<CBoneFlexDriverControl, CUtlMemory<CBoneFlexDriverControl, int> >
//   CUtlVectorBase<CModelExtPart, CUtlMemory<CModelExtPart, int> >
//   CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >
//   CUtlVectorBase<CBoneFlexDriver, CUtlMemory<CBoneFlexDriver, int> >
//   CUtlVectorBase<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >
//   CUtlVectorBase<CUtlVector<DefaultMaterialGroupIndex_t, CUtlMemory<DefaultMaterialGroupIndex_t, int> >, CUtlMemory<CUtlVe
//   CUtlVectorBase<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >
//   CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >
//   CUtlVectorBase<CAnimUser, CUtlMemory<CAnimUser, int> >
//   CUtlVectorBase<CAnimIKChain, CUtlMemory<CAnimIKChain, int> >
//   CUtlVectorBase<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >
//   CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >
//   CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >
//   CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_ptr
//   CUtlVectorBase<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> >
//   CUtlVectorBase<ChannelElementWeights_t, CUtlMemory<ChannelElementWeights_t, int> >
//   CUtlVectorBase<const CAnimationGroupResource*, CUtlMemory<const CAnimationGroupResource*, int> >
//   CUtlVectorBase<CAnimDecodeSwizzle, CUtlMemory<CAnimDecodeSwizzle, int> >
//   CUtlVectorBase<ResourceId_t, CUtlMemory<ResourceId_t, int> >
//   CUtlVectorBase<CAnimRetarget, CUtlMemory<CAnimRetarget, int> >
//   CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >
//   CUtlVectorBase<CSeqGroupInstance, CUtlMemory<CSeqGroupInstance, int> >
//   CUtlVectorBase<ISequence*, CUtlMemory<ISequence*, int> >
//   CUtlVectorBase<PoseParamDesc_t, CUtlMemory<PoseParamDesc_t, int> >
//   CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::
//   CUtlVectorBase<SeqInstanceMap_t, CUtlMemory<SeqInstanceMap_t, int> >
//   CUtlVectorBase<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >
//   CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElement
//   CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >
//   CUtlVectorBase<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement
//   CUtlVectorBase<UserDataElementMap_t, CUtlMemory<UserDataElementMap_t, int> >
//   CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>
//   CUtlVectorBase<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> >
//   CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >
//   CUtlVectorBase<AnimBounds_t, CUtlMemory<AnimBounds_t, int> >
//   CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >
//   CUtlVectorBase<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int> >
//   CUtlVectorBase<DefaultMaterialGroupIndex_t, CUtlMemory<DefaultMaterialGroupIndex_t, int> >
//   CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, in
//   CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, true
//   CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, true, f
//   CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, 
//   CUtlVectorBase<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >
//   CUtlVectorBase<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >
//   CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >
//   CUtlVectorBase<CHitBoxSet, CUtlMemory<CHitBoxSet, int> >
//   CUtlVectorBase<RenderInputLayoutField_t, CUtlMemoryFixedGrowable<RenderInputLayoutField_t, 4ul, int> >
//   CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1ul, int>
//   CUtlVectorBase<TraceVertex_t, CUtlMemory<TraceVertex_t, int> >
//   CUtlVectorBase<CMorphConstraint::BoneParentPair_t, CUtlMemory<CMorphConstraint::BoneParentPair_t, int> >
//   CUtlVectorBase<CActivityModifierWeight, CUtlMemory<CActivityModifierWeight, int> >
//   CUtlVectorBase<EventList_t, CUtlMemory<EventList_t, int> >
//   CUtlVectorBase<const CFlexRule*, CUtlMemory<const CFlexRule*, int> >
//   CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlMemory<CUtlHashDict<const CMorphDa
//   CUtlVectorBase<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlMemory<CUtlHashDict<const CMorphData*, false,
//   CUtlVectorBase<CJointIndexData, CUtlMemory<CJointIndexData, int> >
//   CUtlVectorBase<CPhysSurfaceProperties*, CUtlMemory<CPhysSurfaceProperties*, int> >
//   CUtlVectorBase<RnHull_t*, CUtlMemory<RnHull_t*, int> >
//   CUtlVectorBase<const CPhysAggregateData*, CUtlMemory<const CPhysAggregateData*, int> >
//   CUtlVectorBase<CFeModelCombiner::Model_t, CUtlMemoryFixedGrowable<CFeModelCombiner::Model_t, 8ul, int> >
//   CUtlVectorBase<CSmartPtr<CPhysAggregateData, CRefCountAccessor>, CUtlMemory<CSmartPtr<CPhysAggregateData, CRefCountAcces
//   CUtlVectorBase<SplitAggregateData(const CPhysAggregateData*, uint, CUtlVector<CSmartPtr<CPhysAggregateData> >*)::PartDes
//   CUtlVectorBase<short unsigned int, CUtlMemoryFixedGrowable<short unsigned int, 16ul, int> >
//   CUtlVectorBase<RnCollisionAttr_t, CUtlMemoryFixedGrowable<RnCollisionAttr_t, 32ul, int> >
//   CUtlVectorBase<CExpressionCalculator::Token_t, CUtlMemoryFixedGrowable<CExpressionCalculator::Token_t, 32ul, int> >
//   CUtlVectorBase<CFeModelCombiner::CollectFitMatrices()::PerModel_t, CUtlMemoryFixedGrowable<CFeModelCombiner::CollectFitM
//   CUtlVectorBase<CMeshDisjointSetPartition::Part_t, CUtlMemory<CMeshDisjointSetPartition::Part_t, int> >
//   CUtlVectorBase<float const*, CUtlMemory<float const*, int> >
//   CUtlVectorBase<CHullHalfEdge*, CUtlMemoryFixedGrowable<CHullHalfEdge*, 256ul, int> >
//   CUtlVectorBase<CHullTri*, CUtlMemoryFixedGrowable<CHullTri*, 256ul, int> >
//   CUtlVectorBase<float const*, CUtlMemoryFixedGrowable<float const*, 256ul, int> >
//   CUtlVectorBase<CHullTri*, CUtlMemoryFixedGrowable<CHullTri*, 64ul, int> >
//   CUtlVectorBase<VPlane, CUtlMemory<VPlane, int> >
//   CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >
//   CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >
//   CUtlVectorBase<CVertexKDNode, CUtlMemory<CVertexKDNode, int> >
//   CUtlVectorBase<float const*, CUtlBlockMemory<float const*, int> >
//   CUtlVectorBase<GLViewLine_t, CUtlMemory<GLViewLine_t, int> >
//   CUtlVectorBase<GLViewPoly_t, CUtlMemory<GLViewPoly_t, int> >
//   CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >
//   CUtlVectorBase<const CSchemaType*, CUtlMemory<const CSchemaType*, int> >
//   CUtlVectorBase<float const*, CUtlMemoryFixedGrowable<float const*, 64ul, int> >
//   CUtlVectorBase<CMesh, CUtlMemory<CMesh, int> >
//   CUtlVectorBase<VertAndBone_t, CUtlMemory<VertAndBone_t, int> >
//   CUtlVectorBase<Vector, CUtlMemory<Vector, int> >
//   CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >
//   CUtlVectorBase<VecDouble3, CUtlMemory<VecDouble3, int> >
//   CUtlVectorBase<CNavGenPolyConn, CUtlMemoryFixedGrowable<CNavGenPolyConn, 8ul, int> >
//   CUtlVectorBase<CNavArea*, CUtlMemoryFixedGrowable<CNavArea*, 64ul, int> >
//   CUtlVectorBase<CNavArea*, CUtlMemoryFixed<CNavArea*, 3ul> >
//   CUtlVectorBase<OneWayLink_t, CUtlMemoryFixedGrowable<OneWayLink_t, 512ul, int> >
//   CUtlVectorBase<NavGenProperty_t, CUtlMemory<NavGenProperty_t, int> >
//   CUtlVectorBase<NavGenLadder_t, CUtlMemory<NavGenLadder_t, int> >
//   CUtlVectorBase<NavGenMarkup_t, CUtlMemory<NavGenMarkup_t, int> >
//   CUtlVectorBase<CNavGenPoly, CUtlMemory<CNavGenPoly, int> >
//   CUtlVectorBase<CUtlVector<CNavNode*, CUtlMemory<CNavNode*, int> >, CUtlMemory<CUtlVector<CNavNode*, CUtlMemory<CNavNode*
//   CUtlVectorBase<NavCellCoord_t, CUtlMemoryFixedGrowable<NavCellCoord_t, 1024ul, int> >
//   CUtlVectorBase<NavGenAreaDebug_t, CUtlMemory<NavGenAreaDebug_t, int> >
//   CUtlVectorBase<NavGenRecastDebugStage_t::Vertex_t, CUtlMemory<NavGenRecastDebugStage_t::Vertex_t, int> >
//   CUtlVectorBase<NavGenRecastDebugStage_t, CUtlMemory<NavGenRecastDebugStage_t, int> >
//   CUtlVectorBase<NavGenDebugStage_t, CUtlMemory<NavGenDebugStage_t, int> >
//   CUtlVectorBase<CMsgSOCacheSubscribed*, CUtlMemory<CMsgSOCacheSubscribed*, int> >
//   CUtlVectorBase<GCSDK::CGCClient::PartialSOCache_t::Msg_t, CUtlMemory<GCSDK::CGCClient::PartialSOCache_t::Msg_t, int> >
//   CUtlVectorBase<GCSDK::ISharedObjectListener*, CUtlMemory<GCSDK::ISharedObjectListener*, int> >
//   CUtlVectorBase<GCSDK::SOID_t, CUtlMemory<GCSDK::SOID_t, int> >
//   CUtlVectorBase<GCSDK::CGCClientSharedObjectCache*, CUtlMemoryFixedGrowable<GCSDK::CGCClientSharedObjectCache*, 1ul, int>
//   CUtlVectorBase<GCSDK::CLock*, CUtlMemoryFixedGrowable<GCSDK::CLock*, 2ul, int> >
//   CUtlVectorBase<GCSDK::IMsgNetPacket*, CUtlMemoryFixedGrowable<GCSDK::IMsgNetPacket*, 1ul, int> >
//   CUtlVectorBase<GCSDK::WaitAnalysisNode_t*, CUtlMemory<GCSDK::WaitAnalysisNode_t*, int> >
//   CUtlVectorBase<CUtlHashMapLarge<unsigned int, const GCSDK::JobType_t*>::HashBucket_t, CUtlMemory<CUtlHashMapLarge<unsign
//   CUtlVectorBase<CUtlHashMapLarge<char const*, const GCSDK::JobType_t*, CaseSensitiveStrEquals, MurmurHash3ConstCharPtr>::
//   CUtlVectorBase<GCSDK::CGCReportPrinter::Column_t, CUtlMemory<GCSDK::CGCReportPrinter::Column_t, int> >
//   CUtlVectorBase<CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t>*, CUtlMemory<CCopyableUtlVector<GCSDK::CGCReportPr
//   CUtlVectorBase<GCSDK::CGCReportPrinter::Variant_t, CUtlMemory<GCSDK::CGCReportPrinter::Variant_t, int> >
//   CUtlVectorBase<google::protobuf::Message*, CUtlMemory<google::protobuf::Message*, int> >
//   CUtlVectorBase<GCSDK::CSharedObjectTypeCache*, CUtlMemory<GCSDK::CSharedObjectTypeCache*, int> >
//   CUtlVectorBase<GCSDK::CSharedObject*, CUtlMemory<GCSDK::CSharedObject*, int> >
//   CUtlVectorBase<GCSDK::CWorkItem*, CUtlMemory<GCSDK::CWorkItem*, int> >
//   CUtlVectorBase<GCSDK::CWorkThread*, CUtlMemory<GCSDK::CWorkThread*, int> >
//   CUtlVectorBase<GCSDK::CGCReportPrinter::PrintReport(GCSDK::CGCEmitGroup&, uint32, bool)::Summary_t, CUtlMemory<GCSDK::CG
//   CUtlVectorBase<CFoW_1DZ::TILEINFO, CUtlMemory<CFoW_1DZ::TILEINFO, int> >
//   CUtlVectorBase<CFoW_1DZ::ROWINFO, CUtlMemory<CFoW_1DZ::ROWINFO, int> >
//   CUtlVectorBase<double, CUtlMemory<double, int> >
//   CUtlVectorBase<float const*, CUtlMemoryFixed<float const*, 64ul> >
//   CUtlVectorBase<CClassVisitInfo::FieldInfo_t, CUtlMemory<CClassVisitInfo::FieldInfo_t, int> >

// CUtlVector: 807 more instantiations (full list in INDEX.tsv)
//   CUtlVector<void*, CUtlMemory<void*, int> >
//   CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> >
//   CUtlVector<const CSchemaEnumInfo*, CUtlMemory<const CSchemaEnumInfo*, int> >
//   CUtlVector<char const**, CUtlMemory<char const**, int> >
//   CUtlVector<void (**)(void*), CUtlMemory<void (**)(void*), int> >
//   CUtlVector<bool (**)(void*, char const*), CUtlMemory<bool (**)(void*, char const*), int> >
//   CUtlVector<void (**)(void*, CUtlString*), CUtlMemory<void (**)(void*, CUtlString*), int> >
//   CUtlVector<SerializeInfo_t*, CUtlMemory<SerializeInfo_t*, int> >
//   CUtlVector<DynamicSerializeInfo_t*, CUtlMemory<DynamicSerializeInfo_t*, int> >
//   CUtlVector<void (**)(IPropertyEditDomain*, const PropEdSpecificAttr_t&, CUtlVector<CUtlString, CUtlMemory<CUtlString, in
//   CUtlVector<int*, CUtlMemory<int*, int> >
//   CUtlVector<PropertyClassAsStringFuncs_t*, CUtlMemory<PropertyClassAsStringFuncs_t*, int> >
//   CUtlVector<void (**)(void*, void*), CUtlMemory<void (**)(void*, void*), int> >
//   CUtlVector<int, CUtlMemory<int, int> >
//   CUtlVector<CFieldPathHuffmanEncoder::composed_t, CUtlMemory<CFieldPathHuffmanEncoder::composed_t, int> >
//   CUtlVector<NetworkOverride_t*, CUtlMemory<NetworkOverride_t*, int> >
//   CUtlVector<NetworkUserGroupProxyInfo_t**, CUtlMemory<NetworkUserGroupProxyInfo_t**, int> >
//   CUtlVector<NetworkVarDecl_t*, CUtlMemory<NetworkVarDecl_t*, int> >
//   CUtlVector<float*, CUtlMemory<float*, int> >
//   CUtlVector<void (**)(void*, void*, void*, CSendProxyRecipients*, int), CUtlMemory<void (**)(void*, void*, void*, CSendPr
//   CUtlVector<long long unsigned int*, CUtlMemory<long long unsigned int*, int> >
//   CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >
//   CUtlVector<EntityIOConnectionDescFat_t, CUtlMemory<EntityIOConnectionDescFat_t, int> >
//   CUtlVector<ScriptFunctionBinding_t, CUtlMemory<ScriptFunctionBinding_t, int> >
//   CUtlVector<ComponentUnserializerPtrToClassInfo_t, CUtlMemory<ComponentUnserializerPtrToClassInfo_t, int> >
//   CUtlVector<ComponentPostUnserializerInfo_t, CUtlMemory<ComponentPostUnserializerInfo_t, int> >
//   CUtlVector<EntOutput_t, CUtlMemory<EntOutput_t, int> >
//   CUtlVector<ComponentKeyField_t*, CUtlMemory<ComponentKeyField_t*, int> >
//   CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >
//   CUtlVector<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >
//   CUtlVector<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >
//   CUtlVector<CEntityClass::ClassInputInfo_t, CUtlMemory<CEntityClass::ClassInputInfo_t, int> >
//   CUtlVector<CEntityClass::ClassOutputInfo_t, CUtlMemory<CEntityClass::ClassOutputInfo_t, int> >
//   CUtlVector<bool, CUtlMemory<bool, int> >
//   CUtlVector<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> >
//   CUtlVector<const EntityIOOutputDesc_t*, CUtlMemory<const EntityIOOutputDesc_t*, int> >
//   CUtlVector<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >
//   CUtlVector<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >
//   CUtlVector<CHitBox, CUtlMemory<CHitBox, int> >
//   CUtlVector<CBaseConstraint*, CUtlMemory<CBaseConstraint*, int> >
//   CUtlVector<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >
//   CUtlVector<CFlexOp, CUtlMemory<CFlexOp, int> >
//   CUtlVector<float, CUtlMemory<float, int> >
//   CUtlVector<CMorphBundleData, CUtlMemory<CMorphBundleData, int> >
//   CUtlVector<CMorphRectData, CUtlMemory<CMorphRectData, int> >
//   CUtlVector<MorphBundleType_t, CUtlMemory<MorphBundleType_t, int> >
//   CUtlVector<CMorphData, CUtlMemory<CMorphData, int> >
//   CUtlVector<CFlexDesc, CUtlMemory<CFlexDesc, int> >
//   CUtlVector<CFlexController, CUtlMemory<CFlexController, int> >
//   CUtlVector<CFlexRule, CUtlMemory<CFlexRule, int> >
//   CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >
//   CUtlVector<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >
//   CUtlVector<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >
//   CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >
//   CUtlVector<TintedCachedSlotInfo_t, CUtlMemory<TintedCachedSlotInfo_t, int> >
//   CUtlVector<Vector, CUtlMemory<Vector, int> >
//   CUtlVector<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, CUtlMemory<CUtlVector<CCharRenderGeom
//   CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >
//   CUtlVector<KeyValues*, CUtlMemory<KeyValues*, int> >
//   CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >
//   CUtlVector<ValidationResult_t::ValidationResultEntry_t, CUtlMemory<ValidationResult_t::ValidationResultEntry_t, int> >
//   CUtlVector<CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >, CUtlMemory<CUtlVector<CUtlStringToken, CUtlMe
//   CUtlVector<IPrerequisite*, CUtlMemory<IPrerequisite*, int> >
//   CUtlVector<HResourceManifest__*, CUtlMemory<HResourceManifest__*, int> >
//   CUtlVector<char const*, CUtlMemory<char const*, int> >
//   CUtlVector<ParticleOperatorId_t*, CUtlMemory<ParticleOperatorId_t*, int> >
//   CUtlVector<PropEdIndirectionType_t, CUtlMemory<PropEdIndirectionType_t, int> >
//   CUtlVector<PropEdCustomCommand_t, CUtlMemory<PropEdCustomCommand_t, int> >
//   CUtlVector<PropEdAttributeInfo_t, CUtlMemory<PropEdAttributeInfo_t, int> >
//   CUtlVector<PropEdSpecificElement_t, CUtlMemory<PropEdSpecificElement_t, int> >
//   CUtlVector<CUtlSignaller_Base*, CUtlMemory<CUtlSignaller_Base*, int> >
//   CUtlVector<RenderAttrGatherInfo_t, CUtlMemory<RenderAttrGatherInfo_t, int> >
//   CUtlVector<RenderAttrUpdater_t*, CUtlMemory<RenderAttrUpdater_t*, int> >
//   CUtlVector<HGameResourceManifest__*, CUtlMemory<HGameResourceManifest__*, int> >
//   CUtlVector<CPhysAggregateData*, CUtlMemory<CPhysAggregateData*, int> >
//   CUtlVector<RnIteration_t, CUtlMemory<RnIteration_t, int> >
//   CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t
//   CUtlVector<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHa
//   CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> >
//   CUtlVector<CEventRegister*, CUtlMemory<CEventRegister*, int> >
//   CUtlVector<MetaExposeToScript_t*, CUtlMemory<MetaExposeToScript_t*, int> >
//   CUtlVector<attachedparticlecontrolpoint_t, CUtlMemory<attachedparticlecontrolpoint_t, int> >
//   CUtlVector<const CAssetModifier*, CUtlMemory<const CAssetModifier*, int> >
//   CUtlVector<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >
//   CUtlVector<lootlist_attrib_t*, CUtlMemory<lootlist_attrib_t*, int> >
//   CUtlVector<autograph_t::level_t, CUtlMemory<autograph_t::level_t, int> >
//   CUtlVector<CEconItemDefinition*, CUtlMemory<CEconItemDefinition*, int> >
//   CUtlVector<static_attrib_t, CUtlMemory<static_attrib_t, int> >
//   CUtlVector<attr_type_t, CUtlMemory<attr_type_t, int> >
//   CUtlVector<CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*>::HashBucket_t, CUtlMemory<CUtlHashMapLarge<it
//   CUtlVector<CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*>::HashBucket_t, CUtlMemory<CUtlHashMapLarge<CEconSch
//   CUtlVector<CTimedItemRewardDefinition, CUtlMemory<CTimedItemRewardDefinition, int> >
//   CUtlVector<CEconItemSchema::EquipRegion, CUtlMemory<CEconItemSchema::EquipRegion, int> >
//   CUtlVector<CEconColorDefinition*, CUtlMemory<CEconColorDefinition*, int> >
//   CUtlVector<CItemLevelingDefinition, CUtlMemory<CItemLevelingDefinition, int> >
//   CUtlVector<CThreadSafeMemoryPool::BlockSet_t, CUtlMemory<CThreadSafeMemoryPool::BlockSet_t, int> >
//   CUtlVector<CThreadSafeMultiMemoryPool::MemPoolRecord_t, CUtlMemory<CThreadSafeMultiMemoryPool::MemPoolRecord_t, int> >
//   CUtlVector<CThreadSafeMultiMemoryPool::MemPoolRecord_t*, CUtlMemory<CThreadSafeMultiMemoryPool::MemPoolRecord_t*, int> >
//   CUtlVector<short int*, CUtlMemory<short int*, int> >
//   CUtlVector<GCSDK::MsgInfo_t, CUtlMemory<GCSDK::MsgInfo_t, int> >
//   CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >
//   CUtlVector<CAttributeManager::cached_attribute_float_t, CUtlMemory<CAttributeManager::cached_attribute_float_t, int> >
//   CUtlVector<IClientMessageDelegateHook*, CUtlMemory<IClientMessageDelegateHook*, int> >
//   CUtlVector<CKnownEntity, CUtlMemory<CKnownEntity, int> >
//   CUtlVector<CDOTA_AttackRecord*, CUtlMemory<CDOTA_AttackRecord*, int> >
//   CUtlVector<sSharedCooldownInfo, CUtlMemory<sSharedCooldownInfo, int> >
//   CUtlVector<CDOTA_ModifierManager::BuffModifier_t, CUtlMemory<CDOTA_ModifierManager::BuffModifier_t, int> >
//   CUtlVector<modifierfunction, CUtlMemory<modifierfunction, int> >
//   CUtlVector<CDOTA_ScriptedSpawner::scripted_moveto_t, CUtlMemory<CDOTA_ScriptedSpawner::scripted_moveto_t, int> >
//   CUtlVector<DataTeamPlayer_t, CNetworkUtlVector_MemoryType<DataTeamPlayer_t, -1> >
//   CUtlVector<IResponseSystem*, CUtlMemory<IResponseSystem*, int> >
//   CUtlVector<CMultiplayRules::ResponseRules_t, CUtlMemory<CMultiplayRules::ResponseRules_t, int> >
//   CUtlVector<VoiceCommandMenuItem_t, CUtlMemory<VoiceCommandMenuItem_t, int> >
//   CUtlVector<CUtlVector<VoiceCommandMenuItem_t, CUtlMemory<VoiceCommandMenuItem_t, int> >, CUtlMemory<CUtlVector<VoiceComm
//   CUtlVector<PlayerResourcePlayerTeamData_t, CNetworkUtlVector_MemoryType<PlayerResourcePlayerTeamData_t, -1> >
//   CUtlVector<PlayerResourcePlayerData_t, CNetworkUtlVector_MemoryType<PlayerResourcePlayerData_t, -1> >
//   CUtlVector<PlayerResourceBroadcasterData_t, CNetworkUtlVector_MemoryType<PlayerResourceBroadcasterData_t, -1> >
//   CUtlVector<std::pair<item_definition_index_t, itemid_t>, CUtlMemory<std::pair<item_definition_index_t, itemid_t>, int> >
//   CUtlVector<sPendingTreeRemoval, CUtlMemory<sPendingTreeRemoval, int> >
//   CUtlVector<PurchasedItem_t, CUtlMemory<PurchasedItem_t, int> >
//   CUtlVector<TimedBalanceRecord_t, CUtlMemory<TimedBalanceRecord_t, int> >
//   CUtlVector<TimedKillEvent_t, CUtlMemory<TimedKillEvent_t, int> >
//   CUtlVector<CHandle<CDOTA_Unit_Courier>, CUtlMemory<CHandle<CDOTA_Unit_Courier>, int> >
//   CUtlVector<DamageShareEvent_t, CUtlMemory<DamageShareEvent_t, int> >
//   CUtlVector<CInventoryManager::inventories_t, CUtlMemory<CInventoryManager::inventories_t, int> >
//   CUtlVector<CDOTA_PlayerChallengeInfo, CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo, 24> >
//   CUtlVector<CDOTA_CombatLogQueryProgress, CNetworkUtlVector_MemoryType<CDOTA_CombatLogQueryProgress, -1> >
//   CUtlVector<CDOTASubChallengeInfo, CNetworkUtlVector_MemoryType<CDOTASubChallengeInfo, -1> >
//   CUtlVector<int, CNetworkUtlVector_MemoryType<int, -1> >
//   CUtlVector<CSteamID, CUtlMemory<CSteamID, int> >
//   CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> >
//   CUtlVector<CUtlSymbolLarge, CNetworkUtlVector_MemoryType<CUtlSymbolLarge, -1> >
//   CUtlVector<CHandle<CPointClientUIWorldPanel>, CUtlMemory<CHandle<CPointClientUIWorldPanel>, int> >
//   CUtlVector<prevent_interaction_t, CUtlMemory<prevent_interaction_t, int> >
//   CUtlVector<CHandle<CBaseVRHandAttachment>, CNetworkUtlVector_MemoryType<CHandle<CBaseVRHandAttachment>, -1> >
//   CUtlVector<ResourceManifestDesc_t*, CUtlMemory<ResourceManifestDesc_t*, int> >
//   CUtlVector<CBaseAchievement*, CUtlMemory<CBaseAchievement*, int> >
//   CUtlVector<CacheOptimizedKDNode_t, CUtlMemory<CacheOptimizedKDNode_t, int> >
//   CUtlVector<LightDesc_t, CUtlMemory<LightDesc_t, int> >
//   CUtlVector<InstancedRayTracingEnvironmentBVHNode_t, CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int> >
//   CUtlVector<InstancedRayTracingEnvironmentReference_t*, CUtlMemory<InstancedRayTracingEnvironmentReference_t*, int> >
//   CUtlVector<RayTracingEnvironment*, CUtlMemory<RayTracingEnvironment*, int> >
//   CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >
//   CUtlVector<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t*, CUtlMemory<CWorkListTransien
//   CUtlVector<SceneObjectUpdaterHandle_t__*, CUtlMemory<SceneObjectUpdaterHandle_t__*, int> >
//   CUtlVector<__vector(4) float, CUtlMemory<__vector(4) float, int> >
//   CUtlVector<datarun_t, CUtlMemory<datarun_t, int> >
//   CUtlVector<typedescription_t, CUtlMemory<typedescription_t, int> >
//   CUtlVector<customfield_t, CUtlMemory<customfield_t, int> >
//   CUtlVector<SpawnGroupConnectionInfo_t, CUtlMemory<SpawnGroupConnectionInfo_t, int> >
//   CUtlVector<IPVS*, CUtlMemory<IPVS*, int> >
//   CUtlVector<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >
//   CUtlVector<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >
//   CUtlVector<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >
//   CUtlVector<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >
//   CUtlVector<CTSQueue<CNetworkFieldChangedEventQueueChangeInfo_t, false>, CUtlMemory<CTSQueue<CNetworkFieldChangedEventQue
//   CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int> >
//   CUtlVector<LocalFlexController_t, CUtlMemory<LocalFlexController_t, int> >
//   CUtlVector<float, CNetworkUtlVector_MemoryType<float, -1> >
//   CUtlVector<typedescription_t*, CUtlMemory<typedescription_t*, int> >
//   CUtlVector<CExpressionSample, CUtlMemory<CExpressionSample, int> >
//   CUtlVector<CBezierHandlesForSample, CUtlMemory<CBezierHandlesForSample, int> >
//   CUtlVector<CHandle<CLightEntity>, CUtlMemory<CHandle<CLightEntity>, int> >
//   CUtlVector<CUtlPair<CUtlSymbol, CUtlSymbol>, CUtlMemory<CUtlPair<CUtlSymbol, CUtlSymbol>, int> >
//   CUtlVector<URLArgument_t, CUtlMemory<URLArgument_t, int> >
//   CUtlVector<AddedGameSystem_t, CUtlMemory<AddedGameSystem_t, int> >
//   CUtlVector<IGameSystem*, CUtlMemory<IGameSystem*, int> >
//   CUtlVector<CUtlVector<IGameSystem*, CUtlMemory<IGameSystem*, int> >, CUtlMemory<CUtlVector<IGameSystem*, CUtlMemory<IGam
//   CUtlVector<IGameSystem::FactoryInfo_t, CUtlMemory<IGameSystem::FactoryInfo_t, int> >
//   CUtlVector<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInfo, int> >
//   CUtlVector<CHintMessage*, CUtlMemory<CHintMessage*, int> >
//   CUtlVector<CHandle<CInfoLadderDismount>, CUtlMemory<CHandle<CInfoLadderDismount>, int> >
//   CUtlVector<CFuncLadder*, CUtlMemory<CFuncLadder*, int> >
//   CUtlVector<CAnimationLayer, CUtlMemory<CAnimationLayer, int> >
//   CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> >
//   CUtlVector<short int, CUtlMemory<short int, int> >
//   CUtlVector<BoneHashPairing_t, CUtlMemory<BoneHashPairing_t, int> >
//   CUtlVector<CUtlVector<BoneHashPairing_t, CUtlMemory<BoneHashPairing_t, int> >, CUtlMemory<CUtlVector<BoneHashPairing_t, 
//   CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >
//   CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >
//   CUtlVector<CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int> >::ConnectedSlot_t, CUtlMemory<CUtlSi
//   CUtlVector<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> >*, CUtlMemory<CUtlSig
//   CUtlVector<CGameSceneNodeHandle, CUtlMemory<CGameSceneNodeHandle, int> >
//   CUtlVector<CSkeletonInstance*, CUtlMemory<CSkeletonInstance*, int> >
//   CUtlVector<physicssound::impactsound_t, CUtlMemory<physicssound::impactsound_t, int> >
//   CUtlVector<physicssound::breaksound_t, CUtlMemory<physicssound::breaksound_t, int> >
//   CUtlVector<physicssound::friction_t, CUtlMemory<physicssound::friction_t, int> >
//   CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t, CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t, 
//   CUtlVector<CEntityIndex, CUtlMemory<CEntityIndex, int> >
//   CUtlVector<NavAttributeEnum, CUtlMemory<NavAttributeEnum, int> >
//   CUtlVector<CBasePlayer*, CUtlMemory<CBasePlayer*, int> >
//   CUtlVector<CGameSceneNode*, CUtlMemory<CGameSceneNode*, int> >
//   CUtlVector<CSkeletonAnimationController*, CUtlMemory<CSkeletonAnimationController*, int> >
//   CUtlVector<CCustomGameEventManager::CCustomGameEventListener*, CUtlMemory<CCustomGameEventManager::CCustomGameEventListe
//   CUtlVector<CCustomGameEventManager::CCustomGameEventInfo*, CUtlMemory<CCustomGameEventManager::CCustomGameEventInfo*, in
//   CUtlVector<CDecalMaterialParams, CUtlMemory<CDecalMaterialParams, int> >
//   CUtlVector<NameToDecalMaterialParamsMapping_t, CUtlMemory<NameToDecalMaterialParamsMapping_t, int> >
//   CUtlVector<CUtlVector<NameToDecalMaterialParamsMapping_t, CUtlMemory<NameToDecalMaterialParamsMapping_t, int> >, CUtlMem
//   CUtlVector<SkeletonInstanceDecalList_t, CUtlMemory<SkeletonInstanceDecalList_t, int> >
//   CUtlVector<CUtlVector<SkeletonInstanceDecalList_t, CUtlMemory<SkeletonInstanceDecalList_t, int> >, CUtlMemory<CUtlVector
//   CUtlVector<CDecalInfo*, CUtlMemory<CDecalInfo*, int> >
//   CUtlVector<CCompressedResourceManifest::CompressedResourceName_t, CUtlMemory<CCompressedResourceManifest::CompressedReso
//   CUtlVector<entitytable_t, CUtlMemory<entitytable_t, int> >
//   CUtlVector<CGameSaveRestoreInfo::CHashElement, CUtlMemory<CGameSaveRestoreInfo::CHashElement, int> >
//   CUtlVector<CUtlVector<CGameSaveRestoreInfo::CHashElement, CUtlMemory<CGameSaveRestoreInfo::CHashElement, int> >, CUtlMem
//   CUtlVector<SaveRestoreTranslate_t, CUtlMemory<SaveRestoreTranslate_t, int> >
//   CUtlVector<const CDecalInfo*, CUtlMemory<const CDecalInfo*, int> >
//   CUtlVector<CEntityDebugGrab*, CUtlMemory<CEntityDebugGrab*, int> >
//   CUtlVector<entitynotify_t, CUtlMemory<entitynotify_t, int> >
//   CUtlVector<CSpawnGroupMgrGameSystem::UnloadRequestQueueItem_t, CUtlMemory<CSpawnGroupMgrGameSystem::UnloadRequestQueueIt
//   CUtlVector<CSosMessageQueue<SoundEventGuid_t>::Entry_t, CUtlMemory<CSosMessageQueue<SoundEventGuid_t>::Entry_t, int> >
//   CUtlVector<CSosMessageQueue<unsigned int>::Entry_t, CUtlMemory<CSosMessageQueue<unsigned int>::Entry_t, int> >
//   CUtlVector<void (*)(), CUtlMemory<void (*)(), int> >
//   CUtlVector<VPhysIntersectionNotification_t, CUtlMemory<VPhysIntersectionNotification_t, int> >
//   CUtlVector<CGameEventTouchAdaptor, CUtlMemory<CGameEventTouchAdaptor, int> >
//   CUtlVector<Source1_Ray_t, CUtlMemory<Source1_Ray_t, int> >
//   CUtlVector<Ray_t, CUtlMemory<Ray_t, int> >
//   CUtlVector<IPhysicsBody*, CUtlMemory<IPhysicsBody*, int> >
//   CUtlVector<simthinkentry_t, CUtlMemory<simthinkentry_t, int> >
//   CUtlVector<CInfoSpawnGroupLandmark*, CUtlMemory<CInfoSpawnGroupLandmark*, int> >
//   CUtlVector<CInfoSpawnGroupLoadUnload*, CUtlMemory<CInfoSpawnGroupLoadUnload*, int> >
//   CUtlVector<stepsimulationentry_t, CUtlMemory<stepsimulationentry_t, int> >
//   CUtlVector<rr2::MatchInfo_t, CUtlMemory<rr2::MatchInfo_t, int> >
//   CUtlVector<rr2::CResponseQuery::CFact, CUtlMemory<rr2::CResponseQuery::CFact, int> >
//   CUtlVector<CGameEventCallback*, CUtlMemory<CGameEventCallback*, int> >
//   CUtlVector<CVScriptGameEventListener::GameEventFunc_t, CUtlMemory<CVScriptGameEventListener::GameEventFunc_t, int> >
//   CUtlVector<CUtlSphereTree::Node, CUtlMemory<CUtlSphereTree::Node, int> >
//   CUtlVector<CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int> >::EventAndDelegate_t, CUtlMemory<CUt
//   CUtlVector<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int> >::RefCountedSignallerPointer_t*, CUtlMemory<C
//   CUtlVector<CAnimationLayer, CNetworkUtlVector_MemoryType<CAnimationLayer, -1> >
//   CUtlVector<thinkfunc_t, CUtlMemory<thinkfunc_t, int> >
//   CUtlVector<ResponseContext_t, CUtlMemory<ResponseContext_t, int> >
//   CUtlVector<Relationship_t, CUtlMemory<Relationship_t, int> >
//   CUtlVector<CHandle<CBaseCombatWeapon>, CNetworkUtlVector_MemoryType<CHandle<CBaseCombatWeapon>, -1> >
//   CUtlVector<CHandle<CEconWearable>, CNetworkUtlVector_MemoryType<CHandle<CEconWearable>, -1> >
//   CUtlVector<CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >, CUtlMemory<CUtlVector<CHandle<CBase
//   CUtlVector<CHandle<CBasePropDoor>, CUtlMemory<CHandle<CBasePropDoor>, int> >
//   CUtlVector<CAI_Link*, CUtlMemory<CAI_Link*, int> >
//   CUtlVector<CHandle<CAI_DynamicLink>, CUtlMemory<CHandle<CAI_DynamicLink>, int> >
//   CUtlVector<CFish*, CUtlMemory<CFish*, int> >
//   CUtlVector<CHandle<CFish>, CUtlMemory<CHandle<CFish>, int> >
//   CUtlVector<CHandle<CBasePlayer>, CUtlMemory<CHandle<CBasePlayer>, int> >
//   CUtlVector<CPhysBox::RecentlyTouchedEntity_t, CUtlMemory<CPhysBox::RecentlyTouchedEntity_t, int> >
//   CUtlVector<magnetted_objects_t, CUtlMemory<magnetted_objects_t, int> >
//   CUtlVector<CTeamSpawnPoint*, CUtlMemory<CTeamSpawnPoint*, int> >
//   CUtlVector<CHandle<CBasePlayer>, CNetworkUtlVector_MemoryType<CHandle<CBasePlayer>, -1> >
//   CUtlVector<WeaponTextureData_t, CUtlMemory<WeaponTextureData_t, int> >
//   CUtlVector<WeaponSoundData_t, CUtlMemory<WeaponSoundData_t, int> >
//   CUtlVector<CPassengerSeatTransition, CUtlMemory<CPassengerSeatTransition, int> >
//   CUtlVector<vehicle_gear_t, CUtlMemory<vehicle_gear_t, int> >
//   CUtlVector<vehicle_crashsound_t, CUtlMemory<vehicle_crashsound_t, int> >
//   CUtlVector<CPassengerSeat, CUtlMemory<CPassengerSeat, int> >
//   CUtlVector<CPassengerInfo, CUtlMemory<CPassengerInfo, int> >
//   CUtlVector<CPassengerRole, CUtlMemory<CPassengerRole, int> >
//   CUtlVector<CBaseServerVehicle::entryanim_t, CUtlMemory<CBaseServerVehicle::entryanim_t, int> >
//   CUtlVector<CBaseServerVehicle::exitanim_t, CUtlMemory<CBaseServerVehicle::exitanim_t, int> >
//   CUtlVector<CNavArea*, CUtlMemory<CNavArea*, int> >
//   CUtlVector<CNavLadder*, CUtlMemory<CNavLadder*, int> >
//   CUtlVector<CNavAttributeLookup, CUtlMemory<CNavAttributeLookup, int> >
//   CUtlVector<CFuncNavConnectionBlocker*, CUtlMemory<CFuncNavConnectionBlocker*, int> >
//   CUtlVector<CNavDoorBlocker*, CUtlMemory<CNavDoorBlocker*, int> >
//   CUtlVector<SosEditItemInfo_t, CUtlMemory<SosEditItemInfo_t, int> >
//   CUtlVector<CUtlHandleTable<CBaseNugget_Private, 16>::EntryType_t, CUtlMemory<CUtlHandleTable<CBaseNugget_Private, 16>::E
//   CUtlVector<CUtlSymbolLarge, CUtlMemory<CUtlSymbolLarge, int> >
//   CUtlVector<CPropData::propdata_breakablechunk_t, CUtlMemory<CPropData::propdata_breakablechunk_t, int> >
//   CUtlVector<breakmodel_t, CUtlMemory<breakmodel_t, int> >
//   CUtlVector<CBreakModelsPrecached::BreakModelInfo_t, CUtlMemory<CBreakModelsPrecached::BreakModelInfo_t, int> >
//   CUtlVector<char, CUtlMemory<char, int> >
//   CUtlVector<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >
//   CUtlVector<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >
//   CUtlVector<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >
//   CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >
//   CUtlVector<CTransform, CUtlMemory<CTransform, int> >
//   CUtlVector<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >
//   CUtlVector<CAnimMovement, CUtlMemory<CAnimMovement, int> >
//   CUtlVector<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >
//   CUtlVector<CAnimActivity, CUtlMemory<CAnimActivity, int> >
//   CUtlVector<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >
//   CUtlVector<CAnimIKRule, CUtlMemory<CAnimIKRule, int> >
//   CUtlVector<CAnimIKRuleStallFrame, CUtlMemory<CAnimIKRuleStallFrame, int> >
//   CUtlVector<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> >
//   CUtlVector<TransitioningLaterMetaInfo_t, CUtlMemory<TransitioningLaterMetaInfo_t, int> >
//   CUtlVector<CAnimIKTargetInfo, CUtlMemory<CAnimIKTargetInfo, int> >
//   CUtlVector<CAnimIKLink, CUtlMemory<CAnimIKLink, int> >
//   CUtlVector<ikcontextikrule_t, CUtlMemory<ikcontextikrule_t, int> >
//   CUtlVector<CUtlVector<ikcontextikrule_t, CUtlMemory<ikcontextikrule_t, int> >, CUtlMemory<CUtlVector<ikcontextikrule_t, 
//   CUtlVector<ClientAnimating_t, CUtlMemory<ClientAnimating_t, int> >
//   CUtlVector<CFoW_Viewer*, CUtlMemory<CFoW_Viewer*, int> >
//   CUtlVector<VertexColor_t, CUtlMemory<VertexColor_t, int> >
//   CUtlVector<const CAttachment*, CUtlMemory<const CAttachment*, int> >
//   CUtlVector<globalentity_t, CUtlMemory<globalentity_t, int> >
//   CUtlVector<SPAWNGROUP_HEADER, CUtlMemory<SPAWNGROUP_HEADER, int> >
//   CUtlVector<CCreateGameServerLoadInfo, CUtlMemory<CCreateGameServerLoadInfo, int> >
//   CUtlVector<filelistelem_t, CUtlMemory<filelistelem_t, int> >
//   CUtlVector<StringTableDef_t, CUtlMemory<StringTableDef_t, int> >
//   CUtlVector<AnimationEventOccurrence_t, CUtlMemory<AnimationEventOccurrence_t, int> >
//   CUtlVector<VectorAligned, CUtlMemory<VectorAligned, int> >
//   CUtlVector<IInterpolatedVar*, CUtlMemory<IInterpolatedVar*, int> >
//   CUtlVector<IWrappedInterpolatedVarAdapter*, CUtlMemory<IWrappedInterpolatedVarAdapter*, int> >
//   CUtlVector<IEntityListener*, CUtlMemory<IEntityListener*, int> >
//   CUtlVector<CEntityIndex, CUtlMemoryFixedGrowable<CEntityIndex, 65ul, int> >
//   CUtlVector<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >
//   CUtlVector<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false>::StringPool_t*, CUtlMemory<CUtlSymbolTableLargeBas
//   CUtlVector<CCopyableUtlVector<CUtlSymbolLarge>, CUtlMemory<CCopyableUtlVector<CUtlSymbolLarge>, int> >
//   CUtlVector<CGridStringPrinter::ColumnHeader_t, CUtlMemory<CGridStringPrinter::ColumnHeader_t, int> >
//   CUtlVector<CEntityDataInstantiator<touchlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry, 
//   CUtlVector<CUtlVector<CEntityDataInstantiator<touchlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<touchlink_t>::
//   CUtlVector<CEntityDataInstantiator<groundlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry
//   CUtlVector<CUtlVector<CEntityDataInstantiator<groundlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<groundlink_t>
//   CUtlVector<CEntityDataInstantiator<StepSimulationData>::HashEntry, CUtlMemory<CEntityDataInstantiator<StepSimulationData
//   CUtlVector<CUtlVector<CEntityDataInstantiator<StepSimulationData>::HashEntry, CUtlMemory<CEntityDataInstantiator<StepSim
//   CUtlVector<CEntityDataInstantiator<ModelScale>::HashEntry, CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry, in
//   CUtlVector<CUtlVector<CEntityDataInstantiator<ModelScale>::HashEntry, CUtlMemory<CEntityDataInstantiator<ModelScale>::Ha
//   CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry, CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry
//   CUtlVector<CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry, CUtlMemory<CEntityDataInstantiator<CWatcherList>
//   CUtlVector<CEntityDataInstantiator<physicspushlist_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<physicspushlist_t>:
//   CUtlVector<CUtlVector<CEntityDataInstantiator<physicspushlist_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<physicsp
//   CUtlVector<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t
//   CUtlVector<CUtlVector<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<vphysic
//   CUtlVector<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupCompletionDelegateInfo_t, CUtlMemory<CSpawnGroupCompletion
//   CUtlVector<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupEntitySpawnCompletionDelegateInfo_t, CUtlMemory<CSpawnGrou
//   CUtlVector<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t, CUtlMemory<CSpawnGroupCompletionCallback
//   CUtlVector<EntitySpawnInfo_t, CUtlMemory<EntitySpawnInfo_t, int> >
//   CUtlVector<CEntityClass*, CUtlMemory<CEntityClass*, int> >
//   CUtlVector<ServerClass*, CUtlMemory<ServerClass*, int> >
//   CUtlVector<CGameEventDescriptor, CUtlMemory<CGameEventDescriptor, int> >
//   CUtlVector<ISaveRestoreBlockHandler*, CUtlMemory<ISaveRestoreBlockHandler*, int> >
//   CUtlVector<SaveRestoreBlockHeader_t, CUtlMemory<SaveRestoreBlockHeader_t, int> >
//   CUtlVector<ComponentUnserializerClassInfo_t*, CUtlMemory<ComponentUnserializerClassInfo_t*, int> >
//   CUtlVector<FileWeaponInfo_t*, CUtlMemory<FileWeaponInfo_t*, int> >
//   CUtlVector<CSceneEventInfo*, CUtlMemory<CSceneEventInfo*, int> >
//   CUtlVector<CChoreoScene*, CUtlMemory<CChoreoScene*, int> >
//   CUtlVector<CHintMessageTimers::hintmessagetime_t*, CUtlMemory<CHintMessageTimers::hintmessagetime_t*, int> >
//   CUtlVector<CHintSystem::onresethints_t, CUtlMemory<CHintSystem::onresethints_t, int> >
//   CUtlVector<CAI_Expresser*, CUtlMemory<CAI_Expresser*, int> >
//   CUtlVector<TeleportListEntry_t, CUtlMemory<TeleportListEntry_t, int> >
//   CUtlVector<CNavOpenListElement, CUtlMemory<CNavOpenListElement, int> >
//   CUtlVector<CHandle<CVGuiScreen>, CUtlMemory<CHandle<CVGuiScreen>, int> >
//   CUtlVector<modifiedconvars_t, CUtlMemory<modifiedconvars_t, int> >
//   CUtlVector<PreSpawnListInfo_t, CUtlMemory<PreSpawnListInfo_t, int> >
//   CUtlVector<visibility_target_t, CUtlMemory<visibility_target_t, int> >
//   CUtlVector<CDecalEmitterSystem::DecalListEntry, CUtlMemory<CDecalEmitterSystem::DecalListEntry, int> >
//   CUtlVector<CEffectScriptElement, CUtlMemory<CEffectScriptElement, int> >
//   CUtlVector<CHandle<CEnvPlayerSurfaceTrigger>, CUtlMemory<CHandle<CEnvPlayerSurfaceTrigger>, int> >
//   CUtlVector<CBaseIssue*, CUtlMemory<CBaseIssue*, int> >
//   CUtlVector<CVoteController::CallerRecord, CUtlMemory<CVoteController::CallerRecord, int> >
//   CUtlVector<CHandle<CEnvMicrophone>, CUtlMemory<CHandle<CEnvMicrophone>, int> >
//   CUtlVector<LegacyNavData_t::HidingSpotData_t, CUtlMemory<LegacyNavData_t::HidingSpotData_t, int> >
//   CUtlVector<LegacyNavData_t::EncounterSpotData_t::SpotOrder_t, CUtlMemory<LegacyNavData_t::EncounterSpotData_t::SpotOrder
//   CUtlVector<LegacyNavData_t::EncounterSpotData_t, CUtlMemory<LegacyNavData_t::EncounterSpotData_t, int> >
//   CUtlVector<INextBot*, CUtlMemory<INextBot*, int> >
//   CUtlVector<EconAttachedParticleSystemInfo_t, CUtlMemory<EconAttachedParticleSystemInfo_t, int> >
//   CUtlVector<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int> >
//   CUtlVector<CStrongHandle<InfoForResourceTypeCRenderMesh>, CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, int>
//   CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> >
//   CUtlVector<CAnimationGroupResource*, CUtlMemory<CAnimationGroupResource*, int> >
//   CUtlVector<const CFlexController*, CUtlMemory<const CFlexController*, int> >
//   CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >
//   CUtlVector<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true>::StringPool_t*, CUtlMemory<CUtlSymbolTableLargeBase<
//   CUtlVector<CEconSchemaSymbol, CUtlMemory<CEconSchemaSymbol, int> >
//   CUtlVector<CEconStyleInfo*, CUtlMemory<CEconStyleInfo*, int> >
//   CUtlVector<CShatterGlassShard*, CUtlMemory<CShatterGlassShard*, int> >
//   CUtlVector<IndexRange_t, CUtlMemory<IndexRange_t, int> >
//   CUtlVector<BuilderModelBoneFlexDriverControl_t, CUtlMemory<BuilderModelBoneFlexDriverControl_t, int> >
//   CUtlVector<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >
//   CUtlVector<BuilderModelExtPart_t, CUtlMemory<BuilderModelExtPart_t, int> >
//   CUtlVector<CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t>, CUtlMemory<CStrongHandle<InfoForResourceTypeA
//   CUtlVector<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >
//   CUtlVector<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<short int, in
//   CUtlVector<ShatterSpoke_t, CUtlMemory<ShatterSpoke_t, int> >
//   CUtlVector<ShatterEdgeSegment_t, CUtlMemory<ShatterEdgeSegment_t, int> >
//   CUtlVector<CSpeechBubbleInfo, CNetworkUtlVector_MemoryType<CSpeechBubbleInfo, 4> >
//   CUtlVector<SCombatLogReference, CUtlMemory<SCombatLogReference, int> >
//   CUtlVector<sFightInfo, CUtlMemory<sFightInfo, int> >
//   CUtlVector<const CEntityModelModifier*, CUtlMemory<const CEntityModelModifier*, int> >
//   CUtlVector<const CParticleCreateModifier*, CUtlMemory<const CParticleCreateModifier*, int> >
//   CUtlVector<const CParticleModifier*, CUtlMemory<const CParticleModifier*, int> >
//   CUtlVector<EconItemInfo_t, CUtlMemory<EconItemInfo_t, int> >
//   CUtlVector<EconControlPointInfo_t, CUtlMemory<EconControlPointInfo_t, int> >
//   CUtlVector<const CHeroModelChangeModifier*, CUtlMemory<const CHeroModelChangeModifier*, int> >
//   CUtlVector<const CAdditionalWearableModifier*, CUtlMemory<const CAdditionalWearableModifier*, int> >
//   CUtlVector<const CParticleSnapshotModifier*, CUtlMemory<const CParticleSnapshotModifier*, int> >
//   CUtlVector<CEntityTemporaryMover::MovedEntity_t, CUtlMemory<CEntityTemporaryMover::MovedEntity_t, int> >
//   CUtlVector<CGameWeaponManager*, CUtlMemory<CGameWeaponManager*, int> >
//   CUtlVector<CMarkupVolumeTagged*, CUtlMemory<CMarkupVolumeTagged*, int> >
//   CUtlVector<MarkupSearchQuery_t, CUtlMemory<MarkupSearchQuery_t, int> >
//   CUtlVector<CHandle<CMessageEntity>, CUtlMemory<CHandle<CMessageEntity>, int> >
//   CUtlVector<CMoveHelperServer::touchlist_t, CUtlMemory<CMoveHelperServer::touchlist_t, int> >
//   CUtlVector<CBasePlayer::TonemapCountedActivations_t, CUtlMemory<CBasePlayer::TonemapCountedActivations_t, int> >
//   CUtlVector<CParticleSystemQuery*, CUtlMemory<CParticleSystemQuery*, int> >
//   CUtlVector<constraint_anchor_t, CUtlMemory<constraint_anchor_t, int> >
//   CUtlVector<vehiclescript_t, CUtlMemory<vehiclescript_t, int> >
//   CUtlVector<CPhysicsPushedEntities::PhysicsPusherInfo_t, CUtlMemory<CPhysicsPushedEntities::PhysicsPusherInfo_t, int> >
//   CUtlVector<CPhysicsPushedEntities::PhysicsPushedInfo_t, CUtlMemory<CPhysicsPushedEntities::PhysicsPushedInfo_t, int> >
//   CUtlVector<CPhysSaveRestoreBlockHandler::QueuedItem_t, CUtlMemory<CPhysSaveRestoreBlockHandler::QueuedItem_t, int> >
//   CUtlVector<CFogVolume*, CUtlMemory<CFogVolume*, int> >
//   CUtlVector<CHandle<CBaseEntity>, CNetworkUtlVector_MemoryType<CHandle<CBaseEntity>, -1> >
//   CUtlVector<const IPropVRTrackedObjectPhysicsOverride*, CUtlMemory<const IPropVRTrackedObjectPhysicsOverride*, int> >
//   CUtlVector<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >*, CUtlMemory<CUtlVector<CUtlString, CUtlMemory<CUtlStrin
//   CUtlVector<const CBaseEntity*, CUtlMemory<const CBaseEntity*, int> >
//   CUtlVector<CBaseVRHandAttachment*, CUtlMemory<CBaseVRHandAttachment*, int> >
//   CUtlVector<CHandle<CSceneListManager>, CUtlMemory<CHandle<CSceneListManager>, int> >
//   CUtlVector<CHandle<CSceneEntity>, CUtlMemory<CHandle<CSceneEntity>, int> >
//   CUtlVector<CSceneManager::CRestoreSceneSound, CUtlMemory<CSceneManager::CRestoreSceneSound, int> >
//   CUtlVector<CHandle<CBaseFlex>, CNetworkUtlVector_MemoryType<CHandle<CBaseFlex>, -1> >
//   CUtlVector<CSheetSimulator::Spring_t, CUtlMemory<CSheetSimulator::Spring_t, int> >
//   CUtlVector<CaptionLookup_t, CUtlMemory<CaptionLookup_t, int> >
//   CUtlVector<AsyncCaption_t, CUtlMemory<AsyncCaption_t, int> >
//   CUtlVector<CSoundPatch*, CUtlMemory<CSoundPatch*, int> >
//   CUtlVector<SoundCommand_t*, CUtlMemory<SoundCommand_t*, int> >
//   CUtlVector<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >, CUtlMemory<CUtlVector<CUtlString, CUtlMemory<CUtlString
//   CUtlVector<CEnvSoundscape*, CUtlMemory<CEnvSoundscape*, int> >
//   CUtlVector<clusterSoundscapeList_t, CUtlMemory<clusterSoundscapeList_t, int> >
//   CUtlVector<bbox_t, CUtlMemory<bbox_t, int> >
//   CUtlVector<CTeam*, CUtlMemory<CTeam*, int> >
//   CUtlVector<CStressEntityReg*, CUtlMemory<CStressEntityReg*, int> >
//   CUtlVector<CHandle<CTriggerMultiple>, CUtlMemory<CHandle<CTriggerMultiple>, int> >
//   CUtlVector<convartracker_modifiedconvars_t, CUtlMemory<convartracker_modifiedconvars_t, int> >
//   CUtlVector<CGlobalConvarTrackerAndReverter*, CUtlMemory<CGlobalConvarTrackerAndReverter*, int> >
//   CUtlVector<CDOTA_ParticleElement*, CUtlMemory<CDOTA_ParticleElement*, int> >
//   CUtlVector<CDOTA_ParticleManager::PortraitParticleMapEntry_t, CUtlMemory<CDOTA_ParticleManager::PortraitParticleMapEntry
//   CUtlVector<CDOTA_BaseNPC*, CUtlMemory<CDOTA_BaseNPC*, int> >
//   CUtlVector<CDOTABaseAbility*, CUtlMemory<CDOTABaseAbility*, int> >
//   CUtlVector<CEconItemView*, CUtlMemory<CEconItemView*, int> >
//   CUtlVector<ICustomNetTableListener*, CUtlMemory<ICustomNetTableListener*, int> >
//   CUtlVector<DelayedAction_t, CUtlMemory<DelayedAction_t, int> >
//   CUtlVector<GestureSlot_t, CUtlMemory<GestureSlot_t, int> >
//   CUtlVector<sPathingInfo, CUtlMemory<sPathingInfo, int> >
//   CUtlVector<CDOTA_Bot::SortedUnit_t, CUtlMemory<CDOTA_Bot::SortedUnit_t, int> >
//   CUtlVector<CDOTA_Bot::sQueuedAction, CUtlMemory<CDOTA_Bot::sQueuedAction, int> >
//   CUtlVector<CDOTA_Bot::sQueuedOrder, CUtlMemory<CDOTA_Bot::sQueuedOrder, int> >
//   CUtlVector<CEconTool_PlayerCardPack::TeamInfo_t, CUtlMemory<CEconTool_PlayerCardPack::TeamInfo_t, int> >
//   CUtlVector<CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*>::HashBucket_t, CUtlMemory<CUtlHashMapLarge<long long u
//   CUtlVector<GCSDK::CJobMgr::JobSleeping_t, CUtlMemory<GCSDK::CJobMgr::JobSleeping_t, int> >
//   CUtlVector<CUtlHashMapLarge<long long unsigned int, int>::HashBucket_t, CUtlMemory<CUtlHashMapLarge<long long unsigned i
//   CUtlVector<CUtlHashMapLarge<long long int, GCSDK::JobStatsBucket_t>::HashBucket_t, CUtlMemory<CUtlHashMapLarge<long long
//   CUtlVector<CUtlHashMapLarge<unsigned int, int>::HashBucket_t, CUtlMemory<CUtlHashMapLarge<unsigned int, int>::HashBucket
//   CUtlVector<CUtlPair<long long unsigned int, char const*>, CUtlMemory<CUtlPair<long long unsigned int, char const*>, int>
//   CUtlVector<challenge_variable_t, CUtlMemory<challenge_variable_t, int> >
//   CUtlVector<challenge_var_set_t::var_value_t, CUtlMemory<challenge_var_set_t::var_value_t, int> >
//   CUtlVector<challenge_var_set_t, CUtlMemory<challenge_var_set_t, int> >
//   CUtlVector<challenge_quest_t::challenge_t::instance_t, CUtlMemory<challenge_quest_t::challenge_t::instance_t, int> >
//   CUtlVector<challenge_quest_t::challenge_t::prerequisite_t, CUtlMemory<challenge_quest_t::challenge_t::prerequisite_t, in
//   CUtlVector<challenge_quest_t::challenge_t::complete_action_t, CUtlMemory<challenge_quest_t::challenge_t::complete_action
//   CUtlVector<challenge_quest_t::challenge_t*, CUtlMemory<challenge_quest_t::challenge_t*, int> >
//   CUtlVector<WearableSpawnInfo_t, CUtlMemory<WearableSpawnInfo_t, int> >
//   CUtlVector<CDOTA_BinaryObject*, CUtlMemory<CDOTA_BinaryObject*, int> >
//   CUtlVector<CDOTA_BinaryObjectSystem::SDOTA_PendingActivate, CUtlMemory<CDOTA_BinaryObjectSystem::SDOTA_PendingActivate, 
//   CUtlVector<const CActivityModifier*, CUtlMemory<const CActivityModifier*, int> >
//   CUtlVector<const CArcanaLevelModifier*, CUtlMemory<const CArcanaLevelModifier*, int> >
//   CUtlVector<const CParticleCombined*, CUtlMemory<const CParticleCombined*, int> >
//   CUtlVector<const CResponseCriteriaModifier*, CUtlMemory<const CResponseCriteriaModifier*, int> >
//   CUtlVector<sSpiritInfo*, CUtlMemory<sSpiritInfo*, int> >
//   CUtlVector<ICLSearchFields*, CUtlMemory<ICLSearchFields*, int> >
//   CUtlVector<CUtlMap<int, event_storage_t, short unsigned int, bool (*)(int const&, int const&)>, CUtlMemory<CUtlMap<int, 
//   CUtlVector<comparison_test_t, CUtlMemory<comparison_test_t, int> >
//   CUtlVector<AccumulatedEvent_t, CUtlMemory<AccumulatedEvent_t, int> >
//   CUtlVector<CombatLogQuery*, CUtlMemory<CombatLogQuery*, int> >
//   CUtlVector<challenge_template_t, CUtlMemory<challenge_template_t, int> >
//   CUtlVector<CMsgServerToGCRerollPlayerChallenge, CUtlMemory<CMsgServerToGCRerollPlayerChallenge, int> >
//   CUtlVector<challenge_instance_t, CUtlMemory<challenge_instance_t, int> >
//   CUtlVector<challenge_quest_t*, CUtlMemory<challenge_quest_t*, int> >
//   CUtlVector<const CDOTASubChallengeInfo*, CUtlMemory<const CDOTASubChallengeInfo*, int> >
//   CUtlVector<SCombatLogGraphStats, CUtlMemory<SCombatLogGraphStats, int> >
//   CUtlVector<ICLSearchFields::DynamicValueLookup_t, CUtlMemory<ICLSearchFields::DynamicValueLookup_t, int> >
//   CUtlVector<CKillCamAbilityDamage*, CUtlMemory<CKillCamAbilityDamage*, int> >
//   CUtlVector<CKillCamAttackerEntry*, CUtlMemory<CKillCamAttackerEntry*, int> >
//   CUtlVector<sCombatLogUsageCount, CUtlMemory<sCombatLogUsageCount, int> >
//   CUtlVector<PredictionIdRange_t, CUtlMemory<PredictionIdRange_t, int> >
//   CUtlVector<CUtlHashMapLarge<unsigned int, CDOTACompendiumDefinition*>::HashBucket_t, CUtlMemory<CUtlHashMapLarge<unsigne
//   CUtlVector<CreatureStateData_t, CUtlMemory<CreatureStateData_t, int> >
//   CUtlVector<CreatureAbilityData_t, CUtlMemory<CreatureAbilityData_t, int> >
//   CUtlVector<ItemDropData_t, CUtlMemory<ItemDropData_t, int> >
//   CUtlVector<CPlayerGroup, CUtlMemory<CPlayerGroup, int> >
//   CUtlVector<const CSkinChangeModifier*, CUtlMemory<const CSkinChangeModifier*, int> >
//   CUtlVector<const CEntityScaleModifier*, CUtlMemory<const CEntityScaleModifier*, int> >
//   CUtlVector<const CEntityHealthBarModifier*, CUtlMemory<const CEntityHealthBarModifier*, int> >
//   CUtlVector<const CSoundModifier*, CUtlMemory<const CSoundModifier*, int> >
//   CUtlVector<GCSDK::CProtoBufMsgMemoryPoolBase*, CUtlMemory<GCSDK::CProtoBufMsgMemoryPoolBase*, int> >
//   CUtlVector<CDOTAGameManager::LocalizedToScriptNameItem_t, CUtlMemory<CDOTAGameManager::LocalizedToScriptNameItem_t, int>
//   CUtlVector<CUtlHashMapLarge<int, KeyValues*>::HashBucket_t, CUtlMemory<CUtlHashMapLarge<int, KeyValues*>::HashBucket_t, 
//   CUtlVector<CUtlHashMapLarge<int, CDOTAGameManager::HeroInfo_t>::HashBucket_t, CUtlMemory<CUtlHashMapLarge<int, CDOTAGame
//   CUtlVector<CHandle<CDOTA_BaseNPC_Pet>, CUtlMemory<CHandle<CDOTA_BaseNPC_Pet>, int> >
//   CUtlVector<VictoryPredictionRecord_t, CUtlMemory<VictoryPredictionRecord_t, int> >
//   CUtlVector<CDOTAGamerules::ARDMReconnectInfo_t, CUtlMemory<CDOTAGamerules::ARDMReconnectInfo_t, int> >
//   CUtlVector<CHeroesPerPlayer, CNetworkUtlVector_MemoryType<CHeroesPerPlayer, -1> >
//   CUtlVector<CDOTAGameStateInfo, CUtlMemory<CDOTAGameStateInfo, int> >
//   CUtlVector<CDOTAHeroPickStateInfo, CUtlMemory<CDOTAHeroPickStateInfo, int> >
//   CUtlVector<CDOTA_ItemStockInfo, CNetworkUtlVector_MemoryType<CDOTA_ItemStockInfo, -1> >
//   CUtlVector<CDOTA_AbilityDraftAbilityState, CNetworkUtlVector_MemoryType<CDOTA_AbilityDraftAbilityState, -1> >
//   CUtlVector<ProjectionAbility_t, CUtlMemory<ProjectionAbility_t, int> >
//   CUtlVector<HeroPickRecord_t, CUtlMemory<HeroPickRecord_t, int> >
//   CUtlVector<HeroDeathRecord_t, CUtlMemory<HeroDeathRecord_t, int> >
//   CUtlVector<MapCategoryPosition_t, CUtlMemory<MapCategoryPosition_t, int> >
//   CUtlVector<CHandle<CDOTA_BaseNPC_Tower>, CUtlMemory<CHandle<CDOTA_BaseNPC_Tower>, int> >
//   CUtlVector<CHandle<CDOTA_BaseNPC_Building>, CUtlMemory<CHandle<CDOTA_BaseNPC_Building>, int> >
//   CUtlVector<CDOTA_ReconnectInfo, CUtlMemory<CDOTA_ReconnectInfo, int> >
//   CUtlVector<GameChatLogEntry_t, CUtlMemory<GameChatLogEntry_t, int> >
//   CUtlVector<CHeroStatueLiked, CNetworkUtlVector_MemoryType<CHeroStatueLiked, -1> >
//   CUtlVector<CHandle<CIngameEvent_Base>, CNetworkUtlVector_MemoryType<CHandle<CIngameEvent_Base>, -1> >
//   CUtlVector<AABB_t, CNetworkUtlVector_MemoryType<AABB_t, -1> >
//   CUtlVector<DOTAEventMysteryVOLine_t, CUtlMemory<DOTAEventMysteryVOLine_t, int> >
//   CUtlVector<CUtlVector<DOTAEventMysteryVOLine_t, CUtlMemory<DOTAEventMysteryVOLine_t, int> >, CUtlMemory<CUtlVector<DOTAE
//   CUtlVector<SDOTAEventRewardDefinition, CUtlMemory<SDOTAEventRewardDefinition, int> >
//   CUtlVector<SDOTAEventScoreRewardsDefinition, CUtlMemory<SDOTAEventScoreRewardsDefinition, int> >
//   CUtlVector<const CMsgDOTASeasonRewards_Reward*, CUtlMemory<const CMsgDOTASeasonRewards_Reward*, int> >
//   CUtlVector<SDOTAEventMysteryCategory, CUtlMemory<SDOTAEventMysteryCategory, int> >
//   CUtlVector<DOTAEventMysteryVOGroup_t, CUtlMemory<DOTAEventMysteryVOGroup_t, int> >
//   CUtlVector<const SDOTAEventActionDefinition*, CUtlMemory<const SDOTAEventActionDefinition*, int> >
//   CUtlVector<CGridNavSectorPortalConnection, CUtlMemory<CGridNavSectorPortalConnection, int> >
//   CUtlVector<CGridNavSectorPortal, CUtlMemory<CGridNavSectorPortal, int> >
//   CUtlVector<TempViewerInfo_t, CNetworkUtlVector_MemoryType<TempViewerInfo_t, -1> >
//   CUtlVector<CDOTAHeatmapManager::Building_t, CUtlMemory<CDOTAHeatmapManager::Building_t, int> >
//   CUtlVector<CUtlHashMapLarge<int, CUtlVector<CSteamID>*>::HashBucket_t, CUtlMemory<CUtlHashMapLarge<int, CUtlVector<CStea
//   CUtlVector<CInfoPlayerStartDota*, CUtlMemory<CInfoPlayerStartDota*, int> >
//   CUtlVector<CHeightCellGrid::HeightCell_t, CUtlMemory<CHeightCellGrid::HeightCell_t, int> >
//   CUtlVector<CGridNavOpenList::GridNavHeapEntry_t, CUtlMemoryFixedGrowable<CGridNavOpenList::GridNavHeapEntry_t, 2048ul, i
//   CUtlVector<CDOTA_Tree*, CUtlMemory<CDOTA_Tree*, int> >
//   CUtlVector<VertexColorPos_t, CUtlMemory<VertexColorPos_t, int> >
//   CUtlVector<CDOTA_Buff*, CUtlMemory<CDOTA_Buff*, int> >
//   CUtlVector<CDOTAInGamePredictionGameSystem::PredictionInfo_t, CUtlMemory<CDOTAInGamePredictionGameSystem::PredictionInfo
//   CUtlVector<InGamePredictionData_t, CNetworkUtlVector_MemoryType<InGamePredictionData_t, -1> >
//   CUtlVector<const CMsgDOTASeasonPredictions_InGamePrediction*, CUtlMemory<const CMsgDOTASeasonPredictions_InGamePredictio
//   CUtlVector<CDOTAInGamePredictionGameSystem::ActivePredictionDesc_t, CUtlMemory<CDOTAInGamePredictionGameSystem::ActivePr
//   CUtlVector<QAngle, CUtlMemory<QAngle, int> >
//   CUtlVector<IModifierFactory*, CUtlMemory<IModifierFactory*, int> >
//   CUtlVector<CDOTA_BuffParticle, CUtlMemory<CDOTA_BuffParticle, int> >
//   CUtlVector<CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t>, CUtlMemory<CCopyableUtlVector<CDOTA_ModifierManage
//   CUtlVector<CDOTA_ModifierManager*, CUtlMemory<CDOTA_ModifierManager*, int> >
//   CUtlVector<CDOTA_BaseNPC_Hero*, CUtlMemory<CDOTA_BaseNPC_Hero*, int> >
//   CUtlVector<DOTABuffStringIndexCache_t, CUtlMemory<DOTABuffStringIndexCache_t, int> >
//   CUtlVector<const CDOTA_Buff*, CUtlMemory<const CDOTA_Buff*, int> >
//   CUtlVector<CVProfOGSMode::CVProfSample, CUtlMemory<CVProfOGSMode::CVProfSample, int> >
//   CUtlVector<CCompendiumDataFileTemplateHandler::templatekeytoremove_t, CUtlMemory<CCompendiumDataFileTemplateHandler::tem
//   CUtlVector<CPlayerCardBonusAttributePacked::PlayerCardBonus_t, CUtlMemory<CPlayerCardBonusAttributePacked::PlayerCardBon
//   CUtlVector<CDOTA_TrackingProjectileInfo, CUtlMemory<CDOTA_TrackingProjectileInfo, int> >
//   CUtlVector<CDOTA_LinearProjectileInfo*, CUtlMemory<CDOTA_LinearProjectileInfo*, int> >
//   CUtlVector<const CParticleControlPointModifier*, CUtlMemory<const CParticleControlPointModifier*, int> >
//   CUtlVector<CShortPathProbe*, CUtlMemory<CShortPathProbe*, int> >
//   CUtlVector<CDOTAWearableItem*, CUtlMemory<CDOTAWearableItem*, int> >
//   CUtlVector<CDOTA_BaseNPC_Pet*, CUtlMemory<CDOTA_BaseNPC_Pet*, int> >
//   CUtlVector<CDOTA_TrackingProjectileInfo*, CUtlMemory<CDOTA_TrackingProjectileInfo*, int> >
//   CUtlVector<target_t, CUtlMemory<target_t, int> >
//   CUtlVector<const CStrangeControlPointModifier*, CUtlMemory<const CStrangeControlPointModifier*, int> >
//   CUtlVector<CDOTA_Response, CUtlMemory<CDOTA_Response, int> >
//   CUtlVector<MatchEvent, CUtlMemory<MatchEvent, int> >
//   CUtlVector<sPlayerSnapshot, CUtlMemory<sPlayerSnapshot, int> >
//   CUtlVector<ReactiveTipDescription_t, CUtlMemory<ReactiveTipDescription_t, int> >
//   CUtlVector<NPCSpeechData_t, CUtlMemory<NPCSpeechData_t, int> >
//   CUtlVector<QuestLogEntry_t, CUtlMemory<QuestLogEntry_t, int> >
//   CUtlVector<CDOTA_AutoBluePrint, CUtlMemory<CDOTA_AutoBluePrint, int> >
//   CUtlVector<CDOTA_Item*, CUtlMemory<CDOTA_Item*, int> >
//   CUtlVector<CHandle<CDOTA_Item>, CUtlMemory<CHandle<CDOTA_Item>, int> >
//   CUtlVector<CDOTA_Bot*, CUtlMemory<CDOTA_Bot*, int> >
//   CUtlVector<sItemPickupInfo, CUtlMemory<sItemPickupInfo, int> >
//   CUtlVector<sBotHumanRequest, CUtlMemory<sBotHumanRequest, int> >
//   CUtlVector<sIncomingStun, CUtlMemory<sIncomingStun, int> >
//   CUtlVector<CDOTA_Commander::sBotDebugEntity, CUtlMemory<CDOTA_Commander::sBotDebugEntity, int> >
//   CUtlVector<sIllusionState, CUtlMemory<sIllusionState, int> >
//   CUtlVector<sCreepHealthInfo, CUtlMemory<sCreepHealthInfo, int> >
//   CUtlVector<AbilityDamageAndManaCost_t, CUtlMemory<AbilityDamageAndManaCost_t, int> >
//   CUtlVector<sGridLocation, CUtlMemory<sGridLocation, int> >
//   CUtlVector<sDamageEvent, CUtlMemory<sDamageEvent, int> >
//   CUtlVector<CHandle<CDOTA_BaseNPC>, CUtlMemory<CHandle<CDOTA_BaseNPC>, int> >
//   CUtlVector<CDOTA_BaseNPC_Hero::sHeroDamageInfo, CUtlMemory<CDOTA_BaseNPC_Hero::sHeroDamageInfo, int> >
//   CUtlVector<CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo, CUtlMemory<CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo, int> >
//   CUtlVector<sLoadoutItem, CUtlMemory<sLoadoutItem, int> >
//   CUtlVector<sAcquireHistory, CUtlMemory<sAcquireHistory, int> >
//   CUtlVector<CHandle<CDOTA_BaseNPC_Hero>, CUtlMemory<CHandle<CDOTA_BaseNPC_Hero>, int> >
//   CUtlVector<CDOTAMusicSystemElement, CUtlMemory<CDOTAMusicSystemElement, int> >
//   CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int> >
//   CUtlVector<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, i
//   CUtlVector<const CBuffModifier*, CUtlMemory<const CBuffModifier*, int> >
//   CUtlVector<CDOTAPlayer*, CUtlMemory<CDOTAPlayer*, int> >
//   CUtlVector<const CPetModifier*, CUtlMemory<const CPetModifier*, int> >
//   CUtlVector<const CHexModelModifier*, CUtlMemory<const CHexModelModifier*, int> >
//   CUtlVector<const CAbilityNameModifier*, CUtlMemory<const CAbilityNameModifier*, int> >
//   CUtlVector<CMsgDOTARealtimeGameStats*, CUtlMemory<CMsgDOTARealtimeGameStats*, int> >
//   CUtlVector<PlayerDisconnectInfo, CUtlMemory<PlayerDisconnectInfo, int> >
//   CUtlVector<(anonymous namespace)::HeroEvents, CUtlMemory<(anonymous namespace)::HeroEvents, int> >
//   CUtlVector<CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::sDamageSources, CUtlMemory<CDOTA_Modifier_FacelessVoid_TimeWalk
//   CUtlVector<const CCourierModifier*, CUtlMemory<const CCourierModifier*, int> >
//   CUtlVector<const CCourierFlyingModifier*, CUtlMemory<const CCourierFlyingModifier*, int> >
//   CUtlVector<CDOTA_Modifier_Warlock_FatalBonds*, CUtlMemory<CDOTA_Modifier_Warlock_FatalBonds*, int> >
//   CUtlVector<sBounceInfo, CUtlMemory<sBounceInfo, int> >
//   CUtlVector<NianDamageTaken_t, CUtlMemory<NianDamageTaken_t, int> >
//   CUtlVector<sGlaiveInfo, CUtlMemory<sGlaiveInfo, int> >
//   CUtlVector<CDOTA_Modifier_Spectre_SpectralDaggerPath::sShadowPathLocation, CUtlMemory<CDOTA_Modifier_Spectre_SpectralDag
//   CUtlVector<RemnantData_t, CUtlMemory<RemnantData_t, int> >
//   CUtlVector<AttachedParticlesOnItem_t, CUtlMemory<AttachedParticlesOnItem_t, int> >
//   CUtlVector<CDOTA_Modifier_Oracle_FalsePromise::sDamageSources, CUtlMemory<CDOTA_Modifier_Oracle_FalsePromise::sDamageSou
//   CUtlVector<CDOTA_Modifier_Oracle_FalsePromise::sHealingSources, CUtlMemory<CDOTA_Modifier_Oracle_FalsePromise::sHealingS
//   CUtlVector<CDOTA_Modifier_Visage_SoulAssumption::sDamageEvent, CUtlMemory<CDOTA_Modifier_Visage_SoulAssumption::sDamageE
//   CUtlVector<CDOTA_Modifier_Visage_GravekeepersCloak_Stack*, CUtlMemory<CDOTA_Modifier_Visage_GravekeepersCloak_Stack*, in
//   CUtlVector<sSpiritDef, CUtlMemory<sSpiritDef, int> >
//   CUtlVector<CDOTA_Modifier_Wisp_Spirits::ImpactRecord_t, CUtlMemory<CDOTA_Modifier_Wisp_Spirits::ImpactRecord_t, int> >
//   CUtlVector<const CCustomKillEffectModifier*, CUtlMemory<const CCustomKillEffectModifier*, int> >
//   CUtlVector<CDOTA_TeleportTimer, CUtlMemory<CDOTA_TeleportTimer, int> >
//   CUtlVector<CAssetModifier* (*)(KeyValues*, IEconItemSchema*, bool, int), CUtlMemory<CAssetModifier* (*)(KeyValues*, IEco
//   CUtlVector<const CEconLootListDefinition*, CUtlMemory<const CEconLootListDefinition*, int> >
//   CUtlVector<CDOTAItemDefinition::AdditionalHeroes_t, CUtlMemory<CDOTAItemDefinition::AdditionalHeroes_t, int> >
//   CUtlVector<const CDOTAItemDefinition*, CUtlMemory<const CDOTAItemDefinition*, int> >
//   CUtlVector<CUtlHashMapLarge<item_definition_index_t, CDOTAItemSchema::AssociatedLeagueInfo_t>::HashBucket_t, CUtlMemory<
//   CUtlVector<CUtlHashMapLarge<unsigned int, CDOTAItemSchema::LeagueInfo_t>::HashBucket_t, CUtlMemory<CUtlHashMapLarge<unsi
//   CUtlVector<CUtlHashMapLarge<long long unsigned int, CUtlVector<item_definition_index_t>*>::HashBucket_t, CUtlMemory<CUtl
//   CUtlVector<CEconItem::attribute_t, CUtlMemory<CEconItem::attribute_t, int> >
//   CUtlVector<CEconItem::EquippedInstance_t, CUtlMemory<CEconItem::EquippedInstance_t, int> >
//   CUtlVector<itemid_t, CUtlMemory<itemid_t, int> >
//   CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >
//   CUtlVector<CEconTool_LeagueViewPass::ItemContribution_t, CUtlMemory<CEconTool_LeagueViewPass::ItemContribution_t, int> >
//   CUtlVector<econ_item_description_line_t, CUtlMemory<econ_item_description_line_t, int> >
//   CUtlVector<rolled_item_defs_t, CUtlMemory<rolled_item_defs_t, int> >
//   CUtlVector<ContainedItemInfo_t, CUtlMemory<ContainedItemInfo_t, int> >
//   CUtlVector<const CEconItemAttributeDefinition*, CUtlMemory<const CEconItemAttributeDefinition*, int> >
//   CUtlVector<AssetModifierUIInfo_t, CUtlMemory<AssetModifierUIInfo_t, int> >
//   CUtlVector<const CSpeechModifier*, CUtlMemory<const CSpeechModifier*, int> >
//   CUtlVector<CEconItemSetDefinition::itemset_attrib_t, CUtlMemory<CEconItemSetDefinition::itemset_attrib_t, int> >
//   CUtlVector<CEconLootListDefinition::loot_list_additional_drop_t, CUtlMemory<CEconLootListDefinition::loot_list_additiona
//   CUtlVector<random_attrib_t*, CUtlMemory<random_attrib_t*, int> >
//   CUtlVector<GCSDK::CGCClient::ServiceCacheVersion_t, CUtlMemory<GCSDK::CGCClient::ServiceCacheVersion_t, int> >
//   CUtlVector<CEconItemAttribute, CNetworkUtlVector_MemoryType<CEconItemAttribute, -1> >
//   CUtlVector<ESocketType, CUtlMemory<ESocketType, int> >
//   CUtlVector<CEconTool_StyleUnlock::StyleUnlock_t, CUtlMemory<CEconTool_StyleUnlock::StyleUnlock_t, int> >
//   CUtlVector<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CountChance_t, CUtlMemory<CEconTool_ItemDynamicRecipe::CBa
//   CUtlVector<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t, CUtlMemory<CEconTool_ItemDynamic
//   CUtlVector<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent*, CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeCompon
//   CUtlVector<BonusLootInfo_t, CUtlMemory<BonusLootInfo_t, int> >
//   CUtlVector<BundleSetupInfo_t, CUtlMemory<BundleSetupInfo_t, int> >
//   CUtlVector<EconItemStyleInfo_t, CUtlMemory<EconItemStyleInfo_t, int> >
//   CUtlVector<AssetModifierEntry_t, CUtlMemory<AssetModifierEntry_t, int> >
//   CUtlVector<IEconItemTool*, CUtlMemory<IEconItemTool*, int> >
//   CUtlVector<GCSDK::CSharedObject::SharedObjectInfo_t, CUtlMemory<GCSDK::CSharedObject::SharedObjectInfo_t, int> >
//   CUtlVector<CNavGeneratorBase::WalkableSeedSpot, CUtlMemory<CNavGeneratorBase::WalkableSeedSpot, int> >
//   CUtlVector<NavGenDataMarkup_t, CUtlMemory<NavGenDataMarkup_t, int> >
//   CUtlVector<CPathCostRecorder::AreaTransition_t, CUtlMemory<CPathCostRecorder::AreaTransition_t, int> >
//   CUtlVector<const CNavArea*, CUtlMemory<const CNavArea*, int> >
//   CUtlVector<Extent, CUtlMemory<Extent, int> >
//   CUtlVector<CNavObstacleMgr::CNavObstacleSplitForest::SplitNodeRoot_t, CUtlMemory<CNavObstacleMgr::CNavObstacleSplitFores
//   CUtlVector<CZombieBorder*, CUtlMemory<CZombieBorder*, int> >
//   CUtlVector<CNavVtxEdgeLink, CUtlMemory<CNavVtxEdgeLink, int> >
//   CUtlVector<CNavNode*, CUtlMemory<CNavNode*, int> >
//   CUtlVector<CNavEdge, CUtlMemory<CNavEdge, int> >
//   CUtlVector<NavDirType, CUtlMemory<NavDirType, int> >
//   CUtlVector<CNavCrossMeshConnection, CUtlMemory<CNavCrossMeshConnection, int> >
//   CUtlVector<CNavSplice::ExpansionConnection, CUtlMemory<CNavSplice::ExpansionConnection, int> >
//   CUtlVector<NextBotManager::DebugFilter, CUtlMemory<NextBotManager::DebugFilter, int> >
//   CUtlVector<CNextbotLodManager::SourceInfo_t, CUtlMemory<CNextbotLodManager::SourceInfo_t, int> >
//   CUtlVector<CNextbotLodManager::NextBotDistSqPair, CUtlMemory<CNextbotLodManager::NextBotDistSqPair, int> >
//   CUtlVector<CBaseCombatCharacter*, CUtlMemory<CBaseCombatCharacter*, int> >
//   CUtlVector<const INextBot::NextBotDebugLineType*, CUtlMemory<const INextBot::NextBotDebugLineType*, int> >
//   CUtlVector<INextBot::NextBotDebugLineType*, CUtlMemory<INextBot::NextBotDebugLineType*, int> >
//   CUtlVector<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >
//   CUtlVector<void (*)(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >
//   CUtlVector<KVJSONParserStackEntry_t, CUtlMemory<KVJSONParserStackEntry_t, int> >
//   CUtlVector<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >
//   CUtlVector<HSequence, CUtlMemory<HSequence, int> >
//   CUtlVector<CAppSystemDict::ModuleInfo_t, CUtlMemory<CAppSystemDict::ModuleInfo_t, int> >
//   CUtlVector<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >
//   CUtlVector<void* (*)(char const*, int*), CUtlMemory<void* (*)(char const*, int*), int> >
//   CUtlVector<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >
//   CUtlVector<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >
//   CUtlVector<CChoreoChannel*, CUtlMemory<CChoreoChannel*, int> >
//   CUtlVector<CChoreoEvent*, CUtlMemory<CChoreoEvent*, int> >
//   CUtlVector<CEventRelativeTag, CUtlMemory<CEventRelativeTag, int> >
//   CUtlVector<CFlexTimingTag, CUtlMemory<CFlexTimingTag, int> >
//   CUtlVector<CEventAbsoluteTag, CUtlMemory<CEventAbsoluteTag, int> >
//   CUtlVector<CFlexAnimationTrack*, CUtlMemory<CFlexAnimationTrack*, int> >
//   CUtlVector<CChoreoActor*, CUtlMemory<CChoreoActor*, int> >
//   CUtlVector<const EntComponentInfo_t*, CUtlMemory<const EntComponentInfo_t*, int> >
//   CUtlVector<CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod>::extractdata_t, CUtlMemory<CUtlTSOpen
//   CUtlVector<FGDFieldInfo_t, CUtlMemory<FGDFieldInfo_t, int> >
//   CUtlVector<CEntitySystem::CreationInfo_t, CUtlMemory<CEntitySystem::CreationInfo_t, int> >
//   CUtlVector<PostDataUpdateInfo_t, CUtlMemory<PostDataUpdateInfo_t, int> >
//   CUtlVector<EntityDeletion_t, CUtlMemory<EntityDeletion_t, int> >
//   CUtlVector<QueuedSetInPVSInfo_t, CUtlMemory<QueuedSetInPVSInfo_t, int> >
//   CUtlVector<CUtlDelegate<void(bool)>, CUtlMemory<CUtlDelegate<void(bool)>, int> >
//   CUtlVector<CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true>::StringPool_t*, CUtlMemory<CUtlSymbolTableLargeBase<CTh
//   CUtlVector<CMemoryStack*, CUtlMemory<CMemoryStack*, int> >
//   CUtlVector<CUtlAbstractDelegate, CUtlMemory<CUtlAbstractDelegate, int> >
//   CUtlVector<SetInPVSInfo_t, CUtlMemory<SetInPVSInfo_t, int> >
//   CUtlVector<BuildFlattenedSerializerInfo_t, CUtlMemory<BuildFlattenedSerializerInfo_t, int> >
//   CUtlVector<ScriptEntityIOOutputDesc_t, CUtlMemory<ScriptEntityIOOutputDesc_t, int> >
//   CUtlVector<CResponseFileParser::ScriptEntry, CUtlMemory<CResponseFileParser::ScriptEntry, int> >
//   CUtlVector<CResponseSystem::PendingCriterionRule, CUtlMemory<CResponseSystem::PendingCriterionRule, int> >
//   CUtlVector<CRR_Response, CUtlMemory<CRR_Response, int> >
//   CUtlVector<rr2::CRule, CUtlMemory<rr2::CRule, int> >
//   CUtlVector<CFieldPathHuffmanEncoder::INode*, CUtlMemory<CFieldPathHuffmanEncoder::INode*, int> >
//   CUtlVector<KeyValues3*, CUtlMemory<KeyValues3*, int> >
//   CUtlVector<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >
//   CUtlVector<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >
//   CUtlVector<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference
//   CUtlVector<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimestampedDataContain
//   CUtlVector<CAnimEncodedFrames, CUtlMemory<CAnimEncodedFrames, int> >
//   CUtlVector<CAnimDesc, CUtlMemory<CAnimDesc, int> >
//   CUtlVector<CAnimDecoder, CUtlMemory<CAnimDecoder, int> >
//   CUtlVector<CAnimFrameSegment, CUtlMemory<CAnimFrameSegment, int> >
//   CUtlVector<CSeqAutoLayer, CUtlMemory<CSeqAutoLayer, int> >
//   CUtlVector<CSeqIKLock, CUtlMemory<CSeqIKLock, int> >
//   CUtlVector<CSeqCmdLayer, CUtlMemory<CSeqCmdLayer, int> >
//   CUtlVector<CSeqPoseSetting, CUtlMemory<CSeqPoseSetting, int> >
//   CUtlVector<CUtlStringExternalizable, CUtlMemory<CUtlStringExternalizable, int> >
//   CUtlVector<CSeqS1SeqDesc, CUtlMemory<CSeqS1SeqDesc, int> >
//   CUtlVector<CSeqSynthAnimDesc, CUtlMemory<CSeqSynthAnimDesc, int> >
//   CUtlVector<CSeqCmdSeqDesc, CUtlMemory<CSeqCmdSeqDesc, int> >
//   CUtlVector<CSeqBoneMaskList, CUtlMemory<CSeqBoneMaskList, int> >
//   CUtlVector<CSeqPoseParamDesc, CUtlMemory<CSeqPoseParamDesc, int> >
//   CUtlVector<CBoneFlexDriverControl, CUtlMemory<CBoneFlexDriverControl, int> >
//   CUtlVector<CModelExtPart, CUtlMemory<CModelExtPart, int> >
//   CUtlVector<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >
//   CUtlVector<CBoneFlexDriver, CUtlMemory<CBoneFlexDriver, int> >
//   CUtlVector<CModel::BodyPart_t, CUtlMemory<CModel::BodyPart_t, int> >
//   CUtlVector<DefaultMaterialGroupIndex_t, CUtlMemory<DefaultMaterialGroupIndex_t, int> >
//   CUtlVector<CUtlVector<DefaultMaterialGroupIndex_t, CUtlMemory<DefaultMaterialGroupIndex_t, int> >, CUtlMemory<CUtlVector
//   CUtlVector<AttachmentPairing_t, CUtlMemory<AttachmentPairing_t, int> >
//   CUtlVector<CAnimBone, CUtlMemory<CAnimBone, int> >
//   CUtlVector<CAnimUser, CUtlMemory<CAnimUser, int> >
//   CUtlVector<CAnimIKChain, CUtlMemory<CAnimIKChain, int> >
//   CUtlVector<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >
//   CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >
//   CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >
//   CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_ptr<CAn
//   CUtlVector<RequestElementWeights_t, CUtlMemory<RequestElementWeights_t, int> >
//   CUtlVector<ChannelElementWeights_t, CUtlMemory<ChannelElementWeights_t, int> >
//   CUtlVector<const CAnimationGroupResource*, CUtlMemory<const CAnimationGroupResource*, int> >
//   CUtlVector<CAnimDecodeSwizzle, CUtlMemory<CAnimDecodeSwizzle, int> >
//   CUtlVector<ResourceId_t, CUtlMemory<ResourceId_t, int> >
//   CUtlVector<CAnimRetarget, CUtlMemory<CAnimRetarget, int> >
//   CUtlVector<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >
//   CUtlVector<CSeqGroupInstance, CUtlMemory<CSeqGroupInstance, int> >
//   CUtlVector<ISequence*, CUtlMemory<ISequence*, int> >
//   CUtlVector<PoseParamDesc_t, CUtlMemory<PoseParamDesc_t, int> >
//   CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int> >
//   CUtlVector<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entr
//   CUtlVector<SeqInstanceMap_t, CUtlMemory<SeqInstanceMap_t, int> >
//   CUtlVector<CAnimDataChannel, CUtlMemory<CAnimDataChannel, int> >
//   CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, tr
//   CUtlVector<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_
//   CUtlVector<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >
//   CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, true, false
//   CUtlVector<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, 
//   CUtlVector<UserDataElementMap_t, CUtlMemory<UserDataElementMap_t, int> >
//   CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>
//   CUtlVector<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::En
//   CUtlVector<ChannelWeightlist_t, CUtlMemory<ChannelWeightlist_t, int> >
//   CUtlVector<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >
//   CUtlVector<AnimBounds_t, CUtlMemory<AnimBounds_t, int> >
//   CUtlVector<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >
//   CUtlVector<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int> >
//   CUtlVector<CConstraintSlave, CUtlMemory<CConstraintSlave, int> >
//   CUtlVector<CConstraintTarget, CUtlMemory<CConstraintTarget, int> >
//   CUtlVector<CHitBoxSet, CUtlMemory<CHitBoxSet, int> >
//   CUtlVector<TraceVertex_t, CUtlMemory<TraceVertex_t, int> >
//   CUtlVector<CMorphConstraint::BoneParentPair_t, CUtlMemory<CMorphConstraint::BoneParentPair_t, int> >
//   CUtlVector<CActivityModifierWeight, CUtlMemory<CActivityModifierWeight, int> >
//   CUtlVector<EventList_t, CUtlMemory<EventList_t, int> >
//   CUtlVector<const CFlexRule*, CUtlMemory<const CFlexRule*, int> >
//   CUtlVector<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlMemory<CUtlHashDict<const CMorphData*, false, fal
//   CUtlVector<CUtlVector<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlMemory<CUtlHashDict<const CMorphData*,
//   CUtlVector<CJointIndexData, CUtlMemory<CJointIndexData, int> >
//   CUtlVector<CPhysSurfaceProperties*, CUtlMemory<CPhysSurfaceProperties*, int> >
//   CUtlVector<RnHull_t*, CUtlMemory<RnHull_t*, int> >
//   CUtlVector<const CPhysAggregateData*, CUtlMemory<const CPhysAggregateData*, int> >
//   CUtlVector<CSmartPtr<CPhysAggregateData, CRefCountAccessor>, CUtlMemory<CSmartPtr<CPhysAggregateData, CRefCountAccessor>
//   CUtlVector<SplitAggregateData(const CPhysAggregateData*, uint, CUtlVector<CSmartPtr<CPhysAggregateData> >*)::PartDesc_t,
//   CUtlVector<CMeshDisjointSetPartition::Part_t, CUtlMemory<CMeshDisjointSetPartition::Part_t, int> >
//   CUtlVector<float const*, CUtlMemory<float const*, int> >
//   CUtlVector<VPlane, CUtlMemory<VPlane, int> >
//   CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >
//   CUtlVector<CVertexKDNode, CUtlMemory<CVertexKDNode, int> >
//   CUtlVector<GLViewLine_t, CUtlMemory<GLViewLine_t, int> >
//   CUtlVector<GLViewPoly_t, CUtlMemory<GLViewPoly_t, int> >
//   CUtlVector<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >
//   CUtlVector<const CSchemaType*, CUtlMemory<const CSchemaType*, int> >
//   CUtlVector<CMesh, CUtlMemory<CMesh, int> >
//   CUtlVector<VertAndBone_t, CUtlMemory<VertAndBone_t, int> >
//   CUtlVector<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >
//   CUtlVector<VecDouble3, CUtlMemory<VecDouble3, int> >
//   CUtlVector<NavGenProperty_t, CUtlMemory<NavGenProperty_t, int> >
//   CUtlVector<NavGenLadder_t, CUtlMemory<NavGenLadder_t, int> >
//   CUtlVector<NavGenMarkup_t, CUtlMemory<NavGenMarkup_t, int> >
//   CUtlVector<CNavGenPoly, CUtlMemory<CNavGenPoly, int> >
//   CUtlVector<CUtlVector<CNavArea*, CUtlMemory<CNavArea*, int> >, CUtlMemory<CUtlVector<CNavArea*, CUtlMemory<CNavArea*, in
//   CUtlVector<CUtlVector<CNavNode*, CUtlMemory<CNavNode*, int> >, CUtlMemory<CUtlVector<CNavNode*, CUtlMemory<CNavNode*, in
//   CUtlVector<NavGenAreaDebug_t, CUtlMemory<NavGenAreaDebug_t, int> >
//   CUtlVector<NavGenRecastDebugStage_t::Vertex_t, CUtlMemory<NavGenRecastDebugStage_t::Vertex_t, int> >
//   CUtlVector<NavGenDebugStage_t, CUtlMemory<NavGenDebugStage_t, int> >
//   CUtlVector<NavGenRecastDebugStage_t, CUtlMemory<NavGenRecastDebugStage_t, int> >
//   CUtlVector<CMsgSOCacheSubscribed*, CUtlMemory<CMsgSOCacheSubscribed*, int> >
//   CUtlVector<GCSDK::CGCClient::PartialSOCache_t::Msg_t, CUtlMemory<GCSDK::CGCClient::PartialSOCache_t::Msg_t, int> >
//   CUtlVector<GCSDK::ISharedObjectListener*, CUtlMemory<GCSDK::ISharedObjectListener*, int> >
//   CUtlVector<GCSDK::SOID_t, CUtlMemory<GCSDK::SOID_t, int> >
//   CUtlVector<GCSDK::WaitAnalysisNode_t*, CUtlMemory<GCSDK::WaitAnalysisNode_t*, int> >
//   CUtlVector<CUtlHashMapLarge<unsigned int, const GCSDK::JobType_t*>::HashBucket_t, CUtlMemory<CUtlHashMapLarge<unsigned i
//   CUtlVector<CUtlHashMapLarge<char const*, const GCSDK::JobType_t*, CaseSensitiveStrEquals, MurmurHash3ConstCharPtr>::Hash
//   CUtlVector<GCSDK::CGCReportPrinter::Column_t, CUtlMemory<GCSDK::CGCReportPrinter::Column_t, int> >
//   CUtlVector<CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t>*, CUtlMemory<CCopyableUtlVector<GCSDK::CGCReportPrinte
//   CUtlVector<GCSDK::CGCReportPrinter::Variant_t, CUtlMemory<GCSDK::CGCReportPrinter::Variant_t, int> >
//   CUtlVector<google::protobuf::Message*, CUtlMemory<google::protobuf::Message*, int> >
//   CUtlVector<GCSDK::CSharedObjectTypeCache*, CUtlMemory<GCSDK::CSharedObjectTypeCache*, int> >
//   CUtlVector<GCSDK::CSharedObject*, CUtlMemory<GCSDK::CSharedObject*, int> >
//   CUtlVector<GCSDK::CWorkItem*, CUtlMemory<GCSDK::CWorkItem*, int> >
//   CUtlVector<GCSDK::CWorkThread*, CUtlMemory<GCSDK::CWorkThread*, int> >
//   CUtlVector<GCSDK::CGCReportPrinter::PrintReport(GCSDK::CGCEmitGroup&, uint32, bool)::Summary_t, CUtlMemory<GCSDK::CGCRep
//   CUtlVector<CFoW_1DZ::TILEINFO, CUtlMemory<CFoW_1DZ::TILEINFO, int> >
//   CUtlVector<CFoW_1DZ::ROWINFO, CUtlMemory<CFoW_1DZ::ROWINFO, int> >
//   CUtlVector<double, CUtlMemory<double, int> >
//   CUtlVector<CClassVisitInfo::FieldInfo_t, CUtlMemory<CClassVisitInfo::FieldInfo_t, int> >

// CUtlVectorMT: 1 more instantiations (full list in INDEX.tsv)
//   CUtlVectorMT<CUtlVector<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int> >::RefCountedSignallerPointer_t*,

// CUtlVectorFixed: 12 more instantiations (full list in INDEX.tsv)
//   CUtlVectorFixed<CUtlStringToken, 4ul>
//   CUtlVectorFixed<CWeakHandle<InfoForResourceTypeCTextureBase>, 4ul>
//   CUtlVectorFixed<unsigned int, 8ul>
//   CUtlVectorFixed<CIKTarget, 12ul>
//   CUtlVectorFixed<float, 31ul>
//   CUtlVectorFixed<float, 5ul>
//   CUtlVectorFixed<CDOTA_BaseNPC_Hero::COtherHeroTalk::info_t, 10ul>
//   CUtlVectorFixed<CNavObstacleEdge, 4ul>
//   CUtlVectorFixed<CResponseDict<Rule*, short unsigned int>*, 2ul>
//   CUtlVectorFixed<int, 32ul>
//   CUtlVectorFixed<CNavArea*, 3ul>
//   CUtlVectorFixed<float const*, 64ul>

// CUtlVectorFixedGrowable: 102 more instantiations (full list in INDEX.tsv)
//   CUtlVectorFixedGrowable<ISceneView::WorldList_t, 16ul>
//   CUtlVectorFixedGrowable<CSceneObjectStateOverideEntry<const CSceneSystemStencilState*>, 1ul>
//   CUtlVectorFixedGrowable<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, 1ul>
//   CUtlVectorFixedGrowable<ChildSceneObjectReference_t, 1ul>
//   CUtlVectorFixedGrowable<CMeshDrawPrimitive_t, 16ul>
//   CUtlVectorFixedGrowable<CRnPlaneResult, 32ul>
//   CUtlVectorFixedGrowable<int, 4ul>
//   CUtlVectorFixedGrowable<COverlapHit, 64ul>
//   CUtlVectorFixedGrowable<CGameTrace, 64ul>
//   CUtlVectorFixedGrowable<const OffsetIgnore_t*, 4ul>
//   CUtlVectorFixedGrowable<int, 32ul>
//   CUtlVectorFixedGrowable<CNetworkFieldReallocRecord, 4ul>
//   CUtlVectorFixedGrowable<CNetworkFieldDeallocRecord, 4ul>
//   CUtlVectorFixedGrowable<CSkeletonInstance*, 64ul>
//   CUtlVectorFixedGrowable<CBodyGameSystem::HierarchySetupWork_t, 256ul>
//   CUtlVectorFixedGrowable<CGameSceneNode*, 16ul>
//   CUtlVectorFixedGrowable<CGameSceneNode*, 512ul>
//   CUtlVectorFixedGrowable<EntityNotification_t, 256ul>
//   CUtlVectorFixedGrowable<CEntityIdentity*, 1024ul>
//   CUtlVectorFixedGrowable<CEntityInstance*, 128ul>
//   CUtlVectorFixedGrowable<matrix3x4a_t, 2ul>
//   CUtlVectorFixedGrowable<HitBoxSetAndMesh_t, 16ul>
//   CUtlVectorFixedGrowable<CBaseAnimating*, 512ul>
//   CUtlVectorFixedGrowable<PhysicsTrace_t, 128ul>
//   CUtlVectorFixedGrowable<CSweepResult, 128ul>
//   CUtlVectorFixedGrowable<CLinearSweepResult, 128ul>
//   CUtlVectorFixedGrowable<IPhysicsShape*, 128ul>
//   CUtlVectorFixedGrowable<HitBoxAndMesh_t, 32ul>
//   CUtlVectorFixedGrowable<matrix3x4a_t, 32ul>
//   CUtlVectorFixedGrowable<int, 128ul>
//   CUtlVectorFixedGrowable<CGameSceneNode*, 32ul>
//   CUtlVectorFixedGrowable<IPhysicsBody*, 16ul>
//   CUtlVectorFixedGrowable<CBaseEntity*, 32ul>
//   CUtlVectorFixedGrowable<CPointEntity*, 8ul>
//   CUtlVectorFixedGrowable<int, 15ul>
//   CUtlVectorFixedGrowable<CHandle<CBaseEntity>, 4ul>
//   CUtlVectorFixedGrowable<CDOTA_RealtimeCombatAnalyzer::EventToEntry_t, 128ul>
//   CUtlVectorFixedGrowable<IntersectionRecord_t, 16ul>
//   CUtlVectorFixedGrowable<CDOTAGamerules::State_Enter_HERO_SELECTION()::PlayerMMRData, 24ul>
//   CUtlVectorFixedGrowable<CDOTA_Buff*, 16ul>
//   CUtlVectorFixedGrowable<long long unsigned int, 32ul>
//   CUtlVectorFixedGrowable<Vector2D, 256ul>
//   CUtlVectorFixedGrowable<Vector2D, 16ul>
//   CUtlVectorFixedGrowable<CHandle<CBaseEntity>, 50ul>
//   CUtlVectorFixedGrowable<sHealthTime, 64ul>
//   CUtlVectorFixedGrowable<char*, 8ul>
//   CUtlVectorFixedGrowable<Vector, 32ul>
//   CUtlVectorFixedGrowable<CHandle<CBaseEntity>, 16ul>
//   CUtlVectorFixedGrowable<char const*, 8ul>
//   CUtlVectorFixedGrowable<int, 8ul>
//   CUtlVectorFixedGrowable<float, 8ul>
//   CUtlVectorFixedGrowable<CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::SavedCooldown, 24ul>
//   CUtlVectorFixedGrowable<CBaseEntity*, 128ul>
//   CUtlVectorFixedGrowable<HexIndex_t, 1024ul>
//   CUtlVectorFixedGrowable<unsigned int, 32ul>
//   CUtlVectorFixedGrowable<CNavObstacle*, 16ul>
//   CUtlVectorFixedGrowable<CNavObstacleEdge*, 64ul>
//   CUtlVectorFixedGrowable<Vector, 24ul>
//   CUtlVectorFixedGrowable<CNavArea*, 32ul>
//   CUtlVectorFixedGrowable<CNavArea*, 16ul>
//   CUtlVectorFixedGrowable<float, 512ul>
//   CUtlVectorFixedGrowable<Vector, 16ul>
//   CUtlVectorFixedGrowable<int, 45ul>
//   CUtlVectorFixedGrowable<int, 16ul>
//   CUtlVectorFixedGrowable<UnserializeComponentInfo_t, 64ul>
//   CUtlVectorFixedGrowable<CUtlSymbolLarge, 128ul>
//   CUtlVectorFixedGrowable<const CSchemaClassInfo*, 128ul>
//   CUtlVectorFixedGrowable<CEntityHandle, 64ul>
//   CUtlVectorFixedGrowable<EntityActivation_t, 50ul>
//   CUtlVectorFixedGrowable<CEntityHandle, 50ul>
//   CUtlVectorFixedGrowable<EntityDeletion_t, 256ul>
//   CUtlVectorFixedGrowable<SpewEntityListSummary(const CConcreteEntityList*)::ClassCount_t, 32ul>
//   CUtlVectorFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4ul>
//   CUtlVectorFixedGrowable<CKeyValues3Cluster*, 8ul>
//   CUtlVectorFixedGrowable<CUtlStringToken, 8ul>
//   CUtlVectorFixedGrowable<KeyValues3*, 8ul>
//   CUtlVectorFixedGrowable<unsigned char, 8ul>
//   CUtlVectorFixedGrowable<CUtlTokenReference, 8ul>
//   CUtlVectorFixedGrowable<unsigned char, 1024ul>
//   CUtlVectorFixedGrowable<CUtlStringToken, 256ul>
//   CUtlVectorFixedGrowable<char const*, 256ul>
//   CUtlVectorFixedGrowable<matrix3x4_t, 128ul>
//   CUtlVectorFixedGrowable<RenderInputLayoutField_t, 4ul>
//   CUtlVectorFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1ul>
//   CUtlVectorFixedGrowable<CFeModelCombiner::Model_t, 8ul>
//   CUtlVectorFixedGrowable<short unsigned int, 16ul>
//   CUtlVectorFixedGrowable<RnCollisionAttr_t, 32ul>
//   CUtlVectorFixedGrowable<CExpressionCalculator::Token_t, 32ul>
//   CUtlVectorFixedGrowable<CFeModelCombiner::CollectFitMatrices()::PerModel_t, 8ul>
//   CUtlVectorFixedGrowable<CHullHalfEdge*, 256ul>
//   CUtlVectorFixedGrowable<CHullTri*, 256ul>
//   CUtlVectorFixedGrowable<float const*, 256ul>
//   CUtlVectorFixedGrowable<CHullTri*, 64ul>
//   CUtlVectorFixedGrowable<float const*, 64ul>
//   CUtlVectorFixedGrowable<CNavGenPolyConn, 8ul>
//   CUtlVectorFixedGrowable<CNavArea*, 64ul>
//   CUtlVectorFixedGrowable<OneWayLink_t, 512ul>
//   CUtlVectorFixedGrowable<NavCellCoord_t, 1024ul>
//   CUtlVectorFixedGrowable<GCSDK::CGCClientSharedObjectCache*, 1ul>
//   CUtlVectorFixedGrowable<GCSDK::CLock*, 2ul>
//   CUtlVectorFixedGrowable<GCSDK::IMsgNetPacket*, 1ul>
//   CUtlVectorFixedGrowable<GCSDK::CSharedObject*, 1ul>

// CUtlVectorFixedGrowableCompat: 11 more instantiations (full list in INDEX.tsv)
//   CUtlVectorFixedGrowableCompat<CDOTA_BaseNPC*, 32ul>
//   CUtlVectorFixedGrowableCompat<INextBot*, 1024ul>
//   CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>, 32ul>
//   CUtlVectorFixedGrowableCompat<sCreepHealthInfo, 64ul>
//   CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>, 10ul>
//   CUtlVectorFixedGrowableCompat<sDamageEvent, 32ul>
//   CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>, 16ul>
//   CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>, 25ul>
//   CUtlVectorFixedGrowableCompat<CDOTA_BaseNPC*, 64ul>
//   CUtlVectorFixedGrowableCompat<char const*, 16ul>
//   CUtlVectorFixedGrowableCompat<int, 32ul>

// CUtlVectorConservative: 3 more instantiations (full list in INDEX.tsv)
//   CUtlVectorConservative<rr2::CriterionLambda>
//   CUtlVectorConservative<short int>
//   CUtlVectorConservative<ResponseGroup>

// CUtlVectorUltraConservative: 14 more instantiations (full list in INDEX.tsv)
//   CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>
//   CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>
//   CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>
//   CUtlVectorUltraConservative<const CPhysSurfaceProperties*, CUtlVectorUltraConservativeAllocator>
//   CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>
//   CUtlVectorUltraConservative<CNavConnect, CUtlVectorUltraConservativeAllocator>
//   CUtlVectorUltraConservative<NavLadderConnect, CUtlVectorUltraConservativeAllocator>
//   CUtlVectorUltraConservative<CEntityIOOutput, CUtlVectorUltraConservativeAllocator>
//   CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>
//   CUtlVectorUltraConservative<const VPhysXJoint_t*, CUtlVectorUltraConservativeAllocator>
//   CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>
//   CUtlVectorUltraConservative<const CPhysAggregateData*, CUtlVectorUltraConservativeAllocator>
//   CUtlVectorUltraConservative<CNavConnect, CUtlVectorUltraConservativeAllocator>
//   CUtlVectorUltraConservative<NavLadderConnect, CUtlVectorUltraConservativeAllocator>

// CCopyableUtlVector: 12 more instantiations (full list in INDEX.tsv)
//   CCopyableUtlVector<autograph_t::level_t>
//   CCopyableUtlVector<const CAssetModifier*>
//   CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t>
//   CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>
//   CCopyableUtlVector<SaveRestoreTranslate_t>
//   CCopyableUtlVector<CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int> >::EventAndDelegate_t>
//   CCopyableUtlVector<CTransform>
//   CCopyableUtlVector<CUtlSymbolLarge>
//   CCopyableUtlVector<char const*>
//   CCopyableUtlVector<CEntityIndex>
//   CCopyableUtlVector<const CEconLootListDefinition*>
//   CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t>

// CSchemaTypeOf: 122 more instantiations (full list in INDEX.tsv)
//   CSchemaTypeOf<CUtlVector<CFuncLadder*, CUtlMemory<CFuncLadder*, int> > >
//   CSchemaTypeOf<CUtlVector<char*, CUtlMemory<char*, int> > >
//   CSchemaTypeOf<CUtlVector<CHintMessage*, CUtlMemory<CHintMessage*, int> > >
//   CSchemaTypeOf<CUtlVector<CAnimationLayer, CUtlMemory<CAnimationLayer, int> > >
//   CSchemaTypeOf<CUtlVector<Relationship_t, CUtlMemory<Relationship_t, int> > >
//   CSchemaTypeOf<CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> > >
//   CSchemaTypeOf<CUtlVector<CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >, CUtlMemory<CUtlVector
//   CSchemaTypeOf<CUtlVector<thinkfunc_t, CUtlMemory<thinkfunc_t, int> > >
//   CSchemaTypeOf<CUtlVector<ResponseContext_t, CUtlMemory<ResponseContext_t, int> > >
//   CSchemaTypeOf<CUtlVector<CHandle<CBasePropDoor>, CUtlMemory<CHandle<CBasePropDoor>, int> > >
//   CSchemaTypeOf<CUtlVector<CAnimationLayer, CNetworkUtlVector_MemoryType<CAnimationLayer, -1> > >
//   CSchemaTypeOf<CUtlVector<CHandle<CBaseCombatWeapon>, CNetworkUtlVector_MemoryType<CHandle<CBaseCombatWeapon>, -1> > >
//   CSchemaTypeOf<CUtlVector<CHandle<CEconWearable>, CNetworkUtlVector_MemoryType<CHandle<CEconWearable>, -1> > >
//   CSchemaTypeOf<CUtlVector<float, CNetworkUtlVector_MemoryType<float, -1> > >
//   CSchemaTypeOf<CUtlVector<CAI_Link*, CUtlMemory<CAI_Link*, int> > >
//   CSchemaTypeOf<CUtlVector<CFish*, CUtlMemory<CFish*, int> > >
//   CSchemaTypeOf<CUtlVector<CHandle<CFish>, CUtlMemory<CHandle<CFish>, int> > >
//   CSchemaTypeOf<CUtlVector<magnetted_objects_t, CUtlMemory<magnetted_objects_t, int> > >
//   CSchemaTypeOf<CUtlVector<CHandle<CBasePlayer>, CUtlMemory<CHandle<CBasePlayer>, int> > >
//   CSchemaTypeOf<CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > >
//   CSchemaTypeOf<CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > >
//   CSchemaTypeOf<CUtlVector<CTeamSpawnPoint*, CUtlMemory<CTeamSpawnPoint*, int> > >
//   CSchemaTypeOf<CUtlVector<CHandle<CBasePlayer>, CNetworkUtlVector_MemoryType<CHandle<CBasePlayer>, -1> > >
//   CSchemaTypeOf<CUtlVector<CPassengerSeatTransition, CUtlMemory<CPassengerSeatTransition, int> > >
//   CSchemaTypeOf<CUtlVector<CPassengerSeat, CUtlMemory<CPassengerSeat, int> > >
//   CSchemaTypeOf<CUtlVector<CPassengerInfo, CUtlMemory<CPassengerInfo, int> > >
//   CSchemaTypeOf<CUtlVector<CPassengerRole, CUtlMemory<CPassengerRole, int> > >
//   CSchemaTypeOf<CUtlVector<CBaseServerVehicle::entryanim_t, CUtlMemory<CBaseServerVehicle::entryanim_t, int> > >
//   CSchemaTypeOf<CUtlVector<CBaseServerVehicle::exitanim_t, CUtlMemory<CBaseServerVehicle::exitanim_t, int> > >
//   CSchemaTypeOf<CUtlVector<vehicle_gear_t, CUtlMemory<vehicle_gear_t, int> > >
//   CSchemaTypeOf<CUtlVector<vehicle_crashsound_t, CUtlMemory<vehicle_crashsound_t, int> > >
//   CSchemaTypeOf<CUtlVector<WeaponTextureData_t, CUtlMemory<WeaponTextureData_t, int> > >
//   CSchemaTypeOf<CUtlVector<WeaponSoundData_t, CUtlMemory<WeaponSoundData_t, int> > >
//   CSchemaTypeOf<CUtlVector<SosEditItemInfo_t, CUtlMemory<SosEditItemInfo_t, int> > >
//   CSchemaTypeOf<CUtlVector<CEntityIndex, CUtlMemoryFixedGrowable<CEntityIndex, 65ul, int> > >
//   CSchemaTypeOf<CUtlVector<CAI_Expresser*, CUtlMemory<CAI_Expresser*, int> > >
//   CSchemaTypeOf<CUtlVector<prevent_interaction_t, CUtlMemory<prevent_interaction_t, int> > >
//   CSchemaTypeOf<CUtlVector<CEffectScriptElement, CUtlMemory<CEffectScriptElement, int> > >
//   CSchemaTypeOf<CUtlVector<CHandle<CBaseEntity>, CNetworkUtlVector_MemoryType<CHandle<CBaseEntity>, -1> > >
//   CSchemaTypeOf<CUtlVector<CUtlSymbolLarge, CUtlMemory<CUtlSymbolLarge, int> > >
//   CSchemaTypeOf<CUtlVector<CHandle<CBaseVRHandAttachment>, CNetworkUtlVector_MemoryType<CHandle<CBaseVRHandAttachment>, -1
//   CSchemaTypeOf<CUtlVector<CHandle<CSceneListManager>, CUtlMemory<CHandle<CSceneListManager>, int> > >
//   CSchemaTypeOf<CUtlVector<CHandle<CSceneEntity>, CUtlMemory<CHandle<CSceneEntity>, int> > >
//   CSchemaTypeOf<CUtlVector<CEntityIndex, CUtlMemory<CEntityIndex, int> > >
//   CSchemaTypeOf<CUtlVector<CHandle<CBaseFlex>, CNetworkUtlVector_MemoryType<CHandle<CBaseFlex>, -1> > >
//   CSchemaTypeOf<CUtlVector<KeyValues*, CUtlMemory<KeyValues*, int> > >
//   CSchemaTypeOf<CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > >
//   CSchemaTypeOf<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > >
//   CSchemaTypeOf<CUtlVector<sSpiritInfo*, CUtlMemory<sSpiritInfo*, int> > >
//   CSchemaTypeOf<CUtlVector<int, CNetworkUtlVector_MemoryType<int, -1> > >
//   CSchemaTypeOf<CUtlVector<int, CUtlMemory<int, int> > >
//   CSchemaTypeOf<CUtlVector<CHandle<CDOTA_BaseNPC_Pet>, CUtlMemory<CHandle<CDOTA_BaseNPC_Pet>, int> > >
//   CSchemaTypeOf<CUtlVector<HeroPickRecord_t, CUtlMemory<HeroPickRecord_t, int> > >
//   CSchemaTypeOf<CUtlVector<HeroDeathRecord_t, CUtlMemory<HeroDeathRecord_t, int> > >
//   CSchemaTypeOf<CUtlVector<CDOTA_ReconnectInfo, CUtlMemory<CDOTA_ReconnectInfo, int> > >
//   CSchemaTypeOf<CUtlVector<GameChatLogEntry_t, CUtlMemory<GameChatLogEntry_t, int> > >
//   CSchemaTypeOf<CUtlVector<DataTeamPlayer_t, CNetworkUtlVector_MemoryType<DataTeamPlayer_t, -1> > >
//   CSchemaTypeOf<CUtlVector<TempViewerInfo_t, CNetworkUtlVector_MemoryType<TempViewerInfo_t, -1> > >
//   CSchemaTypeOf<CUtlVector<CHeroesPerPlayer, CNetworkUtlVector_MemoryType<CHeroesPerPlayer, -1> > >
//   CSchemaTypeOf<CUtlVector<CDOTA_ItemStockInfo, CNetworkUtlVector_MemoryType<CDOTA_ItemStockInfo, -1> > >
//   CSchemaTypeOf<CUtlVector<CDOTA_AbilityDraftAbilityState, CNetworkUtlVector_MemoryType<CDOTA_AbilityDraftAbilityState, -1
//   CSchemaTypeOf<CUtlVector<CHandle<CDOTA_BaseNPC_Tower>, CUtlMemory<CHandle<CDOTA_BaseNPC_Tower>, int> > >
//   CSchemaTypeOf<CUtlVector<CHandle<CDOTA_BaseNPC_Building>, CUtlMemory<CHandle<CDOTA_BaseNPC_Building>, int> > >
//   CSchemaTypeOf<CUtlVector<CHeroStatueLiked, CNetworkUtlVector_MemoryType<CHeroStatueLiked, -1> > >
//   CSchemaTypeOf<CUtlVector<CHandle<CIngameEvent_Base>, CNetworkUtlVector_MemoryType<CHandle<CIngameEvent_Base>, -1> > >
//   CSchemaTypeOf<CUtlVector<AABB_t, CNetworkUtlVector_MemoryType<AABB_t, -1> > >
//   CSchemaTypeOf<CUtlVector<InGamePredictionData_t, CNetworkUtlVector_MemoryType<InGamePredictionData_t, -1> > >
//   CSchemaTypeOf<CUtlVector<CDOTASubChallengeInfo, CNetworkUtlVector_MemoryType<CDOTASubChallengeInfo, -1> > >
//   CSchemaTypeOf<CUtlVector<CDOTA_PlayerChallengeInfo, CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo, 24> > >
//   CSchemaTypeOf<CUtlVector<CDOTA_CombatLogQueryProgress, CNetworkUtlVector_MemoryType<CDOTA_CombatLogQueryProgress, -1> > 
//   CSchemaTypeOf<CUtlVector<sPendingTreeRemoval, CUtlMemory<sPendingTreeRemoval, int> > >
//   CSchemaTypeOf<CUtlVector<TimedBalanceRecord_t, CUtlMemory<TimedBalanceRecord_t, int> > >
//   CSchemaTypeOf<CUtlVector<TimedKillEvent_t, CUtlMemory<TimedKillEvent_t, int> > >
//   CSchemaTypeOf<CUtlVector<PlayerResourcePlayerTeamData_t, CNetworkUtlVector_MemoryType<PlayerResourcePlayerTeamData_t, -1
//   CSchemaTypeOf<CUtlVector<PlayerResourcePlayerData_t, CNetworkUtlVector_MemoryType<PlayerResourcePlayerData_t, -1> > >
//   CSchemaTypeOf<CUtlVector<PlayerResourceBroadcasterData_t, CNetworkUtlVector_MemoryType<PlayerResourceBroadcasterData_t, 
//   CSchemaTypeOf<CUtlVector<PurchasedItem_t, CUtlMemory<PurchasedItem_t, int> > >
//   CSchemaTypeOf<CUtlVector<float, CUtlMemory<float, int> > >
//   CSchemaTypeOf<CUtlVector<CHandle<CDOTA_Unit_Courier>, CUtlMemory<CHandle<CDOTA_Unit_Courier>, int> > >
//   CSchemaTypeOf<CUtlVector<DamageShareEvent_t, CUtlMemory<DamageShareEvent_t, int> > >
//   CSchemaTypeOf<CUtlVector<sPlayerSnapshot, CUtlMemory<sPlayerSnapshot, int> > >
//   CSchemaTypeOf<CUtlVector<CSpeechBubbleInfo, CNetworkUtlVector_MemoryType<CSpeechBubbleInfo, 4> > >
//   CSchemaTypeOf<CUtlVector<sSharedCooldownInfo, CUtlMemory<sSharedCooldownInfo, int> > >
//   CSchemaTypeOf<CUtlVector<CDOTABaseAbility*, CUtlMemory<CDOTABaseAbility*, int> > >
//   CSchemaTypeOf<CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > >
//   CSchemaTypeOf<CUtlVector<CHandle<CDOTA_BaseNPC>, CUtlMemory<CHandle<CDOTA_BaseNPC>, int> > >
//   CSchemaTypeOf<CUtlVector<CUtlSymbol, CUtlMemory<CUtlSymbol, int> > >
//   CSchemaTypeOf<CUtlVector<CreatureStateData_t, CUtlMemory<CreatureStateData_t, int> > >
//   CSchemaTypeOf<CUtlVector<CreatureAbilityData_t, CUtlMemory<CreatureAbilityData_t, int> > >
//   CSchemaTypeOf<CUtlVector<ItemDropData_t, CUtlMemory<ItemDropData_t, int> > >
//   CSchemaTypeOf<CUtlVector<item_definition_index_t, CUtlMemory<item_definition_index_t, int> > >
//   CSchemaTypeOf<CUtlVector<CDOTA_BaseNPC_Hero::sHeroDamageInfo, CUtlMemory<CDOTA_BaseNPC_Hero::sHeroDamageInfo, int> > >
//   CSchemaTypeOf<CUtlVector<CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo, CUtlMemory<CDOTA_BaseNPC_Hero::sHeroRecentModifier
//   CSchemaTypeOf<CUtlVector<sLoadoutItem, CUtlMemory<sLoadoutItem, int> > >
//   CSchemaTypeOf<CUtlVector<sAcquireHistory, CUtlMemory<sAcquireHistory, int> > >
//   CSchemaTypeOf<CUtlVector<CDOTA_ScriptedSpawner::scripted_moveto_t, CUtlMemory<CDOTA_ScriptedSpawner::scripted_moveto_t, 
//   CSchemaTypeOf<CUtlVector<sBounceInfo, CUtlMemory<sBounceInfo, int> > >
//   CSchemaTypeOf<CUtlVector<CDOTA_Tree*, CUtlMemory<CDOTA_Tree*, int> > >
//   CSchemaTypeOf<CUtlVector<NianDamageTaken_t, CUtlMemory<NianDamageTaken_t, int> > >
//   CSchemaTypeOf<CUtlVector<sGlaiveInfo, CUtlMemory<sGlaiveInfo, int> > >
//   CSchemaTypeOf<CUtlVector<RemnantData_t, CUtlMemory<RemnantData_t, int> > >
//   CSchemaTypeOf<CUtlVector<sSpiritDef, CUtlMemory<sSpiritDef, int> > >
//   CSchemaTypeOf<CUtlVector<CDOTA_BuffParticle, CUtlMemory<CDOTA_BuffParticle, int> > >
//   CSchemaTypeOf<CUtlVector<CAttributeManager::cached_attribute_float_t, CUtlMemory<CAttributeManager::cached_attribute_flo
//   CSchemaTypeOf<CUtlVector<CEconItemAttribute, CNetworkUtlVector_MemoryType<CEconItemAttribute, -1> > >
//   CSchemaTypeOf<CUtlVector<NavAttributeEnum, CUtlMemory<NavAttributeEnum, int> > >
//   CSchemaTypeOf<CUtlVector<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> > >
//   CSchemaTypeOf<CUtlVector<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> > >
//   CSchemaTypeOf<CUtlVector<bool, CUtlMemory<bool, int> > >
//   CSchemaTypeOf<CUtlVector<const EntComponentInfo_t*, CUtlMemory<const EntComponentInfo_t*, int> > >
//   CSchemaTypeOf<CUtlVector<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> > >
//   CSchemaTypeOf<CUtlVector<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> > >
//   CSchemaTypeOf<CUtlVector<CHitBox, CUtlMemory<CHitBox, int> > >
//   CSchemaTypeOf<CUtlVector<CHitBoxSet, CUtlMemory<CHitBoxSet, int> > >
//   CSchemaTypeOf<CUtlVector<CBaseConstraint*, CUtlMemory<CBaseConstraint*, int> > >
//   CSchemaTypeOf<CUtlVector<CConstraintSlave, CUtlMemory<CConstraintSlave, int> > >
//   CSchemaTypeOf<CUtlVector<CConstraintTarget, CUtlMemory<CConstraintTarget, int> > >
//   CSchemaTypeOf<CUtlVector<CPhysSurfaceProperties*, CUtlMemory<CPhysSurfaceProperties*, int> > >
//   CSchemaTypeOf<CUtlVector<CNavArea*, CUtlMemory<CNavArea*, int> > >
//   CSchemaTypeOf<CCopyableUtlVector<char const*> >
//   CSchemaTypeOf<CCopyableUtlVector<CEntityIndex> >
//   CSchemaTypeOf<CUtlVectorFixedGrowable<CSceneObjectData, 1ul> >
