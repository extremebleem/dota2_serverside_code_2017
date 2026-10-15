// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/refcount.h:86
class CBaseAutoPtr<CFunctor> {
protected:

	CBaseAutoPtr();
	CBaseAutoPtr(CFunctor *);
	const void * operator void const*();
	void * operator void*();
	const CFunctor * operator const CFunctor*();
	const CFunctor * operator const CFunctor*();
	CFunctor * operator CFunctor*();
	int operator=(int);
	CFunctor * operator=(CFunctor *);
	bool operator!();
	bool operator!=(int);
	bool operator==(const void *);
	bool operator!=(const void *);
	bool operator==(CFunctor *);
	bool operator!=(CFunctor *);
	bool operator==(const CBaseAutoPtr<CFunctor> &);
	bool operator!=(const CBaseAutoPtr<CFunctor> &);
	CFunctor * operator->();
	CFunctor & operator*();
	CFunctor * * operator&();
	const CFunctor * operator->();
	const CFunctor & operator*();
	CFunctor * const * operator&();
	CBaseAutoPtr(const CBaseAutoPtr<CFunctor> &);
	void operator=(const CBaseAutoPtr<CFunctor> &);

	// sizeof = 8
};

// src/public/tier1/refcount.h:129
class CRefPtr<CFunctor> : public CBaseAutoPtr<CFunctor> {
public:

	CRefPtr();
	CRefPtr(CFunctor *);
	CRefPtr(const CRefPtr<CFunctor> &);
	~CRefPtr();
	void operator=(const CRefPtr<CFunctor> &);
	int operator=(int);
	CFunctor * operator=(CFunctor *);
	bool operator bool();
	bool operator bool();
	void SafeRelease();

	// sizeof = 8
};

// src/public/tier1/refcount.h:174
class CRefCountServiceBase<true, CRefMT> {
	int ()() * * _vptr.CRefCountServiceBase;  // +0x0
private:

	int m_iRefs;  // +0x8
	CRefCountServiceBase<true, CRefMT> & operator=(const CRefCountServiceBase<true, CRefMT> &);
	CRefCountServiceBase(const CRefCountServiceBase<true, CRefMT> &);

protected:

	CRefCountServiceBase();
	virtual ~CRefCountServiceBase();
	virtual bool OnFinalRelease();
	int GetRefCount();
	int DoAddRef();
	int DoRelease();

	// vtable[2] OnFinalRelease
	// sizeof = 16
};

// src/public/tier1/refcount.h:270
class CMutableRefCountBase<true, CRefMT> {
	int ()() * * _vptr.CMutableRefCountBase;  // +0x0
private:

	int m_iRefs;  // +0x8
	CMutableRefCountBase(const CMutableRefCountBase<true, CRefMT> &);

protected:

	CMutableRefCountBase();
	virtual ~CMutableRefCountBase();
	int GetRefCount();
	int DoAddRef();
	int DoRelease();

	// sizeof = 16
};

// src/public/tier1/refcount.h:324
class CRefCounted<CRefCountServiceBase<true, CRefMT> > : public CRefCountServiceBase<true, CRefMT> {
public:

	CRefCounted(CRefCounted<CRefCountServiceBase<true, CRefMT> > *, const CRefCounted<CRefCountServiceBase<true, CRefMT> > &);
	CRefCounted<CRefCountServiceBase<true, CRefMT> > & operator=(CRefCounted<CRefCountServiceBase<true, CRefMT> > *, const CRefCounted<CRefCountServiceBase<true, CRefMT> > &);
	CRefCounted(CRefCounted<CRefCountServiceBase<true, CRefMT> > *);
	virtual ~CRefCounted(CRefCounted<CRefCountServiceBase<true, CRefMT> > *, int);
	int AddRef(CRefCounted<CRefCountServiceBase<true, CRefMT> > *);
	int Release(CRefCounted<CRefCountServiceBase<true, CRefMT> > *);

	// sizeof = 16
};

// src/public/tier1/refcount.h:350
class CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> > : public CFunctor, public CRefCountServiceBase<true, CRefMT> {
public:

	CRefCounted1(CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> > *, const CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> > &);
	CRefCounted1(CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> > *);
	virtual ~CRefCounted1(CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> > *, int);
	virtual int AddRef(CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> > *);
	virtual int Release(CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> > *);

	// vtable[0] AddRef
	// vtable[1] Release
	// sizeof = 32
};

// src/public/tier1/refcount.h:350
class CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> > : public CFunctorData, public CRefCountServiceBase<true, CRefMT> {
public:

	CRefCounted1(CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> > *, const CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> > &);
	CRefCounted1(CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> > *);
	virtual ~CRefCounted1(CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> > *, int);
	virtual int AddRef(CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> > *);
	virtual int Release(CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> > *);

	// vtable[0] AddRef
	// vtable[1] Release
	// sizeof = 24
};

// src/public/tier1/refcount.h:350
class CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> > : public IRefCounted, public CRefCountServiceBase<true, CRefMT> {
public:

	CRefCounted1(CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> > *, const CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> > &);
	CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> > & operator=(CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> > *, const CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> > &);
	CRefCounted1(CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> > *);
	virtual ~CRefCounted1(CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> > *, int);
	virtual int AddRef(CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> > *);
	virtual int Release(CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> > *);

	// vtable[0] AddRef
	// vtable[1] Release
	// sizeof = 24
};

// CRefCounted1: 1 more instantiations (full list in INDEX.tsv)
//   CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> >
