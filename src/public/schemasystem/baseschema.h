// Reconstructed from DWARF by pahole; not original source.

// src/public/schemasystem/baseschema.h:888
struct SchemaIndirectionChain_t {
	SchemaManipulatorFn_t m_pManipulatorFn;  // +0x10
	SchemaOpaqueId_t m_nOpaqueId;  // +0x18
	SchemaIndirectionChain_t(SchemaIndirectionChain_t *, SchemaIndirectionType_t, int, SchemaManipulatorFn_t);

	// sizeof = 32
};

// src/public/schemasystem/baseschema.h:937
class ISchemaManipulator {
	int ()() * * _vptr.ISchemaManipulator;  // +0x0
	ISchemaManipulator(ISchemaManipulator &);
	ISchemaManipulator(const ISchemaManipulator &);
	ISchemaManipulator();

protected:

	virtual void * SearchForInterface(SchemaManipulatorInterfaceType_t);

	// vtable[0] SearchForInterface
	// sizeof = 8
};

// src/public/schemasystem/baseschema.h:1200
class IAtomicManipulator {
	int ()() * * _vptr.IAtomicManipulator;  // +0x0
	IAtomicManipulator(IAtomicManipulator &);
	IAtomicManipulator(const IAtomicManipulator &);
	IAtomicManipulator();
	virtual int GetSizeOf();
	virtual int GetAlignOf();
	virtual bool CanAllocate();
	virtual void * Allocate();
	virtual void * AllocateAndCopy(const void *);
	virtual void Copy(void *, const void *);
	virtual void Deallocate(void *);

	// vtable[0] GetSizeOf
	// vtable[1] GetAlignOf
	// vtable[2] CanAllocate
	// vtable[3] Allocate
	// vtable[4] AllocateAndCopy
	// vtable[5] Copy
	// vtable[6] Deallocate
	// sizeof = 8
};
