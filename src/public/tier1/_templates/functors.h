// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/functors.h:458
class CMemberFuncProxyBase<CJob*, int (CJob::*)(), CFuncMemPolicyNone> {
protected:

	struct {
		int (*__pfn)(CJob *);  // +0x0
		long int __delta;  // +0x8
	} m_pfnProxied;
	bool operator==(const CMemberFuncProxyBase<CJob*, int (CJob::*)(), CFuncMemPolicyNone> &);
	const void * GetTarget();
	CMemberFuncProxyBase(CJob *, class );
	~CMemberFuncProxyBase();
	void Set(CJob *, class );
	void OnCall();

	// sizeof = 24
};

// src/public/tier1/functors.h:458
class CMemberFuncProxyBase<CAsyncFileLoadPrerequisite*, void (CAsyncFileLoadPrerequisite::*)(), CFuncMemPolicyNone> {
protected:

	struct {
		void (*__pfn)(CAsyncFileLoadPrerequisite *);  // +0x0
		long int __delta;  // +0x8
	} m_pfnProxied;
	bool operator==(const CMemberFuncProxyBase<CAsyncFileLoadPrerequisite*, void (CAsyncFileLoadPrerequisite::*)(), CFuncMemPolicyNone> &);
	const void * GetTarget();
	CMemberFuncProxyBase(CAsyncFileLoadPrerequisite *, class );
	~CMemberFuncProxyBase();
	void Set(CAsyncFileLoadPrerequisite *, class );
	void OnCall();

	// sizeof = 24
};

// src/public/tier1/functors.h:458
class CMemberFuncProxyBase<CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpolatedVar::WorkItem_t>, 1> >*, void (CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpolatedVar::WorkItem_t>, 1> >::*)(int), CFuncMemPolicyNone> {
protected:

	struct {
		void (*__pfn)(CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpol, int);  // +0x0
		long int __delta;  // +0x8
	} m_pfnProxied;
	bool operator==(const CMemberFuncProxyBase<CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobIte, const CMemberFuncProxyBase<CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobIte);
	const void * GetTarget(const CMemberFuncProxyBase<CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobIte);
	CMemberFuncProxyBase(CMemberFuncProxyBase<CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProce, CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpol, class );
	~CMemberFuncProxyBase(CMemberFuncProxyBase<CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProce, int);
	void Set(CMemberFuncProxyBase<CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProce, CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpol, class );
	void OnCall(CMemberFuncProxyBase<CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProce);

	// sizeof = 24
};

// src/public/tier1/functors.h:520
class CMemberFuncProxy0<CJob*, int (CJob::*)(), CFuncMemPolicyNone> : public CMemberFuncProxyBase<CJob*, int (CJob::*)(), CFuncMemPolicyNone> {
public:

	CMemberFuncProxy0(CJob *, class );
	void operator()();
	void Reset(CJob *, class );
	~CMemberFuncProxy0();

	// sizeof = 24
};

// src/public/tier1/functors.h:520
class CMemberFuncProxy0<CAsyncFileLoadPrerequisite*, void (CAsyncFileLoadPrerequisite::*)(), CFuncMemPolicyNone> : public CMemberFuncProxyBase<CAsyncFileLoadPrerequisite*, void (CAsyncFileLoadPrerequisite::*)(), CFuncMemPolicyNone> {
public:

	CMemberFuncProxy0(CAsyncFileLoadPrerequisite *, class );
	void operator()();
	void Reset(CAsyncFileLoadPrerequisite *, class );
	~CMemberFuncProxy0();

	// sizeof = 24
};

// src/public/tier1/functors.h:520
class CMemberFuncProxy1<CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpolatedVar::WorkItem_t>, 1> >*, void (CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpolatedVar::WorkItem_t>, 1> >::*)(int), int, CFuncMemPolicyNone> : public CMemberFuncProxyBase<CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpolatedVar::WorkItem_t>, 1> >*, void (CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpolatedVar::WorkItem_t>, 1> >::*)(int), CFuncMemPolicyNone> {
public:

	CMemberFuncProxy1(CMemberFuncProxy1<CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcesso, CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpol, class );
	void operator()(CMemberFuncProxy1<CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcesso, const int &);
	void Reset(CMemberFuncProxy1<CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcesso, CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpol, class );
	~CMemberFuncProxy1(CMemberFuncProxy1<CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcesso, int);

	// sizeof = 24
};

// src/public/tier1/functors.h:520
class CMemberFuncProxy0<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(), CFuncMemPolicyNone> : public CMemberFuncProxyBase<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(), CFuncMemPolicyNone> {
public:

	CMemberFuncProxy0(CEntity2SaveRestore *, class );
	void operator()();
	void Reset(CEntity2SaveRestore *, class );
	~CMemberFuncProxy0();

	// sizeof = 24
};

// src/public/tier1/functors.h:520
class CMemberFuncProxy6<ISaveRestoreFileSystem*, FSAsyncStatus_t (ISaveRestoreFileSystem::*)(char const*, void const*, int, bool, bool, FSAsyncControl_t__**), CUtlEnvelope<char const*>, void*, int, bool, bool, FSAsyncControl_t__**, CFuncMemPolicyNone> : public CMemberFuncProxyBase<ISaveRestoreFileSystem*, FSAsyncStatus_t (ISaveRestoreFileSystem::*)(char const*, void const*, int, bool, bool, FSAsyncControl_t__**), CFuncMemPolicyNone> {
public:

	CMemberFuncProxy6(CMemberFuncProxy6<ISaveRestoreFileSystem*, FSAsyncStatus_t (ISaveRestoreFileSystem::*)(char const*, void const*, int, boo, ISaveRestoreFileSystem *, class );
	void operator()(CMemberFuncProxy6<ISaveRestoreFileSystem*, FSAsyncStatus_t (ISaveRestoreFileSystem::*)(char const*, void const*, int, boo, const CUtlEnvelope<char const*> &, void * const &, const int &, const bool &, const bool &, FSAsyncControl_t__ * * const &);
	void Reset(CMemberFuncProxy6<ISaveRestoreFileSystem*, FSAsyncStatus_t (ISaveRestoreFileSystem::*)(char const*, void const*, int, boo, ISaveRestoreFileSystem *, class );
	~CMemberFuncProxy6(CMemberFuncProxy6<ISaveRestoreFileSystem*, FSAsyncStatus_t (ISaveRestoreFileSystem::*)(char const*, void const*, int, boo, int);

	// sizeof = 24
};

// src/public/tier1/functors.h:520
class CMemberFuncProxy2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, int)const, CUtlEnvelope<char const*>, int, CFuncMemPolicyNone> : public CMemberFuncProxyBase<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, int)const, CFuncMemPolicyNone> {
public:

	CMemberFuncProxy2(CMemberFuncProxy2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, int)const, CUtlEnvelope<char const*>, , CEntity2SaveRestore *, class );
	void operator()(CMemberFuncProxy2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, int)const, CUtlEnvelope<char const*>, , const CUtlEnvelope<char const*> &, const int &);
	void Reset(CMemberFuncProxy2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, int)const, CUtlEnvelope<char const*>, , CEntity2SaveRestore *, class );
	~CMemberFuncProxy2(CMemberFuncProxy2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, int)const, CUtlEnvelope<char const*>, , int);

	// sizeof = 24
};

// src/public/tier1/functors.h:520
class CMemberFuncProxy2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, char const*), CUtlEnvelope<char const*>, CUtlEnvelope<char const*>, CFuncMemPolicyNone> : public CMemberFuncProxyBase<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, char const*), CFuncMemPolicyNone> {
public:

	CMemberFuncProxy2(CMemberFuncProxy2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, char const*), CUtlEnvelope<char const*, CEntity2SaveRestore *, class );
	void operator()(CMemberFuncProxy2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, char const*), CUtlEnvelope<char const*, const CUtlEnvelope<char const*> &, const CUtlEnvelope<char const*> &);
	void Reset(CMemberFuncProxy2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, char const*), CUtlEnvelope<char const*, CEntity2SaveRestore *, class );
	~CMemberFuncProxy2(CMemberFuncProxy2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, char const*), CUtlEnvelope<char const*, int);

	// sizeof = 24
};

// src/public/tier1/functors.h:520
class CMemberFuncProxy1<CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, 1> >*, void (CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, 1> >::*)(int), int, CFuncMemPolicyNone> : public CMemberFuncProxyBase<CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, 1> >*, void (CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, 1> >::*)(int), CFuncMemPolicyNone> {
public:

	CMemberFuncProxy1(CMemberFuncProxy1<CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCach, CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, , class );
	void operator()(CMemberFuncProxy1<CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCach, const int &);
	void Reset(CMemberFuncProxy1<CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCach, CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, , class );
	~CMemberFuncProxy1(CMemberFuncProxy1<CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCach, int);

	// sizeof = 24
};

// src/public/tier1/functors.h:570
class CMemberFunctor0<CJob*, int (CJob::*)(), CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone> : public CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> > {
public:

private:

	CMemberFuncProxy0<CJob*, int (CJob::*)(), CFuncMemPolicyNone> m_Proxy;  // +0x20
	CMemberFunctor0(CMemberFunctor0<CJob*, int (CJob::*)(), CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone> , CMemberFunctor0<CJob*, int (CJob::*)(), CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone> );
	CMemberFunctor0(CMemberFunctor0<CJob*, int (CJob::*)(), CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone> , const CMemberFunctor0<CJob*, int (CJob::*)(), CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicy);
	CMemberFunctor0(CMemberFunctor0<CJob*, int (CJob::*)(), CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone> , CJob *, class );
	virtual void operator()(CMemberFunctor0<CJob*, int (CJob::*)(), CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone> );
	void Reset(CMemberFunctor0<CJob*, int (CJob::*)(), CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone> , CJob *, class );
	virtual ~CMemberFunctor0(CMemberFunctor0<CJob*, int (CJob::*)(), CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone> , int);

	// vtable[2] operator
	// sizeof = 56
};

// src/public/tier1/functors.h:570
class CMemberFunctor1<CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpolatedVar::WorkItem_t>, 1> >*, void (CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpolatedVar::WorkItem_t>, 1> >::*)(int), int, CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone> : public CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> > {
public:

private:

	CMemberFuncProxy1<CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpolatedVar::WorkItem_t>, 1> >*, void (CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpolatedVar::WorkItem_t>, 1> >::*)(int), int, CFuncMemPolicyNone> m_Proxy;  // +0x20
	int m_arg1;  // +0x38
	CMemberFunctor1(CMemberFunctor1<CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<, CMemberFunctor1<CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<);
	CMemberFunctor1(CMemberFunctor1<CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<, const CMemberFunctor1<CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProc);
	CMemberFunctor1(CMemberFunctor1<CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<, CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpol, class , const int &);
	virtual void operator()(CMemberFunctor1<CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<);
	void Reset(CMemberFunctor1<CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<, CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<IWrappedInterpol, class , const int &);
	virtual ~CMemberFunctor1(CMemberFunctor1<CParallelProcessorAbstract<CParallelProcessor<IWrappedInterpolatedVar::WorkItem_t, CFuncJobItemProcessor<, int);

	// vtable[2] operator
	// sizeof = 64
};

// src/public/tier1/functors.h:570
class CMemberFunctor0<CAsyncFileLoadPrerequisite*, void (CAsyncFileLoadPrerequisite::*)(), CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone> : public CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> > {
public:

private:

	CMemberFuncProxy0<CAsyncFileLoadPrerequisite*, void (CAsyncFileLoadPrerequisite::*)(), CFuncMemPolicyNone> m_Proxy;  // +0x20
	CMemberFunctor0(CMemberFunctor0<CAsyncFileLoadPrerequisite*, void (CAsyncFileLoadPrerequisite::*)(), CRefCounted1<CFunctor, CRefCountServ, CMemberFunctor0<CAsyncFileLoadPrerequisite*, void (CAsyncFileLoadPrerequisite::*)(), CRefCounted1<CFunctor, CRefCountServ);
	CMemberFunctor0(CMemberFunctor0<CAsyncFileLoadPrerequisite*, void (CAsyncFileLoadPrerequisite::*)(), CRefCounted1<CFunctor, CRefCountServ, const CMemberFunctor0<CAsyncFileLoadPrerequisite*, void (CAsyncFileLoadPrerequisite::*)(), CRefCounted1<CFunctor, CRefCou);
	CMemberFunctor0(CMemberFunctor0<CAsyncFileLoadPrerequisite*, void (CAsyncFileLoadPrerequisite::*)(), CRefCounted1<CFunctor, CRefCountServ, CAsyncFileLoadPrerequisite *, class );
	virtual void operator()(CMemberFunctor0<CAsyncFileLoadPrerequisite*, void (CAsyncFileLoadPrerequisite::*)(), CRefCounted1<CFunctor, CRefCountServ);
	void Reset(CMemberFunctor0<CAsyncFileLoadPrerequisite*, void (CAsyncFileLoadPrerequisite::*)(), CRefCounted1<CFunctor, CRefCountServ, CAsyncFileLoadPrerequisite *, class );
	virtual ~CMemberFunctor0(CMemberFunctor0<CAsyncFileLoadPrerequisite*, void (CAsyncFileLoadPrerequisite::*)(), CRefCounted1<CFunctor, CRefCountServ, int);

	// vtable[2] operator
	// sizeof = 56
};

// src/public/tier1/functors.h:570
class CMemberFunctor0<IFileSystem*, void (IFileSystem::*)(), CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone> : public CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> > {
public:

private:

	CMemberFuncProxy0<IFileSystem*, void (IFileSystem::*)(), CFuncMemPolicyNone> m_Proxy;  // +0x20
	CMemberFunctor0(CMemberFunctor0<IFileSystem*, void (IFileSystem::*)(), CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFunc, CMemberFunctor0<IFileSystem*, void (IFileSystem::*)(), CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFunc);
	CMemberFunctor0(CMemberFunctor0<IFileSystem*, void (IFileSystem::*)(), CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFunc, const CMemberFunctor0<IFileSystem*, void (IFileSystem::*)(), CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >,);
	CMemberFunctor0(CMemberFunctor0<IFileSystem*, void (IFileSystem::*)(), CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFunc, IFileSystem *, class );
	virtual void operator()(CMemberFunctor0<IFileSystem*, void (IFileSystem::*)(), CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFunc);
	void Reset(CMemberFunctor0<IFileSystem*, void (IFileSystem::*)(), CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFunc, IFileSystem *, class );
	virtual ~CMemberFunctor0(CMemberFunctor0<IFileSystem*, void (IFileSystem::*)(), CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFunc, int);

	// vtable[2] operator
	// sizeof = 56
};

// src/public/tier1/functors.h:570
class CMemberFunctor2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, char const*), CUtlEnvelope<char const*>, CUtlEnvelope<char const*>, CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone> : public CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> > {
public:

private:

	CMemberFuncProxy2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, char const*), CUtlEnvelope<char const*>, CUtlEnvelope<char const*>, CFuncMemPolicyNone> m_Proxy;  // +0x20
	CMemberFunctor2(CMemberFunctor2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, char const*), CUtlEnvelope<char const*>,, CMemberFunctor2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, char const*), CUtlEnvelope<char const*>,);
	CMemberFunctor2(CMemberFunctor2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, char const*), CUtlEnvelope<char const*>,, const CMemberFunctor2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, char const*), CUtlEnvelope<char co);
	CMemberFunctor2(CMemberFunctor2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, char const*), CUtlEnvelope<char const*>,, CEntity2SaveRestore *, class , const CUtlEnvelope<char const*> &, const CUtlEnvelope<char const*> &);
	virtual void operator()(CMemberFunctor2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, char const*), CUtlEnvelope<char const*>,);
	void Reset(CMemberFunctor2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, char const*), CUtlEnvelope<char const*>,, CEntity2SaveRestore *, class , const CUtlEnvelope<char const*> &, const CUtlEnvelope<char const*> &);
	virtual ~CMemberFunctor2(CMemberFunctor2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, char const*), CUtlEnvelope<char const*>,, int);

	// vtable[2] operator
	// sizeof = 72
};

// src/public/tier1/functors.h:570
class CMemberFunctor2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, int)const, CUtlEnvelope<char const*>, int, CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone> : public CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> > {
public:

private:

	CMemberFuncProxy2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, int)const, CUtlEnvelope<char const*>, int, CFuncMemPolicyNone> m_Proxy;  // +0x20
	int m_arg2;  // +0x40
	CMemberFunctor2(CMemberFunctor2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, int)const, CUtlEnvelope<char const*>, in, CMemberFunctor2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, int)const, CUtlEnvelope<char const*>, in);
	CMemberFunctor2(CMemberFunctor2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, int)const, CUtlEnvelope<char const*>, in, const CMemberFunctor2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, int)const, CUtlEnvelope<char const);
	CMemberFunctor2(CMemberFunctor2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, int)const, CUtlEnvelope<char const*>, in, CEntity2SaveRestore *, class , const CUtlEnvelope<char const*> &, const int &);
	virtual void operator()(CMemberFunctor2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, int)const, CUtlEnvelope<char const*>, in);
	void Reset(CMemberFunctor2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, int)const, CUtlEnvelope<char const*>, in, CEntity2SaveRestore *, class , const CUtlEnvelope<char const*> &, const int &);
	virtual ~CMemberFunctor2(CMemberFunctor2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, int)const, CUtlEnvelope<char const*>, in, int);

	// vtable[2] operator
	// sizeof = 72
};

// src/public/tier1/functors.h:570
class CMemberFunctor6<ISaveRestoreFileSystem*, FSAsyncStatus_t (ISaveRestoreFileSystem::*)(char const*, void const*, int, bool, bool, FSAsyncControl_t__**), CUtlEnvelope<char const*>, void*, int, bool, bool, FSAsyncControl_t__**, CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone> : public CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> > {
public:

private:

	CMemberFuncProxy6<ISaveRestoreFileSystem*, FSAsyncStatus_t (ISaveRestoreFileSystem::*)(char const*, void const*, int, bool, bool, FSAsyncControl_t__**), CUtlEnvelope<char const*>, void*, int, bool, bool, FSAsyncControl_t__**, CFuncMemPolicyNone> m_Proxy;  // +0x20
	void * m_arg2;  // +0x40
	int m_arg3;  // +0x48
	bool m_arg4;  // +0x4c
	bool m_arg5;  // +0x4d

	CMemberFunctor6(CMemberFunctor6<ISaveRestoreFileSystem*, FSAsyncStatus_t (ISaveRestoreFileSystem::*)(char const*, void const*, int, bool,, CMemberFunctor6<ISaveRestoreFileSystem*, FSAsyncStatus_t (ISaveRestoreFileSystem::*)(char const*, void const*, int, bool,);
	CMemberFunctor6(CMemberFunctor6<ISaveRestoreFileSystem*, FSAsyncStatus_t (ISaveRestoreFileSystem::*)(char const*, void const*, int, bool,, const CMemberFunctor6<ISaveRestoreFileSystem*, FSAsyncStatus_t (ISaveRestoreFileSystem::*)(char const*, void const*, int,);
	CMemberFunctor6(CMemberFunctor6<ISaveRestoreFileSystem*, FSAsyncStatus_t (ISaveRestoreFileSystem::*)(char const*, void const*, int, bool,, ISaveRestoreFileSystem *, class , const CUtlEnvelope<char const*> &, void * const &, const int &, const bool &, const bool &, FSAsyncControl_t__ * * const &);
	virtual void operator()(CMemberFunctor6<ISaveRestoreFileSystem*, FSAsyncStatus_t (ISaveRestoreFileSystem::*)(char const*, void const*, int, bool,);
	void Reset(CMemberFunctor6<ISaveRestoreFileSystem*, FSAsyncStatus_t (ISaveRestoreFileSystem::*)(char const*, void const*, int, bool,, ISaveRestoreFileSystem *, class , const CUtlEnvelope<char const*> &, void * const &, const int &, const bool &, const bool &, FSAsyncControl_t__ * * const &);
	virtual ~CMemberFunctor6(CMemberFunctor6<ISaveRestoreFileSystem*, FSAsyncStatus_t (ISaveRestoreFileSystem::*)(char const*, void const*, int, bool,, int);

	// vtable[2] operator
	// sizeof = 88
};

// src/public/tier1/functors.h:570
class CMemberFunctor1<CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, 1> >*, void (CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, 1> >::*)(int), int, CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone> : public CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> > {
public:

private:

	CMemberFuncProxy1<CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, 1> >*, void (CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, 1> >::*)(int), int, CFuncMemPolicyNone> m_Proxy;  // +0x20
	int m_arg1;  // +0x38
	CMemberFunctor1(CMemberFunctor1<CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheU, CMemberFunctor1<CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheU);
	CMemberFunctor1(CMemberFunctor1<CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheU, const CMemberFunctor1<CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<Query);
	CMemberFunctor1(CMemberFunctor1<CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheU, CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, , class , const int &);
	virtual void operator()(CMemberFunctor1<CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheU);
	void Reset(CMemberFunctor1<CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheU, CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, , class , const int &);
	virtual ~CMemberFunctor1(CMemberFunctor1<CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheU, int);

	// vtable[2] operator
	// sizeof = 64
};

// CMemberFuncProxyBase: 6 more instantiations (full list in INDEX.tsv)
//   CMemberFuncProxyBase<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(), CFuncMemPolicyNone>
//   CMemberFuncProxyBase<ISaveRestoreFileSystem*, FSAsyncStatus_t (ISaveRestoreFileSystem::*)(char const*, void const*, int,
//   CMemberFuncProxyBase<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, int)const, CFuncMemPolicyNone>
//   CMemberFuncProxyBase<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, char const*), CFuncMemPolicyNone>
//   CMemberFuncProxyBase<IFileSystem*, void (IFileSystem::*)(), CFuncMemPolicyNone>
//   CMemberFuncProxyBase<CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<Query

// CMemberFuncProxy0: 1 more instantiations (full list in INDEX.tsv)
//   CMemberFuncProxy0<IFileSystem*, void (IFileSystem::*)(), CFuncMemPolicyNone>

// CMemberFunctor0: 1 more instantiations (full list in INDEX.tsv)
//   CMemberFunctor0<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(), CRefCounted1<CFunctor, CRefCountServiceBase<true,
