// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/callqueue.h:77
class CCallQueueT<CTSQueue<CFunctor*, false> > {
private:

	bool m_bNoQueue;  // +0x40

	unsigned int m_nCurSerialNumber;  // +0x44
	unsigned int m_nBreakSerialNumber;  // +0x48
	int16 m_nRefCount;  // +0x4c
	CCallQueueT(CCallQueueT<CTSQueue<CFunctor*, false> > *);
	~CCallQueueT(CCallQueueT<CTSQueue<CFunctor*, false> > *, int);
	void DisableQueue(CCallQueueT<CTSQueue<CFunctor*, false> > *, bool);
	bool IsDisabled(const CCallQueueT<CTSQueue<CFunctor*, false> > *);
	int Count(CCallQueueT<CTSQueue<CFunctor*, false> > *);
	void CallQueued(CCallQueueT<CTSQueue<CFunctor*, false> > *);
	void ParallelCallQueued(CCallQueueT<CTSQueue<CFunctor*, false> > *, const char *, IThreadPool *);
	void QueueFunctor(CCallQueueT<CTSQueue<CFunctor*, false> > *, CFunctor *);
	void Flush(CCallQueueT<CTSQueue<CFunctor*, false> > *);
	void AddRef(CCallQueueT<CTSQueue<CFunctor*, false> > *);
	void Release(CCallQueueT<CTSQueue<CFunctor*, false> > *);
	void ExecuteWrapper(CCallQueueT<CTSQueue<CFunctor*, false> > *, int &);
	void QueueFunctorInternal(CCallQueueT<CTSQueue<CFunctor*, false> > *, CFunctor *);

	// sizeof = 80
};
