// Reconstructed from DWARF by pahole; not original source.

// src/public/vstdlib/jobthread.h:981
class CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpolatedVar::WorkItem_t>, 1> > : public CParallelProcessorAbstract_Base {
public:

private:

	CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpol, CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpolatedVar::WorkItem_t>, 1> *, IThreadPool *);
	void Run(CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpol);
	void ProcessingThread(CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpol, int);

	// sizeof = 40
};

// src/public/vstdlib/jobthread.h:981
class CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, 1> > : public CParallelProcessorAbstract_Base {
public:

private:

	CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, , CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, 1> *, IThreadPool *);
	void Run(CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, );
	void ProcessingThread(CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, , int);

	// sizeof = 40
};

// src/public/vstdlib/jobthread.h:1209
class CJobItemProcessor<IWrappedInterpolatedVar::WorkItem_t> {
	void Begin();
	void End();

	// sizeof = 1
};

// src/public/vstdlib/jobthread.h:1209
class CJobItemProcessor<QueryCacheUpdateRecord_t> {
	void Begin();
	void End();

	// sizeof = 1
};

// src/public/vstdlib/jobthread.h:1219
class CFuncJobItemProcessor<IWrappedInterpolatedVar::WorkItem_t> : public CJobItemProcessor<IWrappedInterpolatedVar::WorkItem_t> {
public:

protected:

	void (*m_pfnProcess)(WorkItem_t &);  // +0x0
	void (*m_pfnBegin)();  // +0x8
	void (*m_pfnEnd)();  // +0x10
	void Init(void (*)(WorkItem_t &), void (*)(), void (*)());
	void Begin();
	void Process(WorkItem_t &);
	void End();

	// sizeof = 24
};

// src/public/vstdlib/jobthread.h:1219
class CFuncJobItemProcessor<QueryCacheUpdateRecord_t> : public CJobItemProcessor<QueryCacheUpdateRecord_t> {
public:

protected:

	void (*m_pfnProcess)(QueryCacheUpdateRecord_t &);  // +0x0
	void (*m_pfnBegin)();  // +0x8
	void (*m_pfnEnd)();  // +0x10
	void Init(void (*)(QueryCacheUpdateRecord_t &), void (*)(), void (*)());
	void Begin();
	void Process(QueryCacheUpdateRecord_t &);
	void End();

	// sizeof = 24
};

// src/public/vstdlib/jobthread.h:1310
class CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpolatedVar::WorkItem_t>, 1> : public CDefaultParallelController {
public:

private:

	int m_nChunkSize;  // +0x28
	CInterlockedInt m_nThreadsWorking;  // +0x2c
	const char * m_szDescription;  // +0x30
	int m_nMaxParallel;  // +0x38
	bool m_bReduceFinalChunkSize;  // +0x3c
	CParallelProcessor(CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpolatedVar::WorkItem_t>, 1> *, const char *);
	void Run(CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpolatedVar::WorkItem_t>, 1> *, WorkItem_t *, unsigned int, int, int, IThreadPool *);

protected:

	const char * Description(CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpolatedVar::WorkItem_t>, 1> *);
	int InitialWorkerCount(CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpolatedVar::WorkItem_t>, 1> *, CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpol);
	void ParallelProcessStarting(CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpolatedVar::WorkItem_t>, 1> *, void *, size_t, int);
	void ParallelProcessFinished(CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpolatedVar::WorkItem_t>, 1> *, void *, size_t, int);
	void Process(CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpolatedVar::WorkItem_t>, 1> *, int, CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpol);

	// sizeof = 64
};

// src/public/vstdlib/jobthread.h:1310
class CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, 1> : public CDefaultParallelController {
public:

private:

	int m_nChunkSize;  // +0x28
	CInterlockedInt m_nThreadsWorking;  // +0x2c
	const char * m_szDescription;  // +0x30
	int m_nMaxParallel;  // +0x38
	bool m_bReduceFinalChunkSize;  // +0x3c
	CParallelProcessor(CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, 1> *, const char *);
	void Run(CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, 1> *, QueryCacheUpdateRecord_t *, unsigned int, int, int, IThreadPool *);

protected:

	const char * Description(CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, 1> *);
	int InitialWorkerCount(CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, 1> *, CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, );
	void ParallelProcessStarting(CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, 1> *, void *, size_t, int);
	void ParallelProcessFinished(CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, 1> *, void *, size_t, int);
	void Process(CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, 1> *, int, CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, );

	// sizeof = 64
};
