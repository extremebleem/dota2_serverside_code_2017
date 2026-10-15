// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/fogcontroller.h:38
class CFogController : public CBaseEntity {
public:

private:

	static datamap_t m_DataMap;

	class NetworkVar_m_fog : public fogparams_t {
	public:

		NetworkVar_m_fog(NetworkVar_m_fog &);
		NetworkVar_m_fog(const NetworkVar_m_fog &);
		~NetworkVar_m_fog();
		NetworkVar_m_fog();
		void CopyFrom(const fogparams_t &);
		virtual void NetworkStateChanged();
		virtual void NetworkStateChangedLog(const char *, const char *);
		virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);

		// vtable[0] NetworkStateChanged
		// vtable[2] NetworkStateChangedLog
		// vtable[1] NetworkStateChanged
		// sizeof = 96
	};

	bool m_bUseAngles;  // +0x368

	int m_iChangedVariables;  // +0x36c
	typedef CBaseEntity BaseClass;
	typedef CFogController ThisClass;

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
	typedef ThisClass ThisClass_m_fog;
	CFogController(CFogController &);
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
	CFogController();
	virtual ~CFogController();

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual int UpdateTransmitState();
	void InputSetStartDist(inputdata_t &);
	void InputSetEndDist(inputdata_t &);
	void InputTurnOn(inputdata_t &);
	void InputTurnOff(inputdata_t &);
	void InputSetColor(inputdata_t &);
	void InputSetColorSecondary(inputdata_t &);
	void InputSetFarZ(inputdata_t &);
	void InputSetAngles(inputdata_t &);
	void InputSetMaxDensity(inputdata_t &);
	void InputSet2DSkyboxFogFactor(inputdata_t &);
	void InputSet2DSkyboxFogFactorLerpTo(inputdata_t &);
	void InputSetColorLerpTo(inputdata_t &);
	void InputSetColorSecondaryLerpTo(inputdata_t &);
	void InputSetStartDistLerpTo(inputdata_t &);
	void InputSetEndDistLerpTo(inputdata_t &);
	void InputSetMaxDensityLerpTo(inputdata_t &);
	void InputStartFogTransition(inputdata_t &);
	virtual int DrawDebugTextOverlays(uint64, int);
	void SetLerpValues();
	bool IsMaster();
	fogparams_t * GetFogParams();
	int GetOffset_m_fog();
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[64] UpdateTransmitState
	// vtable[79] DrawDebugTextOverlays
	// sizeof = 880
};

// src/game/shared/fogcontroller.h:98
class CFogSystem : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	typedef CAutoGameSystem BaseClass;
	CFogSystem(const CFogSystem &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CFogSystem *);
	CFogSystem();
	virtual ~CFogSystem();
	virtual void GameInit(const EventGameInit_t &);
	virtual void ActiveSpawnGroupChanged(const EventActiveSpawnGroupChanged_t &);
	CFogController * GetMasterFogController();

private:

	void InitMasterController(SpawnGroupHandle_t);

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// vtable[18] ActiveSpawnGroupChanged
	// sizeof = 24
};
