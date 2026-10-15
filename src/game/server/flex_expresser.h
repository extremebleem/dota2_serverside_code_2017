// Reconstructed from DWARF by pahole; not original source.

// src/game/server/flex_expresser.h:19
class CFlexExpresserShim : public CFlexCycler {
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

protected:

	CFlexExpresserShim(CFlexExpresserShim &);
	CFlexExpresserShim();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CAI_Expresser * GetExpresser();
	const CAI_Expresser * GetMultiplayerExpresser();

private:

	CFlexExpresserShim & operator=(const CFlexExpresserShim &);
	virtual ~CFlexExpresserShim();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 9616
};

// src/game/server/flex_expresser.h:37
class CFlexExpresser : public CAI_ExpresserHost<CFlexExpresserShim> {
public:

private:

	static datamap_t m_DataMap;

	float m_flThenAnyMaxDist;  // +0x2598
	typedef CAI_ExpresserHost<CFlexExpresserShim> BaseClass;

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
	CFlexExpresser(CFlexExpresser &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CFlexExpresser();
	virtual ~CFlexExpresser();
	CAI_Expresser * GetExpresser();
	const CAI_Expresser * GetMultiplayerExpresser();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Think();
	virtual int OnTakeDamage(const CTakeDamageInfo &);
	void InputSpeakResponseConcept(inputdata_t &);
	CFlexExpresser * AsFlexExpresser(CBaseEntity *);

protected:

	CAI_Expresser * CreateExpresser();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[117] Think
	// vtable[90] OnTakeDamage
	// sizeof = 9632
};
