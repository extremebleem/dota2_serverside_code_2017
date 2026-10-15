// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utldelegateimpl.h:614
class CUtlAbstractDelegate {
protected:

	typedef struct {
		void (*__pfn)(GenericClass *);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} GenericMemFuncType;

	GenericMemFuncType m_pFunction;  // +0x8
	void CUtlAbstractDelegate(CUtlAbstractDelegate *);
	void Clear(CUtlAbstractDelegate *);
	bool IsEqual(const CUtlAbstractDelegate *, const CUtlAbstractDelegate &);
	bool IsLess(const CUtlAbstractDelegate *, const CUtlAbstractDelegate &);
	bool operator==(const CUtlAbstractDelegate *, const CUtlAbstractDelegate &);
	bool operator!(const CUtlAbstractDelegate *);
	bool IsEmpty(const CUtlAbstractDelegate *);
	CUtlAbstractDelegate & operator=(CUtlAbstractDelegate *, const CUtlAbstractDelegate &);
	bool operator<(CUtlAbstractDelegate *, const CUtlAbstractDelegate &);
	bool operator>(CUtlAbstractDelegate *, const CUtlAbstractDelegate &);
	void CUtlAbstractDelegate(CUtlAbstractDelegate *, const CUtlAbstractDelegate &);
	void UnsafeThisPointerSlam(CUtlAbstractDelegate *, void *);
	const void * UnsafeGetThisPtr(const CUtlAbstractDelegate *);
	void * UnsafeGetThisPtr(CUtlAbstractDelegate *);
	void SetMementoFrom(CUtlAbstractDelegate *, const CUtlAbstractDelegate &);
};
