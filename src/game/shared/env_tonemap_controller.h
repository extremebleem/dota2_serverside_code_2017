// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/env_tonemap_controller.h:30
class CTonemapController2 : public CBaseEntity {
	class NetworkVar_m_flAutoExposureMin {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flAutoExposureMax {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flTonemapPercentTarget {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flTonemapPercentBrightPixels {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flTonemapMinAvgLum {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flRate {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flAccelerateExposureDown {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	static CUtlMap<unsigned int, CTonemapController2*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> sm_Master;
	typedef CBaseEntity BaseClass;
	typedef CTonemapController2 ThisClass;

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
	CTonemapController2(CTonemapController2 &);
	CTonemapController2(CTonemapController2 &);
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
	CTonemapController2();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void UpdateOnRemove();
	virtual int UpdateTransmitState();
	void SetMinExposure(float);
	void SetMaxExposure(float);
	void SetBloomScale(float);
	void SetPercentTarget(float);
	void SetPercentBrightPixels(float);
	void SetMinAverageLuminosity(float);
	void SetRate(float);
	void SetAccelerateExposureDown(float);
	float GetMinExposure();
	float GetMaxExposure();
	float GetBloomScale();
	void Enable(CEntityInstance *);
	void Disable(CEntityInstance *);
	SceneTonemapParameters_t GetSceneTonemapParams();
	void InputSetMinExposure(inputdata_t &);
	void InputSetMaxExposure(inputdata_t &);
	void InputSetBloomScale(inputdata_t &);
	void InputSetPercentTarget(inputdata_t &);
	void InputSetPercentBrightPixels(inputdata_t &);
	void InputSetMinAverageLuminosity(inputdata_t &);
	void InputSetRate(inputdata_t &);
	void InputSetAccelerateExposureDown(inputdata_t &);
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	virtual ~CTonemapController2();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[11] UpdateOnRemove
	// vtable[64] UpdateTransmitState
	// sizeof = 808
};

// src/game/shared/env_tonemap_controller.h:140
class CTonemapTrigger : public CBaseTrigger {
public:

private:

	static datamap_t m_DataMap;

	string_t m_tonemapControllerName;  // +0x5c8
	typedef CBaseTrigger BaseClass;

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
	CTonemapTrigger(CTonemapTrigger &);
	CTonemapTrigger(CTonemapTrigger &);
	CTonemapTrigger();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual void StartTouch(CBaseEntity *);
	virtual void EndTouch(CBaseEntity *);
	CTonemapController2 * GetTonemapController();
	virtual ~CTonemapTrigger();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[111] StartTouch
	// vtable[113] EndTouch
	// sizeof = 1496
};
