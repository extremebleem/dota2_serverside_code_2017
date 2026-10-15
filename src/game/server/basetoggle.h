// Reconstructed from DWARF by pahole; not original source.

// src/game/server/basetoggle.h:15
class CBaseToggle : public CBaseModelEntity {
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

	float m_flMoveDistance;  // +0x484
	float m_flWait;  // +0x488
	float m_flLip;  // +0x48c
	bool m_bAlwaysFireBlockedOutputs;  // +0x490

	float m_flHeight;  // +0x4d0
	EHANDLE m_hActivator;  // +0x4d4
	int m_movementType;  // +0x4f0

	static datamap_t m_DataMap;

	string_t m_sMaster;  // +0x4f8
	typedef CBaseModelEntity BaseClass;
	CBaseToggle(CBaseToggle &);
	CBaseToggle(CBaseToggle &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CBaseToggle();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual float GetDelay();
	void LinearMove(const Vector &, float);
	void LinearMoveDone();
	void AngularMove(const QAngle &, float);
	void AngularMoveDone();
	virtual bool IsLockedByMaster();
	virtual void MoveDone();
	virtual void GetGroundVelocityToApply(Vector &);
	float AxisValue(int, const QAngle &);
	void AxisDir();
	float AxisDelta(int, const QAngle &, const QAngle &);
	virtual ~CBaseToggle();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[6] Precache
	// vtable[95] GetDelay
	// vtable[155] IsLockedByMaster
	// vtable[118] MoveDone
	// vtable[176] GetGroundVelocityToApply
	// sizeof = 1280
};
