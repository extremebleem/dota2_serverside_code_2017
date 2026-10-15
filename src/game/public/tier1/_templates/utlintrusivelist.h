// Reconstructed from DWARF by pahole; not original source.

// src/game/public/tier1/utlintrusivelist.h:927
class CUtlIntrusiveList<CHullTri> {
	bool IsEmpty();
	bool IsNonEmpty();
	CHullTri * Head();
	CUtlIntrusiveList();
	void RemoveAll();
	void AddToHead(CHullTri *);
	void AddToHeadTS(CHullTri *);
	CHullTri * RemoveHeadTS();
	void AddToTail(CHullTri *);
	void RemoveNode(CHullTri *);
	void DeleteNode(CHullTri *);
	void KillList();
	CHullTri * PrevNode(CHullTri *);
	CHullTri * NthNode(int);
	void Purge();
	int Count();
	void MoveTo(CUtlIntrusiveList<CHullTri> &);
	CHullTri * FindNamedNodeCaseSensitive(const char *);
	CHullTri * RemoveHead();
	CHullTri * RandomNode();
	CHullTri * Next(const CHullTri *);
	CHullTri * InvalidIndex();
	CHullTri & operator[](CHullTri *);
	const CHullTri & operator[](const CHullTri *);
	CUtlIntrusiveListIterator<CHullTri> begin();
	CUtlIntrusiveListIterator<CHullTri> end();
	CUtlIntrusiveListIterator<const CHullTri> begin();
	CUtlIntrusiveListIterator<const CHullTri> end();

	// sizeof = 8
};

// src/game/public/tier1/utlintrusivelist.h:1180
class CUtlIntrusiveDList<CHullTri> : public CUtlIntrusiveList<CHullTri> {
public:

	CUtlIntrusiveDList();
	void AddToHead(CHullTri *);
	void AddToTail(CHullTri *);
	void RemoveNode(CHullTri *);
	CHullTri * RemoveHead();
	CHullTri * PrevNode(CHullTri *);

	// sizeof = 8
};

// src/game/public/tier1/utlintrusivelist.h:1226
class CUtlIntrusiveDListWithTailPtr<CHullTri, CThreadNullMutex> : public CUtlIntrusiveDList<CHullTri> {
public:

	void LockForWrite();
	void UnlockWrite();
	void LockForRead();
	void UnlockRead();
	CUtlIntrusiveDListWithTailPtr();
	CHullTri * Tail();
	void AddToHead(CHullTri *);
	void AddToTail(CHullTri *);
	void RemoveNode(CHullTri *);
	void Purge();
	void Kill();
	CHullTri * RemoveHead();
	CHullTri * PrevNode(CHullTri *);

	// sizeof = 24
};
