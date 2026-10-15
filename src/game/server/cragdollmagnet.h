// Reconstructed from DWARF by pahole; not original source.

// src/game/server/cragdollmagnet.h:17
class CRagdollMagnet : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

	bool m_bDisabled;  // +0x308

	float m_radius;  // +0x30c
	float m_force;  // +0x310
	typedef CPointEntity BaseClass;

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
	CRagdollMagnet(CRagdollMagnet &);
	CRagdollMagnet(CRagdollMagnet &);
	CRagdollMagnet();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	Vector GetForceVector(CBaseEntity *);
	float GetRadius();
	Vector GetAxisVector();
	float DistToPoint(const Vector &);
	bool IsEnabled();
	int IsBarMagnet();
	CRagdollMagnet * FindBestMagnet(CBaseEntity *);
	void Enable(bool);
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	virtual ~CRagdollMagnet();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// sizeof = 800
};
