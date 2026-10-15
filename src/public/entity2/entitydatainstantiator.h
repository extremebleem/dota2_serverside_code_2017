// Reconstructed from DWARF by pahole; not original source.

// src/public/entity2/entitydatainstantiator.h:21
class IEntityDataInstantiator {
	int ()() * * _vptr.IEntityDataInstantiator;  // +0x0
	IEntityDataInstantiator(const IEntityDataInstantiator &);
	IEntityDataInstantiator();
	virtual ~IEntityDataInstantiator();
	virtual void * GetDataObject(const CEntityInstance *);
	virtual void * CreateDataObject(const CEntityInstance *);
	virtual void DestroyDataObject(const CEntityInstance *);

	// vtable[2] GetDataObject
	// vtable[3] CreateDataObject
	// vtable[4] DestroyDataObject
	// sizeof = 8
};
