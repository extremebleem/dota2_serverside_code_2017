// Reconstructed from DWARF by pahole; not original source.

// src/game/server/prop_door.h:45
class CPropDoorRotating : public CBasePropDoor {
public:

private:

	static datamap_t m_DataMap;

protected:

	float m_flDistance;  // +0x8f4
	typedef CBasePropDoor BaseClass;

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
	CPropDoorRotating(CPropDoorRotating &);
	CPropDoorRotating();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CPropDoorRotating();
	virtual int DrawDebugTextOverlays(uint64, int);
	virtual void Spawn(const CEntityKeyValues *);
	virtual void OnRestore();
	doorCheck_e CalculateOpenAngles(CBaseEntity *, QAngle *);
	void CreateDoorBlocker(CBaseEntity *, doorCheck_e);
	virtual void BeginOpening(CBaseEntity *);
	virtual void BeginClosing();
	virtual void MoveDone();
	virtual void DoorTeleportToSpawnPosition();
	void SetSpawnPosition(PropDoorRotatingSpawnPos_t);
	PropDoorRotatingSpawnPos_t GetSpawnPosition();
	void DoorClose();
	virtual bool DoorCanClose(bool);
	void DoorOpen(CBaseEntity *);
	virtual void DoorResume();
	virtual void DoorStop();
	virtual float GetOpenInterval();
	virtual bool OverridePropdata();
	void InputSetSpeed(inputdata_t &);
	virtual void ComputeDoorExtent(Extent *, unsigned int);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void OnDoorOpened();
	virtual void OnDoorClosed();
	virtual void AngularMove(const QAngle &, float);
	void CalculateDoorVolume(QAngle, QAngle, Vector *, Vector *);
	bool CheckDoorClear(doorCheck_e);
	doorCheck_e GetOpenState();
	void InputSetRotationDistance(inputdata_t &);
	void CalcOpenAngles();
	/* tag__fprintf: const_type tag not supported! */;
	CBodyComponent * GetComponent<CBodyComponent>(CBodyComponent *);
	CBodyComponent * GetComponent<CBodyComponent>();

	// vtable[0] Schema_DynamicBinding
	// vtable[79] DrawDebugTextOverlays
	// vtable[8] Spawn
	// vtable[18] OnRestore
	// vtable[311] BeginOpening
	// vtable[312] BeginClosing
	// vtable[118] MoveDone
	// vtable[315] DoorTeleportToSpawnPosition
	// vtable[303] DoorCanClose
	// vtable[314] DoorResume
	// vtable[313] DoorStop
	// vtable[305] GetOpenInterval
	// vtable[252] OverridePropdata
	// vtable[306] ComputeDoorExtent
	// vtable[34] GetDataDescMap
	// vtable[307] OnDoorOpened
	// vtable[308] OnDoorClosed
	// vtable[321] AngularMove
	// sizeof = 2416
};

// src/game/server/prop_door.h:148
class CPropDoorRotatingBreakable : public CPropDoorRotating {
public:

private:

	static datamap_t m_DataMap;

	bool m_bBreakable;  // +0x970
	bool m_isAbleToCloseAreaPortals;  // +0x971

	int m_currentDamageState;  // +0x974
	typedef CPropDoorRotating BaseClass;

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
	CPropDoorRotatingBreakable(CPropDoorRotatingBreakable &);
	CPropDoorRotatingBreakable(CPropDoorRotatingBreakable &);
	CPropDoorRotatingBreakable();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual int OnTakeDamage(const CTakeDamageInfo &);
	virtual void Event_Killed(const CTakeDamageInfo &);
	void InputSetRotationDistance(inputdata_t &);
	void InputSetUnbreakable(inputdata_t &);
	void InputSetBreakable(inputdata_t &);
	virtual bool IsAbleToCloseAreaPortals();
	virtual int DrawDebugTextOverlays(uint64, int);
	void PrecacheBreakables(ResourceHandle_t, const CEntityPrecacheContext *);
	virtual ~CPropDoorRotatingBreakable();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[90] OnTakeDamage
	// vtable[92] Event_Killed
	// vtable[299] IsAbleToCloseAreaPortals
	// vtable[79] DrawDebugTextOverlays
	// sizeof = 2448
};
