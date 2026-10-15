// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/functors.h:351
class CFunctor : public IRefCounted {
public:

	unsigned int m_nUserID;  // +0x8
	CFunctor(CFunctor &);
	CFunctor(const CFunctor &);
	~CFunctor();
	CFunctor();
	virtual void operator()();

	// vtable[2] operator
	// sizeof = 16
};

// src/public/tier1/functors.h:372
class CFunctorData : public IRefCounted {
public:

	CFunctorData(CFunctorData &);
	CFunctorData(const CFunctorData &);
	~CFunctorData();
	CFunctorData();
	virtual void ComputeValidationString(char *, int);

	// vtable[2] ComputeValidationString
	// sizeof = 8
};

// src/public/tier1/functors.h:378
class CFunctorCallback : public IRefCounted {
public:

	CFunctorCallback(CFunctorCallback &);
	CFunctorCallback(const CFunctorCallback &);
	~CFunctorCallback();
	CFunctorCallback();
	virtual bool IsEqual(CFunctorCallback *);
	virtual void operator()(CFunctorData *);
	virtual void ComputeValidationString(char *, int);
	virtual const char * GetImplClassName();
	virtual const void * GetTarget();

	// vtable[2] IsEqual
	// vtable[3] operator
	// vtable[4] ComputeValidationString
	// vtable[5] GetImplClassName
	// vtable[6] GetTarget
	// sizeof = 8
};

// src/public/tier1/functors.h:434
class CFuncMemPolicyNone {
	void OnAcquire(void *);
	void OnRelease(void *);

	// sizeof = 1
};

// src/public/tier1/functors.h:573
class CFunctorCallbackBase : public CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> > {
public:

	CFunctorCallbackBase(CFunctorCallbackBase &);
	CFunctorCallbackBase(const CFunctorCallbackBase &);
	CFunctorCallbackBase();

protected:

	virtual void ValidateFunctorData(CFunctorData *);
	virtual ~CFunctorCallbackBase();

	// vtable[9] ValidateFunctorData
	// sizeof = 24
};

// src/public/tier1/functors.h:604
class CFunctorData0 : public CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> > {
public:

	CFunctorData0(CFunctorData0 &);
	CFunctorData0(const CFunctorData0 &);
	CFunctorData0();
	virtual void ComputeValidationString(char *, int);
	virtual ~CFunctorData0();

	// vtable[2] ComputeValidationString
	// sizeof = 24
};

// src/public/tier1/functors.h:634
class CFunctorCallback0 : public CFunctorCallbackBase {
public:

	typedef void (*Callback_t)();

private:

	Callback_t m_pfnProxied;  // +0x18
	CFunctorCallback0(CFunctorCallback0 &);
	CFunctorCallback0(const CFunctorCallback0 &);
	CFunctorCallback0(Callback_t);
	virtual void operator()(CFunctorData *);
	virtual void ComputeValidationString(char *, int);
	virtual bool IsEqual(CFunctorCallback *);
	virtual const char * GetImplClassName();
	virtual const void * GetTarget();
	virtual ~CFunctorCallback0();

	// vtable[3] operator
	// vtable[4] ComputeValidationString
	// vtable[2] IsEqual
	// vtable[5] GetImplClassName
	// vtable[6] GetTarget
	// sizeof = 32
};
