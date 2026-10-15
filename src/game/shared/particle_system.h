// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/particle_system.h:31
class CParticleSystem : public CBaseModelEntity {
	enum {
		STOP_NORMAL = 0,
		STOP_DESTROY_IMMEDIATELY = 0x1,
		STOP_PLAY_ENDCAP = 0x2,
		NUM_STOP_TYPES = 0x3,
	};

	class NetworkVar_m_szSnapshotFileName {
		void NetworkStateChanged(void *);

		// sizeof = 1
	};

	class NetworkVar_m_bActive {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nStopType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iEffectIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flStartTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_vServerControlPoints {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_iServerControlPointAssignments {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_hControlPointEnts {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_iControlPointParents {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

protected:

	bool m_bNoSave;  // +0x710
	bool m_bStartActive;  // +0x711

	string_t m_iszEffectName;  // +0x718
	typedef CBaseModelEntity BaseClass;
	typedef CParticleSystem ThisClass;

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
	CParticleSystem(CParticleSystem &);
	CParticleSystem(CParticleSystem &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CParticleSystem();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void UpdateOnRemove();
	virtual int ObjectCaps();
	virtual int UpdateTransmitState();
	virtual void SetTransmit(CCheckTransmitInfo *, bool);
	const char * GetEffectName();
	void StartParticleSystem();
	void StopParticleSystem(int);
	void InputStart(inputdata_t &);
	void InputStop(inputdata_t &);
	void InputStopEndCap(inputdata_t &);
	void InputSetControlPoint(inputdata_t &);
	void InputDestroy(inputdata_t &);
	void StartParticleSystemThink();
	bool SetControlPointValue(int, const Vector &);
	void DisableSaveRestore(bool);
	void ReadControlPointEnts();
	void OnActivityChanged();
	virtual ~CParticleSystem();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[11] UpdateOnRemove
	// vtable[19] ObjectCaps
	// vtable[64] UpdateTransmitState
	// vtable[66] SetTransmit
	// sizeof = 2336
};
