// Reconstructed from DWARF by pahole; not original source.

// src/public/entity2/entitydatainstantiator.h:35
class CEntityDataInstantiator<touchlink_t> : public IEntityDataInstantiator {
	/* tag__fprintf: const_type tag not supported! */;

	struct HashEntry {
		const CEntityInstance * key;  // +0x0
		HashEntry();

		// sizeof = 16
	};

public:

private:

	CUtlHash<CEntityDataInstantiator<touchlink_t>::HashEntry, bool (*)(const CEntityDataInstantiator<touchlink_t>::HashEntry&, const CEntityDataInstantiator<touchlink_t>::HashEntry&), unsigned int (*)(const CEntityDataInstantiator<touchlink_t>::HashEntry&)> m_HashTable;  // +0x8

	CEntityDataInstantiator(CEntityDataInstantiator<touchlink_t> &);
	CEntityDataInstantiator(const CEntityDataInstantiator<touchlink_t> &);
	CEntityDataInstantiator();
	virtual void * GetDataObject(const CEntityInstance *);
	virtual void * CreateDataObject(const CEntityInstance *);
	virtual void DestroyDataObject(const CEntityInstance *);
	bool CompareFunc(const HashEntry &, const HashEntry &);
	unsigned int KeyFunc(const HashEntry &);
	virtual ~CEntityDataInstantiator();

	// vtable[2] GetDataObject
	// vtable[3] CreateDataObject
	// vtable[4] DestroyDataObject
	// sizeof = 56
};

// src/public/entity2/entitydatainstantiator.h:35
class CEntityDataInstantiator<groundlink_t> : public IEntityDataInstantiator {
	/* tag__fprintf: const_type tag not supported! */;

	struct HashEntry {
		const CEntityInstance * key;  // +0x0
		HashEntry();

		// sizeof = 16
	};

public:

private:

	CUtlHash<CEntityDataInstantiator<groundlink_t>::HashEntry, bool (*)(const CEntityDataInstantiator<groundlink_t>::HashEntry&, const CEntityDataInstantiator<groundlink_t>::HashEntry&), unsigned int (*)(const CEntityDataInstantiator<groundlink_t>::HashEntry&)> m_HashTable;  // +0x8

	CEntityDataInstantiator(CEntityDataInstantiator<groundlink_t> &);
	CEntityDataInstantiator(const CEntityDataInstantiator<groundlink_t> &);
	CEntityDataInstantiator();
	virtual void * GetDataObject(const CEntityInstance *);
	virtual void * CreateDataObject(const CEntityInstance *);
	virtual void DestroyDataObject(const CEntityInstance *);
	bool CompareFunc(const HashEntry &, const HashEntry &);
	unsigned int KeyFunc(const HashEntry &);
	virtual ~CEntityDataInstantiator();

	// vtable[2] GetDataObject
	// vtable[3] CreateDataObject
	// vtable[4] DestroyDataObject
	// sizeof = 56
};

// src/public/entity2/entitydatainstantiator.h:35
class CEntityDataInstantiator<StepSimulationData> : public IEntityDataInstantiator {
	/* tag__fprintf: const_type tag not supported! */;

	struct HashEntry {
		const CEntityInstance * key;  // +0x0
		HashEntry();

		// sizeof = 16
	};

public:

private:

	CUtlHash<CEntityDataInstantiator<StepSimulationData>::HashEntry, bool (*)(const CEntityDataInstantiator<StepSimulationData>::HashEntry&, const CEntityDataInstantiator<StepSimulationData>::HashEntry&), unsigned int (*)(const CEntityDataInstantiator<StepSimulationData>::HashEntry&)> m_HashTable;  // +0x8

	CEntityDataInstantiator(CEntityDataInstantiator<StepSimulationData> &);
	CEntityDataInstantiator(const CEntityDataInstantiator<StepSimulationData> &);
	CEntityDataInstantiator();
	virtual void * GetDataObject(const CEntityInstance *);
	virtual void * CreateDataObject(const CEntityInstance *);
	virtual void DestroyDataObject(const CEntityInstance *);
	bool CompareFunc(const HashEntry &, const HashEntry &);
	unsigned int KeyFunc(const HashEntry &);
	virtual ~CEntityDataInstantiator();

	// vtable[2] GetDataObject
	// vtable[3] CreateDataObject
	// vtable[4] DestroyDataObject
	// sizeof = 56
};

// CEntityDataInstantiator: 4 more instantiations (full list in INDEX.tsv)
//   CEntityDataInstantiator<ModelScale>
//   CEntityDataInstantiator<CWatcherList>
//   CEntityDataInstantiator<physicspushlist_t>
//   CEntityDataInstantiator<vphysicsupdateai_t>
