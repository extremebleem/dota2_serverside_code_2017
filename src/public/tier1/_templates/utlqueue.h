// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlqueue.h:23
class CUtlQueue<int, CUtlMemory<int, int> > {
protected:

	CUtlQueue(CUtlQueue<int, CUtlMemory<int, int> > *, int, int);
	CUtlQueue(CUtlQueue<int, CUtlMemory<int, int> > *, int *, int);
	int RemoveAtHead(CUtlQueue<int, CUtlMemory<int, int> > *);
	bool RemoveAtHead(CUtlQueue<int, CUtlMemory<int, int> > *, int &);
	int RemoveAtTail(CUtlQueue<int, CUtlMemory<int, int> > *);
	bool RemoveAtTail(CUtlQueue<int, CUtlMemory<int, int> > *, int &);
	const int & Head(const CUtlQueue<int, CUtlMemory<int, int> > *);
	const int & Tail(const CUtlQueue<int, CUtlMemory<int, int> > *);
	void Insert(CUtlQueue<int, CUtlMemory<int, int> > *, const int &);
	bool Check(const CUtlQueue<int, CUtlMemory<int, int> > *, int);
	QueueIter_t First(const CUtlQueue<int, CUtlMemory<int, int> > *);
	QueueIter_t Next(const CUtlQueue<int, CUtlMemory<int, int> > *, QueueIter_t);
	QueueIter_t Last(const CUtlQueue<int, CUtlMemory<int, int> > *);
	QueueIter_t Previous(const CUtlQueue<int, CUtlMemory<int, int> > *, QueueIter_t);
	bool IsValid(const CUtlQueue<int, CUtlMemory<int, int> > *, QueueIter_t);
	int & Element(CUtlQueue<int, CUtlMemory<int, int> > *, QueueIter_t);
	const int & Element(const CUtlQueue<int, CUtlMemory<int, int> > *, QueueIter_t);
	int Count(const CUtlQueue<int, CUtlMemory<int, int> > *);
	bool IsEmpty(const CUtlQueue<int, CUtlMemory<int, int> > *);
	void RemoveAll(CUtlQueue<int, CUtlMemory<int, int> > *);
	void Purge(CUtlQueue<int, CUtlMemory<int, int> > *);
	QueueIter_t Next_Unchecked(const CUtlQueue<int, CUtlMemory<int, int> > *, QueueIter_t);
	QueueIter_t Previous_Unchecked(const CUtlQueue<int, CUtlMemory<int, int> > *, QueueIter_t);

	// sizeof = 24
};

// src/public/tier1/utlqueue.h:23
class CUtlQueue<CUnitOrders, CUtlMemory<CUnitOrders, int> > {
protected:

	CUtlQueue(CUtlQueue<CUnitOrders, CUtlMemory<CUnitOrders, int> > *, int, int);
	CUtlQueue(CUtlQueue<CUnitOrders, CUtlMemory<CUnitOrders, int> > *, CUnitOrders *, int);
	CUnitOrders RemoveAtHead(CUtlQueue<CUnitOrders, CUtlMemory<CUnitOrders, int> > *);
	bool RemoveAtHead(CUtlQueue<CUnitOrders, CUtlMemory<CUnitOrders, int> > *, CUnitOrders &);
	CUnitOrders RemoveAtTail(CUtlQueue<CUnitOrders, CUtlMemory<CUnitOrders, int> > *);
	bool RemoveAtTail(CUtlQueue<CUnitOrders, CUtlMemory<CUnitOrders, int> > *, CUnitOrders &);
	const CUnitOrders & Head(const CUtlQueue<CUnitOrders, CUtlMemory<CUnitOrders, int> > *);
	const CUnitOrders & Tail(const CUtlQueue<CUnitOrders, CUtlMemory<CUnitOrders, int> > *);
	void Insert(CUtlQueue<CUnitOrders, CUtlMemory<CUnitOrders, int> > *, const CUnitOrders &);
	bool Check(const CUtlQueue<CUnitOrders, CUtlMemory<CUnitOrders, int> > *, CUnitOrders);
	QueueIter_t First(const CUtlQueue<CUnitOrders, CUtlMemory<CUnitOrders, int> > *);
	QueueIter_t Next(const CUtlQueue<CUnitOrders, CUtlMemory<CUnitOrders, int> > *, QueueIter_t);
	QueueIter_t Last(const CUtlQueue<CUnitOrders, CUtlMemory<CUnitOrders, int> > *);
	QueueIter_t Previous(const CUtlQueue<CUnitOrders, CUtlMemory<CUnitOrders, int> > *, QueueIter_t);
	bool IsValid(const CUtlQueue<CUnitOrders, CUtlMemory<CUnitOrders, int> > *, QueueIter_t);
	CUnitOrders & Element(CUtlQueue<CUnitOrders, CUtlMemory<CUnitOrders, int> > *, QueueIter_t);
	const CUnitOrders & Element(const CUtlQueue<CUnitOrders, CUtlMemory<CUnitOrders, int> > *, QueueIter_t);
	int Count(const CUtlQueue<CUnitOrders, CUtlMemory<CUnitOrders, int> > *);
	bool IsEmpty(const CUtlQueue<CUnitOrders, CUtlMemory<CUnitOrders, int> > *);
	void RemoveAll(CUtlQueue<CUnitOrders, CUtlMemory<CUnitOrders, int> > *);
	void Purge(CUtlQueue<CUnitOrders, CUtlMemory<CUnitOrders, int> > *);
	QueueIter_t Next_Unchecked(const CUtlQueue<CUnitOrders, CUtlMemory<CUnitOrders, int> > *, QueueIter_t);
	QueueIter_t Previous_Unchecked(const CUtlQueue<CUnitOrders, CUtlMemory<CUnitOrders, int> > *, QueueIter_t);

	// sizeof = 24
};

// src/public/tier1/utlqueue.h:23
class CUtlQueue<Vector, CUtlMemory<Vector, int> > {
protected:

	CUtlQueue(CUtlQueue<Vector, CUtlMemory<Vector, int> > *, int, int);
	CUtlQueue(CUtlQueue<Vector, CUtlMemory<Vector, int> > *, Vector *, int);
	Vector RemoveAtHead(CUtlQueue<Vector, CUtlMemory<Vector, int> > *);
	bool RemoveAtHead(CUtlQueue<Vector, CUtlMemory<Vector, int> > *, Vector &);
	Vector RemoveAtTail(CUtlQueue<Vector, CUtlMemory<Vector, int> > *);
	bool RemoveAtTail(CUtlQueue<Vector, CUtlMemory<Vector, int> > *, Vector &);
	const Vector & Head(const CUtlQueue<Vector, CUtlMemory<Vector, int> > *);
	const Vector & Tail(const CUtlQueue<Vector, CUtlMemory<Vector, int> > *);
	void Insert(CUtlQueue<Vector, CUtlMemory<Vector, int> > *, const Vector &);
	bool Check(const CUtlQueue<Vector, CUtlMemory<Vector, int> > *, Vector);
	QueueIter_t First(const CUtlQueue<Vector, CUtlMemory<Vector, int> > *);
	QueueIter_t Next(const CUtlQueue<Vector, CUtlMemory<Vector, int> > *, QueueIter_t);
	QueueIter_t Last(const CUtlQueue<Vector, CUtlMemory<Vector, int> > *);
	QueueIter_t Previous(const CUtlQueue<Vector, CUtlMemory<Vector, int> > *, QueueIter_t);
	bool IsValid(const CUtlQueue<Vector, CUtlMemory<Vector, int> > *, QueueIter_t);
	Vector & Element(CUtlQueue<Vector, CUtlMemory<Vector, int> > *, QueueIter_t);
	const Vector & Element(const CUtlQueue<Vector, CUtlMemory<Vector, int> > *, QueueIter_t);
	int Count(const CUtlQueue<Vector, CUtlMemory<Vector, int> > *);
	bool IsEmpty(const CUtlQueue<Vector, CUtlMemory<Vector, int> > *);
	void RemoveAll(CUtlQueue<Vector, CUtlMemory<Vector, int> > *);
	void Purge(CUtlQueue<Vector, CUtlMemory<Vector, int> > *);
	QueueIter_t Next_Unchecked(const CUtlQueue<Vector, CUtlMemory<Vector, int> > *, QueueIter_t);
	QueueIter_t Previous_Unchecked(const CUtlQueue<Vector, CUtlMemory<Vector, int> > *, QueueIter_t);

	// sizeof = 24
};

// CUtlQueue: 1 more instantiations (full list in INDEX.tsv)
//   CUtlQueue<CDOTA_BaseNPC::sDamageEvent, CUtlMemory<CDOTA_BaseNPC::sDamageEvent, int> >
