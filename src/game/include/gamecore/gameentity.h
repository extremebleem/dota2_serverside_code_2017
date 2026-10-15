// Reconstructed from DWARF by pahole; not original source.

// src/game/include/gamecore/gameentity.h:30
class CGameEntity : public CEntityInstance {
	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};

public:

private:

	CGameEntity & operator=(CGameEntity &);
	CGameEntity & operator=(const CGameEntity &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CGameEntity();
	virtual ICollideable * GetCollideable();
	virtual IPredictionCopyable * GetPredictionCopyable();
	CGameEntity * Instance(CEntityIndex);
	bool IsServerOnly();
	bool IsClientOnly();
	bool IsClientServerNetworked();
	void DataDescValidate_CGameEntity(ValidationResult_t *);
	void DataDescValidate_C_GameEntity(ValidationResult_t *);
	virtual ~CGameEntity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[28] HackToMakeAVTable
	// vtable[29] GetCollideable
	// vtable[30] GetPredictionCopyable
	// sizeof = 48
};

// src/game/include/gamecore/gameentity.h:30
class CGameEntity : public CEntityInstance {
	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};

public:

private:

	CGameEntity(CGameEntity &);
	CGameEntity(const CGameEntity &);
	CGameEntity & operator=(CGameEntity &);
	CGameEntity & operator=(const CGameEntity &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CGameEntity();
	virtual ICollideable * GetCollideable();
	virtual IPredictionCopyable * GetPredictionCopyable();
	CGameEntity * Instance(CEntityIndex);
	bool IsServerOnly();
	bool IsClientOnly();
	bool IsClientServerNetworked();
	void DataDescValidate_CGameEntity(ValidationResult_t *);
	void DataDescValidate_C_GameEntity(ValidationResult_t *);
	virtual ~CGameEntity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[28] HackToMakeAVTable
	// vtable[29] GetCollideable
	// vtable[30] GetPredictionCopyable
	// sizeof = 48
};
