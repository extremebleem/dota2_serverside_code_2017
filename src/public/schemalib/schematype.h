// Reconstructed from DWARF by pahole; not original source.

// src/public/schemalib/schematype.h:310
class CSchemaType_FixedArray : public CSchemaType {
public:

protected:

	int m_nArrayCount;  // +0x30

	CSchemaType_FixedArray(ISchemaSystemTypeScope *);
	SchemaTypeCategory_t StaticTypeCategory();
	virtual SchemaTypeCategory_t GetTypeCategory();
	virtual bool IsValid();
	CSchemaType * GetArrayOfType();
	int GetArrayCount();
	virtual bool CanAllocate();
	virtual void * Allocate();
	virtual void * AllocateAndCopy(const void *);
	virtual void Copy(void *, const void *);
	virtual void Deallocate(void *);
	virtual const CSchemaType * GetInnerType();
	virtual const CSchemaType * GetInnermostType();
	virtual const void * InternalMatchInnerAs(SchemaTypeCategory_t, SchemaAtomicCategory_t);
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(ISchemaSystemTypeScope *);
	virtual ~CSchemaType_FixedArray();

	// vtable[0] GetTypeCategory
	// vtable[7] IsValid
	// vtable[1] CanAllocate
	// vtable[2] Allocate
	// vtable[3] AllocateAndCopy
	// vtable[4] Copy
	// vtable[5] Deallocate
	// vtable[12] GetInnerType
	// vtable[13] GetInnermostType
	// vtable[15] InternalMatchInnerAs
	// vtable[16] DependsOnlyOnUnresolvedOrGlobalTypes
	// sizeof = 64
};

// src/public/schemalib/schematype.h:359
class CSchemaType_Bitfield : public CSchemaType {
public:

protected:

	int m_nBitfieldCount;  // +0x30
	CSchemaType_Bitfield(ISchemaSystemTypeScope *);
	SchemaTypeCategory_t StaticTypeCategory();
	virtual SchemaTypeCategory_t GetTypeCategory();
	virtual bool IsValid();
	int GetBitfieldCount();
	virtual bool CanAllocate();
	virtual void * Allocate();
	virtual void * AllocateAndCopy(const void *);
	virtual void Copy(void *, const void *);
	virtual void Deallocate(void *);
	virtual ~CSchemaType_Bitfield();

	// vtable[0] GetTypeCategory
	// vtable[7] IsValid
	// vtable[1] CanAllocate
	// vtable[2] Allocate
	// vtable[3] AllocateAndCopy
	// vtable[4] Copy
	// vtable[5] Deallocate
	// sizeof = 56
};

// src/public/schemalib/schematype.h:486
class CSchemaType_Atomic_T : public CSchemaType_Atomic {
public:

protected:

	CSchemaType_Atomic_T(CSchemaType_Atomic_T &);
	CSchemaType_Atomic_T(const CSchemaType_Atomic_T &);
	CSchemaType_Atomic_T(ISchemaSystemTypeScope *);
	SchemaAtomicCategory_t StaticAtomicCategory();
	virtual SchemaAtomicCategory_t GetAtomicCategory();
	virtual bool IsValid();
	virtual const CSchemaType * GetInnerType();
	virtual const CSchemaType * GetInnermostType();
	CSchemaType * GetParam1();
	virtual const void * InternalMatchInnerAs(SchemaTypeCategory_t, SchemaAtomicCategory_t);
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(ISchemaSystemTypeScope *);
	virtual ~CSchemaType_Atomic_T();

	// vtable[6] GetAtomicCategory
	// vtable[7] IsValid
	// vtable[12] GetInnerType
	// vtable[13] GetInnermostType
	// vtable[15] InternalMatchInnerAs
	// vtable[16] DependsOnlyOnUnresolvedOrGlobalTypes
	// sizeof = 80
};

// src/public/schemalib/schematype.h:530
class CSchemaType_Atomic_TT : public CSchemaType_Atomic_T {
public:

protected:

	CSchemaType_Atomic_TT(ISchemaSystemTypeScope *);
	SchemaAtomicCategory_t StaticAtomicCategory();
	virtual SchemaAtomicCategory_t GetAtomicCategory();
	virtual bool IsValid();
	CSchemaType * GetParam2();
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(ISchemaSystemTypeScope *);
	virtual ~CSchemaType_Atomic_TT();

	// vtable[6] GetAtomicCategory
	// vtable[7] IsValid
	// vtable[16] DependsOnlyOnUnresolvedOrGlobalTypes
	// sizeof = 88
};

// src/public/schemalib/schematype.h:560
class CSchemaType_Atomic_I : public CSchemaType_Atomic {
public:

protected:

	int m_nParam1;  // +0x44
	CSchemaType_Atomic_I(ISchemaSystemTypeScope *);
	SchemaAtomicCategory_t StaticAtomicCategory();
	virtual SchemaAtomicCategory_t GetAtomicCategory();
	int GetParam1();
	virtual ~CSchemaType_Atomic_I();

	// vtable[6] GetAtomicCategory
	// sizeof = 72
};
