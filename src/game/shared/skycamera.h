// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/skycamera.h:28
class CSkyCamera : public CBaseEntity {
	class NetworkVar_m_skyboxSlotToken {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	class NetworkVar_m_skyboxData : public sky3dparams_t {
	public:

		NetworkVar_m_skyboxData(NetworkVar_m_skyboxData &);
		NetworkVar_m_skyboxData(const NetworkVar_m_skyboxData &);
		~NetworkVar_m_skyboxData();
		NetworkVar_m_skyboxData();
		void CopyFrom(const sky3dparams_t &);
		virtual void NetworkStateChanged();
		virtual void NetworkStateChangedLog(const char *, const char *);
		virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);

		// vtable[1] NetworkStateChanged
		// vtable[3] NetworkStateChangedLog
		// vtable[2] NetworkStateChanged
		// sizeof = 128
	};

	bool m_bUseAngles;  // +0x38c

	typedef CBaseEntity BaseClass;
	typedef CSkyCamera ThisClass;

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
	typedef ThisClass ThisClass_m_skyboxData;
	CSkyCamera(CSkyCamera &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CSkyCamera();
	virtual ~CSkyCamera();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual int UpdateTransmitState();
	void InputActivateSkybox(inputdata_t &);
	int GetOffset_m_skyboxData();
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[64] UpdateTransmitState
	// sizeof = 920
};
