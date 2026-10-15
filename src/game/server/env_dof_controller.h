// Reconstructed from DWARF by pahole; not original source.

// src/game/server/env_dof_controller.h:10
struct DOFControlSettings_t {
	float flNearBlurDepth;  // +0x0
	float flNearBlurRadius;  // +0x4
	float flNearFocusDistance;  // +0x8
	float flFarBlurDepth;  // +0xc
	float flFarBlurRadius;  // +0x10
	float flFarFocusDistance;  // +0x14

	// sizeof = 24
};

// src/game/server/env_dof_controller.h:25
class CEnvDOFController : public CPointEntity {
	class NetworkVar_m_bDOFEnabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flNearBlurDepth {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flNearFocusDepth {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flFarFocusDepth {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flFarBlurDepth {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flNearBlurRadius {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flFarBlurRadius {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	float m_flFocusTargetRange;  // +0x308

	string_t m_strFocusTargetName;  // +0x310
	EHANDLE m_hFocusTarget;  // +0x318

	typedef CPointEntity BaseClass;
	typedef CEnvDOFController ThisClass;

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
	CEnvDOFController(CEnvDOFController &);
	CEnvDOFController(CEnvDOFController &);
	CEnvDOFController();
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
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual int UpdateTransmitState();
	void SetControllerState(DOFControlSettings_t);
	void UpdateParamBlend();
	void InputSetNearBlurDepth(inputdata_t &);
	void InputSetNearFocusDepth(inputdata_t &);
	void InputSetFarFocusDepth(inputdata_t &);
	void InputSetFarBlurDepth(inputdata_t &);
	void InputSetNearBlurRadius(inputdata_t &);
	void InputSetFarBlurRadius(inputdata_t &);
	void InputBlendDOFScale(inputdata_t &);
	void InputSetFocusTarget(inputdata_t &);
	void InputSetFocusTargetRange(inputdata_t &);
	virtual ~CEnvDOFController();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[64] UpdateTransmitState
	// sizeof = 824
};
