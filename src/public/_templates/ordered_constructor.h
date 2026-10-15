// Reconstructed from DWARF by pahole; not original source.

// src/public/ordered_constructor.h:252
class _CWrappedArrowOperatorHelper_Impl<undefined_t, false> {
	typedef undefined_t * ReturnType_t;
	ReturnType_t ArrowOperator(undefined_t &);
	using ::ThreadInterlockedOr;
	using ::ArrowOperator;

	// sizeof = 1
};

// src/public/ordered_constructor.h:360
class CManuallyConstructedClass<void> {
	typedef undefined_t BaseType;

	enum {
		EXPLICIT_SIZE = 0,
	};
	void InternalDestruct();
	undefined_t & Cast();
	undefined_t * CastPointer();
	using ::InternalDestruct;
	CManuallyConstructedClass();

	// sizeof = 1
};

// src/public/ordered_constructor.h:404
class COrderedConstructor_DependencyManagement<void> : public CManuallyConstructedClass<void> {
	enum DependencyFlags_t {
		INTERNAL_REFCOUNT_MASK = 0x1ffffff,
		INTERNAL_IS_CONSTRUCTED = 0x2000000,
		INTERNAL_WRAPPER_HOLDS_REF = 0x4000000,
		INTERNAL_WRAPPER_CONSTRUCTED = 0x8000000,
		INTERNAL_WRAPPER_DESTRUCTED = 0x10000000,
		INTERNAL_CONSTRUCTOR_ALLOWED = 0x20000000,
		INTERNAL_TOUCHED = 0x40000000,
		INTERNAL_LOCKED = 0x80000000,
	};

public:

protected:

	volatile uint32 m_nRefCount;  // +0x0

	typedef BaseType BaseType;
	~COrderedConstructor_DependencyManagement();
	void Release();
	bool PrematurelyReleaseWrapperInstanceRef();
	void Touch();
	BaseType & GetRaw();
	const BaseType & GetRaw();
	/* tag__fprintf: const_type tag not supported! */;
	bool IsConstructed();
	bool WrapperHasDestructed();
	ReturnType_t operator->();
	void * operator&();
	void StaticRelease();
	void ReleaseDependencies();
	void InternalLock(bool);
	COrderedConstructor_DependencyManagement();

	// sizeof = 16
};

// src/public/ordered_constructor.h:549
class COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInit_Common>, false> : public COrderedConstructor_DependencyManagement<void> {
public:

	COrderedConstructor_Create(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInit_Common>, false> *, bool);
	void AddRef(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInit_Common>, false> *, bool);
	void ConstructIfNotConstructed(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInit_Common>, false> *);
	ReturnType_t operator->(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInit_Common>, false> *);
	void * operator&(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInit_Common>, false> *);

private:

	void InternalGetRawAutomaticReference(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInit_Common>, false> *);
	~COrderedConstructor_Create(COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInit_Common>, false> *, int);

	// sizeof = 16
};

// src/public/ordered_constructor.h:670
class CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInit_Common> {
	static const void (*ResolveDependencies)(COrderedSystem_DependencyManagement &);

	// sizeof = 1
};

// src/public/ordered_constructor.h:907
class COrderedConstructor<void, false> {
private:

	COrderedConstructor();
	typedef COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_EarlyInit_Common>, false> UseFunc;

	// sizeof = 1
};
