// Reconstructed from DWARF by pahole; not original source.

// src/game/server/effects.cpp:42
class CBubbling : public CBaseModelEntity {
public:

private:

	static datamap_t m_DataMap;

	int m_density;  // +0x480
	int m_frequency;  // +0x484
	int m_state;  // +0x488
	typedef CBaseModelEntity BaseClass;

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
	CBubbling(CBubbling &);
	CBubbling(CBubbling &);
	CBubbling();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	void FizzThink();
	void InputActivate(inputdata_t &);
	void InputDeactivate(inputdata_t &);
	void InputToggle(inputdata_t &);
	void InputSetCurrent(inputdata_t &);
	void InputSetDensity(inputdata_t &);
	void InputSetFrequency(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	void TurnOn();
	void TurnOff();
	void Toggle();
	virtual ~CBubbling();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[34] GetDataDescMap
	// sizeof = 1168
};

// src/game/server/effects.cpp:239
class CEnvTracer : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

	float m_flDelay;  // +0x314
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
	CEnvTracer(CEnvTracer &);
	CEnvTracer(CEnvTracer &);
	CEnvTracer();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	void TracerThink();
	virtual void Activate(ActivateType_t);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CEnvTracer();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[34] GetDataDescMap
	// sizeof = 792
};

// src/game/server/effects.cpp:320
class CGibShooter : public CBaseModelEntity {
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

	static datamap_t m_DataMap;

protected:

	int m_iGibs;  // +0x480
	int m_iGibCapacity;  // +0x484
	int m_iGibMaterial;  // +0x488

	HModelStrong m_iGibModelIndex;  // +0x490
	string_t m_iShootModelName;  // +0x498
	float m_flGibVelocity;  // +0x4a0
	float m_flGibAngVelocity;  // +0x4b0
	float m_flVariance;  // +0x4b4
	float m_flGibLife;  // +0x4b8
	int m_nSimulationType;  // +0x4bc
	int m_nMaxGibModelFrame;  // +0x4c0
	float m_flDelay;  // +0x4c4
	bool m_bNoGibShadows;  // +0x4c8
	bool m_bIsSprite;  // +0x4c9

	string_t m_iszLightingOrigin;  // +0x4d0
	typedef CBaseModelEntity BaseClass;
	CGibShooter(CGibShooter &);
	CGibShooter(CGibShooter &);
	CGibShooter();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	virtual CGib * CreateGib();
	CBaseEntity * SpawnGib(const Vector &, float);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();

private:

	void InitPointGib(CGib *, const Vector &, float);
	void ShootThink();

protected:

	void InputShoot(inputdata_t &);
	virtual ~CGibShooter();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[108] Use
	// vtable[214] CreateGib
	// vtable[34] GetDataDescMap
	// sizeof = 1240
};

// src/game/server/effects.cpp:639
class CEnvShooter : public CGibShooter {
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

	static datamap_t m_DataMap;

	int m_nSkin;  // +0x4d8
	float m_flGibScale;  // +0x4dc
	float m_flGibGravityScale;  // +0x4e0
	typedef CGibShooter BaseClass;
	CEnvShooter(CEnvShooter &);
	CEnvShooter(CEnvShooter &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

protected:

	CEnvShooter();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual CGib * CreateGib();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CEnvShooter();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[214] CreateGib
	// vtable[34] GetDataDescMap
	// sizeof = 1256
};

// src/game/server/effects.cpp:809
class CRotorWashShooter : public CEnvShooter, public IRotorWashShooter {
public:

private:

	static datamap_t m_DataMap;

	float m_flTimeUnderRotor;  // +0x4f0
	float m_flTimeUnderRotorVariance;  // +0x4f4
	float m_flLastWashStartTime;  // +0x4f8
	float m_flNextGibTime;  // +0x4fc
	typedef CEnvShooter BaseClass;

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
	CRotorWashShooter(CRotorWashShooter &);
	CRotorWashShooter(CRotorWashShooter &);
	CRotorWashShooter();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Spawn(const CEntityKeyValues *);
	virtual CBaseEntity * DoWashPush(float, const Vector &);
	virtual ~CRotorWashShooter();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[215] DoWashPush
	// sizeof = 1280
};

// src/game/server/effects.cpp:919
class CTestEffect : public CBaseEntity {
public:

private:

	int m_iLoop;  // +0x308
	int m_iBeam;  // +0x30c
	float m_flBeamTime[24];  // +0x3d0
	float m_flStartTime;  // +0x430
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
	CTestEffect(CTestEffect &);
	CTestEffect(CTestEffect &);
	CTestEffect();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Think();
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	virtual ~CTestEffect();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[6] Precache
	// vtable[117] Think
	// vtable[108] Use
	// sizeof = 1080
};

// src/game/server/effects.cpp:1003
class CBlood : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

	float m_flAmount;  // +0x314
	int m_Color;  // +0x318
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
	CBlood(CBlood &);
	CBlood(CBlood &);
	CBlood();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

protected:

	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	int Color();
	float BloodAmount();
	void SetColor(int);
	void InputEmitBlood(inputdata_t &);
	Vector Direction();
	Vector BloodPosition(CBaseEntity *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CBlood();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[34] GetDataDescMap
	// sizeof = 800
};

// src/game/server/effects.cpp:1210
class CEnvFunnel : public CBaseEntity {
public:

private:

	static datamap_t m_DataMap;
	typedef CBaseEntity BaseClass;

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
	CEnvFunnel(CEnvFunnel &);
	CEnvFunnel(CEnvFunnel &);
	CEnvFunnel();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	virtual ~CEnvFunnel();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[108] Use
	// sizeof = 776
};

// src/game/server/effects.cpp:1255
class CEnvBeverage : public CBaseEntity {
public:

private:

	static datamap_t m_DataMap;

	bool m_CanInDispenser;  // +0x308

	int m_nBeverageType;  // +0x30c
	typedef CBaseEntity BaseClass;

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
	CEnvBeverage(CEnvBeverage &);
	CEnvBeverage(CEnvBeverage &);
	CEnvBeverage();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	void InputActivate(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CEnvBeverage();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[108] Use
	// vtable[34] GetDataDescMap
	// sizeof = 784
};

// src/game/server/effects.cpp:1335
class CItemSoda : public CBaseAnimating {
public:

private:

	static datamap_t m_DataMap;
	typedef CBaseAnimating BaseClass;

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
	CItemSoda(CItemSoda &);
	CItemSoda(CItemSoda &);
	CItemSoda();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	void CanThink();
	void CanTouch(CBaseEntity *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CItemSoda();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[34] GetDataDescMap
	// sizeof = 1216
};

// src/game/server/effects.cpp:1421
class CPrecipitation : public CBaseModelEntity {
	class NetworkVar_m_nPrecipType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_minSpeed {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_maxSpeed {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	typedef CBaseModelEntity BaseClass;
	typedef CPrecipitation ThisClass;

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
	CPrecipitation(CPrecipitation &);
	CPrecipitation(CPrecipitation &);
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
	CPrecipitation();
	virtual int UpdateTransmitState();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual ~CPrecipitation();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[64] UpdateTransmitState
	// vtable[6] Precache
	// vtable[8] Spawn
	// sizeof = 1168
};

// src/game/server/effects.cpp:1450
class C_CPrecipitation_MapInstall {
	C_CPrecipitation_MapInstall();

	// sizeof = 1
};

// src/game/server/effects.cpp:1535
class CPrecipitationBlocker : public CBaseModelEntity {
public:

private:

	static datamap_t m_DataMap;
	typedef CBaseModelEntity BaseClass;

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
	CPrecipitationBlocker(CPrecipitationBlocker &);
	CPrecipitationBlocker(CPrecipitationBlocker &);
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
	CPrecipitationBlocker();
	virtual void Spawn(const CEntityKeyValues *);
	virtual int UpdateTransmitState();
	virtual ~CPrecipitationBlocker();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[64] UpdateTransmitState
	// sizeof = 1152
};

// src/game/server/effects.cpp:1550
class C_CPrecipitationBlocker_MapInstall {
	C_CPrecipitationBlocker_MapInstall();

	// sizeof = 1
};

// src/game/server/effects.cpp:1579
class CEnvWind : public CBaseEntity {
public:

private:

	static datamap_t m_DataMap;

	class NetworkVar_m_EnvWindShared : public CEnvWindShared {
	public:

		~NetworkVar_m_EnvWindShared();
		NetworkVar_m_EnvWindShared(NetworkVar_m_EnvWindShared &);
		NetworkVar_m_EnvWindShared(const NetworkVar_m_EnvWindShared &);
		NetworkVar_m_EnvWindShared();
		virtual void NetworkStateChanged();
		virtual void NetworkStateChangedLog(const char *, const char *);
		virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);

		// vtable[1] NetworkStateChanged
		// vtable[3] NetworkStateChangedLog
		// vtable[2] NetworkStateChanged
		// sizeof = 624
	};

	typedef CBaseEntity BaseClass;
	typedef CEnvWind ThisClass;

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
	typedef ThisClass ThisClass_m_EnvWindShared;
	CEnvWind(CEnvWind &);
	CEnvWind(CEnvWind &);
	CEnvWind();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	void WindThink();
	virtual int UpdateTransmitState();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	int GetOffset_m_EnvWindShared();
	virtual ~CEnvWind();
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[64] UpdateTransmitState
	// vtable[34] GetDataDescMap
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 1400
};

// src/game/server/effects.cpp:1627
class C_CEnvWind_MapInstall {
	C_CEnvWind_MapInstall();

	// sizeof = 1
};

// src/game/server/effects.cpp:1657
class CPhysicsWire : public CBaseEntity {
public:

private:

	static datamap_t m_DataMap;

protected:

	int m_nDensity;  // +0x308
	typedef CBaseEntity BaseClass;

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
	CPhysicsWire(CPhysicsWire &);
	CPhysicsWire(CPhysicsWire &);
	CPhysicsWire();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	bool SetupPhysics();
	virtual ~CPhysicsWire();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// sizeof = 784
};

// src/game/server/effects.cpp:1738
class CEnvMuzzleFlash : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

	float m_flScale;  // +0x308

	string_t m_iszParentAttachment;  // +0x310
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
	CEnvMuzzleFlash(CEnvMuzzleFlash &);
	CEnvMuzzleFlash(CEnvMuzzleFlash &);
	CEnvMuzzleFlash();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	void InputFire(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CEnvMuzzleFlash();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[34] GetDataDescMap
	// sizeof = 792
};

// src/game/server/effects.cpp:1801
class CEnvSplash : public CPointEntity {
public:

private:

protected:

	float m_flScale;  // +0x308

	static datamap_t m_DataMap;
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
	CEnvSplash(CEnvSplash &);
	CEnvSplash(CEnvSplash &);
	CEnvSplash();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Precache(const CEntityPrecacheContext *);
	void InputSplash(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CEnvSplash();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[6] Precache
	// vtable[34] GetDataDescMap
	// sizeof = 784
};

// src/game/server/effects.cpp:1898
class CEnvGunfire : public CPointEntity {
public:

private:

	int m_iMinBurstSize;  // +0x308
	int m_iMaxBurstSize;  // +0x30c
	float m_flMinBurstDelay;  // +0x310
	float m_flMaxBurstDelay;  // +0x314
	float m_flRateOfFire;  // +0x318

	string_t m_iszShootSound;  // +0x320
	string_t m_iszTracerType;  // +0x328
	bool m_bDisabled;  // +0x330

	int m_iShotsRemaining;  // +0x334
	int m_iSpread;  // +0x338
	float m_flTargetDist;  // +0x354
	float m_flBias;  // +0x358
	bool m_bCollide;  // +0x35c

	EHANDLE m_hTarget;  // +0x360

	static datamap_t m_DataMap;
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
	CEnvGunfire(CEnvGunfire &);
	CEnvGunfire(CEnvGunfire &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CEnvGunfire();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	void StartShooting();
	void StopShooting();
	void ShootThink();
	void UpdateTarget();
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CEnvGunfire();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[34] GetDataDescMap
	// sizeof = 872
};

// src/game/server/effects.cpp:2142
class CEnvViewPunch : public CPointEntity {
public:

private:

	float m_flRadius;  // +0x308

	static datamap_t m_DataMap;
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
	CEnvViewPunch(CEnvViewPunch &);
	CEnvViewPunch(CEnvViewPunch &);
	CEnvViewPunch();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	void InputViewPunch(inputdata_t &);
	void DoViewPunch();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CEnvViewPunch();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[34] GetDataDescMap
	// sizeof = 792
};

// src/game/server/effects.cpp:2281
class CEnvAirStrikeIndoorEffect : public CBaseAnimating {
public:

private:

	static datamap_t m_DataMap;

	int m_nMode;  // +0x4c0
	float m_flHeight;  // +0x4c4
	float m_flNextStateTime;  // +0x4c8
	int m_nUserSpecifiedHeight;  // +0x4cc
	typedef CBaseAnimating BaseClass;

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
	CEnvAirStrikeIndoorEffect(CEnvAirStrikeIndoorEffect &);
	CEnvAirStrikeIndoorEffect(CEnvAirStrikeIndoorEffect &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CEnvAirStrikeIndoorEffect();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	void CrumbleThink();
	void FindAnimationSequence();
	void InputDoEffect(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CEnvAirStrikeIndoorEffect();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[34] GetDataDescMap
	// sizeof = 1232
};

// src/game/server/effects.cpp:2469
class CEnvAirStrikeOutdoorEffect : public CBaseAnimating {
public:

private:

	static datamap_t m_DataMap;

	float m_flNextStateTime;  // +0x4c0

	string_t m_strModelGroup;  // +0x4c8
	string_t m_strSequenceName1;  // +0x4d0
	string_t m_strSequenceName2;  // +0x4d8
	int m_nMode;  // +0x4e0
	typedef CBaseAnimating BaseClass;

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
	CEnvAirStrikeOutdoorEffect(CEnvAirStrikeOutdoorEffect &);
	CEnvAirStrikeOutdoorEffect(CEnvAirStrikeOutdoorEffect &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CEnvAirStrikeOutdoorEffect();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Activate(ActivateType_t);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	void CrumbleThink();
	void FindAnimationSequence();
	void InputDoEffect(inputdata_t &);
	virtual ~CEnvAirStrikeOutdoorEffect();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[10] Activate
	// vtable[34] GetDataDescMap
	// sizeof = 1256
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBubbling::~CBubbling  (line 42, @0x00000000021e17a0, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CBubbling::~CBubbling(CBubbling *const this)
{
  this->_vptr_IHandleEntity = &off_4017DD0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CBubbling::~CBubbling  (line 42, @0x00000000021e17c0, libserver.so)  // inlines: ~CBubbling
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CBubbling::~CBubbling(CBubbling *const this)
{
  this->_vptr_IHandleEntity = &off_4017DD0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CBubbling::GetEntityClass  (line 44, @0x00000000021de4f0, libserver.so)
CEntityClass *__cdecl CBubbling::GetEntityClass()
{
  return g_pEntityCBubblingClass;
}


// CBubbling::Schema_DynamicBinding  (line 44, @0x00000000021de500, libserver.so)
// globals: CBubbling::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CBubbling::Schema_DynamicBinding(const CBubbling *const this)
{
  return CBubbling::s_pSchemaBinding;
}


// CBubbling::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 44, @0x00000000021de510, libserver.so)
// globals: CBubbling::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CBubbling::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CBubbling::CEntityInstanceEntityClass *const this)
{
  return CBubbling::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CBubbling::CEntityInstanceEntityClass::DestructInstance  (line 44, @0x00000000021de520, libserver.so)  // inlines: Destruct<CBubbling>
void __fastcall CBubbling::CEntityInstanceEntityClass::DestructInstance(
        CBubbling::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CBubbling::CEntityInstanceEntityClass::FreeInstance  (line 44, @0x00000000021de540, libserver.so)
void __fastcall CBubbling::CEntityInstanceEntityClass::FreeInstance(
        CBubbling::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CBubbling::CEntityInstanceEntityClass::CanAllocate  (line 44, @0x00000000021de560, libserver.so)
bool __fastcall CBubbling::CEntityInstanceEntityClass::CanAllocate(
        const CBubbling::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CBubbling::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 44, @0x00000000021de570, libserver.so)
// globals: CBubbling::s_pSchemaBinding
const ISchemaBinding *__fastcall CBubbling::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CBubbling::CEntityInstanceEntityClass *const this)
{
  return CBubbling::s_pSchemaBinding;
}


// CBubbling::CEntityInstanceEntityClass::AllocateInstance  (line 44, @0x00000000021e0480, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CBubbling::CEntityInstanceEntityClass::AllocateInstance(
        CBubbling::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1168);
  memset(v1, 0, 0x490u);
  return v1;
}


// CBubbling::CEntityInstanceEntityClass::ConstructInstance  (line 44, @0x00000000021e0e30, libserver.so)  // inlines: CBubbling, Construct<CBubbling>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CBubbling::CEntityInstanceEntityClass::ConstructInstance(
        CBubbling::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *p = &off_4017DD0;
  }
  return p;
}


// CBubbling::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 44, @0x00000000021e2c50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CBubbling::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBubbling::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CBubbling::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 44, @0x00000000021e2c70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CBubbling::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBubbling::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CBubbling::GetEntityClassInternal  (line 44, @0x00000000021e7060, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "env_bubbles", "CBubbling"
// globals: `guard variable for'CBubbling::GetEntityClassInternal(void)::g_EntityCBubblingClass, CBubbling::GetEntityClassInternal(void)::g_EntityCBubblingClass, __dso_handle, CBubbling::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CBubbling::GetEntityClassInfo(void)::g_EntityCBubblingClassInfo, CBubbling::GetEntityClassInfo(void)::g_EntityCBubblingClassInfo
CEntityClass *__cdecl CBubbling::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBubbling::GetEntityClassInternal(void)::g_EntityCBubblingClass == 0
    && __cxa_guard_acquire(&`guard variable for'CBubbling::GetEntityClassInternal(void)::g_EntityCBubblingClass) != 0 )
  {
    CEntityClass::CEntityClass(&CBubbling::GetEntityClassInternal(void)::g_EntityCBubblingClass);
    CBubbling::GetEntityClassInternal(void)::g_EntityCBubblingClass._vptr_CEntityClass = off_4017D50;
    __cxa_guard_release(&`guard variable for'CBubbling::GetEntityClassInternal(void)::g_EntityCBubblingClass);
    __cxa_atexit(
      CBubbling::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CBubbling::GetEntityClassInternal(void)::g_EntityCBubblingClass,
      &_dso_handle);
  }
  if ( g_pEntityCBubblingClass != 0 )
    return &CBubbling::GetEntityClassInternal(void)::g_EntityCBubblingClass;
  if ( `guard variable for'CBubbling::GetEntityClassInfo(void)::g_EntityCBubblingClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBubbling::GetEntityClassInfo(void)::g_EntityCBubblingClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBubbling::GetEntityClassInfo(void)::g_EntityCBubblingClassInfo,
      "CBubbling",
      "env_bubbles",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBubbling::GetEntityClassInfo(void)::g_EntityCBubblingClassInfo);
  }
  CBubbling::GetEntityClassInternal(void)::g_EntityCBubblingClass.m_pClassInfo = &CBubbling::GetEntityClassInfo(void)::g_EntityCBubblingClassInfo;
  CBubbling::GetEntityClassInternal(void)::g_EntityCBubblingClass.m_pBaseClassInfo = CBubbling::GetEntityClassInfo(void)::g_EntityCBubblingClassInfo.m_pBaseClassInfo;
  g_pEntityCBubblingClass = &CBubbling::GetEntityClassInternal(void)::g_EntityCBubblingClass;
  CBubbling::GetEntityClassInfo(void)::g_EntityCBubblingClassInfo.m_pClass = &CBubbling::GetEntityClassInternal(void)::g_EntityCBubblingClass;
  CBubbling::GetEntityClassInternal(void)::g_EntityCBubblingClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCBubblingClass->m_pComponentOverrides = 0;
  return &CBubbling::GetEntityClassInternal(void)::g_EntityCBubblingClass;
}


// CBubbling::GetDataDescMap  (line 76, @0x00000000021bacd0, libserver.so)
// globals: CBubbling::m_DataMap
datamap_t *__fastcall CBubbling::GetDataDescMap(CBubbling *const this)
{
  return &CBubbling::m_DataMap;
}


// CBubbling::AddDatadescMetadataKeys  (line 76, @0x00000000021c7220, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CBubbling::GetEntityClass(void)
void __fastcall CBubbling::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CBubbling::GetEntityClass);
}


// CBubbling::GetBaseMap  (line 76, @0x00000000021c7240, libserver.so)
datamap_t *__cdecl CBubbling::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CBubbling>  (line 76, @0x00000000021d8490, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CBubbling"
// globals: `guard variable for'DataMapInit<CBubbling>(CBubbling *)::nameHolder, `guard variable for'DataMapInit<CBubbling>(CBubbling *)::dataDesc, CBubbling::GetEntityClass(void), CBubbling::m_DataMap, DataMapInit<CBubbling>(CBubbling *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CBubbling>(CBubbling *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CBubbling>(CBubbling *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBubbling>(CBubbling *)::nameHolder) != 0 )
  {
    DataMapInit<CBubbling>(CBubbling *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBubbling>(CBubbling *)::nameHolder.m_pszBase = "CBubbling";
    DataMapInit<CBubbling>(CBubbling *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBubbling>(CBubbling *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBubbling>(CBubbling *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBubbling>(CBubbling *)::nameHolder.m_nLenBase = 9;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBubbling>(CBubbling *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBubbling>(CBubbling *)::nameHolder,
      &_dso_handle);
  }
  CBubbling::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CBubbling>(CBubbling *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBubbling>(CBubbling *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CBubbling>(CBubbling *)::nameHolder.m_nLenBase + 10);
    strcpy(stpcpy(v2, DataMapInit<CBubbling>(CBubbling *)::nameHolder.m_pszBase), "FizzThink");
    m_Size = DataMapInit<CBubbling>(CBubbling *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CBubbling>(CBubbling *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBubbling>(CBubbling *)::nameHolder.m_Names.m_Size == DataMapInit<CBubbling>(CBubbling *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBubbling>(CBubbling *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CBubbling>(CBubbling *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBubbling>(CBubbling *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CBubbling>(CBubbling *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CBubbling>(CBubbling *)::dataDesc[5].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBubbling>(CBubbling *)::dataDesc);
  }
  CBubbling::m_DataMap.dataNumFields = 11;
  CBubbling::m_DataMap.dataDesc = &DataMapInit<CBubbling>(CBubbling *)::dataDesc[1];
  AddDatadescMetadataKeys(&CBubbling::m_DataMap, CBubbling::GetEntityClass);
  return &CBubbling::m_DataMap;
}


// CBubbling::Spawn  (line 100, @0x00000000021c0ea0, libserver.so)  // inlines: SetSolid, curtime
// calls: CBaseEntity::Spawn, CBaseModelEntity::SetModelFromKeyValues, CBaseModelEntity::SetRenderAlpha, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// globals: CBubbling::FizzThink(void)
void __fastcall CBubbling::Spawn(CBubbling *const this, const CEntityKeyValues *pKeyValues)
{
  double v4; // xmm1_8
  CGlobalVars *v5; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v7; // xmm0_8

  CBaseEntity::Spawn(this, pKeyValues);
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  CBaseModelEntity::SetRenderAlpha(this, 0);
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 0);
  if ( (this->m_spawnflags.m_Value & 1) != 0 )
  {
    this->m_state = 0;
  }
  else
  {
    CBaseEntity::ThinkSet(this, CBubbling::FizzThink, 0.0, 0, 0);
    v5 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      HIDWORD(v7) = 0;
      *&v7 = v5->m_flCurrentTime + 2.0;
    }
    else
    {
      *&v7 = 0x40000000;
    }
    CBaseEntity::SetNextThink(this, v7, v4, 0);
    this->m_state = 1;
  }
}


// CBubbling::Precache  (line 123, @0x00000000021ddd20, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache
void __fastcall CBubbling::Precache(CBubbling *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
}


// CBubbling::Toggle  (line 129, @0x00000000021c7330, libserver.so)
// calls: CBubbling::TurnOff, CBubbling::TurnOn
// callers: CBubbling::InputToggle
void __fastcall CBubbling::Toggle(CBubbling *const this)
{
  if ( this->m_state != 0 )
    CBubbling::TurnOff(this);
  else
    CBubbling::TurnOn(this);
}


// CBubbling::TurnOn  (line 142, @0x00000000021c7250, libserver.so)  // inlines: curtime
// calls: CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// callers: CBubbling::InputActivate, CBubbling::Toggle
// globals: CBubbling::FizzThink(void)
void __fastcall CBubbling::TurnOn(CBubbling *const this)
{
  double v2; // xmm1_8
  CGlobalVars *v3; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  this->m_state = 1;
  CBaseEntity::ThinkSet(this, CBubbling::FizzThink, 0.0, 0, 0);
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(COERCE_UNSIGNED_INT(v3->m_flCurrentTime + 0.1)), v2, 0);
  }
  else
  {
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(1036831949), v2, 0);
  }
}


// CBubbling::TurnOff  (line 149, @0x00000000021c72f0, libserver.so)
// calls: CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// callers: CBubbling::Toggle, CBubbling::InputDeactivate
void __fastcall CBubbling::TurnOff(CBubbling *const this)
{
  double v2; // xmm1_8

  this->m_state = 0;
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
  CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v2, 0);
}


// CBubbling::InputActivate  (line 159, @0x00000000021c72e0, libserver.so)
// calls: CBubbling::TurnOn
void __fastcall CBubbling::InputActivate(CBubbling *const this, inputdata_t *const inputdata)
{
  CBubbling::TurnOn(this);
}


// CBubbling::InputDeactivate  (line 167, @0x00000000021c7360, libserver.so)
// calls: CBubbling::TurnOff
void __fastcall CBubbling::InputDeactivate(CBubbling *const this, inputdata_t *const inputdata)
{
  CBubbling::TurnOff(this);
}


// CBubbling::InputToggle  (line 175, @0x00000000021c7350, libserver.so)
// calls: CBubbling::Toggle
void __fastcall CBubbling::InputToggle(CBubbling *const this, inputdata_t *const inputdata)
{
  CBubbling::Toggle(this);
}


// CBubbling::InputSetCurrent  (line 184, @0x00000000021bace0, libserver.so)  // inlines: Int, operator int
void __fastcall CBubbling::InputSetCurrent(CBubbling *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  int m_float64; // eax

  m_type = inputdata->value.m_type;
  if ( m_type == 1 )
  {
    this->m_flSpeed = inputdata->value.m_float;
  }
  else
  {
    if ( m_type == 34 )
      m_float64 = inputdata->value.m_float64;
    else
      m_float64 = inputdata->value.m_int;
    this->m_flSpeed = m_float64;
  }
}


// CBubbling::InputSetDensity  (line 193, @0x00000000021bad40, libserver.so)  // inlines: Int, operator int
void __fastcall CBubbling::InputSetDensity(CBubbling *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  int m_float64; // eax

  m_type = inputdata->value.m_type;
  if ( m_type == 1 )
  {
    this->m_density = inputdata->value.m_float;
  }
  else
  {
    if ( m_type == 34 )
      m_float64 = inputdata->value.m_float64;
    else
      m_float64 = inputdata->value.m_int;
    this->m_density = m_float64;
  }
}


// CBubbling::InputSetFrequency  (line 202, @0x00000000021c00b0, libserver.so)  // inlines: Int, curtime, operator int
// calls: CBaseEntity::SetNextThink
void __fastcall CBubbling::InputSetFrequency(CBubbling *const this, inputdata_t *const inputdata)
{
  double v2; // xmm1_8
  int16 m_type; // ax
  int m_float64; // eax
  int m_state; // edx
  CGlobalVars *v7; // r12
  FnGlobalVarsWarningFunc v8; // rdx
  double v9; // xmm0_8
  double v10; // xmm0_8
  CGlobalVars *v11; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  m_type = inputdata->value.m_type;
  if ( m_type == 1 )
  {
    *&v2 = inputdata->value.m_uint;
    m_float64 = *&v2;
  }
  else if ( m_type == 34 )
  {
    m_float64 = inputdata->value.m_float64;
  }
  else
  {
    m_float64 = inputdata->value.m_int;
  }
  m_state = this->m_state;
  this->m_frequency = m_float64;
  if ( m_state != 0 )
  {
    if ( m_float64 > 19 )
    {
      v11 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
            m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        }
        HIDWORD(v10) = 0;
        *&v10 = v11->m_flCurrentTime + 0.5;
      }
      else
      {
        *&v10 = 1056964608;
      }
    }
    else
    {
      v7 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v8 = gpGlobals->m_pfnWarningFunc;
          if ( v8 != 0 )
          {
            v8(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
            m_float64 = this->m_frequency;
          }
        }
        v9 = v7->m_flCurrentTime + 2.5;
      }
      else
      {
        v9 = 2.5;
      }
      v2 = m_float64 * 0.1;
      v10 = v9 - v2;
    }
    CBaseEntity::SetNextThink(this, v10, v2, 0);
  }
}


// CBubbling::FizzThink  (line 220, @0x00000000021c0af0, libserver.so)  // inlines: CPASFilter, curtime, ~CPASFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CBaseEntity::SetNextThink, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
void __fastcall CBubbling::FizzThink(CBubbling *const this)
{
  vec_t v2; // xmm1_4
  __int64 v3; // r9
  double v4; // xmm1_8
  int m_frequency; // eax
  CGlobalVars *v6; // r13
  FnGlobalVarsWarningFunc v7; // rax
  double v8; // xmm0_8
  CGlobalVars *v9; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  double v11; // xmm0_8
  Vector center; // [rsp+0h] [rbp-170h] BYREF
  CPASFilter filter; // [rsp+10h] [rbp-160h] BYREF
  unsigned __int64 v14; // [rsp+148h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  *&center.x = (*(this->_vptr_IHandleEntity + 62))(this);
  center.z = v2;
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(&filter, &center);
  (*(te->_vptr_IPredictionSystem + 18))(
    te,
    &filter,
    this,
    this->m_density,
    this->m_flSpeed,
    v3,
    0.0,
    *&center.x,
    LODWORD(center.z));
  m_frequency = this->m_frequency;
  if ( m_frequency <= 19 )
  {
    v9 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          m_frequency = this->m_frequency;
        }
      }
      v11 = v9->m_flCurrentTime + 2.5;
    }
    else
    {
      v11 = 2.5;
    }
    v4 = m_frequency * 0.1;
    v8 = v11 - v4;
  }
  else
  {
    v6 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v7 = gpGlobals->m_pfnWarningFunc;
        if ( v7 != 0 )
          v7(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      HIDWORD(v8) = 0;
      *&v8 = v6->m_flCurrentTime + 0.5;
    }
    else
    {
      *&v8 = 1056964608;
    }
  }
  CBaseEntity::SetNextThink(this, v8, v4, 0);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CEnvTracer::~CEnvTracer  (line 239, @0x00000000021e1040, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CEnvTracer::~CEnvTracer(CEnvTracer *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CEnvTracer::~CEnvTracer  (line 239, @0x00000000021e1060, libserver.so)  // inlines: ~CEnvTracer, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CEnvTracer::~CEnvTracer(CEnvTracer *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvTracer::GetEntityClass  (line 241, @0x00000000021de580, libserver.so)
CEntityClass *__cdecl CEnvTracer::GetEntityClass()
{
  return g_pEntityCEnvTracerClass;
}


// CEnvTracer::Schema_DynamicBinding  (line 241, @0x00000000021de590, libserver.so)
// globals: CEnvTracer::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvTracer::Schema_DynamicBinding(const CEnvTracer *const this)
{
  return CEnvTracer::s_pSchemaBinding;
}


// CEnvTracer::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 241, @0x00000000021de5a0, libserver.so)
// globals: CEnvTracer::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvTracer::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvTracer::CEntityInstanceEntityClass *const this)
{
  return CEnvTracer::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvTracer::CEntityInstanceEntityClass::DestructInstance  (line 241, @0x00000000021de5b0, libserver.so)  // inlines: Destruct<CEnvTracer>
void __fastcall CEnvTracer::CEntityInstanceEntityClass::DestructInstance(
        CEnvTracer::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvTracer::CEntityInstanceEntityClass::FreeInstance  (line 241, @0x00000000021de5d0, libserver.so)
void __fastcall CEnvTracer::CEntityInstanceEntityClass::FreeInstance(
        CEnvTracer::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvTracer::CEntityInstanceEntityClass::CanAllocate  (line 241, @0x00000000021de5f0, libserver.so)
bool __fastcall CEnvTracer::CEntityInstanceEntityClass::CanAllocate(
        const CEnvTracer::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvTracer::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 241, @0x00000000021de600, libserver.so)
// globals: CEnvTracer::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvTracer::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvTracer::CEntityInstanceEntityClass *const this)
{
  return CEnvTracer::s_pSchemaBinding;
}


// CEnvTracer::CEntityInstanceEntityClass::AllocateInstance  (line 241, @0x00000000021e04c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvTracer::CEntityInstanceEntityClass::AllocateInstance(
        CEnvTracer::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 792);
  memset(v1, 0, 0x318u);
  return v1;
}


// CEnvTracer::CEntityInstanceEntityClass::ConstructInstance  (line 241, @0x00000000021e0b00, libserver.so)  // inlines: CEnvTracer, CPointEntity, Construct<CEnvTracer>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CEnvTracer::CEntityInstanceEntityClass::ConstructInstance(
        CEnvTracer::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_4018510;
  }
  return p;
}


// CEnvTracer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 241, @0x00000000021e2750, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvTracer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvTracer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CEnvTracer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 241, @0x00000000021e2770, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvTracer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvTracer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvTracer::GetEntityClassInternal  (line 241, @0x00000000021e71b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "env_tracer", "CEnvTracer"
// globals: `guard variable for'CEnvTracer::GetEntityClassInternal(void)::g_EntityCEnvTracerClass, CEnvTracer::GetEntityClassInternal(void)::g_EntityCEnvTracerClass, __dso_handle, CEnvTracer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvTracer::GetEntityClassInfo(void)::g_EntityCEnvTracerClassInfo, CEnvTracer::GetEntityClassInfo(void)::g_EntityCEnvTracerClassInfo
CEntityClass *__cdecl CEnvTracer::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvTracer::GetEntityClassInternal(void)::g_EntityCEnvTracerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvTracer::GetEntityClassInternal(void)::g_EntityCEnvTracerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvTracer::GetEntityClassInternal(void)::g_EntityCEnvTracerClass);
    CEnvTracer::GetEntityClassInternal(void)::g_EntityCEnvTracerClass._vptr_CEntityClass = off_4018490;
    __cxa_guard_release(&`guard variable for'CEnvTracer::GetEntityClassInternal(void)::g_EntityCEnvTracerClass);
    __cxa_atexit(
      CEnvTracer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvTracer::GetEntityClassInternal(void)::g_EntityCEnvTracerClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvTracerClass != 0 )
    return &CEnvTracer::GetEntityClassInternal(void)::g_EntityCEnvTracerClass;
  if ( `guard variable for'CEnvTracer::GetEntityClassInfo(void)::g_EntityCEnvTracerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvTracer::GetEntityClassInfo(void)::g_EntityCEnvTracerClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvTracer::GetEntityClassInfo(void)::g_EntityCEnvTracerClassInfo,
      "CEnvTracer",
      "env_tracer",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvTracer::GetEntityClassInfo(void)::g_EntityCEnvTracerClassInfo);
  }
  CEnvTracer::GetEntityClassInternal(void)::g_EntityCEnvTracerClass.m_pClassInfo = &CEnvTracer::GetEntityClassInfo(void)::g_EntityCEnvTracerClassInfo;
  CEnvTracer::GetEntityClassInternal(void)::g_EntityCEnvTracerClass.m_pBaseClassInfo = CEnvTracer::GetEntityClassInfo(void)::g_EntityCEnvTracerClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvTracerClass = &CEnvTracer::GetEntityClassInternal(void)::g_EntityCEnvTracerClass;
  CEnvTracer::GetEntityClassInfo(void)::g_EntityCEnvTracerClassInfo.m_pClass = &CEnvTracer::GetEntityClassInternal(void)::g_EntityCEnvTracerClass;
  CEnvTracer::GetEntityClassInternal(void)::g_EntityCEnvTracerClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnvTracerClass->m_pComponentOverrides = 0;
  return &CEnvTracer::GetEntityClassInternal(void)::g_EntityCEnvTracerClass;
}


// CEnvTracer::GetDataDescMap  (line 254, @0x00000000021bad90, libserver.so)
// globals: CEnvTracer::m_DataMap
datamap_t *__fastcall CEnvTracer::GetDataDescMap(CEnvTracer *const this)
{
  return &CEnvTracer::m_DataMap;
}


// CEnvTracer::AddDatadescMetadataKeys  (line 254, @0x00000000021c7370, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvTracer::GetEntityClass(void)
void __fastcall CEnvTracer::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvTracer::GetEntityClass);
}


// CEnvTracer::GetBaseMap  (line 254, @0x00000000021c7390, libserver.so)
datamap_t *__cdecl CEnvTracer::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CEnvTracer>  (line 254, @0x00000000021d8d60, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CEnvTracer"
// globals: `guard variable for'DataMapInit<CEnvTracer>(CEnvTracer *)::nameHolder, `guard variable for'DataMapInit<CEnvTracer>(CEnvTracer *)::dataDesc, CEnvTracer::GetEntityClass(void), CEnvTracer::m_DataMap, DataMapInit<CEnvTracer>(CEnvTracer *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvTracer>(CEnvTracer *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CEnvTracer>(CEnvTracer *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvTracer>(CEnvTracer *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvTracer>(CEnvTracer *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvTracer>(CEnvTracer *)::nameHolder.m_pszBase = "CEnvTracer";
    DataMapInit<CEnvTracer>(CEnvTracer *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvTracer>(CEnvTracer *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvTracer>(CEnvTracer *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvTracer>(CEnvTracer *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvTracer>(CEnvTracer *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvTracer>(CEnvTracer *)::nameHolder,
      &_dso_handle);
  }
  CEnvTracer::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CEnvTracer>(CEnvTracer *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvTracer>(CEnvTracer *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CEnvTracer>(CEnvTracer *)::nameHolder.m_nLenBase + 12);
    strcpy(stpcpy(v2, DataMapInit<CEnvTracer>(CEnvTracer *)::nameHolder.m_pszBase), "TracerThink");
    m_Size = DataMapInit<CEnvTracer>(CEnvTracer *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CEnvTracer>(CEnvTracer *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CEnvTracer>(CEnvTracer *)::nameHolder.m_Names.m_Size == DataMapInit<CEnvTracer>(CEnvTracer *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CEnvTracer>(CEnvTracer *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CEnvTracer>(CEnvTracer *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CEnvTracer>(CEnvTracer *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CEnvTracer>(CEnvTracer *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CEnvTracer>(CEnvTracer *)::dataDesc[3].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvTracer>(CEnvTracer *)::dataDesc);
  }
  CEnvTracer::m_DataMap.dataNumFields = 3;
  CEnvTracer::m_DataMap.dataDesc = &DataMapInit<CEnvTracer>(CEnvTracer *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvTracer::m_DataMap, CEnvTracer::GetEntityClass);
  return &CEnvTracer::m_DataMap;
}


// CEnvTracer::Spawn  (line 270, @0x00000000021bb680, libserver.so)
// calls: CPointEntity::Spawn, CBaseEntity::SetMoveType
void __fastcall CEnvTracer::Spawn(CEnvTracer *const this, const CEntityKeyValues *pKeyValues)
{
  CPointEntity::Spawn(this, pKeyValues);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  if ( this->m_flDelay == 0.0 )
    this->m_flDelay = 1.0;
}


// CEnvTracer::Activate  (line 284, @0x00000000021bff90, libserver.so)  // inlines: CUtlSymbolLarge, String, ToCStr, curtime, operator=
// calls: CBaseEntity::Activate, CGameEntitySystem::FindEntityByName, CBaseEntity::GetLocalOrigin, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, Msg
// strings: "env_tracer: unknown entity \"%s\"\n"
// globals: CEnvTracer::TracerThink(void)
void __fastcall CEnvTracer::Activate(CEnvTracer *const this, ActivateType_t activateType)
{
  const CBaseEntity *EntityByName; // rax
  double v4; // xmm1_8
  double v5; // xmm0_8
  CGlobalVars *v6; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  const char *m_pAsString; // rsi
  string_t iszName; // [rsp+10h] [rbp-20h] BYREF

  CBaseEntity::Activate(this, activateType);
  iszName.u.m_Id = this->m_target.u.m_Id;
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
  if ( EntityByName != 0 )
  {
    this->m_vecEnd = *CBaseEntity::GetLocalOrigin(EntityByName);
    CBaseEntity::ThinkSet(this, CEnvTracer::TracerThink, 0.0, 0, 0);
    v5 = 0.0;
    v6 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      *&v5 = LODWORD(v6->m_flCurrentTime);
    }
    *&v5 = *&v5 + this->m_flDelay;
    CBaseEntity::SetNextThink(this, v5, v4, 0);
  }
  else
  {
    m_pAsString = "";
    if ( this->m_target.u.m_Id != 0 )
      m_pAsString = this->m_target.u.m_pAsString;
    Msg("env_tracer: unknown entity \"%s\"\n", m_pAsString);
  }
}


// CEnvTracer::TracerThink  (line 302, @0x00000000021bf4a0, libserver.so)  // inlines: CWeakHandle, FromUntypedHandleUnchecked, StaticInvalidHandle, curtime
// calls: CBaseEntity::GetAbsOrigin, UTIL_Tracer, CBaseEntity::SetNextThink
void __fastcall CEnvTracer::TracerThink(CEnvTracer *const this)
{
  const Vector *AbsOrigin; // rax
  double v3; // xmm1_8
  double v4; // xmm0_8
  CGlobalVars *v5; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  HParticleSystemDefinition p_iParticleID; // [rsp+10h] [rbp-20h] BYREF

  p_iParticleID.m_pBinding = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  UTIL_Tracer(AbsOrigin, &this->m_vecEnd, 0, -1, 0.0, 0, 0, &p_iParticleID);
  v4 = 0.0;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v4 = LODWORD(v5->m_flCurrentTime);
  }
  *&v4 = *&v4 + this->m_flDelay;
  CBaseEntity::SetNextThink(this, v4, v3, 0);
}


// CGibShooter::~CGibShooter  (line 320, @0x00000000021eb890, libserver.so)  // inlines: ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeCModel>::Shutdown, CBaseModelEntity::~CBaseModelEntity
void __fastcall CGibShooter::~CGibShooter(CGibShooter *const this)
{
  CStrongHandle<InfoForResourceTypeCModel> *p_m_iGibModelIndex; // rdi

  p_m_iGibModelIndex = &this->m_iGibModelIndex;
  p_m_iGibModelIndex[-146].m_pBinding = &off_4018C30;
  CStrongHandle<InfoForResourceTypeCModel>::Shutdown(p_m_iGibModelIndex);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CGibShooter::~CGibShooter  (line 320, @0x00000000021eb8d0, libserver.so)  // inlines: ~CGibShooter, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeCModel>::Shutdown, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CGibShooter::~CGibShooter(CGibShooter *const this)
{
  CStrongHandle<InfoForResourceTypeCModel> *p_m_iGibModelIndex; // rdi

  p_m_iGibModelIndex = &this->m_iGibModelIndex;
  p_m_iGibModelIndex[-146].m_pBinding = &off_4018C30;
  CStrongHandle<InfoForResourceTypeCModel>::Shutdown(p_m_iGibModelIndex);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CGibShooter::GetEntityClass  (line 322, @0x00000000021de610, libserver.so)
CEntityClass *__cdecl CGibShooter::GetEntityClass()
{
  return g_pEntityCGibShooterClass;
}


// CGibShooter::Schema_DynamicBinding  (line 322, @0x00000000021de620, libserver.so)
// globals: CGibShooter::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CGibShooter::Schema_DynamicBinding(const CGibShooter *const this)
{
  return CGibShooter::s_pSchemaBinding;
}


// CGibShooter::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 322, @0x00000000021de630, libserver.so)
// globals: CGibShooter::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CGibShooter::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CGibShooter::CEntityInstanceEntityClass *const this)
{
  return CGibShooter::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CGibShooter::CEntityInstanceEntityClass::DestructInstance  (line 322, @0x00000000021de640, libserver.so)  // inlines: Destruct<CGibShooter>
void __fastcall CGibShooter::CEntityInstanceEntityClass::DestructInstance(
        CGibShooter::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CGibShooter::CEntityInstanceEntityClass::FreeInstance  (line 322, @0x00000000021de660, libserver.so)
void __fastcall CGibShooter::CEntityInstanceEntityClass::FreeInstance(
        CGibShooter::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CGibShooter::CEntityInstanceEntityClass::CanAllocate  (line 322, @0x00000000021de680, libserver.so)
bool __fastcall CGibShooter::CEntityInstanceEntityClass::CanAllocate(
        const CGibShooter::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CGibShooter::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 322, @0x00000000021de690, libserver.so)
// globals: CGibShooter::s_pSchemaBinding
const ISchemaBinding *__fastcall CGibShooter::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CGibShooter::CEntityInstanceEntityClass *const this)
{
  return CGibShooter::s_pSchemaBinding;
}


// CGibShooter::CEntityInstanceEntityClass::AllocateInstance  (line 322, @0x00000000021e0500, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CGibShooter::CEntityInstanceEntityClass::AllocateInstance(
        CGibShooter::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1240);
  memset(v1, 0, 0x4D8u);
  return v1;
}


// CGibShooter::CEntityInstanceEntityClass::ConstructInstance  (line 322, @0x00000000021e0e60, libserver.so)  // inlines: CGibShooter, CStrongHandle, CUtlSymbolLarge, Construct<CGibShooter>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CGibShooter::CEntityInstanceEntityClass::ConstructInstance(
        CGibShooter::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 146) = 0;
    *p = &off_4018C30;
    *(p + 147) = 0;
    *(p + 154) = 0;
  }
  return p;
}


// CGibShooter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 322, @0x00000000021e2ca0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CGibShooter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGibShooter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CGibShooter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 322, @0x00000000021e2cc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CGibShooter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGibShooter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CGibShooter::GetEntityClassInternal  (line 322, @0x00000000021e7300, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "gibshooter", "CGibShooter"
// globals: `guard variable for'CGibShooter::GetEntityClassInternal(void)::g_EntityCGibShooterClass, CGibShooter::GetEntityClassInternal(void)::g_EntityCGibShooterClass, __dso_handle, CGibShooter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CGibShooter::GetEntityClassInfo(void)::g_EntityCGibShooterClassInfo, CGibShooter::GetEntityClassInfo(void)::g_EntityCGibShooterClassInfo
CEntityClass *__cdecl CGibShooter::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CGibShooter::GetEntityClassInternal(void)::g_EntityCGibShooterClass == 0
    && __cxa_guard_acquire(&`guard variable for'CGibShooter::GetEntityClassInternal(void)::g_EntityCGibShooterClass) != 0 )
  {
    CEntityClass::CEntityClass(&CGibShooter::GetEntityClassInternal(void)::g_EntityCGibShooterClass);
    CGibShooter::GetEntityClassInternal(void)::g_EntityCGibShooterClass._vptr_CEntityClass = off_4018BB0;
    __cxa_guard_release(&`guard variable for'CGibShooter::GetEntityClassInternal(void)::g_EntityCGibShooterClass);
    __cxa_atexit(
      CGibShooter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CGibShooter::GetEntityClassInternal(void)::g_EntityCGibShooterClass,
      &_dso_handle);
  }
  if ( g_pEntityCGibShooterClass != 0 )
    return &CGibShooter::GetEntityClassInternal(void)::g_EntityCGibShooterClass;
  if ( `guard variable for'CGibShooter::GetEntityClassInfo(void)::g_EntityCGibShooterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CGibShooter::GetEntityClassInfo(void)::g_EntityCGibShooterClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CGibShooter::GetEntityClassInfo(void)::g_EntityCGibShooterClassInfo,
      "CGibShooter",
      "gibshooter",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CGibShooter::GetEntityClassInfo(void)::g_EntityCGibShooterClassInfo);
  }
  CGibShooter::GetEntityClassInternal(void)::g_EntityCGibShooterClass.m_pClassInfo = &CGibShooter::GetEntityClassInfo(void)::g_EntityCGibShooterClassInfo;
  CGibShooter::GetEntityClassInternal(void)::g_EntityCGibShooterClass.m_pBaseClassInfo = CGibShooter::GetEntityClassInfo(void)::g_EntityCGibShooterClassInfo.m_pBaseClassInfo;
  g_pEntityCGibShooterClass = &CGibShooter::GetEntityClassInternal(void)::g_EntityCGibShooterClass;
  CGibShooter::GetEntityClassInfo(void)::g_EntityCGibShooterClassInfo.m_pClass = &CGibShooter::GetEntityClassInternal(void)::g_EntityCGibShooterClass;
  CGibShooter::GetEntityClassInternal(void)::g_EntityCGibShooterClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCGibShooterClass->m_pComponentOverrides = 0;
  return &CGibShooter::GetEntityClassInternal(void)::g_EntityCGibShooterClass;
}


// CGibShooter::GetDataDescMap  (line 367, @0x00000000021bada0, libserver.so)
// globals: CGibShooter::m_DataMap
datamap_t *__fastcall CGibShooter::GetDataDescMap(CGibShooter *const this)
{
  return &CGibShooter::m_DataMap;
}


// CGibShooter::AddDatadescMetadataKeys  (line 367, @0x00000000021c73a0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CGibShooter::GetEntityClass(void)
void __fastcall CGibShooter::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CGibShooter::GetEntityClass);
}


// CGibShooter::GetBaseMap  (line 367, @0x00000000021c73c0, libserver.so)
datamap_t *__cdecl CGibShooter::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CGibShooter>  (line 367, @0x00000000021d8100, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CGibShooter"
// globals: `guard variable for'DataMapInit<CGibShooter>(CGibShooter *)::nameHolder, `guard variable for'DataMapInit<CGibShooter>(CGibShooter *)::dataDesc, CGibShooter::GetEntityClass(void), CGibShooter::m_DataMap, DataMapInit<CGibShooter>(CGibShooter *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CGibShooter>(CGibShooter *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CGibShooter>(CGibShooter *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CGibShooter>(CGibShooter *)::nameHolder) != 0 )
  {
    DataMapInit<CGibShooter>(CGibShooter *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CGibShooter>(CGibShooter *)::nameHolder.m_pszBase = "CGibShooter";
    DataMapInit<CGibShooter>(CGibShooter *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CGibShooter>(CGibShooter *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CGibShooter>(CGibShooter *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CGibShooter>(CGibShooter *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CGibShooter>(CGibShooter *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CGibShooter>(CGibShooter *)::nameHolder,
      &_dso_handle);
  }
  CGibShooter::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CGibShooter>(CGibShooter *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CGibShooter>(CGibShooter *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CGibShooter>(CGibShooter *)::nameHolder.m_nLenBase + 11);
    strcpy(stpcpy(v2, DataMapInit<CGibShooter>(CGibShooter *)::nameHolder.m_pszBase), "ShootThink");
    m_Size = DataMapInit<CGibShooter>(CGibShooter *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CGibShooter>(CGibShooter *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CGibShooter>(CGibShooter *)::nameHolder.m_Names.m_Size == DataMapInit<CGibShooter>(CGibShooter *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CGibShooter>(CGibShooter *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CGibShooter>(CGibShooter *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CGibShooter>(CGibShooter *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CGibShooter>(CGibShooter *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CGibShooter>(CGibShooter *)::dataDesc[17].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CGibShooter>(CGibShooter *)::dataDesc);
  }
  CGibShooter::m_DataMap.dataNumFields = 18;
  CGibShooter::m_DataMap.dataDesc = &DataMapInit<CGibShooter>(CGibShooter *)::dataDesc[1];
  AddDatadescMetadataKeys(&CGibShooter::m_DataMap, CGibShooter::GetEntityClass);
  return &CGibShooter::m_DataMap;
}


// CGibShooter::Precache  (line 398, @0x00000000021ddd30, libserver.so)  // inlines: GetInt, Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheModel
// callers: CEnvShooter::Precache
// strings: "models/gibs/hgibs.vmdl", "models/germanygibs.vmdl"
void __fastcall CGibShooter::Precache(CGibShooter *const this, const CEntityPrecacheContext *pContext)
{
  IEntityResourceManifest *m_pManifest; // rsi

  CEntityInstance::Precache(this, pContext);
  m_pManifest = pContext->m_pManifest;
  if ( g_Language.m_pParent->m_Value.m_nValue == 1 )
    CBaseEntity::PrecacheModel("models/germanygibs.vmdl", m_pManifest);
  else
    CBaseEntity::PrecacheModel("models/gibs/hgibs.vmdl", m_pManifest);
}


// CGibShooter::Use  (line 412, @0x00000000021bf330, libserver.so)  // inlines: curtime
// calls: CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// globals: CGibShooter::ShootThink(void)
void __fastcall CGibShooter::Use(
        CGibShooter *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  double v6; // xmm1_8
  double v7; // xmm0_8
  CGlobalVars *v8; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CBaseEntity::ThinkSet(this, CGibShooter::ShootThink, 0.0, 0, 0);
  v7 = 0.0;
  v8 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v7 = LODWORD(v8->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v7, v6, 0);
}


// CGibShooter::InputShoot  (line 422, @0x00000000021bf3a0, libserver.so)  // inlines: curtime
// calls: CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// globals: CGibShooter::ShootThink(void)
void __fastcall CGibShooter::InputShoot(CGibShooter *const this, inputdata_t *const inputdata)
{
  double v3; // xmm1_8
  double v4; // xmm0_8
  CGlobalVars *v5; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CBaseEntity::ThinkSet(this, CGibShooter::ShootThink, 0.0, 0, 0);
  v4 = 0.0;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v4 = LODWORD(v5->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v4, v3, 0);
}


// CGibShooter::Spawn  (line 429, @0x00000000021d7690, libserver.so)  // inlines: FromUntypedHandleUnchecked, GetInt, InitUntypedUnchecked, SetSolid, operator CWeakHandle<InfoForResourceTypeCModel>, operator=
// calls: CBaseEntity::Spawn, CStrongHandle<InfoForResourceTypeCModel>::Init, CBaseEntity::AddEffects
// callers: CEnvShooter::Spawn
// strings: "models/gibs/hgibs.vmdl", "models/germanygibs.vmdl"
void __fastcall CGibShooter::Spawn(CGibShooter *const this, const CEntityKeyValues *pKeyValues)
{
  const char *v3; // rdx
  IGameModelInfo *v4; // rdi
  const ResourceBinding_t<InfoForResourceTypeCModel> *m_pBinding; // rdx
  __int64 (__fastcall *v6)(IGameModelInfo *, CStrongHandle<InfoForResourceTypeCModel>::ResourceHandleTyped_t *); // rax
  CStrongHandle<InfoForResourceTypeCModel>::ResourceHandleTyped_t hResource[6]; // [rsp+0h] [rbp-30h] BYREF

  CBaseEntity::Spawn(this, pKeyValues);
  if ( g_Language.m_pParent->m_Value.m_nValue == 1 )
    v3 = "models/germanygibs.vmdl";
  else
    v3 = "models/gibs/hgibs.vmdl";
  (*(modelinfo->_vptr_IAppSystem + 13))(hResource, modelinfo, v3);
  CStrongHandle<InfoForResourceTypeCModel>::Init(&this->m_iGibModelIndex, hResource[0]);
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 0);
  CBaseEntity::AddEffects(this, 32);
  if ( this->m_flDelay < 0.0 )
    this->m_flDelay = 0.0;
  if ( this->m_flGibLife == 0.0 )
    this->m_flGibLife = 25.0;
  v4 = modelinfo;
  m_pBinding = this->m_iGibModelIndex.m_pBinding;
  this->m_iGibCapacity = this->m_iGibs;
  v6 = *(v4->_vptr_IAppSystem + 18);
  hResource[0] = m_pBinding;
  this->m_nMaxGibModelFrame = v6(v4, hResource);
}


// CGibShooter::CreateGib  (line 460, @0x00000000021bb9f0, libserver.so)
// calls: ConVarRef::ConVarRef, ConVarRef::IsValid, CreateSimpleGib, CGib::Init, CGib::SetBloodColor, CBaseAnimating::SetBodygroup, DispatchSpawn, DevWarning
// strings: "violence_hgibs", "models/gibs/hgibs.vmdl", "GibShooter Body is <= 1!\n"
CGib *__fastcall CGibShooter::CreateGib(CGibShooter *const this)
{
  CGib *result; // rax
  CGib *SimpleGib; // rbx
  int m_nMaxGibModelFrame; // edx
  int v5; // eax
  ConVarRef violence_hgibs; // [rsp+0h] [rbp-20h] BYREF

  ConVarRef::ConVarRef(&violence_hgibs, "violence_hgibs");
  if ( !ConVarRef::IsValid(&violence_hgibs) || (result = 0, violence_hgibs.m_pConVarState->m_Value.m_nValue != 0) )
  {
    SimpleGib = CreateSimpleGib("models/gibs/hgibs.vmdl");
    CGib::Init(SimpleGib);
    CGib::SetBloodColor(SimpleGib, 0);
    m_nMaxGibModelFrame = this->m_nMaxGibModelFrame;
    if ( m_nMaxGibModelFrame <= 1 )
    {
      DevWarning(2, "GibShooter Body is <= 1!\n");
      m_nMaxGibModelFrame = this->m_nMaxGibModelFrame;
    }
    v5 = (*(*random_valve + 16LL))(random_valve, 1, (m_nMaxGibModelFrame - 1));
    CBaseAnimating::SetBodygroup(SimpleGib, 0, v5);
    DispatchSpawn(SimpleGib, 0);
    return SimpleGib;
  }
  return result;
}


// CGibShooter::InitPointGib  (line 483, @0x00000000021c73d0, libserver.so)  // inlines: AnimateForTime, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetSprite, Init, NetworkStateChanged, QAngle, Set, SetAlpha, SetAttachment, SetBlue, SetColor, SetComponent, SetGreen, SetRed, SetRenderColor, SetRenderFX, SetSprite, SetTransparency, SetVal, String, ToCStr, VectorMultiply, a, b, curtime, g, operator!=, operator*, operator=, operator=<RenderFx_t>, operator=<float>, operator=<int>, r
// calls: CBaseEntity::GetAbsOrigin, CBaseEntity::SetLocalOrigin, CBaseEntity::SetAbsVelocity, CBaseEntity::SetLocalAngularVelocity, CBaseEntity::GetNextThink, CSprite::SpriteCreate, CEntityHandle::operator CEntityInstance*, CConcreteEntityList::LookupEntity, CBaseEntity::FollowEntity, CSprite::SetScale, CBaseModelEntity::SetRenderMode, CSprite::SetBrightness (15 total)
// callers: CGibShooter::SpawnGib
// globals: CEntityHandle::gm_pEntityList
void __fastcall CGibShooter::InitPointGib(
        CGibShooter *const this,
        CGib *pGib,
        const Vector *const vecShootDir,
        float flSpeed)
{
  const Vector *AbsOrigin; // rax
  vec_t v8; // xmm1_4
  vec_t v9; // xmm0_4
  __m128i v10; // xmm0
  vec_t v11; // r14d
  __m128i v12; // xmm0
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v14; // r14
  float v15; // r14d
  float m_lifeTime; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  const Vector *v18; // rax
  CSprite *v19; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v21; // eax
  __int16 v22; // cx
  CEntityInstance *v23; // rax
  CEntityInstance *v24; // r15
  CEntityIdentity *v25; // rax
  float v26; // xmm2_4
  RenderFx_t m_Value; // r13
  float v28; // xmm1_4
  char m_pEntity_high; // r14
  float v30; // xmm0_4
  CGlobalVars *v31; // rdi
  double v32; // xmm0_8
  double v33; // xmm1_8
  double v34; // xmm0_8
  double v35; // xmm1_8
  double v36; // xmm0_8
  double v37; // xmm1_8
  CEntityIdentity *v38; // rax
  int v39; // edx
  __int16 v40; // cx
  int brightness; // [rsp+4h] [rbp-4Ch]
  unsigned __int8 v42; // [rsp+Ah] [rbp-46h]
  unsigned __int8 v43; // [rsp+Bh] [rbp-45h]
  float flSpeedd; // [rsp+Ch] [rbp-44h]
  unsigned __int32 flSpeede; // [rsp+Ch] [rbp-44h]
  unsigned __int8 flSpeedb; // [rsp+Ch] [rbp-44h]
  float flSpeedc; // [rsp+Ch] [rbp-44h]
  QAngle angVel; // [rsp+10h] [rbp-40h] BYREF

  if ( pGib != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    CBaseEntity::SetLocalOrigin(pGib, AbsOrigin);
    v8 = vecShootDir->z * flSpeed;
    v9 = flSpeed * vecShootDir->x;
    angVel.y = vecShootDir->y * flSpeed;
    angVel.z = v8;
    angVel.x = v9;
    CBaseEntity::SetAbsVelocity(pGib, &angVel);
    *v10.m128i_i64 = (*(*random_valve + 8LL))(random_valve, 100.0, 300.0);
    v11 = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
    angVel.x = (*(*random_valve + 8LL))(random_valve, 100.0, 200.0);
    angVel.y = v11;
    angVel.z = 0.0;
    CBaseEntity::SetLocalAngularVelocity(pGib, &angVel);
    *v12.m128i_i32 = CBaseEntity::GetNextThink(pGib, 0);
    m_flCurrentTime = 0.0;
    v14 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          flSpeede = v12.m128i_i32[0];
          (m_pfnWarningFunc)(1, *v12.m128i_i32, 0.0);
          v12 = flSpeede;
        }
      }
      m_flCurrentTime = v14->m_flCurrentTime;
    }
    *v12.m128i_i32 = *v12.m128i_i32 - m_flCurrentTime;
    v15 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
    flSpeedd = this->m_flGibLife;
    m_lifeTime = (*(*random_valve + 8LL))(random_valve, 0.94999999, 1.05) * flSpeedd;
    pGib->m_lifeTime = m_lifeTime;
    if ( (this->m_spawnflags.m_Value & 4) != 0 )
    {
      *&v36 = CGlobalVarsBase::curtime(gpGlobals, 0) + pGib->m_lifeTime;
      CBaseEntity::SetNextThink(pGib, v36, v37, 0);
      CBaseEntity::ThinkSet(pGib, CGib::DieThink, 0.0, 0, 0);
      m_lifeTime = pGib->m_lifeTime;
    }
    if ( v15 > m_lifeTime )
    {
      *&v34 = CGlobalVarsBase::curtime(gpGlobals, 0) + pGib->m_lifeTime;
      CBaseEntity::SetNextThink(pGib, v34, v35, 0);
      pGib->m_lifeTime = 0.0;
    }
    if ( this->m_bIsSprite )
    {
      v18 = CBaseEntity::GetAbsOrigin(pGib);
      if ( this->m_iShootModelName.u.m_Id != 0 )
      {
        v19 = CSprite::SpriteCreate(this->m_iShootModelName.u.m_pAsString, v18, 0);
        if ( v19 == 0 )
          goto LABEL_39;
      }
      else
      {
        v19 = CSprite::SpriteCreate("", v18, 0);
        if ( v19 == 0 )
          goto LABEL_39;
      }
      m_pEntity = v19->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v21 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v22 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v22 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(pGib->m_hSprite.m_Index) = v22 | pGib->m_hSprite.m_Index & 0x8000;
        pGib->m_hSprite.m_Index = (v21 << 15) | pGib->m_hSprite.m_Index & 0x7FFF;
        goto LABEL_20;
      }
LABEL_39:
      pGib->m_hSprite.m_Index = -1;
LABEL_20:
      v23 = CEntityHandle::operator CEntityInstance *(&pGib->m_hSprite);
      v24 = v23;
      if ( v23 != 0 )
      {
        v25 = CConcreteEntityList::LookupEntity(CEntityHandle::gm_pEntityList, &v23[24].m_pEntity);
        if ( v25 == 0 || pGib != v25->m_pInstance )
        {
          (*(v24->_vptr_IHandleEntity + 22))(v24, 1160, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          v38 = pGib->m_pEntity;
          if ( v38 != 0 )
          {
            v39 = (v38->m_EHandle.m_Index >> 15) - (v38->m_flags & 1);
            if ( v38->m_EHandle.m_Index == -1 )
              v40 = 0x7FFF;
            else
              v40 = v38->m_EHandle.m_Index & 0x7FFF;
            LOWORD(v24[24].m_pEntity) = v40 | v24[24].m_pEntity & 0x8000;
            LODWORD(v24[24].m_pEntity) = (v39 << 15) | v24[24].m_pEntity & 0x7FFF;
          }
          else
          {
            LODWORD(v24[24].m_pEntity) = -1;
          }
        }
        if ( HIDWORD(v24[24].m_pEntity) != 0 )
        {
          (*(v24->_vptr_IHandleEntity + 22))(v24, 1164, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          HIDWORD(v24[24].m_pEntity) = 0;
        }
        CBaseEntity::FollowEntity(v24, pGib, 1);
        (*(v24->_vptr_IHandleEntity + 40))(v24, pGib);
        CSprite::SetScale(v24, 0.0, v26);
        m_Value = this->m_nRenderFX.m_Value;
        brightness = this->m_clrRender.m_Value._color[3];
        flSpeedb = this->m_clrRender.m_Value._color[2];
        v43 = this->m_clrRender.m_Value._color[1];
        v42 = this->m_clrRender.m_Value._color[0];
        CBaseModelEntity::SetRenderMode(v24, this->m_nRenderMode.m_Value);
        m_pEntity_high = HIBYTE(v24[17].m_pEntity);
        if ( v42 != BYTE4(v24[17].m_pEntity) )
        {
          (*(v24->_vptr_IHandleEntity + 22))(v24, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          BYTE4(v24[17].m_pEntity) = v42;
        }
        if ( v43 != BYTE5(v24[17].m_pEntity) )
        {
          (*(v24->_vptr_IHandleEntity + 22))(v24, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          BYTE5(v24[17].m_pEntity) = v43;
        }
        if ( flSpeedb != BYTE6(v24[17].m_pEntity) )
        {
          (*(v24->_vptr_IHandleEntity + 22))(v24, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          BYTE6(v24[17].m_pEntity) = flSpeedb;
        }
        if ( m_pEntity_high != HIBYTE(v24[17].m_pEntity) )
        {
          (*(v24->_vptr_IHandleEntity + 22))(v24, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          HIBYTE(v24[17].m_pEntity) = m_pEntity_high;
        }
        CSprite::SetBrightness(v24, brightness, v28);
        if ( m_Value != BYTE6(v24[16].m_CScriptComponent) )
        {
          (*(v24->_vptr_IHandleEntity + 22))(v24, 814, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          BYTE6(v24[16].m_CScriptComponent) = m_Value;
        }
        flSpeedc = this->m_flGibLife + 1.0;
        CBaseEntity::ThinkSet(v24, CSprite::AnimateUntilDead, 0.0, 0, 0);
        if ( *&v24[24].m_hPrivateScope.m_hScope != 5.0 )
        {
          (*(v24->_vptr_IHandleEntity + 22))(v24, 1168, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          LODWORD(v24[24].m_hPrivateScope.m_hScope) = 1084227584;
        }
        v30 = CGlobalVarsBase::curtime(gpGlobals, 0);
        v31 = gpGlobals;
        *&v24[24].m_iszPrivateVScripts.u.m_Id = v30 + flSpeedc;
        *&v32 = CGlobalVarsBase::curtime(v31, 0);
        CBaseEntity::SetNextThink(v24, v32, v33, 0);
      }
    }
  }
}


// CGibShooter::SpawnGib  (line 533, @0x00000000021c79e0, libserver.so)  // inlines: String, ToCStr, VectorMultiply, operator*, operator*=
// calls: CBaseEntity::SetAbsAngles, CGibShooter::InitPointGib, CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin, CreateRagGib, CBaseEntity::SetAbsOrigin, CCollisionProperty::SetupPhysicsFromUnscaledModel, CBaseEntity::VPhysicsGetObject, CGlobalVarsBase::curtime, CBaseEntity::SetNextThink, CBaseEntity::ThinkSet
// callers: CGibShooter::ShootThink, CRotorWashShooter::DoWashPush
CBaseModelEntity *__fastcall CGibShooter::SpawnGib(
        CGibShooter *const this,
        const Vector *const vecShootDir,
        double a3,
        float flSpeed)
{
  int m_nSimulationType; // eax
  CBaseModelEntity *result; // rax
  CBaseEntity *v8; // rax
  CGib *v9; // r13
  float v10; // xmm2_4
  vec_t v11; // xmm3_4
  vec_t v12; // xmm1_4
  vec_t v13; // xmm2_4
  float v14; // xmm0_4
  const QAngle *AbsAngles; // r12
  const Vector *v16; // rax
  const char *m_pAsString; // rdi
  const Vector *AbsOrigin; // rax
  IPhysicsObject *Object; // rax
  IPhysicsObject *v20; // r15
  vec_t v21; // xmm0_4
  vec_t v22; // xmm2_4
  vec_t v23; // xmm0_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  double v26; // xmm0_8
  double v27; // xmm1_8
  float m_flGibLife; // [rsp+8h] [rbp-58h]
  float flSpeeda; // [rsp+Ch] [rbp-54h]
  float flSpeedb; // [rsp+Ch] [rbp-54h]
  float flSpeedc; // [rsp+Ch] [rbp-54h]
  float flSpeedd; // [rsp+Ch] [rbp-54h]
  float flSpeede; // [rsp+Ch] [rbp-54h]
  Vector vVel; // [rsp+10h] [rbp-50h] BYREF
  Vector force; // [rsp+20h] [rbp-40h] BYREF

  m_nSimulationType = this->m_nSimulationType;
  if ( m_nSimulationType == 1 )
  {
    flSpeedc = *&a3;
    v9 = (*(this->_vptr_IHandleEntity + 214))(this, a3, flSpeed, a3);
    result = 0;
    if ( v9 != 0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      CBaseEntity::SetAbsOrigin(v9, AbsOrigin);
      CBaseEntity::SetAbsAngles(v9, &this->m_angGibRotation);
      m_flGibLife = this->m_flGibLife;
      v9->m_lifeTime = (*(*random_valve + 8LL))(random_valve, 0.94999999, 1.05) * m_flGibLife;
      CCollisionProperty::SetupPhysicsFromUnscaledModel(
        &v9->m_Collision,
        VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_DYNAMIC,
        5,
        0);
      Object = CBaseEntity::VPhysicsGetObject(v9);
      v10 = flSpeedc;
      v20 = Object;
      if ( Object != 0 )
      {
        v21 = vecShootDir->z * flSpeedc;
        v22 = flSpeedc * vecShootDir->x;
        vVel.y = vecShootDir->y * flSpeedc;
        vVel.z = v21;
        vVel.x = v22;
        (*(*Object + 552LL))(Object, &vVel);
        flSpeedd = this->m_flGibAngVelocity;
        v23 = (*(*random_valve + 8LL))(random_valve, 0.1, 1.0) * flSpeedd;
        flSpeede = this->m_flGibAngVelocity;
        force.x = v23;
        v24 = (*(*random_valve + 8LL))(random_valve, 0.1, 1.0);
        force.z = 0.0;
        force.y = v24 * flSpeede;
        v25 = (*(*v20 + 208LL))(v20);
        force.x = force.x * v25;
        force.y = force.y * v25;
        force.z = v25 * force.z;
        (*(*v20 + 1792LL))(v20, &force);
        if ( (this->m_spawnflags.m_Value & 4) != 0 )
        {
          v9->m_bForceRemove = 1;
          *&v26 = CGlobalVarsBase::curtime(gpGlobals, 0) + v9->m_lifeTime;
          CBaseEntity::SetNextThink(v9, v26, v27, 0);
          CBaseEntity::ThinkSet(v9, CGib::DieThink, 0.0, 0, 0);
        }
        return v9;
      }
LABEL_8:
      CGibShooter::InitPointGib(this, v9, vecShootDir, v10);
      return v9;
    }
  }
  else if ( m_nSimulationType == 2 )
  {
    v11 = (vecShootDir->y * *&a3) * 200.0;
    v12 = (vecShootDir->z * *&a3) * 200.0;
    v13 = (*&a3 * vecShootDir->x) * 200.0;
    v14 = this->m_flGibLife;
    force.y = v11;
    flSpeedb = v14;
    force.x = v13;
    force.z = v12;
    AbsAngles = CBaseEntity::GetAbsAngles(this);
    v16 = CBaseEntity::GetAbsOrigin(this);
    m_pAsString = "";
    if ( this->m_iShootModelName.u.m_Id != 0 )
      m_pAsString = this->m_iShootModelName.u.m_pAsString;
    return CreateRagGib(m_pAsString, v16, AbsAngles, &force, flSpeedb, 0);
  }
  else
  {
    if ( m_nSimulationType == 0 )
    {
      flSpeeda = *&a3;
      v8 = (*(this->_vptr_IHandleEntity + 214))(this, a3, flSpeed, a3);
      v9 = v8;
      if ( v8 != 0 )
      {
        CBaseEntity::SetAbsAngles(v8, &this->m_angGibRotation);
        v10 = flSpeeda;
        goto LABEL_8;
      }
    }
    return 0;
  }
  return result;
}


// CGibShooter::ShootThink  (line 608, @0x00000000021c7d00, libserver.so)  // inlines: VectorAdd, VectorMultiply, curtime, operator*, operator+, operator=
// calls: CBaseEntity::SetNextThink, CBaseEntity::GetAbsAngles, AngleVectors, VectorNormalize, CGibShooter::SpawnGib, CBaseEntity::ThinkSet, CGlobalVarsBase::curtime
void __fastcall CGibShooter::ShootThink(CGibShooter *const this)
{
  double v1; // xmm1_8
  double v2; // xmm0_8
  CGlobalVars *v4; // r13
  const QAngle *AbsAngles; // rax
  float m_flVariance; // xmm3_4
  float v7; // xmm0_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  int v17; // eax
  bool v18; // zf
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  void (__fastcall *v20)(CBaseEntity *const); // rsi
  double v21; // xmm0_8
  double v22; // xmm1_8
  float v23; // [rsp-Ch] [rbp-6Ch]
  float v24; // [rsp-Ch] [rbp-6Ch]
  float v25; // [rsp-Ch] [rbp-6Ch]
  vec_t z; // [rsp-8h] [rbp-68h] BYREF
  float v27; // [rsp-4h] [rbp-64h]
  Vector vecShootDir; // [rsp+0h] [rbp-60h] BYREF
  float v29; // [rsp+Ch] [rbp-54h]
  Vector vForward; // [rsp+10h] [rbp-50h] BYREF
  float v31; // [rsp+1Ch] [rbp-44h]
  Vector vRight; // [rsp+20h] [rbp-40h] BYREF
  float v33; // [rsp+2Ch] [rbp-34h]
  Vector vUp; // [rsp+30h] [rbp-30h]

  v2 = 0.0;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v2 = LODWORD(v4->m_flCurrentTime);
  }
  *&v2 = *&v2 + this->m_flDelay;
  CBaseEntity::SetNextThink(this, v2, v1, 0);
  AbsAngles = CBaseEntity::GetAbsAngles(this);
  AngleVectors(AbsAngles, &vecShootDir.z, &vForward.z, &vRight.z);
  m_flVariance = this->m_flVariance;
  z = vecShootDir.z;
  v23 = m_flVariance;
  v27 = v29;
  vecShootDir.x = vForward.x;
  v7 = (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
  v8 = (v31 * v7) * v23;
  v9 = (vRight.x * v7) * v23;
  v10 = (v7 * vForward.z) * v23;
  v24 = this->m_flVariance;
  v27 = v8 + v27;
  vecShootDir.x = v9 + vecShootDir.x;
  z = v10 + z;
  v11 = (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
  v12 = (v29 * v11) * v24;
  v13 = (vForward.x * v11) * v24;
  v14 = (v11 * vecShootDir.z) * v24;
  v25 = this->m_flVariance;
  v27 = v12 + v27;
  vecShootDir.x = v13 + vecShootDir.x;
  z = v14 + z;
  v15 = (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
  v27 = ((v33 * v15) * v25) + v27;
  vecShootDir.x = ((vUp.x * v15) * v25) + vecShootDir.x;
  z = ((v15 * vRight.z) * v25) + z;
  VectorNormalize(&z);
  CGibShooter::SpawnGib(this, &z, COERCE_DOUBLE(LODWORD(this->m_flGibVelocity)), v16);
  v17 = this->m_iGibs - 1;
  v18 = this->m_iGibs == 1;
  this->m_iGibs = v17;
  if ( v17 < 0 || v18 )
  {
    if ( (this->m_spawnflags.m_Value & 1) != 0 )
    {
      v20 = 0;
      this->m_iGibs = this->m_iGibCapacity;
    }
    else
    {
      v20 = CBaseEntity::SUB_Remove;
    }
    CBaseEntity::ThinkSet(this, v20, 0.0, 0, 0);
    *&v21 = CGlobalVarsBase::curtime(gpGlobals, 0);
    CBaseEntity::SetNextThink(this, v21, v22, 0);
  }
}


// CEnvShooter::~CEnvShooter  (line 639, @0x00000000021eb910, libserver.so)  // inlines: ~CGibShooter, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeCModel>::Shutdown, CBaseModelEntity::~CBaseModelEntity
void __fastcall CEnvShooter::~CEnvShooter(CEnvShooter *const this)
{
  CStrongHandle<InfoForResourceTypeCModel> *p_m_iGibModelIndex; // rdi

  p_m_iGibModelIndex = &this->m_iGibModelIndex;
  p_m_iGibModelIndex[-146].m_pBinding = &off_4018C30;
  CStrongHandle<InfoForResourceTypeCModel>::Shutdown(p_m_iGibModelIndex);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CEnvShooter::~CEnvShooter  (line 639, @0x00000000021eb950, libserver.so)  // inlines: ~CEnvShooter, ~CGibShooter, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeCModel>::Shutdown, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CEnvShooter::~CEnvShooter(CEnvShooter *const this)
{
  CStrongHandle<InfoForResourceTypeCModel> *p_m_iGibModelIndex; // rdi

  p_m_iGibModelIndex = &this->m_iGibModelIndex;
  p_m_iGibModelIndex[-146].m_pBinding = &off_4018C30;
  CStrongHandle<InfoForResourceTypeCModel>::Shutdown(p_m_iGibModelIndex);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvShooter::GetEntityClass  (line 641, @0x00000000021de6a0, libserver.so)
CEntityClass *__cdecl CEnvShooter::GetEntityClass()
{
  return g_pEntityCEnvShooterClass;
}


// CEnvShooter::Schema_DynamicBinding  (line 641, @0x00000000021de6b0, libserver.so)
// globals: CEnvShooter::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvShooter::Schema_DynamicBinding(const CEnvShooter *const this)
{
  return CEnvShooter::s_pSchemaBinding;
}


// CEnvShooter::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 641, @0x00000000021de6c0, libserver.so)
// globals: CEnvShooter::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvShooter::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvShooter::CEntityInstanceEntityClass *const this)
{
  return CEnvShooter::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvShooter::CEntityInstanceEntityClass::DestructInstance  (line 641, @0x00000000021de6d0, libserver.so)  // inlines: Destruct<CEnvShooter>
void __fastcall CEnvShooter::CEntityInstanceEntityClass::DestructInstance(
        CEnvShooter::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvShooter::CEntityInstanceEntityClass::FreeInstance  (line 641, @0x00000000021de6f0, libserver.so)
void __fastcall CEnvShooter::CEntityInstanceEntityClass::FreeInstance(
        CEnvShooter::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvShooter::CEntityInstanceEntityClass::CanAllocate  (line 641, @0x00000000021de710, libserver.so)
bool __fastcall CEnvShooter::CEntityInstanceEntityClass::CanAllocate(
        const CEnvShooter::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvShooter::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 641, @0x00000000021de720, libserver.so)
// globals: CEnvShooter::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvShooter::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvShooter::CEntityInstanceEntityClass *const this)
{
  return CEnvShooter::s_pSchemaBinding;
}


// CEnvShooter::CEntityInstanceEntityClass::AllocateInstance  (line 641, @0x00000000021e0540, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvShooter::CEntityInstanceEntityClass::AllocateInstance(
        CEnvShooter::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1256);
  memset(v1, 0, 0x4E8u);
  return v1;
}


// CEnvShooter::CEntityInstanceEntityClass::ConstructInstance  (line 641, @0x00000000021e0eb0, libserver.so)  // inlines: CEnvShooter, CGibShooter, CStrongHandle, CUtlSymbolLarge, Construct<CEnvShooter>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CEnvShooter::CEntityInstanceEntityClass::ConstructInstance(
        CEnvShooter::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 146) = 0;
    *(p + 147) = 0;
    *(p + 154) = 0;
    *p = &off_4019390;
    *(p + 312) = 1065353216;
  }
  return p;
}


// CEnvShooter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 641, @0x00000000021e2cf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvShooter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvShooter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CEnvShooter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 641, @0x00000000021e2d10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvShooter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvShooter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvShooter::GetEntityClassInfo  (line 641, @0x00000000021e7450, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseModelEntity::GetEntityClassInfo
// callers: CRotorWashShooter::GetEntityClassInternal
// strings: "env_shooter", "CEnvShooter", "gibshooter", "CGibShooter"
// globals: `guard variable for'CEnvShooter::GetEntityClassInfo(void)::g_EntityCEnvShooterClassInfo, CEnvShooter::GetEntityClassInfo(void)::g_EntityCEnvShooterClassInfo, `guard variable for'CGibShooter::GetEntityClassInfo(void)::g_EntityCGibShooterClassInfo, CGibShooter::GetEntityClassInfo(void)::g_EntityCGibShooterClassInfo
CEntityClassInfo *__cdecl CEnvShooter::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvShooter::GetEntityClassInfo(void)::g_EntityCEnvShooterClassInfo != 0 )
    return &CEnvShooter::GetEntityClassInfo(void)::g_EntityCEnvShooterClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CEnvShooter::GetEntityClassInfo(void)::g_EntityCEnvShooterClassInfo) == 0 )
    return &CEnvShooter::GetEntityClassInfo(void)::g_EntityCEnvShooterClassInfo;
  if ( `guard variable for'CGibShooter::GetEntityClassInfo(void)::g_EntityCGibShooterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CGibShooter::GetEntityClassInfo(void)::g_EntityCGibShooterClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CGibShooter::GetEntityClassInfo(void)::g_EntityCGibShooterClassInfo,
      "CGibShooter",
      "gibshooter",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CGibShooter::GetEntityClassInfo(void)::g_EntityCGibShooterClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CEnvShooter::GetEntityClassInfo(void)::g_EntityCEnvShooterClassInfo,
    "CEnvShooter",
    "env_shooter",
    0,
    &CGibShooter::GetEntityClassInfo(void)::g_EntityCGibShooterClassInfo);
  __cxa_guard_release(&`guard variable for'CEnvShooter::GetEntityClassInfo(void)::g_EntityCEnvShooterClassInfo);
  return &CEnvShooter::GetEntityClassInfo(void)::g_EntityCEnvShooterClassInfo;
}


// CEnvShooter::GetEntityClassInternal  (line 641, @0x00000000021e7520, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseModelEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "env_shooter", "CEnvShooter", "gibshooter", "CGibShooter"
// globals: `guard variable for'CEnvShooter::GetEntityClassInternal(void)::g_EntityCEnvShooterClass, CEnvShooter::GetEntityClassInternal(void)::g_EntityCEnvShooterClass, __dso_handle, CEnvShooter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvShooter::GetEntityClassInfo(void)::g_EntityCEnvShooterClassInfo, CEnvShooter::GetEntityClassInfo(void)::g_EntityCEnvShooterClassInfo, `guard variable for'CGibShooter::GetEntityClassInfo(void)::g_EntityCGibShooterClassInfo, CGibShooter::GetEntityClassInfo(void)::g_EntityCGibShooterClassInfo
CEntityClass *__cdecl CEnvShooter::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvShooter::GetEntityClassInternal(void)::g_EntityCEnvShooterClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvShooter::GetEntityClassInternal(void)::g_EntityCEnvShooterClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvShooter::GetEntityClassInternal(void)::g_EntityCEnvShooterClass);
    CEnvShooter::GetEntityClassInternal(void)::g_EntityCEnvShooterClass._vptr_CEntityClass = off_4019310;
    __cxa_guard_release(&`guard variable for'CEnvShooter::GetEntityClassInternal(void)::g_EntityCEnvShooterClass);
    __cxa_atexit(
      CEnvShooter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvShooter::GetEntityClassInternal(void)::g_EntityCEnvShooterClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvShooterClass != 0 )
    return &CEnvShooter::GetEntityClassInternal(void)::g_EntityCEnvShooterClass;
  if ( `guard variable for'CEnvShooter::GetEntityClassInfo(void)::g_EntityCEnvShooterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvShooter::GetEntityClassInfo(void)::g_EntityCEnvShooterClassInfo) != 0 )
  {
    if ( `guard variable for'CGibShooter::GetEntityClassInfo(void)::g_EntityCGibShooterClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CGibShooter::GetEntityClassInfo(void)::g_EntityCGibShooterClassInfo) != 0 )
    {
      EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CGibShooter::GetEntityClassInfo(void)::g_EntityCGibShooterClassInfo,
        "CGibShooter",
        "gibshooter",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CGibShooter::GetEntityClassInfo(void)::g_EntityCGibShooterClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvShooter::GetEntityClassInfo(void)::g_EntityCEnvShooterClassInfo,
      "CEnvShooter",
      "env_shooter",
      0,
      &CGibShooter::GetEntityClassInfo(void)::g_EntityCGibShooterClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvShooter::GetEntityClassInfo(void)::g_EntityCEnvShooterClassInfo);
  }
  CEnvShooter::GetEntityClassInternal(void)::g_EntityCEnvShooterClass.m_pClassInfo = &CEnvShooter::GetEntityClassInfo(void)::g_EntityCEnvShooterClassInfo;
  CEnvShooter::GetEntityClassInternal(void)::g_EntityCEnvShooterClass.m_pBaseClassInfo = CEnvShooter::GetEntityClassInfo(void)::g_EntityCEnvShooterClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvShooterClass = &CEnvShooter::GetEntityClassInternal(void)::g_EntityCEnvShooterClass;
  CEnvShooter::GetEntityClassInfo(void)::g_EntityCEnvShooterClassInfo.m_pClass = &CEnvShooter::GetEntityClassInternal(void)::g_EntityCEnvShooterClass;
  CEnvShooter::GetEntityClassInternal(void)::g_EntityCEnvShooterClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCEnvShooterClass->m_pComponentOverrides = 0;
  return &CEnvShooter::GetEntityClassInternal(void)::g_EntityCEnvShooterClass;
}


// CEnvShooter::GetDataDescMap  (line 669, @0x00000000021badb0, libserver.so)
// globals: CEnvShooter::m_DataMap
datamap_t *__fastcall CEnvShooter::GetDataDescMap(CEnvShooter *const this)
{
  return &CEnvShooter::m_DataMap;
}


// CEnvShooter::AddDatadescMetadataKeys  (line 669, @0x00000000021c82c0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvShooter::GetEntityClass(void)
void __fastcall CEnvShooter::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvShooter::GetEntityClass);
}


// CEnvShooter::GetBaseMap  (line 669, @0x00000000021c82e0, libserver.so)
// globals: CGibShooter::m_DataMap
datamap_t *__cdecl CEnvShooter::GetBaseMap()
{
  return &CGibShooter::m_DataMap;
}


// DataMapInit<CEnvShooter>  (line 669, @0x00000000021c82f0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CEnvShooter"
// globals: `guard variable for'DataMapInit<CEnvShooter>(CEnvShooter *)::nameHolder, CGibShooter::m_DataMap, CEnvShooter::GetEntityClass(void), CEnvShooter::m_DataMap, DataMapInit<CEnvShooter>(CEnvShooter *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvShooter>(CEnvShooter *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEnvShooter>(CEnvShooter *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvShooter>(CEnvShooter *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvShooter>(CEnvShooter *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvShooter>(CEnvShooter *)::nameHolder.m_pszBase = "CEnvShooter";
    DataMapInit<CEnvShooter>(CEnvShooter *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvShooter>(CEnvShooter *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvShooter>(CEnvShooter *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvShooter>(CEnvShooter *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvShooter>(CEnvShooter *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvShooter>(CEnvShooter *)::nameHolder,
      &_dso_handle);
  }
  CEnvShooter::m_DataMap.dataNumFields = 3;
  CEnvShooter::m_DataMap.baseMap = &CGibShooter::m_DataMap;
  CEnvShooter::m_DataMap.dataDesc = &DataMapInit<CEnvShooter>(CEnvShooter *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvShooter::m_DataMap, CEnvShooter::GetEntityClass);
  return &CEnvShooter::m_DataMap;
}


// CEnvShooter::Spawn  (line 682, @0x00000000021d9ed0, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, Get<int>, GetModelNameFromKeyValues, GetValue, GetValue<int>, GetValueString, Min<long long unsigned int>, Min<unsigned int>, TempString, atoi, operator=, operator[]
// calls: CGibShooter::Spawn, GetModelNameFromKeyValues, CStrongHandle<InfoForResourceTypeCModel>::Init, CEntityKeyValues::HasValue, VariantFieldTypeName, Warning, AllocPooledString, V_stristr_fast(char const*,char const*), strtol
// callers: CRotorWashShooter::Spawn
// strings: "No conversion from %s to int now\n"
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_21DA082, jpt_21DA145
void __fastcall CEnvShooter::Spawn(CEnvShooter *const this, const CEntityKeyValues *pKeyValues)
{
  const char *ModelNameFromKeyValues; // rax
  int v5; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v6; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v8; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v9; // rdx
  CEntityVariant *v10; // rcx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v13; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v15; // rdx
  const char *m_uint64; // r14
  CEntityVariant *p_m_value; // rax
  int16 m_type; // ax
  const char *v19; // rax
  const char *v20; // rax
  CStrongHandle<InfoForResourceTypeCModel>::ResourceHandleTyped_t hResource[6]; // [rsp+0h] [rbp-30h] BYREF

  CGibShooter::Spawn(this, pKeyValues);
  ModelNameFromKeyValues = GetModelNameFromKeyValues(pKeyValues, "");
  (*(modelinfo->_vptr_IAppSystem + 13))(hResource, modelinfo, ModelNameFromKeyValues);
  CStrongHandle<InfoForResourceTypeCModel>::Init(&this->m_iGibModelIndex, hResource[0]);
  if ( !CEntityKeyValues::HasValue(pKeyValues, 1602148740) )
    goto LABEL_2;
  this->m_bIsSprite = 0;
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_31:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_uint64 = 0;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_26;
    goto LABEL_32;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v13 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v13) == 1602148740 )
      goto LABEL_23;
LABEL_20:
    if ( m_nCount <= ++v13 )
      goto LABEL_31;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v13] != 1602148740 )
    goto LABEL_20;
LABEL_23:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v15 = pKeyValues->m_keyValues.m_pElements;
  else
    v15 = 0;
  m_uint64 = 0;
  p_m_value = &v15[v13].m_value;
  if ( p_m_value->m_type == 30 )
LABEL_26:
    m_uint64 = p_m_value->m_uint64;
LABEL_32:
  AllocPooledString(hResource, m_uint64);
  this->m_iShootModelName.u.m_Id = hResource[0];
  if ( V_stristr_fast(m_uint64, ".vmat") != 0 )
    this->m_bIsSprite = 1;
LABEL_2:
  if ( CEntityKeyValues::HasValue(pKeyValues, -1386507827) )
  {
    v5 = pKeyValues->m_keyHashes.m_nCount;
    if ( v5 > 0 )
    {
      v6 = pKeyValues->m_keyHashes.m_nAllocated;
      for ( i = 0; v5 > i; ++i )
      {
        if ( v6 != 0 )
        {
          v8 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v6 > 9 )
            v8 = pKeyValues->m_keyHashes.m_pElements;
          if ( v8[i] == -1386507827 )
          {
LABEL_12:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v9 = pKeyValues->m_keyValues.m_pElements;
            else
              v9 = 0;
            v10 = &v9[i].m_value;
            goto LABEL_28;
          }
        }
        else if ( *(4 * i) == -1386507827 )
        {
          goto LABEL_12;
        }
      }
    }
    v10 = &CEntityKeyValues::sm_EmptyVariant;
LABEL_28:
    m_type = v10->m_type;
    switch ( m_type )
    {
      case 0:
        goto LABEL_30;
      case 1:
        LODWORD(v20) = v10->m_float;
        goto LABEL_37;
      case 5:
        LODWORD(v20) = v10->m_int;
        goto LABEL_37;
      case 6:
        LODWORD(v20) = v10->m_char;
        goto LABEL_37;
      case 26:
        v20 = v10->m_uint64;
        if ( v10->m_int64 > 0x7FFFFFFF )
          goto LABEL_35;
        if ( v20 < 0xFFFFFFFF80000000LL )
          LODWORD(v20) = 0x80000000;
        goto LABEL_37;
      case 30:
        LODWORD(v20) = strtol(v10->m_pszString, 0, 10);
        goto LABEL_37;
      case 33:
        v20 = v10->m_uint64;
        if ( v10->m_uint64 <= 0x7FFFFFFE )
          goto LABEL_37;
        goto LABEL_35;
      case 34:
        LODWORD(v20) = v10->m_float64;
        goto LABEL_37;
      case 37:
        LODWORD(v20) = v10->m_int;
        if ( v10->m_int <= 0x7FFFFFFEu )
        {
LABEL_37:
          switch ( v20 )
          {
            case 0:
              goto LABEL_30;
            case 1:
              this->m_iGibMaterial = 1;
              break;
            case 2:
              this->m_iGibMaterial = 2;
              break;
            case 3:
              this->m_iGibMaterial = 3;
              break;
            case 4:
              this->m_iGibMaterial = 8;
              break;
            default:
              goto LABEL_35;
          }
        }
        else
        {
LABEL_35:
          this->m_iGibMaterial = 10;
        }
        break;
      default:
        v19 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to int now\n", v19);
LABEL_30:
        this->m_iGibMaterial = 0;
        break;
    }
  }
}


// CEnvShooter::Precache  (line 731, @0x00000000021ddd90, libserver.so)
// calls: CGibShooter::Precache, CBaseEntity::PrecacheModelFromKeyValues
void __fastcall CEnvShooter::Precache(CEnvShooter *const this, const CEntityPrecacheContext *pContext)
{
  CGibShooter::Precache(this, pContext);
  CBaseEntity::PrecacheModelFromKeyValues(this, pContext, 0, 0);
}


// CEnvShooter::CreateGib  (line 738, @0x00000000021daa30, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, NetworkStateChanged, Set, SetFlame, SetGravity, SetRenderFX, String, ToCStr, curtime, operator=, operator=<RenderFx_t>
// calls: CreateSimpleGib, CGib::Init, CBaseAnimating::SetBodygroup, CGib::SetBloodColor, CBaseModelEntity::SetRenderMode, CBaseModelEntity::SetRenderColorAndAlpha, CBaseAnimating::SetSkin, CBaseEntity::AddEffects, DispatchSpawn, CEntityFlame::Create
CGib *__fastcall CEnvShooter::CreateGib(CEnvShooter *const this)
{
  const char *m_pAsString; // rdi
  CGib *SimpleGib; // rbx
  int m_nMaxGibModelFrame; // eax
  int v5; // edx
  RenderFx_t m_Value; // r13
  float v7; // xmm2_4
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v9; // r13
  float v10; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CEntityFlame *v13; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v15; // eax
  __int16 v16; // cx

  m_pAsString = "";
  if ( !this->m_bIsSprite && this->m_iShootModelName.u.m_Id != 0 )
    m_pAsString = this->m_iShootModelName.u.m_pAsString;
  SimpleGib = CreateSimpleGib(m_pAsString);
  CGib::Init(SimpleGib);
  m_nMaxGibModelFrame = this->m_nMaxGibModelFrame;
  v5 = 0;
  if ( m_nMaxGibModelFrame > 1 )
    v5 = (*(*random_valve + 16LL))(random_valve, 0, (m_nMaxGibModelFrame - 1));
  CBaseAnimating::SetBodygroup(SimpleGib, 0, v5);
  CGib::SetBloodColor(SimpleGib, -1);
  SimpleGib->m_material = this->m_iGibMaterial;
  CBaseModelEntity::SetRenderMode(SimpleGib, this->m_nRenderMode.m_Value);
  CBaseModelEntity::SetRenderColorAndAlpha(SimpleGib, &this->m_clrRender.m_Value);
  m_Value = this->m_nRenderFX.m_Value;
  if ( m_Value != SimpleGib->m_nRenderFX.m_Value )
  {
    (*(SimpleGib->_vptr_IHandleEntity + 22))(SimpleGib, 814, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    SimpleGib->m_nRenderFX.m_Value = m_Value;
  }
  CBaseAnimating::SetSkin(SimpleGib, this->m_nSkin);
  m_flCurrentTime = 0.0;
  v9 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v9->m_flCurrentTime;
  }
  v10 = m_flCurrentTime + this->m_flGibLife;
  SimpleGib->m_lifeTime = v10;
  SimpleGib->m_flGravity = this->m_flGibGravityScale;
  if ( (this->m_spawnflags.m_Value & 2) != 0 )
  {
    v13 = CEntityFlame::Create(SimpleGib, v10, 0.0, v7, 1);
    if ( v13 != 0 )
    {
      m_pEntity = v13->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v15 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v16 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(SimpleGib->m_hFlame.m_Index) = v16 | SimpleGib->m_hFlame.m_Index & 0x8000;
        SimpleGib->m_hFlame.m_Index = (v15 << 15) | SimpleGib->m_hFlame.m_Index & 0x7FFF;
      }
      else
      {
        SimpleGib->m_hFlame.m_Index = -1;
      }
    }
  }
  if ( this->m_bNoGibShadows )
    CBaseEntity::AddEffects(SimpleGib, 16);
  DispatchSpawn(SimpleGib, 0);
  return SimpleGib;
}


// CRotorWashShooter::~CRotorWashShooter  (line 809, @0x00000000021eb990, libserver.so)  // inlines: ~CEnvShooter, ~CGibShooter, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeCModel>::Shutdown, CBaseModelEntity::~CBaseModelEntity
void __fastcall CRotorWashShooter::~CRotorWashShooter(CRotorWashShooter *const this)
{
  HModelStrong *p_m_iGibModelIndex; // rdi

  p_m_iGibModelIndex = &this->m_iGibModelIndex;
  p_m_iGibModelIndex[11].m_pBinding = &off_401A1C0;
  p_m_iGibModelIndex[-146].m_pBinding = &off_4018C30;
  CStrongHandle<InfoForResourceTypeCModel>::Shutdown(p_m_iGibModelIndex);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CRotorWashShooter::~CRotorWashShooter  (line 809, @0x00000000021eb9d0, libserver.so)  // inlines: ~CEnvShooter, ~CGibShooter, ~CRotorWashShooter, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeCModel>::Shutdown, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CRotorWashShooter::~CRotorWashShooter(CRotorWashShooter *const this)
{
  HModelStrong *p_m_iGibModelIndex; // rdi

  p_m_iGibModelIndex = &this->m_iGibModelIndex;
  p_m_iGibModelIndex[11].m_pBinding = &off_401A1C0;
  p_m_iGibModelIndex[-146].m_pBinding = &off_4018C30;
  CStrongHandle<InfoForResourceTypeCModel>::Shutdown(p_m_iGibModelIndex);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CRotorWashShooter::GetEntityClass  (line 811, @0x00000000021de730, libserver.so)
CEntityClass *__cdecl CRotorWashShooter::GetEntityClass()
{
  return g_pEntityCRotorWashShooterClass;
}


// CRotorWashShooter::Schema_DynamicBinding  (line 811, @0x00000000021de740, libserver.so)
// globals: CRotorWashShooter::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CRotorWashShooter::Schema_DynamicBinding(const CRotorWashShooter *const this)
{
  return CRotorWashShooter::s_pSchemaBinding;
}


// CRotorWashShooter::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 811, @0x00000000021de750, libserver.so)
// globals: CRotorWashShooter::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CRotorWashShooter::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CRotorWashShooter::CEntityInstanceEntityClass *const this)
{
  return CRotorWashShooter::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CRotorWashShooter::CEntityInstanceEntityClass::DestructInstance  (line 811, @0x00000000021de760, libserver.so)  // inlines: Destruct<CRotorWashShooter>
void __fastcall CRotorWashShooter::CEntityInstanceEntityClass::DestructInstance(
        CRotorWashShooter::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CRotorWashShooter::CEntityInstanceEntityClass::FreeInstance  (line 811, @0x00000000021de780, libserver.so)
void __fastcall CRotorWashShooter::CEntityInstanceEntityClass::FreeInstance(
        CRotorWashShooter::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CRotorWashShooter::CEntityInstanceEntityClass::CanAllocate  (line 811, @0x00000000021de7a0, libserver.so)
bool __fastcall CRotorWashShooter::CEntityInstanceEntityClass::CanAllocate(
        const CRotorWashShooter::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CRotorWashShooter::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 811, @0x00000000021de7b0, libserver.so)
// globals: CRotorWashShooter::s_pSchemaBinding
const ISchemaBinding *__fastcall CRotorWashShooter::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CRotorWashShooter::CEntityInstanceEntityClass *const this)
{
  return CRotorWashShooter::s_pSchemaBinding;
}


// CRotorWashShooter::CEntityInstanceEntityClass::AllocateInstance  (line 811, @0x00000000021e0580, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CRotorWashShooter::CEntityInstanceEntityClass::AllocateInstance(
        CRotorWashShooter::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1280);
  memset(v1, 0, 0x500u);
  return v1;
}


// CRotorWashShooter::CEntityInstanceEntityClass::ConstructInstance  (line 811, @0x00000000021e0f10, libserver.so)  // inlines: CEnvShooter, CGibShooter, CRotorWashShooter, CStrongHandle, CUtlSymbolLarge, Construct<CRotorWashShooter>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CRotorWashShooter::CEntityInstanceEntityClass::ConstructInstance(
        CRotorWashShooter::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 146) = 0;
    *p = &off_4019AF0;
    *(p + 147) = 0;
    *(p + 154) = 0;
    *(p + 312) = 1065353216;
    *(p + 157) = &off_401A1C0;
  }
  return p;
}


// CRotorWashShooter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 811, @0x00000000021e2d40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CRotorWashShooter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRotorWashShooter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CRotorWashShooter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 811, @0x00000000021e2d60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CRotorWashShooter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRotorWashShooter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CRotorWashShooter::GetEntityClassInternal  (line 811, @0x00000000021e76b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEnvShooter::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "env_rotorshooter", "CRotorWashShooter"
// globals: `guard variable for'CRotorWashShooter::GetEntityClassInternal(void)::g_EntityCRotorWashShooterClass, CRotorWashShooter::GetEntityClassInternal(void)::g_EntityCRotorWashShooterClass, __dso_handle, CRotorWashShooter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CRotorWashShooter::GetEntityClassInfo(void)::g_EntityCRotorWashShooterClassInfo, CRotorWashShooter::GetEntityClassInfo(void)::g_EntityCRotorWashShooterClassInfo
CEntityClass *__cdecl CRotorWashShooter::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CRotorWashShooter::GetEntityClassInternal(void)::g_EntityCRotorWashShooterClass == 0
    && __cxa_guard_acquire(&`guard variable for'CRotorWashShooter::GetEntityClassInternal(void)::g_EntityCRotorWashShooterClass) != 0 )
  {
    CEntityClass::CEntityClass(&CRotorWashShooter::GetEntityClassInternal(void)::g_EntityCRotorWashShooterClass);
    CRotorWashShooter::GetEntityClassInternal(void)::g_EntityCRotorWashShooterClass._vptr_CEntityClass = off_4019A70;
    __cxa_guard_release(&`guard variable for'CRotorWashShooter::GetEntityClassInternal(void)::g_EntityCRotorWashShooterClass);
    __cxa_atexit(
      CRotorWashShooter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CRotorWashShooter::GetEntityClassInternal(void)::g_EntityCRotorWashShooterClass,
      &_dso_handle);
  }
  if ( g_pEntityCRotorWashShooterClass != 0 )
    return &CRotorWashShooter::GetEntityClassInternal(void)::g_EntityCRotorWashShooterClass;
  if ( `guard variable for'CRotorWashShooter::GetEntityClassInfo(void)::g_EntityCRotorWashShooterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CRotorWashShooter::GetEntityClassInfo(void)::g_EntityCRotorWashShooterClassInfo) != 0 )
  {
    EntityClassInfo = CEnvShooter::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CRotorWashShooter::GetEntityClassInfo(void)::g_EntityCRotorWashShooterClassInfo,
      "CRotorWashShooter",
      "env_rotorshooter",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CRotorWashShooter::GetEntityClassInfo(void)::g_EntityCRotorWashShooterClassInfo);
  }
  CRotorWashShooter::GetEntityClassInternal(void)::g_EntityCRotorWashShooterClass.m_pClassInfo = &CRotorWashShooter::GetEntityClassInfo(void)::g_EntityCRotorWashShooterClassInfo;
  CRotorWashShooter::GetEntityClassInternal(void)::g_EntityCRotorWashShooterClass.m_pBaseClassInfo = CRotorWashShooter::GetEntityClassInfo(void)::g_EntityCRotorWashShooterClassInfo.m_pBaseClassInfo;
  g_pEntityCRotorWashShooterClass = &CRotorWashShooter::GetEntityClassInternal(void)::g_EntityCRotorWashShooterClass;
  CRotorWashShooter::GetEntityClassInfo(void)::g_EntityCRotorWashShooterClassInfo.m_pClass = &CRotorWashShooter::GetEntityClassInternal(void)::g_EntityCRotorWashShooterClass;
  CRotorWashShooter::GetEntityClassInternal(void)::g_EntityCRotorWashShooterClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCRotorWashShooterClass->m_pComponentOverrides = 0;
  return &CRotorWashShooter::GetEntityClassInternal(void)::g_EntityCRotorWashShooterClass;
}


// CRotorWashShooter::GetDataDescMap  (line 836, @0x00000000021badc0, libserver.so)
// globals: CRotorWashShooter::m_DataMap
datamap_t *__fastcall CRotorWashShooter::GetDataDescMap(CRotorWashShooter *const this)
{
  return &CRotorWashShooter::m_DataMap;
}


// CRotorWashShooter::AddDatadescMetadataKeys  (line 836, @0x00000000021c83c0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CRotorWashShooter::GetEntityClass(void)
void __fastcall CRotorWashShooter::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CRotorWashShooter::GetEntityClass);
}


// CRotorWashShooter::GetBaseMap  (line 836, @0x00000000021c83e0, libserver.so)
// globals: CEnvShooter::m_DataMap
datamap_t *__cdecl CRotorWashShooter::GetBaseMap()
{
  return &CEnvShooter::m_DataMap;
}


// DataMapInit<CRotorWashShooter>  (line 836, @0x00000000021c83f0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CRotorWashShooter"
// globals: `guard variable for'DataMapInit<CRotorWashShooter>(CRotorWashShooter *)::nameHolder, CEnvShooter::m_DataMap, CRotorWashShooter::GetEntityClass(void), CRotorWashShooter::m_DataMap, DataMapInit<CRotorWashShooter>(CRotorWashShooter *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CRotorWashShooter>(CRotorWashShooter *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CRotorWashShooter>(CRotorWashShooter *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CRotorWashShooter>(CRotorWashShooter *)::nameHolder) != 0 )
  {
    DataMapInit<CRotorWashShooter>(CRotorWashShooter *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CRotorWashShooter>(CRotorWashShooter *)::nameHolder.m_pszBase = "CRotorWashShooter";
    DataMapInit<CRotorWashShooter>(CRotorWashShooter *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CRotorWashShooter>(CRotorWashShooter *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CRotorWashShooter>(CRotorWashShooter *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CRotorWashShooter>(CRotorWashShooter *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CRotorWashShooter>(CRotorWashShooter *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CRotorWashShooter>(CRotorWashShooter *)::nameHolder,
      &_dso_handle);
  }
  CRotorWashShooter::m_DataMap.dataNumFields = 4;
  CRotorWashShooter::m_DataMap.baseMap = &CEnvShooter::m_DataMap;
  CRotorWashShooter::m_DataMap.dataDesc = &DataMapInit<CRotorWashShooter>(CRotorWashShooter *)::dataDesc[1];
  AddDatadescMetadataKeys(&CRotorWashShooter::m_DataMap, CRotorWashShooter::GetEntityClass);
  return &CRotorWashShooter::m_DataMap;
}


// GetRotorWashShooter  (line 850, @0x00000000021c84c0, libserver.so)
// calls: __dynamic_cast
// globals: `typeinfo for'CRotorWashShooter
IRotorWashShooter *__fastcall GetRotorWashShooter(CBaseEntity *pEntity)
{
  IRotorWashShooter *v1; // rax

  if ( pEntity == 0 )
    return 0;
  v1 = __dynamic_cast(pEntity, &`typeinfo for'CBaseEntity, &`typeinfo for'CRotorWashShooter, 0);
  if ( v1 != 0 )
    return v1 + 157;
  else
    return 0;
}


// CRotorWashShooter::Spawn  (line 860, @0x00000000021da220, libserver.so)
// calls: CEnvShooter::Spawn
void __fastcall CRotorWashShooter::Spawn(CRotorWashShooter *const this, const CEntityKeyValues *pKeyValues)
{
  CEnvShooter::Spawn(this, pKeyValues);
  this->m_flLastWashStartTime = -1.0;
}


// CRotorWashShooter::DoWashPush  (line 871, @0x00000000021c7fa0, libserver.so)  // inlines: curtime
// calls: VectorNormalize, CGibShooter::SpawnGib, CGlobalVarsBase::curtime, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
CBaseModelEntity *__fastcall CRotorWashShooter::DoWashPush(
        CRotorWashShooter *const this,
        double a2,
        double flWashStartTime,
        const Vector *const vecForce)
{
  CGlobalVars *v6; // r12
  float v7; // xmm2_4
  float v8; // xmm0_4
  CGlobalVars *v9; // r14
  float v10; // xmm2_4
  float v11; // xmm0_4
  bool v12; // zf
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  CBaseModelEntity *result; // rax
  int v18; // edx
  float m_flCurrentTime; // xmm2_4
  CGlobalVars *v20; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  void (__fastcall *v22)(__int64, double); // rax
  void (__fastcall *v23)(__int64, double, double); // rax
  double v24; // xmm0_8
  double v25; // xmm1_8
  unsigned int flWashStartTimea; // [rsp+4h] [rbp-4Ch]
  float pGib; // [rsp+8h] [rbp-48h]
  float pGiba; // [rsp+8h] [rbp-48h]
  float pGibb; // [rsp+8h] [rbp-48h]
  CBaseEntity *pGibc; // [rsp+8h] [rbp-48h]
  Vector vecShootDir; // [rsp+10h] [rbp-40h] BYREF

  if ( *&a2 == this->m_flLastWashStartTime )
  {
    m_flCurrentTime = 0.0;
    *&flWashStartTime = LODWORD(this->m_flNextGibTime);
    v20 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          flWashStartTimea = LODWORD(a2);
          pGiba = this->m_flNextGibTime;
          (m_pfnWarningFunc)(1, a2, *&flWashStartTime, 0.0);
          *&a2 = flWashStartTimea;
          *&flWashStartTime = LODWORD(pGiba);
        }
      }
      m_flCurrentTime = v20->m_flCurrentTime;
    }
    if ( *&flWashStartTime > m_flCurrentTime )
      return 0;
  }
  v6 = gpGlobals;
  this->m_flLastWashStartTime = *&a2;
  if ( v6 != 0 )
  {
    if ( !v6->m_bEnableAssertions && !v6->m_bInSimulation )
    {
      v23 = v6->m_pfnWarningFunc;
      if ( v23 != 0 )
        v23(1, a2, flWashStartTime);
    }
    v7 = v6->m_flCurrentTime;
  }
  else
  {
    v7 = 0.0;
  }
  pGib = v7 + this->m_flTimeUnderRotor;
  v8 = (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
  v9 = gpGlobals;
  v10 = pGib + (v8 * this->m_flTimeUnderRotorVariance);
  v11 = 0.0;
  v12 = gpGlobals == 0;
  this->m_flNextGibTime = v10;
  if ( !v12 )
  {
    if ( !v9->m_bEnableAssertions && !v9->m_bInSimulation )
    {
      v22 = v9->m_pfnWarningFunc;
      if ( v22 != 0 )
      {
        pGibb = v10;
        v22(1, 0.0);
        v10 = pGibb;
      }
    }
    v11 = v9->m_flCurrentTime;
  }
  if ( v11 >= v10 )
    this->m_flNextGibTime = CGlobalVarsBase::curtime(gpGlobals, 0) + 0.0099999998;
  vecShootDir = *vecForce;
  VectorNormalize(&vecShootDir);
  v13 = (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
  vecShootDir.x = (v13 * this->m_flVariance) + vecShootDir.x;
  v14 = (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
  vecShootDir.y = (v14 * this->m_flVariance) + vecShootDir.y;
  v15 = (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
  vecShootDir.z = (v15 * this->m_flVariance) + vecShootDir.z;
  VectorNormalize(&vecShootDir);
  result = CGibShooter::SpawnGib(this, &vecShootDir, COERCE_DOUBLE(LODWORD(this->m_flGibVelocity)), v16);
  v18 = this->m_iGibs - 1;
  this->m_iGibs = v18;
  if ( v18 <= 0 )
  {
    if ( (this->m_spawnflags.m_Value & 1) != 0 )
    {
      this->m_iGibs = this->m_iGibCapacity;
    }
    else
    {
      pGibc = result;
      CBaseEntity::ThinkSet(this, CBaseEntity::SUB_Remove, 0.0, 0, 0);
      *&v24 = CGlobalVarsBase::curtime(gpGlobals, 0);
      CBaseEntity::SetNextThink(this, v24, v25, 0);
      return pGibc;
    }
  }
  return result;
}


// CTestEffect::~CTestEffect  (line 919, @0x00000000021e1310, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CTestEffect::~CTestEffect(CTestEffect *const this)
{
  this->_vptr_IHandleEntity = &off_401A270;
  CBaseEntity::~CBaseEntity(this);
}


// CTestEffect::~CTestEffect  (line 919, @0x00000000021e1330, libserver.so)  // inlines: ~CTestEffect
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CTestEffect::~CTestEffect(CTestEffect *const this)
{
  this->_vptr_IHandleEntity = &off_401A270;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CTestEffect::Schema_DynamicBinding  (line 921, @0x00000000021de7c0, libserver.so)
// globals: CTestEffect::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTestEffect::Schema_DynamicBinding(const CTestEffect *const this)
{
  return CTestEffect::s_pSchemaBinding;
}


// CTestEffect::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 921, @0x00000000021de7d0, libserver.so)
// globals: CTestEffect::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTestEffect::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTestEffect::CEntityInstanceEntityClass *const this)
{
  return CTestEffect::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTestEffect::CEntityInstanceEntityClass::DestructInstance  (line 921, @0x00000000021de7e0, libserver.so)  // inlines: Destruct<CTestEffect>
void __fastcall CTestEffect::CEntityInstanceEntityClass::DestructInstance(
        CTestEffect::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTestEffect::CEntityInstanceEntityClass::FreeInstance  (line 921, @0x00000000021de800, libserver.so)
void __fastcall CTestEffect::CEntityInstanceEntityClass::FreeInstance(
        CTestEffect::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTestEffect::CEntityInstanceEntityClass::CanAllocate  (line 921, @0x00000000021de820, libserver.so)
bool __fastcall CTestEffect::CEntityInstanceEntityClass::CanAllocate(
        const CTestEffect::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTestEffect::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 921, @0x00000000021de830, libserver.so)
// globals: CTestEffect::s_pSchemaBinding
const ISchemaBinding *__fastcall CTestEffect::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTestEffect::CEntityInstanceEntityClass *const this)
{
  return CTestEffect::s_pSchemaBinding;
}


// CTestEffect::CEntityInstanceEntityClass::AllocateInstance  (line 921, @0x00000000021e05c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTestEffect::CEntityInstanceEntityClass::AllocateInstance(
        CTestEffect::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1080);
  memset(v1, 0, 0x438u);
  return v1;
}


// CTestEffect::CEntityInstanceEntityClass::ConstructInstance  (line 921, @0x00000000021e0b30, libserver.so)  // inlines: CTestEffect, Construct<CTestEffect>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CTestEffect::CEntityInstanceEntityClass::ConstructInstance(
        CTestEffect::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_401A270;
  }
  return p;
}


// CTestEffect::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 921, @0x00000000021e2e30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTestEffect::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTestEffect::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CTestEffect::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 921, @0x00000000021e2e50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTestEffect::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTestEffect::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTestEffect::GetEntityClassInternal  (line 921, @0x00000000021e7800, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "test_effect", "CTestEffect"
// globals: `guard variable for'CTestEffect::GetEntityClassInternal(void)::g_EntityCTestEffectClass, CTestEffect::GetEntityClassInternal(void)::g_EntityCTestEffectClass, __dso_handle, CTestEffect::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTestEffect::GetEntityClassInfo(void)::g_EntityCTestEffectClassInfo, CTestEffect::GetEntityClassInfo(void)::g_EntityCTestEffectClassInfo
CEntityClass *__cdecl CTestEffect::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTestEffect::GetEntityClassInternal(void)::g_EntityCTestEffectClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTestEffect::GetEntityClassInternal(void)::g_EntityCTestEffectClass) != 0 )
  {
    CEntityClass::CEntityClass(&CTestEffect::GetEntityClassInternal(void)::g_EntityCTestEffectClass);
    CTestEffect::GetEntityClassInternal(void)::g_EntityCTestEffectClass._vptr_CEntityClass = off_401A1F0;
    __cxa_guard_release(&`guard variable for'CTestEffect::GetEntityClassInternal(void)::g_EntityCTestEffectClass);
    __cxa_atexit(
      CTestEffect::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTestEffect::GetEntityClassInternal(void)::g_EntityCTestEffectClass,
      &_dso_handle);
  }
  if ( g_pEntityCTestEffectClass != 0 )
    return &CTestEffect::GetEntityClassInternal(void)::g_EntityCTestEffectClass;
  if ( `guard variable for'CTestEffect::GetEntityClassInfo(void)::g_EntityCTestEffectClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTestEffect::GetEntityClassInfo(void)::g_EntityCTestEffectClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTestEffect::GetEntityClassInfo(void)::g_EntityCTestEffectClassInfo,
      "CTestEffect",
      "test_effect",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTestEffect::GetEntityClassInfo(void)::g_EntityCTestEffectClassInfo);
  }
  CTestEffect::GetEntityClassInternal(void)::g_EntityCTestEffectClass.m_pClassInfo = &CTestEffect::GetEntityClassInfo(void)::g_EntityCTestEffectClassInfo;
  CTestEffect::GetEntityClassInternal(void)::g_EntityCTestEffectClass.m_pBaseClassInfo = CTestEffect::GetEntityClassInfo(void)::g_EntityCTestEffectClassInfo.m_pBaseClassInfo;
  g_pEntityCTestEffectClass = &CTestEffect::GetEntityClassInternal(void)::g_EntityCTestEffectClass;
  CTestEffect::GetEntityClassInfo(void)::g_EntityCTestEffectClassInfo.m_pClass = &CTestEffect::GetEntityClassInternal(void)::g_EntityCTestEffectClass;
  CTestEffect::GetEntityClassInternal(void)::g_EntityCTestEffectClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCTestEffectClass->m_pComponentOverrides = 0;
  return &CTestEffect::GetEntityClassInternal(void)::g_EntityCTestEffectClass;
}


// CTestEffect::Precache  (line 938, @0x00000000021dddc0, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, PrecacheMaterial
// strings: "materials/sprites/lgtning.vmat"
void __fastcall CTestEffect::Precache(CTestEffect *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  PrecacheMaterial("materials/sprites/lgtning.vmat", pContext);
}


// CTestEffect::Think  (line 944, @0x00000000021c1970, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, GetFloat, Init, LengthSqr, NetworkStateChanged, Ray_t, RnCollisionAttr_t, Set, SetAlpha, SetBlue, SetBrightness, SetColor, SetComponent, SetGreen, SetRed, SetRenderColor, SetScrollRate, SetVal, SetWidth, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, Vector, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, a, curtime, operator*, operator+, operator=<float>, operator=<int>
// calls: UTIL_Remove, CGlobalVarsBase::curtime, CBaseEntity::SetNextThink, CBaseModelEntity::SetRenderAlpha, CBeam::BeamCreate, CGameTrace::Init, CBaseEntity::GetAbsOrigin, VectorNormalize, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CBeam::PointsInit
// strings: "sprites/lgtning.vmat"
void __fastcall CTestEffect::Think(CTestEffect *const this)
{
  float v1; // xmm1_4
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v4; // r12
  int m_iBeam; // eax
  CBeam **m_pBeam; // r13
  int v7; // r12d
  CEntityInstance *v8; // rdi
  double v9; // xmm1_8
  __int64 v10; // r12
  CGlobalVars *v11; // r13
  float v12; // xmm0_4
  FnGlobalVarsWarningFunc v13; // rax
  double v14; // xmm0_8
  double v15; // xmm1_8
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CBeam *v17; // r12
  const Vector *AbsOrigin; // rax
  ConVar *m_pParent; // rax
  unsigned __int8 v20; // r13
  __int64 v21; // r13
  int v22; // eax
  __int64 v23; // rdx
  vec_t v24; // [rsp-14h] [rbp-1A4h]
  float v25; // [rsp-10h] [rbp-1A0h]
  float v26; // [rsp-Ch] [rbp-19Ch]
  __int64 v27; // [rsp-8h] [rbp-198h] BYREF
  Vector vecSrc; // [rsp+0h] [rbp-190h] BYREF
  float v29; // [rsp+Ch] [rbp-184h]
  Vector vecDir; // [rsp+10h] [rbp-180h] BYREF
  __int64 v31; // [rsp+20h] [rbp-170h]
  Ray_t v32; // [rsp+58h] [rbp-138h] BYREF
  __int64 v33; // [rsp+A8h] [rbp-E8h] BYREF
  trace_t tr; // [rsp+B0h] [rbp-E0h] BYREF

  m_flCurrentTime = 0.0;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v4->m_flCurrentTime;
  }
  m_iBeam = this->m_iBeam;
  v26 = m_flCurrentTime - this->m_flStartTime;
  if ( m_iBeam <= 23 )
  {
    v17 = CBeam::BeamCreate("sprites/lgtning.vmat", 10.0, v1);
    memset(&tr.m_hShape, 0, 24);
    tr.m_ShapeAttributes.m_nInteractsExclude = 0x700000000000000LL;
    CGameTrace::Init(&v33);
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    v27 = *&AbsOrigin->x;
    vecSrc.x = AbsOrigin->z;
    v24 = (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
    v25 = (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
    vecSrc.z = (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
    v29 = v25;
    vecDir.x = v24;
    VectorNormalize(&vecSrc.z);
    v32.m_Start.w = 0.0;
    memset(&v32.m_Delta.w, 0, 36);
    m_pParent = phys_traceline_radius.m_pParent;
    *&v32.m_Start.x = v27;
    v32.m_Delta.x = ((vecSrc.z * 128.0) + *&v27) - *&v27;
    v32.m_Delta.y = ((v29 * 128.0) + *(&v27 + 1)) - *(&v27 + 1);
    v32.m_Delta.z = ((128.0 * vecDir.x) + vecSrc.x) - vecSrc.x;
    v32.m_flRadius = m_pParent->m_Value.m_fValue;
    v32.m_Start.z = vecSrc.x;
    v32.m_IsRay = 1;
    v32.m_IsSwept = (((v32.m_Delta.x * v32.m_Delta.x) + (v32.m_Delta.y * v32.m_Delta.y))
                   + (v32.m_Delta.z * v32.m_Delta.z)) != 0.0;
    CTraceFilterSimple::CTraceFilterSimple(&vecDir.z, this, 4, 0);
    v31 |= 0x7001uLL;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &v32, &vecDir.z, &v33);
    CBeam::PointsInit(v17, &v27, &tr.startpos.y);
    v20 = v17->m_clrRender.m_Value._color[3];
    if ( v17->m_clrRender.m_Value._color[0] != 0xFF )
    {
      (*(v17->_vptr_IHandleEntity + 22))(v17, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v17->m_clrRender.m_Value._color[0] = -1;
    }
    if ( v17->m_clrRender.m_Value._color[1] != 0xB4 )
    {
      (*(v17->_vptr_IHandleEntity + 22))(v17, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v17->m_clrRender.m_Value._color[1] = -76;
    }
    if ( v17->m_clrRender.m_Value._color[2] != 100 )
    {
      (*(v17->_vptr_IHandleEntity + 22))(v17, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v17->m_clrRender.m_Value._color[2] = 100;
    }
    if ( v20 != v17->m_clrRender.m_Value._color[3] )
    {
      (*(v17->_vptr_IHandleEntity + 22))(v17, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v17->m_clrRender.m_Value._color[3] = v20;
    }
    if ( v17->m_fWidth.m_Value != 10.0 )
    {
      (*(v17->_vptr_IHandleEntity + 22))(v17, 1252, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v17->m_fWidth.m_Value = 10.0;
    }
    if ( v17->m_fSpeed.m_Value != 12.0 )
    {
      (*(v17->_vptr_IHandleEntity + 22))(v17, 1276, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v17->m_fSpeed.m_Value = 12.0;
    }
    v21 = this->m_iBeam;
    this->m_flBeamTime[v21] = CGlobalVarsBase::curtime(gpGlobals, 0);
    v22 = this->m_iBeam;
    v23 = v22;
    m_iBeam = v22 + 1;
    this->m_pBeam[v23] = v17;
    this->m_iBeam = m_iBeam;
  }
  if ( v26 < 3.0 )
  {
    v10 = 0;
    if ( m_iBeam > 0 )
    {
      do
      {
        v11 = gpGlobals;
        v12 = 0.0;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            v13 = gpGlobals->m_pfnWarningFunc;
            if ( v13 != 0 )
              (v13)(1, 0.0);
          }
          v12 = v11->m_flCurrentTime;
        }
        CBaseModelEntity::SetRenderAlpha(
          this->m_pBeam[v10],
          (((v12 - this->m_flBeamTime[v10]) / ((this->m_flStartTime + 3.0) - this->m_flBeamTime[v10])) * 255.0));
        ++v10;
      }
      while ( this->m_iBeam > v10 );
    }
    *&v14 = CGlobalVarsBase::curtime(gpGlobals, 0) + 0.1;
    CBaseEntity::SetNextThink(this, v14, v15, 0);
  }
  else
  {
    m_pBeam = this->m_pBeam;
    v7 = 0;
    if ( m_iBeam > 0 )
    {
      do
      {
        v8 = *m_pBeam;
        ++v7;
        ++m_pBeam;
        UTIL_Remove(v8);
      }
      while ( this->m_iBeam > v7 );
    }
    this->m_flStartTime = CGlobalVarsBase::curtime(gpGlobals, 0);
    this->m_iBeam = 0;
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v9, 0);
  }
}


// CTestEffect::Use  (line 994, @0x00000000021bf270, libserver.so)  // inlines: curtime
// calls: CBaseEntity::SetNextThink
void __fastcall CTestEffect::Use(
        CTestEffect *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        __int64 useType,
        float value,
        double a6)
{
  CGlobalVars *v7; // rbx
  double v8; // xmm0_8
  CGlobalVars *v9; // rbx
  float m_flCurrentTime; // xmm0_4
  FnGlobalVarsWarningFunc v11; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  v7 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, pActivator, pCaller, useType, value);
    }
    HIDWORD(v8) = 0;
    *&v8 = v7->m_flCurrentTime + 0.1;
  }
  else
  {
    *&v8 = 1036831949;
  }
  CBaseEntity::SetNextThink(this, v8, a6, 0);
  v9 = gpGlobals;
  m_flCurrentTime = 0.0;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v11 = gpGlobals->m_pfnWarningFunc;
      if ( v11 != 0 )
        (v11)(1, 0.0);
    }
    m_flCurrentTime = v9->m_flCurrentTime;
  }
  this->m_flStartTime = m_flCurrentTime;
}


// CBlood::~CBlood  (line 1003, @0x00000000021e1090, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CBlood::~CBlood(CBlood *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CBlood::~CBlood  (line 1003, @0x00000000021e10b0, libserver.so)  // inlines: ~CBlood, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CBlood::~CBlood(CBlood *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CBlood::GetEntityClass  (line 1005, @0x00000000021de840, libserver.so)
CEntityClass *__cdecl CBlood::GetEntityClass()
{
  return g_pEntityCBloodClass;
}


// CBlood::Schema_DynamicBinding  (line 1005, @0x00000000021de850, libserver.so)
// globals: CBlood::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CBlood::Schema_DynamicBinding(const CBlood *const this)
{
  return CBlood::s_pSchemaBinding;
}


// CBlood::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1005, @0x00000000021de860, libserver.so)
// globals: CBlood::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CBlood::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CBlood::CEntityInstanceEntityClass *const this)
{
  return CBlood::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CBlood::CEntityInstanceEntityClass::DestructInstance  (line 1005, @0x00000000021de870, libserver.so)  // inlines: Destruct<CBlood>
void __fastcall CBlood::CEntityInstanceEntityClass::DestructInstance(
        CBlood::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CBlood::CEntityInstanceEntityClass::FreeInstance  (line 1005, @0x00000000021de890, libserver.so)
void __fastcall CBlood::CEntityInstanceEntityClass::FreeInstance(
        CBlood::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CBlood::CEntityInstanceEntityClass::CanAllocate  (line 1005, @0x00000000021de8b0, libserver.so)
bool __fastcall CBlood::CEntityInstanceEntityClass::CanAllocate(const CBlood::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CBlood::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1005, @0x00000000021de8c0, libserver.so)
// globals: CBlood::s_pSchemaBinding
const ISchemaBinding *__fastcall CBlood::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CBlood::CEntityInstanceEntityClass *const this)
{
  return CBlood::s_pSchemaBinding;
}


// CBlood::CEntityInstanceEntityClass::AllocateInstance  (line 1005, @0x00000000021e0600, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CBlood::CEntityInstanceEntityClass::AllocateInstance(CBlood::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 800);
  memset(v1, 0, 0x320u);
  return v1;
}


// CBlood::CEntityInstanceEntityClass::ConstructInstance  (line 1005, @0x00000000021e0b60, libserver.so)  // inlines: CBlood, CPointEntity, Construct<CBlood>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CBlood::CEntityInstanceEntityClass::ConstructInstance(
        CBlood::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_401A990;
  }
  return p;
}


// CBlood::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1005, @0x00000000021e27a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CBlood::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBlood::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CBlood::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1005, @0x00000000021e27c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CBlood::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBlood::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CBlood::GetEntityClassInternal  (line 1005, @0x00000000021e7950, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "env_blood", "CBlood"
// globals: `guard variable for'CBlood::GetEntityClassInternal(void)::g_EntityCBloodClass, CBlood::GetEntityClassInternal(void)::g_EntityCBloodClass, __dso_handle, CBlood::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CBlood::GetEntityClassInfo(void)::g_EntityCBloodClassInfo, CBlood::GetEntityClassInfo(void)::g_EntityCBloodClassInfo
CEntityClass *__cdecl CBlood::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBlood::GetEntityClassInternal(void)::g_EntityCBloodClass == 0
    && __cxa_guard_acquire(&`guard variable for'CBlood::GetEntityClassInternal(void)::g_EntityCBloodClass) != 0 )
  {
    CEntityClass::CEntityClass(&CBlood::GetEntityClassInternal(void)::g_EntityCBloodClass);
    CBlood::GetEntityClassInternal(void)::g_EntityCBloodClass._vptr_CEntityClass = off_401A910;
    __cxa_guard_release(&`guard variable for'CBlood::GetEntityClassInternal(void)::g_EntityCBloodClass);
    __cxa_atexit(
      CBlood::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CBlood::GetEntityClassInternal(void)::g_EntityCBloodClass,
      &_dso_handle);
  }
  if ( g_pEntityCBloodClass != 0 )
    return &CBlood::GetEntityClassInternal(void)::g_EntityCBloodClass;
  if ( `guard variable for'CBlood::GetEntityClassInfo(void)::g_EntityCBloodClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBlood::GetEntityClassInfo(void)::g_EntityCBloodClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBlood::GetEntityClassInfo(void)::g_EntityCBloodClassInfo,
      "CBlood",
      "env_blood",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBlood::GetEntityClassInfo(void)::g_EntityCBloodClassInfo);
  }
  CBlood::GetEntityClassInternal(void)::g_EntityCBloodClass.m_pClassInfo = &CBlood::GetEntityClassInfo(void)::g_EntityCBloodClassInfo;
  CBlood::GetEntityClassInternal(void)::g_EntityCBloodClass.m_pBaseClassInfo = CBlood::GetEntityClassInfo(void)::g_EntityCBloodClassInfo.m_pBaseClassInfo;
  g_pEntityCBloodClass = &CBlood::GetEntityClassInternal(void)::g_EntityCBloodClass;
  CBlood::GetEntityClassInfo(void)::g_EntityCBloodClassInfo.m_pClass = &CBlood::GetEntityClassInternal(void)::g_EntityCBloodClass;
  CBlood::GetEntityClassInternal(void)::g_EntityCBloodClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCBloodClass->m_pComponentOverrides = 0;
  return &CBlood::GetEntityClassInternal(void)::g_EntityCBloodClass;
}


// CBlood::GetDataDescMap  (line 1034, @0x00000000021badd0, libserver.so)
// globals: CBlood::m_DataMap
datamap_t *__fastcall CBlood::GetDataDescMap(CBlood *const this)
{
  return &CBlood::m_DataMap;
}


// CBlood::AddDatadescMetadataKeys  (line 1034, @0x00000000021c8500, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CBlood::GetEntityClass(void)
void __fastcall CBlood::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CBlood::GetEntityClass);
}


// CBlood::GetBaseMap  (line 1034, @0x00000000021c8520, libserver.so)
datamap_t *__cdecl CBlood::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CBlood>  (line 1034, @0x00000000021c8530, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CBlood"
// globals: `guard variable for'DataMapInit<CBlood>(CBlood *)::nameHolder, CBlood::GetEntityClass(void), CBlood::m_DataMap, DataMapInit<CBlood>(CBlood *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CBlood>(CBlood *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CBlood>(CBlood *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBlood>(CBlood *)::nameHolder) != 0 )
  {
    DataMapInit<CBlood>(CBlood *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBlood>(CBlood *)::nameHolder.m_pszBase = "CBlood";
    DataMapInit<CBlood>(CBlood *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBlood>(CBlood *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBlood>(CBlood *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBlood>(CBlood *)::nameHolder.m_nLenBase = 6;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBlood>(CBlood *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBlood>(CBlood *)::nameHolder,
      &_dso_handle);
  }
  CBlood::m_DataMap.dataNumFields = 4;
  CBlood::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  CBlood::m_DataMap.dataDesc = &DataMapInit<CBlood>(CBlood *)::dataDesc[1];
  AddDatadescMetadataKeys(&CBlood::m_DataMap, CBlood::GetEntityClass);
  return &CBlood::m_DataMap;
}


// CBlood::Precache  (line 1057, @0x00000000021dddf0, libserver.so)  // inlines: Precache, UTIL_BloodSprayPrecache
// calls: CEntityInstance::Precache, PrecacheEffect
// strings: "bloodspray"
void __fastcall CBlood::Precache(CBlood *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  PrecacheEffect("bloodspray", 0);
}


// CBlood::Spawn  (line 1070, @0x00000000021c2c40, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, Get<int>, GetValue, GetValue<int>, Min<long long unsigned int>, Min<unsigned int>, QAngle, SetColor, atoi, operator[]
// calls: CPointEntity::Spawn, CEntityKeyValues::HasValue, AngleVectors, CBaseEntity::SetMoveType, strtol, VariantFieldTypeName, Warning
// strings: "No conversion from %s to int now\n"
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_21C2D5E
void __fastcall CBlood::Spawn(CBlood *const this, const CEntityKeyValues *pKeyValues)
{
  vec_t y; // xmm1_4
  vec_t x; // xmm2_4
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v10; // rdx
  CEntityVariant *p_m_value; // rcx
  int16 m_type; // ax
  const char *m_uint64; // rax
  const char *v14; // rax
  QAngle angSprayDir; // [rsp+0h] [rbp-20h] BYREF

  CPointEntity::Spawn(this, pKeyValues);
  if ( CEntityKeyValues::HasValue(pKeyValues, 189329514) )
  {
    m_nCount = pKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount > 0 )
    {
      m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
      for ( i = 0; m_nCount > i; ++i )
      {
        if ( m_nAllocated != 0 )
        {
          m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( m_nAllocated > 9 )
            m_pElements = pKeyValues->m_keyHashes.m_pElements;
          if ( m_pElements[i] == 189329514 )
          {
LABEL_11:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v10 = pKeyValues->m_keyValues.m_pElements;
            else
              v10 = 0;
            p_m_value = &v10[i].m_value;
            goto LABEL_15;
          }
        }
        else if ( *(4 * i) == 189329514 )
        {
          goto LABEL_11;
        }
      }
    }
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
LABEL_15:
    m_type = p_m_value->m_type;
    switch ( m_type )
    {
      case 0:
        break;
      case 1:
        LODWORD(m_uint64) = p_m_value->m_float;
        goto LABEL_17;
      case 5:
        LODWORD(m_uint64) = p_m_value->m_int;
        goto LABEL_17;
      case 6:
        LODWORD(m_uint64) = p_m_value->m_char;
        goto LABEL_17;
      case 26:
        m_uint64 = p_m_value->m_uint64;
        if ( p_m_value->m_int64 > 0x7FFFFFFF )
          break;
        if ( m_uint64 < 0xFFFFFFFF80000000LL )
          LODWORD(m_uint64) = 0x80000000;
LABEL_17:
        if ( m_uint64 == 1 )
          this->m_Color = 1;
        break;
      case 30:
        LODWORD(m_uint64) = strtol(p_m_value->m_pszString, 0, 10);
        goto LABEL_17;
      case 33:
        m_uint64 = p_m_value->m_uint64;
        if ( p_m_value->m_uint64 <= 0x7FFFFFFE )
          goto LABEL_17;
        break;
      case 34:
        LODWORD(m_uint64) = p_m_value->m_float64;
        goto LABEL_17;
      case 37:
        LODWORD(m_uint64) = p_m_value->m_int;
        if ( p_m_value->m_int <= 0x7FFFFFFEu )
          goto LABEL_17;
        break;
      default:
        v14 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to int now\n", v14);
        break;
    }
  }
  y = this->m_vecSprayDir.y;
  x = this->m_vecSprayDir.x;
  angSprayDir.z = this->m_vecSprayDir.z;
  angSprayDir.y = y;
  angSprayDir.x = x;
  AngleVectors(&angSprayDir, &this->m_vecSprayDir, 0, 0);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  this->m_Color = 0;
}


// CBlood::Direction  (line 1096, @0x00000000021c8600, libserver.so)
// calls: UTIL_RandomBloodVector
// callers: CBlood::InputEmitBlood
Vector __fastcall CBlood::Direction(CBlood *const this)
{
  Vector v3; // 0:kr00_12.12
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( (this->m_spawnflags.m_Value & 1) != 0 )
  {
    v3 = UTIL_RandomBloodVector();
    *&result.x = *&v3.x;
    result.z = v3.z;
  }
  else
  {
    *&result.x = *&this->m_vecSprayDir.x;
    result.z = this->m_vecSprayDir.z;
  }
  return result;
}


// CBlood::BloodPosition  (line 1105, @0x00000000021c8660, libserver.so)  // inlines: ToBasePlayer, VectorAdd, operator+
// calls: CBaseEntity::GetLocalOrigin, UTIL_GetLocalPlayer
// callers: CBlood::InputEmitBlood
Vector __fastcall CBlood::BloodPosition(CBlood *const this, CBaseEntity *pActivator)
{
  CBasePlayer *LocalPlayer; // rbx
  __m128i v6; // xmm0
  float v7; // r12d
  double v8; // xmm0_8
  float v9; // xmm1_4
  float v10; // [rsp+8h] [rbp-48h]
  float v11; // [rsp+Ch] [rbp-44h]
  const Vector v12; // [rsp+30h] [rbp-20h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( (this->m_spawnflags.m_Value & 4) == 0 )
    goto LABEL_5;
  LocalPlayer = pActivator;
  if ( pActivator != 0 && (*(pActivator->_vptr_IHandleEntity + 140))(pActivator) != 0 )
  {
    if ( (*(LocalPlayer->_vptr_IHandleEntity + 140))(LocalPlayer) == 0 )
      goto LABEL_5;
  }
  else
  {
    LocalPlayer = UTIL_GetLocalPlayer();
  }
  if ( LocalPlayer != 0 )
  {
    v10 = (*(*random_valve + 8LL))(random_valve, -10.0, 10.0);
    v11 = (*(*random_valve + 8LL))(random_valve, -10.0, 10.0);
    *v6.m128i_i64 = (*(*random_valve + 8LL))(random_valve, -10.0, 10.0);
    v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
    v8 = (*(LocalPlayer->_vptr_IHandleEntity + 164))(LocalPlayer);
    v12.y = v11 + *(&v8 + 1);
    v12.z = v9 + v10;
    v12.x = v7 + *&v8;
    goto LABEL_6;
  }
LABEL_5:
  v12 = *CBaseEntity::GetLocalOrigin(this);
LABEL_6:
  *&result.x = *&v12.x;
  result.z = v12.z;
  return result;
}


// UTIL_BloodSprayPrecache  (line 1133, @0x00000000021c8790, libserver.so)
// calls: PrecacheEffect
// strings: "bloodspray"
void __cdecl UTIL_BloodSprayPrecache()
{
  PrecacheEffect("bloodspray", 0);
}


// UTIL_BloodSpray  (line 1138, @0x00000000021c87b0, libserver.so)  // inlines: Set, operator!=, operator=, operator=<float>, operator=<int>
// calls: CEffectData::CEffectData, DispatchEffect
// callers: CBlood::InputEmitBlood
// strings: "bloodspray"
void __fastcall UTIL_BloodSpray(const Vector *const pos, const Vector *const dir, int color, int amount, int flags)
{
  unsigned __int8 v5; // bl
  unsigned __int8 v8; // r14
  float y; // xmm2_4
  float z; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  bool v14; // zf
  CEffectData data; // [rsp+10h] [rbp-A0h] BYREF

  v5 = color;
  if ( color == -1 )
    return;
  v8 = flags;
  CEffectData::CEffectData(&data);
  y = pos->y;
  if ( pos->x != data.m_vOrigin.m_Value.x )
  {
    z = pos->z;
LABEL_7:
    data.m_vOrigin.m_Value.x = pos->x;
    data.m_vOrigin.m_Value.y = y;
    data.m_vOrigin.m_Value.z = z;
    goto LABEL_8;
  }
  z = pos->z;
  if ( y != data.m_vOrigin.m_Value.y || z != data.m_vOrigin.m_Value.z )
    goto LABEL_7;
LABEL_8:
  v11 = dir->y;
  if ( dir->x != data.m_vNormal.m_Value.x )
  {
    v12 = dir->z;
LABEL_21:
    data.m_vNormal.m_Value.x = dir->x;
    v13 = amount;
    data.m_vNormal.m_Value.y = v11;
    data.m_vNormal.m_Value.z = v12;
    v14 = amount == data.m_flScale.m_Value;
    goto LABEL_12;
  }
  v12 = dir->z;
  if ( v11 != data.m_vNormal.m_Value.y || v12 != data.m_vNormal.m_Value.z )
    goto LABEL_21;
  v13 = amount;
  v14 = amount == data.m_flScale.m_Value;
LABEL_12:
  if ( !v14 )
    data.m_flScale.m_Value = v13;
  if ( v8 != data.m_fFlags.m_Value )
    data.m_fFlags.m_Value = v8;
  if ( v5 != data.m_nColor.m_Value )
    data.m_nColor.m_Value = v5;
  DispatchEffect("bloodspray", &data);
}


// CBlood::InputEmitBlood  (line 1157, @0x00000000021c88f0, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, GetFloat, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator*, operator+
// calls: CBlood::Direction, CBlood::BloodPosition, UTIL_BloodStream, CBaseEntity::GetAbsOrigin, UTIL_BloodSpray, UTIL_BloodDrips, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, UTIL_BloodDecalTrace
void __fastcall CBlood::InputEmitBlood(CBlood *const this, inputdata_t *const inputdata)
{
  int m_Color; // r15d
  unsigned int m_Value; // eax
  int v6; // r14d
  int v7; // r12d
  int v8; // r15d
  const Vector *AbsOrigin; // rax
  float m_flAmount; // xmm1_4
  float m_fValue; // xmm7_4
  int amount; // [rsp+Ch] [rbp-194h]
  CTraceFilterSimple v13; // [rsp+30h] [rbp-170h] BYREF
  Ray_t origin; // [rsp+70h] [rbp-130h] BYREF
  trace_t tr; // [rsp+C0h] [rbp-E0h] BYREF
  Vector v16; // 0:kr54_12.12
  Vector v17; // 0:kr60_12.12

  m_Color = this->m_Color;
  amount = this->m_flAmount;
  if ( (this->m_spawnflags.m_Value & 2) != 0 )
  {
    tr.startpos = CBlood::Direction(this);
    origin.m_Start.Vector = CBlood::BloodPosition(this, inputdata->pActivator);
    UTIL_BloodStream(&origin.m_Start, &tr.startpos, m_Color, amount);
    m_Value = this->m_spawnflags.m_Value;
    if ( (m_Value & 8) == 0 )
      goto LABEL_3;
  }
  else
  {
    tr.startpos = CBlood::Direction(this);
    origin.m_Start.Vector = CBlood::BloodPosition(this, inputdata->pActivator);
    UTIL_BloodDrips(&origin.m_Start, &tr.startpos, m_Color, amount);
    m_Value = this->m_spawnflags.m_Value;
    if ( (m_Value & 8) == 0 )
      goto LABEL_3;
  }
  v16 = CBlood::Direction(this);
  v17 = CBlood::BloodPosition(this, inputdata->pActivator);
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  m_flAmount = this->m_flAmount;
  m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  origin.m_Start.w = 0.0;
  origin.m_Delta.x = (((v16.x * m_flAmount) + (v16.x * m_flAmount)) + v17.x) - v17.x;
  origin.m_Delta.y = (((v16.y * m_flAmount) + (v16.y * m_flAmount)) + v17.y) - v17.y;
  origin.m_Delta.z = (((m_flAmount * v16.z) + (m_flAmount * v16.z)) + v17.z) - v17.z;
  memset(&origin.m_Delta.w, 0, 36);
  origin.m_flRadius = m_fValue;
  origin.m_Start.Vector = v17;
  origin.m_IsSwept = (((origin.m_Delta.x * origin.m_Delta.x) + (origin.m_Delta.y * origin.m_Delta.y))
                    + (origin.m_Delta.z * origin.m_Delta.z)) != 0.0;
  origin.m_IsRay = 1;
  CTraceFilterSimple::CTraceFilterSimple(&v13, 0, 4, 0);
  v13.m_attr.m_nInteractsWith |= 0x7001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &origin, &v13, &tr);
  if ( tr.fraction != 1.0 )
    UTIL_BloodDecalTrace(&tr, this->m_Color);
  m_Value = this->m_spawnflags.m_Value;
LABEL_3:
  if ( (m_Value & 0x70) != 0 )
  {
    v6 = this->m_Color;
    v7 = (m_Value >> 2) & 4;
    v8 = this->m_flAmount;
    if ( (m_Value & 0x20) != 0 )
      v7 = (m_Value >> 2) & 4 | 1;
    if ( (m_Value & 0x40) != 0 )
      v7 |= 2u;
    tr.startpos = CBlood::Direction(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    UTIL_BloodSpray(AbsOrigin, &tr.startpos, v6, v8, v7);
  }
}


// CEnvFunnel::~CEnvFunnel  (line 1210, @0x00000000021e1360, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CEnvFunnel::~CEnvFunnel(CEnvFunnel *const this)
{
  this->_vptr_IHandleEntity = &off_401B0B0;
  CBaseEntity::~CBaseEntity(this);
}


// CEnvFunnel::~CEnvFunnel  (line 1210, @0x00000000021e1380, libserver.so)  // inlines: ~CEnvFunnel
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CEnvFunnel::~CEnvFunnel(CEnvFunnel *const this)
{
  this->_vptr_IHandleEntity = &off_401B0B0;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvFunnel::GetEntityClass  (line 1212, @0x00000000021de8d0, libserver.so)
CEntityClass *__cdecl CEnvFunnel::GetEntityClass()
{
  return g_pEntityCEnvFunnelClass;
}


// CEnvFunnel::Schema_DynamicBinding  (line 1212, @0x00000000021de8e0, libserver.so)
// globals: CEnvFunnel::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvFunnel::Schema_DynamicBinding(const CEnvFunnel *const this)
{
  return CEnvFunnel::s_pSchemaBinding;
}


// CEnvFunnel::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1212, @0x00000000021de8f0, libserver.so)
// globals: CEnvFunnel::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvFunnel::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvFunnel::CEntityInstanceEntityClass *const this)
{
  return CEnvFunnel::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvFunnel::CEntityInstanceEntityClass::DestructInstance  (line 1212, @0x00000000021de900, libserver.so)  // inlines: Destruct<CEnvFunnel>
void __fastcall CEnvFunnel::CEntityInstanceEntityClass::DestructInstance(
        CEnvFunnel::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvFunnel::CEntityInstanceEntityClass::FreeInstance  (line 1212, @0x00000000021de920, libserver.so)
void __fastcall CEnvFunnel::CEntityInstanceEntityClass::FreeInstance(
        CEnvFunnel::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvFunnel::CEntityInstanceEntityClass::CanAllocate  (line 1212, @0x00000000021de940, libserver.so)
bool __fastcall CEnvFunnel::CEntityInstanceEntityClass::CanAllocate(
        const CEnvFunnel::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvFunnel::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1212, @0x00000000021de950, libserver.so)
// globals: CEnvFunnel::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvFunnel::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvFunnel::CEntityInstanceEntityClass *const this)
{
  return CEnvFunnel::s_pSchemaBinding;
}


// CEnvFunnel::CEntityInstanceEntityClass::AllocateInstance  (line 1212, @0x00000000021e0640, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvFunnel::CEntityInstanceEntityClass::AllocateInstance(
        CEnvFunnel::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CEnvFunnel::CEntityInstanceEntityClass::ConstructInstance  (line 1212, @0x00000000021e0b90, libserver.so)  // inlines: CEnvFunnel, Construct<CEnvFunnel>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CEnvFunnel::CEntityInstanceEntityClass::ConstructInstance(
        CEnvFunnel::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_401B0B0;
  }
  return p;
}


// CEnvFunnel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1212, @0x00000000021e2e80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvFunnel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvFunnel::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CEnvFunnel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1212, @0x00000000021e2ea0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvFunnel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvFunnel::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvFunnel::GetEntityClassInternal  (line 1212, @0x00000000021e7aa0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "env_funnel", "CEnvFunnel"
// globals: `guard variable for'CEnvFunnel::GetEntityClassInternal(void)::g_EntityCEnvFunnelClass, CEnvFunnel::GetEntityClassInternal(void)::g_EntityCEnvFunnelClass, __dso_handle, CEnvFunnel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvFunnel::GetEntityClassInfo(void)::g_EntityCEnvFunnelClassInfo, CEnvFunnel::GetEntityClassInfo(void)::g_EntityCEnvFunnelClassInfo
CEntityClass *__cdecl CEnvFunnel::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvFunnel::GetEntityClassInternal(void)::g_EntityCEnvFunnelClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvFunnel::GetEntityClassInternal(void)::g_EntityCEnvFunnelClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvFunnel::GetEntityClassInternal(void)::g_EntityCEnvFunnelClass);
    CEnvFunnel::GetEntityClassInternal(void)::g_EntityCEnvFunnelClass._vptr_CEntityClass = off_401B030;
    __cxa_guard_release(&`guard variable for'CEnvFunnel::GetEntityClassInternal(void)::g_EntityCEnvFunnelClass);
    __cxa_atexit(
      CEnvFunnel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvFunnel::GetEntityClassInternal(void)::g_EntityCEnvFunnelClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvFunnelClass != 0 )
    return &CEnvFunnel::GetEntityClassInternal(void)::g_EntityCEnvFunnelClass;
  if ( `guard variable for'CEnvFunnel::GetEntityClassInfo(void)::g_EntityCEnvFunnelClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvFunnel::GetEntityClassInfo(void)::g_EntityCEnvFunnelClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvFunnel::GetEntityClassInfo(void)::g_EntityCEnvFunnelClassInfo,
      "CEnvFunnel",
      "env_funnel",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvFunnel::GetEntityClassInfo(void)::g_EntityCEnvFunnelClassInfo);
  }
  CEnvFunnel::GetEntityClassInternal(void)::g_EntityCEnvFunnelClass.m_pClassInfo = &CEnvFunnel::GetEntityClassInfo(void)::g_EntityCEnvFunnelClassInfo;
  CEnvFunnel::GetEntityClassInternal(void)::g_EntityCEnvFunnelClass.m_pBaseClassInfo = CEnvFunnel::GetEntityClassInfo(void)::g_EntityCEnvFunnelClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvFunnelClass = &CEnvFunnel::GetEntityClassInternal(void)::g_EntityCEnvFunnelClass;
  CEnvFunnel::GetEntityClassInfo(void)::g_EntityCEnvFunnelClassInfo.m_pClass = &CEnvFunnel::GetEntityClassInternal(void)::g_EntityCEnvFunnelClass;
  CEnvFunnel::GetEntityClassInternal(void)::g_EntityCEnvFunnelClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnvFunnelClass->m_pComponentOverrides = 0;
  return &CEnvFunnel::GetEntityClassInternal(void)::g_EntityCEnvFunnelClass;
}


// CEnvFunnel::GetDataDescMap  (line 1224, @0x00000000021bade0, libserver.so)
// globals: CEnvFunnel::m_DataMap
datamap_t *__fastcall CEnvFunnel::GetDataDescMap(CEnvFunnel *const this)
{
  return &CEnvFunnel::m_DataMap;
}


// CEnvFunnel::AddDatadescMetadataKeys  (line 1224, @0x00000000021c8c80, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvFunnel::GetEntityClass(void)
void __fastcall CEnvFunnel::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvFunnel::GetEntityClass);
}


// CEnvFunnel::GetBaseMap  (line 1224, @0x00000000021c8ca0, libserver.so)
datamap_t *__cdecl CEnvFunnel::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CEnvFunnel>  (line 1224, @0x00000000021c8cb0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CEnvFunnel"
// globals: `guard variable for'DataMapInit<CEnvFunnel>(CEnvFunnel *)::nameHolder, CEnvFunnel::GetEntityClass(void), CEnvFunnel::m_DataMap, DataMapInit<CEnvFunnel>(CEnvFunnel *)::dataDesc, DataMapInit<CEnvFunnel>(CEnvFunnel *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvFunnel>(CEnvFunnel *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEnvFunnel>(CEnvFunnel *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvFunnel>(CEnvFunnel *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvFunnel>(CEnvFunnel *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvFunnel>(CEnvFunnel *)::nameHolder.m_pszBase = "CEnvFunnel";
    DataMapInit<CEnvFunnel>(CEnvFunnel *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvFunnel>(CEnvFunnel *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvFunnel>(CEnvFunnel *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvFunnel>(CEnvFunnel *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvFunnel>(CEnvFunnel *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvFunnel>(CEnvFunnel *)::nameHolder,
      &_dso_handle);
  }
  CEnvFunnel::m_DataMap.dataNumFields = 1;
  CEnvFunnel::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CEnvFunnel::m_DataMap.dataDesc = DataMapInit<CEnvFunnel>(CEnvFunnel *)::dataDesc;
  AddDatadescMetadataKeys(&CEnvFunnel::m_DataMap, CEnvFunnel::GetEntityClass);
  return &CEnvFunnel::m_DataMap;
}


// CEnvFunnel::Precache  (line 1229, @0x00000000021dde10, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache
void __fastcall CEnvFunnel::Precache(CEnvFunnel *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
}


// CEnvFunnel::Use  (line 1234, @0x00000000021bfb90, libserver.so)  // inlines: CBroadcastRecipientFilter, HasSpawnFlags, curtime, ~CBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CBaseEntity::GetAbsOrigin, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
void __fastcall CEnvFunnel::Use(
        CEnvFunnel *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  unsigned int v6; // r13d
  void (__fastcall *v7)(ITempEntsSystem *, CBroadcastRecipientFilter *, const Vector *, _QWORD, double); // r15
  const Vector *AbsOrigin; // rax
  double v9; // xmm1_8
  CGlobalVars *v10; // r13
  double v11; // xmm0_8
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CBroadcastRecipientFilter filter; // [rsp+0h] [rbp-170h] BYREF
  unsigned __int64 v14; // [rsp+138h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  v6 = this->m_spawnflags.m_Value & 1;
  v7 = *(te->_vptr_IPredictionSystem + 19);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v7(te, &filter, AbsOrigin, v6, 0.0);
  CBaseEntity::ThinkSet(this, CBaseEntity::SUB_Remove, 0.0, 0, 0);
  v10 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    *&v11 = LODWORD(v10->m_flCurrentTime);
  }
  else
  {
    v11 = 0.0;
  }
  CBaseEntity::SetNextThink(this, v11, v9, 0);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CEnvFunnel::Spawn  (line 1244, @0x00000000021bb8b0, libserver.so)
// calls: CBaseEntity::Spawn, CBaseEntity::AddEffects
void __fastcall CEnvFunnel::Spawn(CEnvFunnel *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseEntity::Spawn(this, pKeyValues);
  CBaseEntity::AddEffects(this, 32);
}


// CEnvBeverage::~CEnvBeverage  (line 1255, @0x00000000021e13b0, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CEnvBeverage::~CEnvBeverage(CEnvBeverage *const this)
{
  this->_vptr_IHandleEntity = &off_401B7D0;
  CBaseEntity::~CBaseEntity(this);
}


// CEnvBeverage::~CEnvBeverage  (line 1255, @0x00000000021e13d0, libserver.so)  // inlines: ~CEnvBeverage
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CEnvBeverage::~CEnvBeverage(CEnvBeverage *const this)
{
  this->_vptr_IHandleEntity = &off_401B7D0;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvBeverage::GetEntityClass  (line 1257, @0x00000000021de960, libserver.so)
CEntityClass *__cdecl CEnvBeverage::GetEntityClass()
{
  return g_pEntityCEnvBeverageClass;
}


// CEnvBeverage::Schema_DynamicBinding  (line 1257, @0x00000000021de970, libserver.so)
// globals: CEnvBeverage::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvBeverage::Schema_DynamicBinding(const CEnvBeverage *const this)
{
  return CEnvBeverage::s_pSchemaBinding;
}


// CEnvBeverage::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1257, @0x00000000021de980, libserver.so)
// globals: CEnvBeverage::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvBeverage::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvBeverage::CEntityInstanceEntityClass *const this)
{
  return CEnvBeverage::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvBeverage::CEntityInstanceEntityClass::DestructInstance  (line 1257, @0x00000000021de990, libserver.so)  // inlines: Destruct<CEnvBeverage>
void __fastcall CEnvBeverage::CEntityInstanceEntityClass::DestructInstance(
        CEnvBeverage::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvBeverage::CEntityInstanceEntityClass::FreeInstance  (line 1257, @0x00000000021de9b0, libserver.so)
void __fastcall CEnvBeverage::CEntityInstanceEntityClass::FreeInstance(
        CEnvBeverage::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvBeverage::CEntityInstanceEntityClass::CanAllocate  (line 1257, @0x00000000021de9d0, libserver.so)
bool __fastcall CEnvBeverage::CEntityInstanceEntityClass::CanAllocate(
        const CEnvBeverage::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvBeverage::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1257, @0x00000000021de9e0, libserver.so)
// globals: CEnvBeverage::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvBeverage::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvBeverage::CEntityInstanceEntityClass *const this)
{
  return CEnvBeverage::s_pSchemaBinding;
}


// CEnvBeverage::CEntityInstanceEntityClass::AllocateInstance  (line 1257, @0x00000000021e0680, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvBeverage::CEntityInstanceEntityClass::AllocateInstance(
        CEnvBeverage::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 784);
  memset(v1, 0, 0x310u);
  return v1;
}


// CEnvBeverage::CEntityInstanceEntityClass::ConstructInstance  (line 1257, @0x00000000021e0bc0, libserver.so)  // inlines: CEnvBeverage, Construct<CEnvBeverage>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CEnvBeverage::CEntityInstanceEntityClass::ConstructInstance(
        CEnvBeverage::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_401B7D0;
  }
  return p;
}


// CEnvBeverage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1257, @0x00000000021e2ed0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvBeverage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvBeverage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CEnvBeverage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1257, @0x00000000021e2ef0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvBeverage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvBeverage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvBeverage::GetEntityClassInternal  (line 1257, @0x00000000021e7bf0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "env_beverage", "CEnvBeverage"
// globals: `guard variable for'CEnvBeverage::GetEntityClassInternal(void)::g_EntityCEnvBeverageClass, CEnvBeverage::GetEntityClassInternal(void)::g_EntityCEnvBeverageClass, __dso_handle, CEnvBeverage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvBeverage::GetEntityClassInfo(void)::g_EntityCEnvBeverageClassInfo, CEnvBeverage::GetEntityClassInfo(void)::g_EntityCEnvBeverageClassInfo
CEntityClass *__cdecl CEnvBeverage::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvBeverage::GetEntityClassInternal(void)::g_EntityCEnvBeverageClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvBeverage::GetEntityClassInternal(void)::g_EntityCEnvBeverageClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvBeverage::GetEntityClassInternal(void)::g_EntityCEnvBeverageClass);
    CEnvBeverage::GetEntityClassInternal(void)::g_EntityCEnvBeverageClass._vptr_CEntityClass = off_401B750;
    __cxa_guard_release(&`guard variable for'CEnvBeverage::GetEntityClassInternal(void)::g_EntityCEnvBeverageClass);
    __cxa_atexit(
      CEnvBeverage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvBeverage::GetEntityClassInternal(void)::g_EntityCEnvBeverageClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvBeverageClass != 0 )
    return &CEnvBeverage::GetEntityClassInternal(void)::g_EntityCEnvBeverageClass;
  if ( `guard variable for'CEnvBeverage::GetEntityClassInfo(void)::g_EntityCEnvBeverageClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvBeverage::GetEntityClassInfo(void)::g_EntityCEnvBeverageClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvBeverage::GetEntityClassInfo(void)::g_EntityCEnvBeverageClassInfo,
      "CEnvBeverage",
      "env_beverage",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvBeverage::GetEntityClassInfo(void)::g_EntityCEnvBeverageClassInfo);
  }
  CEnvBeverage::GetEntityClassInternal(void)::g_EntityCEnvBeverageClass.m_pClassInfo = &CEnvBeverage::GetEntityClassInfo(void)::g_EntityCEnvBeverageClassInfo;
  CEnvBeverage::GetEntityClassInternal(void)::g_EntityCEnvBeverageClass.m_pBaseClassInfo = CEnvBeverage::GetEntityClassInfo(void)::g_EntityCEnvBeverageClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvBeverageClass = &CEnvBeverage::GetEntityClassInternal(void)::g_EntityCEnvBeverageClass;
  CEnvBeverage::GetEntityClassInfo(void)::g_EntityCEnvBeverageClassInfo.m_pClass = &CEnvBeverage::GetEntityClassInternal(void)::g_EntityCEnvBeverageClass;
  CEnvBeverage::GetEntityClassInternal(void)::g_EntityCEnvBeverageClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnvBeverageClass->m_pComponentOverrides = 0;
  return &CEnvBeverage::GetEntityClassInternal(void)::g_EntityCEnvBeverageClass;
}


// CEnvBeverage::Precache  (line 1274, @0x00000000021dde20, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheModel
// strings: "models/can.vmdl"
void __fastcall CEnvBeverage::Precache(CEnvBeverage *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  CBaseEntity::PrecacheModel("models/can.vmdl", pContext->m_pManifest);
}


// CEnvBeverage::GetDataDescMap  (line 1280, @0x00000000021badf0, libserver.so)
// globals: CEnvBeverage::m_DataMap
datamap_t *__fastcall CEnvBeverage::GetDataDescMap(CEnvBeverage *const this)
{
  return &CEnvBeverage::m_DataMap;
}


// CEnvBeverage::AddDatadescMetadataKeys  (line 1280, @0x00000000021c8d80, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvBeverage::GetEntityClass(void)
void __fastcall CEnvBeverage::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvBeverage::GetEntityClass);
}


// CEnvBeverage::GetBaseMap  (line 1280, @0x00000000021c8da0, libserver.so)
datamap_t *__cdecl CEnvBeverage::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CEnvBeverage>  (line 1280, @0x00000000021c8db0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CEnvBeverage"
// globals: `guard variable for'DataMapInit<CEnvBeverage>(CEnvBeverage *)::nameHolder, CEnvBeverage::GetEntityClass(void), CEnvBeverage::m_DataMap, DataMapInit<CEnvBeverage>(CEnvBeverage *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvBeverage>(CEnvBeverage *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEnvBeverage>(CEnvBeverage *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvBeverage>(CEnvBeverage *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvBeverage>(CEnvBeverage *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvBeverage>(CEnvBeverage *)::nameHolder.m_pszBase = "CEnvBeverage";
    DataMapInit<CEnvBeverage>(CEnvBeverage *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvBeverage>(CEnvBeverage *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvBeverage>(CEnvBeverage *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvBeverage>(CEnvBeverage *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvBeverage>(CEnvBeverage *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvBeverage>(CEnvBeverage *)::nameHolder,
      &_dso_handle);
  }
  CEnvBeverage::m_DataMap.dataNumFields = 3;
  CEnvBeverage::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CEnvBeverage::m_DataMap.dataDesc = &DataMapInit<CEnvBeverage>(CEnvBeverage *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvBeverage::m_DataMap, CEnvBeverage::GetEntityClass);
  return &CEnvBeverage::m_DataMap;
}


// CEnvBeverage::Use  (line 1287, @0x00000000021bbd50, libserver.so)
// calls: CBaseEntity::GetHealth, CBaseEntity::GetLocalAngles, CBaseEntity::GetLocalOrigin, CBaseEntity::Create, CBaseAnimating::SetSkin
// strings: "item_sodacan"
void __fastcall CEnvBeverage::Use(
        CEnvBeverage *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  const QAngle *LocalAngles; // r12
  const Vector *LocalOrigin; // rax
  CBaseAnimating *v8; // rax
  int m_nBeverageType; // esi
  CBaseAnimating *v10; // r12
  int (**vptr_IHandleEntity)(...); // rax
  int (*v12)(...); // r12
  int Health; // eax
  int v14; // eax

  if ( !this->m_CanInDispenser && CBaseEntity::GetHealth(this) > 0 )
  {
    LocalAngles = CBaseEntity::GetLocalAngles(this);
    LocalOrigin = CBaseEntity::GetLocalOrigin(this);
    v8 = CBaseEntity::Create("item_sodacan", LocalOrigin, LocalAngles, this);
    m_nBeverageType = this->m_nBeverageType;
    v10 = v8;
    if ( m_nBeverageType == 6 )
    {
      v14 = (*(*random_valve + 16LL))(random_valve, 0, 5);
      CBaseAnimating::SetSkin(v10, v14);
    }
    else
    {
      CBaseAnimating::SetSkin(v8, m_nBeverageType);
    }
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    this->m_CanInDispenser = 1;
    v12 = vptr_IHandleEntity[157];
    Health = CBaseEntity::GetHealth(this);
    v12(this, (Health - 1));
  }
}


// CEnvBeverage::InputActivate  (line 1314, @0x00000000021bae00, libserver.so)
void __fastcall CEnvBeverage::InputActivate(CEnvBeverage *const this, inputdata_t *const inputdata)
{
  (*(this->_vptr_IHandleEntity + 108))(this, inputdata->pActivator, inputdata->pCaller, 1, 0.0);
}


// CEnvBeverage::Spawn  (line 1319, @0x00000000021bb8e0, libserver.so)
// calls: CBaseEntity::Spawn, CBaseEntity::AddEffects, CBaseEntity::GetHealth
void __fastcall CEnvBeverage::Spawn(CEnvBeverage *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseEntity::Spawn(this, pKeyValues);
  CBaseEntity::AddEffects(this, 32);
  this->m_CanInDispenser = 0;
  if ( CBaseEntity::GetHealth(this) == 0 )
    (*(this->_vptr_IHandleEntity + 157))(this, 10);
}


// CItemSoda::~CItemSoda  (line 1335, @0x00000000021e1580, libserver.so)  // inlines: ~CBaseAnimating
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CItemSoda::~CItemSoda(CItemSoda *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CItemSoda::~CItemSoda  (line 1335, @0x00000000021e15c0, libserver.so)  // inlines: ~CBaseAnimating, ~CItemSoda
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CItemSoda::~CItemSoda(CItemSoda *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CItemSoda::GetEntityClass  (line 1337, @0x00000000021de9f0, libserver.so)
CEntityClass *__cdecl CItemSoda::GetEntityClass()
{
  return g_pEntityCItemSodaClass;
}


// CItemSoda::Schema_DynamicBinding  (line 1337, @0x00000000021dea00, libserver.so)
// globals: CItemSoda::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CItemSoda::Schema_DynamicBinding(const CItemSoda *const this)
{
  return CItemSoda::s_pSchemaBinding;
}


// CItemSoda::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1337, @0x00000000021dea10, libserver.so)
// globals: CItemSoda::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CItemSoda::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CItemSoda::CEntityInstanceEntityClass *const this)
{
  return CItemSoda::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CItemSoda::CEntityInstanceEntityClass::DestructInstance  (line 1337, @0x00000000021dea20, libserver.so)  // inlines: Destruct<CItemSoda>
void __fastcall CItemSoda::CEntityInstanceEntityClass::DestructInstance(
        CItemSoda::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CItemSoda::CEntityInstanceEntityClass::FreeInstance  (line 1337, @0x00000000021dea40, libserver.so)
void __fastcall CItemSoda::CEntityInstanceEntityClass::FreeInstance(
        CItemSoda::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CItemSoda::CEntityInstanceEntityClass::CanAllocate  (line 1337, @0x00000000021dea60, libserver.so)
bool __fastcall CItemSoda::CEntityInstanceEntityClass::CanAllocate(
        const CItemSoda::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CItemSoda::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1337, @0x00000000021dea70, libserver.so)
// globals: CItemSoda::s_pSchemaBinding
const ISchemaBinding *__fastcall CItemSoda::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CItemSoda::CEntityInstanceEntityClass *const this)
{
  return CItemSoda::s_pSchemaBinding;
}


// CItemSoda::CEntityInstanceEntityClass::AllocateInstance  (line 1337, @0x00000000021e06c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CItemSoda::CEntityInstanceEntityClass::AllocateInstance(
        CItemSoda::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1216);
  memset(v1, 0, 0x4C0u);
  return v1;
}


// CItemSoda::CEntityInstanceEntityClass::ConstructInstance  (line 1337, @0x00000000021e14a0, libserver.so)  // inlines: CItemSoda, Construct<CItemSoda>
// calls: CBaseAnimating::CBaseAnimating
CEntityInstance *__fastcall CItemSoda::CEntityInstanceEntityClass::ConstructInstance(
        CItemSoda::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseAnimating::CBaseAnimating(p);
    *p = &off_401BEF0;
  }
  return p;
}


// CItemSoda::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1337, @0x00000000021e2ac0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CItemSoda::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CItemSoda::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CItemSoda::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1337, @0x00000000021e2ae0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CItemSoda::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CItemSoda::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CItemSoda::GetEntityClassInternal  (line 1337, @0x00000000021e7d40, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CBaseAnimating::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "item_sodacan", "CItemSoda"
// globals: `guard variable for'CItemSoda::GetEntityClassInternal(void)::g_EntityCItemSodaClass, CItemSoda::GetEntityClassInternal(void)::g_EntityCItemSodaClass, __dso_handle, CItemSoda::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CItemSoda::GetEntityClassInfo(void)::g_EntityCItemSodaClassInfo, CItemSoda::GetEntityClassInfo(void)::g_EntityCItemSodaClassInfo
CEntityClass *__cdecl CItemSoda::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CItemSoda::GetEntityClassInternal(void)::g_EntityCItemSodaClass == 0
    && __cxa_guard_acquire(&`guard variable for'CItemSoda::GetEntityClassInternal(void)::g_EntityCItemSodaClass) != 0 )
  {
    CEntityClass::CEntityClass(&CItemSoda::GetEntityClassInternal(void)::g_EntityCItemSodaClass);
    CItemSoda::GetEntityClassInternal(void)::g_EntityCItemSodaClass._vptr_CEntityClass = off_401BE70;
    __cxa_guard_release(&`guard variable for'CItemSoda::GetEntityClassInternal(void)::g_EntityCItemSodaClass);
    __cxa_atexit(
      CItemSoda::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CItemSoda::GetEntityClassInternal(void)::g_EntityCItemSodaClass,
      &_dso_handle);
  }
  if ( g_pEntityCItemSodaClass != 0 )
    return &CItemSoda::GetEntityClassInternal(void)::g_EntityCItemSodaClass;
  if ( `guard variable for'CItemSoda::GetEntityClassInfo(void)::g_EntityCItemSodaClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CItemSoda::GetEntityClassInfo(void)::g_EntityCItemSodaClassInfo) != 0 )
  {
    EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CItemSoda::GetEntityClassInfo(void)::g_EntityCItemSodaClassInfo,
      "CItemSoda",
      "item_sodacan",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CItemSoda::GetEntityClassInfo(void)::g_EntityCItemSodaClassInfo);
  }
  CItemSoda::GetEntityClassInternal(void)::g_EntityCItemSodaClass.m_pClassInfo = &CItemSoda::GetEntityClassInfo(void)::g_EntityCItemSodaClassInfo;
  CItemSoda::GetEntityClassInternal(void)::g_EntityCItemSodaClass.m_pBaseClassInfo = CItemSoda::GetEntityClassInfo(void)::g_EntityCItemSodaClassInfo.m_pBaseClassInfo;
  g_pEntityCItemSodaClass = &CItemSoda::GetEntityClassInternal(void)::g_EntityCItemSodaClass;
  CItemSoda::GetEntityClassInfo(void)::g_EntityCItemSodaClassInfo.m_pClass = &CItemSoda::GetEntityClassInternal(void)::g_EntityCItemSodaClass;
  CItemSoda::GetEntityClassInternal(void)::g_EntityCItemSodaClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCItemSodaClass->m_pComponentOverrides = 0;
  return &CItemSoda::GetEntityClassInternal(void)::g_EntityCItemSodaClass;
}


// CItemSoda::GetDataDescMap  (line 1349, @0x00000000021bae20, libserver.so)
// globals: CItemSoda::m_DataMap
datamap_t *__fastcall CItemSoda::GetDataDescMap(CItemSoda *const this)
{
  return &CItemSoda::m_DataMap;
}


// CItemSoda::AddDatadescMetadataKeys  (line 1349, @0x00000000021c8e80, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CItemSoda::GetEntityClass(void)
void __fastcall CItemSoda::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CItemSoda::GetEntityClass);
}


// CItemSoda::GetBaseMap  (line 1349, @0x00000000021c8ea0, libserver.so)
datamap_t *__cdecl CItemSoda::GetBaseMap()
{
  return &CBaseAnimating::m_DataMap;
}


// DataMapInit<CItemSoda>  (line 1349, @0x00000000021d94a0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CItemSoda"
// globals: `guard variable for'DataMapInit<CItemSoda>(CItemSoda *)::nameHolder, `guard variable for'DataMapInit<CItemSoda>(CItemSoda *)::dataDesc, CItemSoda::GetEntityClass(void), CItemSoda::m_DataMap, DataMapInit<CItemSoda>(CItemSoda *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CItemSoda>(CItemSoda *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax
  char *v6; // r12
  __int64 v7; // rbx
  int v8; // eax
  char **v9; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CItemSoda>(CItemSoda *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CItemSoda>(CItemSoda *)::nameHolder) != 0 )
  {
    DataMapInit<CItemSoda>(CItemSoda *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CItemSoda>(CItemSoda *)::nameHolder.m_pszBase = "CItemSoda";
    DataMapInit<CItemSoda>(CItemSoda *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CItemSoda>(CItemSoda *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CItemSoda>(CItemSoda *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CItemSoda>(CItemSoda *)::nameHolder.m_nLenBase = 9;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CItemSoda>(CItemSoda *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CItemSoda>(CItemSoda *)::nameHolder,
      &_dso_handle);
  }
  CItemSoda::m_DataMap.baseMap = &CBaseAnimating::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CItemSoda>(CItemSoda *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CItemSoda>(CItemSoda *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CItemSoda>(CItemSoda *)::nameHolder.m_nLenBase + 9);
    strcpy(stpcpy(v2, DataMapInit<CItemSoda>(CItemSoda *)::nameHolder.m_pszBase), "CanThink");
    m_Size = DataMapInit<CItemSoda>(CItemSoda *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CItemSoda>(CItemSoda *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CItemSoda>(CItemSoda *)::nameHolder.m_Names.m_Size == DataMapInit<CItemSoda>(CItemSoda *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CItemSoda>(CItemSoda *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CItemSoda>(CItemSoda *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CItemSoda>(CItemSoda *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CItemSoda>(CItemSoda *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CItemSoda>(CItemSoda *)::dataDesc[1].fieldName = v2;
    v6 = operator new[](DataMapInit<CItemSoda>(CItemSoda *)::nameHolder.m_nLenBase + 9);
    strcpy(stpcpy(v6, DataMapInit<CItemSoda>(CItemSoda *)::nameHolder.m_pszBase), "CanTouch");
    v7 = DataMapInit<CItemSoda>(CItemSoda *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CItemSoda>(CItemSoda *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CItemSoda>(CItemSoda *)::nameHolder.m_Names.m_Size == DataMapInit<CItemSoda>(CItemSoda *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CItemSoda>(CItemSoda *)::nameHolder.m_Names.m_Memory, 1);
      v8 = DataMapInit<CItemSoda>(CItemSoda *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CItemSoda>(CItemSoda *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CItemSoda>(CItemSoda *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CItemSoda>(CItemSoda *)::dataDesc[2].fieldName = v6;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CItemSoda>(CItemSoda *)::dataDesc);
  }
  CItemSoda::m_DataMap.dataNumFields = 2;
  CItemSoda::m_DataMap.dataDesc = &DataMapInit<CItemSoda>(CItemSoda *)::dataDesc[1];
  AddDatadescMetadataKeys(&CItemSoda::m_DataMap, CItemSoda::GetEntityClass);
  return &CItemSoda::m_DataMap;
}


// CItemSoda::Precache  (line 1357, @0x00000000021dde50, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheModel, CBaseEntity::PrecacheScriptSound
// strings: "models/can.vmdl", "ItemSoda.Bounce"
void __fastcall CItemSoda::Precache(CItemSoda *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  CBaseEntity::PrecacheModel("models/can.vmdl", pContext->m_pManifest);
  CBaseEntity::PrecacheScriptSound("ItemSoda.Bounce", pContext);
}


// CItemSoda::Spawn  (line 1365, @0x00000000021bfcf0, libserver.so)  // inlines: SetSolid, Vector, curtime
// calls: CBaseAnimating::Spawn, CBaseEntity::SetMoveType, CBaseModelEntity::SetModel, UTIL_SetSize, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// strings: "models/can.vmdl"
// globals: CItemSoda::CanThink(void)
void __fastcall CItemSoda::Spawn(CItemSoda *const this, const CEntityKeyValues *pKeyValues)
{
  double v3; // xmm1_8
  CGlobalVars *v4; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v6; // xmm0_8
  Vector vecMin; // [rsp+10h] [rbp-30h] BYREF
  Vector vecMax; // [rsp+20h] [rbp-20h] BYREF

  CBaseAnimating::Spawn(this, pKeyValues);
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 0);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_FLYGRAVITY, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CBaseModelEntity::SetModel(this, "models/can.vmdl");
  vecMax.x = 0.0;
  vecMax.y = 0.0;
  vecMax.z = 0.0;
  vecMin.x = 0.0;
  vecMin.y = 0.0;
  vecMin.z = 0.0;
  UTIL_SetSize(this, &vecMin, &vecMax);
  CBaseEntity::ThinkSet(this, CItemSoda::CanThink, 0.0, 0, 0);
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v6) = 0;
    *&v6 = v4->m_flCurrentTime + 0.5;
  }
  else
  {
    *&v6 = 1056964608;
  }
  CBaseEntity::SetNextThink(this, v6, v3, 0);
}


// CItemSoda::CanThink  (line 1379, @0x00000000021bbac0, libserver.so)  // inlines: SetSolid, Vector
// calls: CBaseEntity::EmitSound, CCollisionProperty::SetTriggerCollisionGroup, UTIL_SetSize, CBaseEntity::ThinkSet
// strings: "ItemSoda.Bounce"
// globals: CItemSoda::CanTouch(CBaseEntity *)
void __fastcall CItemSoda::CanThink(CItemSoda *const this)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r12
  Vector vecMin; // [rsp+0h] [rbp-30h] BYREF
  Vector vecMax; // [rsp+10h] [rbp-20h] BYREF

  p_m_Collision = &this->m_Collision;
  CBaseEntity::EmitSound(this, "ItemSoda.Bounce", 0.0, 0);
  (*(this->m_Collision._vptr_ICollideable + 26))(p_m_Collision, 2);
  CCollisionProperty::SetTriggerCollisionGroup(p_m_Collision);
  vecMin.z = 0.0;
  vecMax.x = 8.0;
  vecMax.y = 8.0;
  vecMax.z = 8.0;
  vecMin.x = -8.0;
  vecMin.y = -8.0;
  UTIL_SetSize(this, &vecMin, &vecMax);
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
  this->m_pfnTouch.__pfn = CItemSoda::CanTouch;
  this->m_pfnTouch.__delta = 0;
}


// CItemSoda::CanTouch  (line 1391, @0x00000000021c0cf0, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, curtime
// calls: CBaseEntity::SetMoveType, CBaseEntity::AddEffects, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
void __fastcall CItemSoda::CanTouch(CItemSoda *const this, CBaseEntity *pOther)
{
  unsigned __int16 v4; // dx
  __int64 v5; // rsi
  uint32 v6; // eax
  CEntitySystem *v7; // rcx
  CEntityIdentity *v8; // rdx
  __int64 v9; // rsi
  double v10; // xmm1_8
  double v11; // xmm0_8
  CGlobalVars *v12; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  if ( (*(pOther->_vptr_IHandleEntity + 140))(pOther) != 0 )
  {
    (*(pOther->_vptr_IHandleEntity + 91))(pOther, 0, 1.0);
    if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v4 = 0x7FFF;
      v5 = 0x7FFF;
    }
    else
    {
      v4 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v5 = v4;
    }
    v6 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
    v7 = g_pEntitySystem;
    v8 = (v6 + 2);
    if ( v8 > 1 )
    {
      v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
      if ( v8 != 0 )
      {
        v9 = v5 & 0x1FF;
        v7 = (8 * v9);
        v5 = 120 * v9;
        v8 = (v8 + v5);
        if ( v8 != 0 && v6 == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
          LOBYTE(v8->m_pInstance[16].m_pEntity) = 0;
      }
    }
    (*(this->m_Collision._vptr_ICollideable + 16))(&this->m_Collision, v5, v8, v7);
    CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
    CBaseEntity::AddEffects(this, 32);
    this->m_pfnTouch.__pfn = 0;
    this->m_pfnTouch.__delta = 0;
    CBaseEntity::ThinkSet(this, CBaseEntity::SUB_Remove, 0.0, 0, 0);
    v11 = 0.0;
    v12 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      *&v11 = LODWORD(v12->m_flCurrentTime);
    }
    CBaseEntity::SetNextThink(this, v11, v10, 0);
  }
}


// CPrecipitation::~CPrecipitation  (line 1421, @0x00000000021e17f0, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CPrecipitation::~CPrecipitation(CPrecipitation *const this)
{
  this->_vptr_IHandleEntity = &off_401C770;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CPrecipitation::~CPrecipitation  (line 1421, @0x00000000021e1810, libserver.so)  // inlines: ~CPrecipitation
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CPrecipitation::~CPrecipitation(CPrecipitation *const this)
{
  this->_vptr_IHandleEntity = &off_401C770;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CPrecipitation::GetEntityClass  (line 1424, @0x00000000021dea80, libserver.so)
CEntityClass *__cdecl CPrecipitation::GetEntityClass()
{
  return g_pEntityCPrecipitationClass;
}


// CPrecipitation::Schema_DynamicBinding  (line 1424, @0x00000000021dea90, libserver.so)
// globals: CPrecipitation::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPrecipitation::Schema_DynamicBinding(const CPrecipitation *const this)
{
  return CPrecipitation::s_pSchemaBinding;
}


// CPrecipitation::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1424, @0x00000000021deaa0, libserver.so)
// globals: CPrecipitation::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPrecipitation::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPrecipitation::CEntityInstanceEntityClass *const this)
{
  return CPrecipitation::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPrecipitation::CEntityInstanceEntityClass::DestructInstance  (line 1424, @0x00000000021deab0, libserver.so)  // inlines: Destruct<CPrecipitation>
void __fastcall CPrecipitation::CEntityInstanceEntityClass::DestructInstance(
        CPrecipitation::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPrecipitation::CEntityInstanceEntityClass::FreeInstance  (line 1424, @0x00000000021dead0, libserver.so)
void __fastcall CPrecipitation::CEntityInstanceEntityClass::FreeInstance(
        CPrecipitation::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPrecipitation::CEntityInstanceEntityClass::CanAllocate  (line 1424, @0x00000000021deaf0, libserver.so)
bool __fastcall CPrecipitation::CEntityInstanceEntityClass::CanAllocate(
        const CPrecipitation::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPrecipitation::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1424, @0x00000000021deb00, libserver.so)
// globals: CPrecipitation::s_pSchemaBinding
const ISchemaBinding *__fastcall CPrecipitation::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPrecipitation::CEntityInstanceEntityClass *const this)
{
  return CPrecipitation::s_pSchemaBinding;
}


// CPrecipitation::CEntityInstanceEntityClass::AllocateInstance  (line 1424, @0x00000000021e0700, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPrecipitation::CEntityInstanceEntityClass::AllocateInstance(
        CPrecipitation::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1168);
  memset(v1, 0, 0x490u);
  return v1;
}


// CPrecipitation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1424, @0x00000000021e2d90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPrecipitation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPrecipitation::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPrecipitation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1424, @0x00000000021e2db0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPrecipitation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPrecipitation::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPrecipitation::GetEntityClassInternal  (line 1424, @0x00000000021e7e90, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "func_precipitation", "CPrecipitation"
// globals: `guard variable for'CPrecipitation::GetEntityClassInternal(void)::g_EntityCPrecipitationClass, CPrecipitation::GetEntityClassInternal(void)::g_EntityCPrecipitationClass, __dso_handle, CPrecipitation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPrecipitation::GetEntityClassInfo(void)::g_EntityCPrecipitationClassInfo, CPrecipitation::GetEntityClassInfo(void)::g_EntityCPrecipitationClassInfo
CEntityClass *__cdecl CPrecipitation::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPrecipitation::GetEntityClassInternal(void)::g_EntityCPrecipitationClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPrecipitation::GetEntityClassInternal(void)::g_EntityCPrecipitationClass) != 0 )
  {
    CEntityClass::CEntityClass(&CPrecipitation::GetEntityClassInternal(void)::g_EntityCPrecipitationClass);
    CPrecipitation::GetEntityClassInternal(void)::g_EntityCPrecipitationClass._vptr_CEntityClass = off_401C6F0;
    __cxa_guard_release(&`guard variable for'CPrecipitation::GetEntityClassInternal(void)::g_EntityCPrecipitationClass);
    __cxa_atexit(
      CPrecipitation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPrecipitation::GetEntityClassInternal(void)::g_EntityCPrecipitationClass,
      &_dso_handle);
  }
  if ( g_pEntityCPrecipitationClass != 0 )
    return &CPrecipitation::GetEntityClassInternal(void)::g_EntityCPrecipitationClass;
  if ( `guard variable for'CPrecipitation::GetEntityClassInfo(void)::g_EntityCPrecipitationClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPrecipitation::GetEntityClassInfo(void)::g_EntityCPrecipitationClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPrecipitation::GetEntityClassInfo(void)::g_EntityCPrecipitationClassInfo,
      "CPrecipitation",
      "func_precipitation",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPrecipitation::GetEntityClassInfo(void)::g_EntityCPrecipitationClassInfo);
  }
  CPrecipitation::GetEntityClassInternal(void)::g_EntityCPrecipitationClass.m_pClassInfo = &CPrecipitation::GetEntityClassInfo(void)::g_EntityCPrecipitationClassInfo;
  CPrecipitation::GetEntityClassInternal(void)::g_EntityCPrecipitationClass.m_pBaseClassInfo = CPrecipitation::GetEntityClassInfo(void)::g_EntityCPrecipitationClassInfo.m_pBaseClassInfo;
  g_pEntityCPrecipitationClass = &CPrecipitation::GetEntityClassInternal(void)::g_EntityCPrecipitationClass;
  CPrecipitation::GetEntityClassInfo(void)::g_EntityCPrecipitationClassInfo.m_pClass = &CPrecipitation::GetEntityClassInternal(void)::g_EntityCPrecipitationClass;
  CPrecipitation::GetEntityClassInternal(void)::g_EntityCPrecipitationClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCPrecipitationClass->m_pComponentOverrides = 0;
  return &CPrecipitation::GetEntityClassInternal(void)::g_EntityCPrecipitationClass;
}


// CPrecipitation::CEntityInstanceEntityClass::ConstructInstance  (line 1424, @0x00000000021e7fe0, libserver.so)  // inlines: Construct<CPrecipitation>
// calls: CPrecipitation::CPrecipitation
CEntityInstance *__fastcall CPrecipitation::CEntityInstanceEntityClass::ConstructInstance(
        CPrecipitation::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CPrecipitation::CPrecipitation(p);
  return p;
}


// CPrecipitation::GetDataDescMap  (line 1441, @0x00000000021bae30, libserver.so)
// globals: CPrecipitation::m_DataMap
datamap_t *__fastcall CPrecipitation::GetDataDescMap(CPrecipitation *const this)
{
  return &CPrecipitation::m_DataMap;
}


// CPrecipitation::AddDatadescMetadataKeys  (line 1441, @0x00000000021c8eb0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPrecipitation::GetEntityClass(void)
void __fastcall CPrecipitation::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPrecipitation::GetEntityClass);
}


// CPrecipitation::GetBaseMap  (line 1441, @0x00000000021c8ed0, libserver.so)
datamap_t *__cdecl CPrecipitation::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CPrecipitation>  (line 1441, @0x00000000021c8ee0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CPrecipitation"
// globals: `guard variable for'DataMapInit<CPrecipitation>(CPrecipitation *)::nameHolder, CPrecipitation::GetEntityClass(void), CPrecipitation::m_DataMap, DataMapInit<CPrecipitation>(CPrecipitation *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPrecipitation>(CPrecipitation *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPrecipitation>(CPrecipitation *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPrecipitation>(CPrecipitation *)::nameHolder) != 0 )
  {
    DataMapInit<CPrecipitation>(CPrecipitation *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPrecipitation>(CPrecipitation *)::nameHolder.m_pszBase = "CPrecipitation";
    DataMapInit<CPrecipitation>(CPrecipitation *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPrecipitation>(CPrecipitation *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPrecipitation>(CPrecipitation *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPrecipitation>(CPrecipitation *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPrecipitation>(CPrecipitation *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPrecipitation>(CPrecipitation *)::nameHolder,
      &_dso_handle);
  }
  CPrecipitation::m_DataMap.dataNumFields = 3;
  CPrecipitation::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  CPrecipitation::m_DataMap.dataDesc = &DataMapInit<CPrecipitation>(CPrecipitation *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPrecipitation::m_DataMap, CPrecipitation::GetEntityClass);
  return &CPrecipitation::m_DataMap;
}


// CPrecipitation::YouForgotToImplementOrDeclareServerClass  (line 1450, @0x00000000021bae40, libserver.so)
int __fastcall CPrecipitation::YouForgotToImplementOrDeclareServerClass(CPrecipitation *const this)
{
  return 0;
}


// CPrecipitation::GetServerClass  (line 1450, @0x00000000021c48b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CPrecipitation::GetServerClass(CPrecipitation *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CPrecipitation::CPrecipitation  (line 1452, @0x00000000021c8fb0, libserver.so)  // inlines: CNetworkVarBase, EnsureValidValue<PrecipitationType_t>, EnsureValidValue<float>, NetworkStateChanged, Set, operator=<int>
// calls: CBaseModelEntity::CBaseModelEntity, CBaseEntity::NetworkStateChanged, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume
// callers: CPrecipitation::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CPrecipitation::CPrecipitation(CPrecipitation *const this)
{
  float m_Value; // xmm0_4

  CBaseModelEntity::CBaseModelEntity(this);
  this->_vptr_IHandleEntity = &off_401C770;
  this->m_nPrecipType.m_Value = PrecipitationType_t::PRECIPITATION_TYPE_RAIN;
  this->m_minSpeed.m_Value = 0.0;
  this->m_maxSpeed.m_Value = 0.0;
  CBaseEntity::NetworkStateChanged(this, 0x484u, -1, -1);
  m_Value = this->m_maxSpeed.m_Value;
  this->m_minSpeed.m_Value = 25.0;
  if ( m_Value != 35.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1160, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_maxSpeed.m_Value = 35.0;
  }
}


// CPrecipitation::UpdateTransmitState  (line 1459, @0x00000000021bb120, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CPrecipitation::UpdateTransmitState(CPrecipitation *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CPrecipitation::Precache  (line 1464, @0x00000000021dde90, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, PrecacheMaterial
// strings: "materials/effects/fleck_ash1.vmat", "materials/effects/fleck_ash2.vmat", "materials/effects/fleck_ash3.vmat", "materials/effects/ember_swirling001.vmat", "materials/particle/rain.vtex", "materials/particle/snow.vtex" (23 total)
void __fastcall CPrecipitation::Precache(CPrecipitation *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  PrecacheMaterial("materials/effects/fleck_ash1.vmat", pContext->m_pManifest);
  PrecacheMaterial("materials/effects/fleck_ash2.vmat", pContext->m_pManifest);
  PrecacheMaterial("materials/effects/fleck_ash3.vmat", pContext->m_pManifest);
  PrecacheMaterial("materials/effects/ember_swirling001.vmat", pContext->m_pManifest);
  (**pContext->m_pManifest)(pContext->m_pManifest, "materials/particle/rain.vtex");
  (**pContext->m_pManifest)(pContext->m_pManifest, "materials/particle/snow.vtex");
  (**pContext->m_pManifest)(pContext->m_pManifest, "materials/particle/snow_outer.vtex");
  (**pContext->m_pManifest)(pContext->m_pManifest, "materials/particle/ash_flecks.vtex");
  (**pContext->m_pManifest)(pContext->m_pManifest, "particles/rain_storm_fx/rain_storm.vpcf");
  (**pContext->m_pManifest)(pContext->m_pManifest, "particles/rain_storm_fx/rain_storm_screen.vpcf");
  (**pContext->m_pManifest)(pContext->m_pManifest, "particles/rain_storm_fx/rain_storm_outer.vpcf");
  (**pContext->m_pManifest)(pContext->m_pManifest, "particles/rain_fx/rain.vpcf");
  (**pContext->m_pManifest)(pContext->m_pManifest, "particles/rain_fx/rain_outer.vpcf");
  (**pContext->m_pManifest)(pContext->m_pManifest, "particles/rain_fx/ash.vpcf");
  (**pContext->m_pManifest)(pContext->m_pManifest, "particles/rain_fx/precipitation_ash.vpcf");
  (**pContext->m_pManifest)(pContext->m_pManifest, "particles/rain_fx/ash_outer.vpcf");
  (**pContext->m_pManifest)(pContext->m_pManifest, "particles/rain_fx/bugs_precipitation.vpcf");
  (**pContext->m_pManifest)(pContext->m_pManifest, "particles/rain_fx/bugs_precipitation_outer.vpcf");
  (**pContext->m_pManifest)(pContext->m_pManifest, "particles/rain_fx/smoke_precipitation.vpcf");
  (**pContext->m_pManifest)(pContext->m_pManifest, "particles/rain_fx/smoke_precipitation_screen.vpcf");
  (**pContext->m_pManifest)(pContext->m_pManifest, "particles/rain_fx/smoke_precipitation_outer.vpcf");
  (**pContext->m_pManifest)(pContext->m_pManifest, "particles/code_driven/func_precipitation.vpcf");
  (**pContext->m_pManifest)(pContext->m_pManifest, "particles/code_driven/func_precipitation_with_trail.vpcf");
}


// CPrecipitation::Spawn  (line 1499, @0x00000000021bead0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<PrecipitationType_t>, operator=<RenderMode_t>
// calls: CBaseEntity::Spawn, CBaseEntity::SetTransmitState, CBaseEntity::SetMoveType, CBaseModelEntity::SetModelFromKeyValues
void __fastcall CPrecipitation::Spawn(CPrecipitation *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseEntity::Spawn(this, pKeyValues);
  CBaseEntity::SetTransmitState(this, 16);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  if ( this->m_nPrecipType.m_Value > PrecipitationType_t::NUM_PRECIPITATION_TYPES )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1152, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nPrecipType.m_Value = PrecipitationType_t::PRECIPITATION_TYPE_RAIN;
  }
  if ( this->m_nRenderMode.m_Value != RenderMode_t::kRenderEnvironmental )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 792, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nRenderMode.m_Value = RenderMode_t::kRenderEnvironmental;
  }
}


// CPrecipitationBlocker::~CPrecipitationBlocker  (line 1535, @0x00000000021e1840, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CPrecipitationBlocker::~CPrecipitationBlocker(CPrecipitationBlocker *const this)
{
  this->_vptr_IHandleEntity = &off_401CEB0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CPrecipitationBlocker::~CPrecipitationBlocker  (line 1535, @0x00000000021e1860, libserver.so)  // inlines: ~CPrecipitationBlocker
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CPrecipitationBlocker::~CPrecipitationBlocker(CPrecipitationBlocker *const this)
{
  this->_vptr_IHandleEntity = &off_401CEB0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CPrecipitationBlocker::GetEntityClass  (line 1538, @0x00000000021deb10, libserver.so)
CEntityClass *__cdecl CPrecipitationBlocker::GetEntityClass()
{
  return g_pEntityCPrecipitationBlockerClass;
}


// CPrecipitationBlocker::Schema_DynamicBinding  (line 1538, @0x00000000021deb20, libserver.so)
// globals: CPrecipitationBlocker::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPrecipitationBlocker::Schema_DynamicBinding(
        const CPrecipitationBlocker *const this)
{
  return CPrecipitationBlocker::s_pSchemaBinding;
}


// CPrecipitationBlocker::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1538, @0x00000000021deb30, libserver.so)
// globals: CPrecipitationBlocker::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPrecipitationBlocker::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPrecipitationBlocker::CEntityInstanceEntityClass *const this)
{
  return CPrecipitationBlocker::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPrecipitationBlocker::CEntityInstanceEntityClass::DestructInstance  (line 1538, @0x00000000021deb40, libserver.so)  // inlines: Destruct<CPrecipitationBlocker>
void __fastcall CPrecipitationBlocker::CEntityInstanceEntityClass::DestructInstance(
        CPrecipitationBlocker::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPrecipitationBlocker::CEntityInstanceEntityClass::FreeInstance  (line 1538, @0x00000000021deb60, libserver.so)
void __fastcall CPrecipitationBlocker::CEntityInstanceEntityClass::FreeInstance(
        CPrecipitationBlocker::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPrecipitationBlocker::CEntityInstanceEntityClass::CanAllocate  (line 1538, @0x00000000021deb80, libserver.so)
bool __fastcall CPrecipitationBlocker::CEntityInstanceEntityClass::CanAllocate(
        const CPrecipitationBlocker::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPrecipitationBlocker::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1538, @0x00000000021deb90, libserver.so)
// globals: CPrecipitationBlocker::s_pSchemaBinding
const ISchemaBinding *__fastcall CPrecipitationBlocker::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPrecipitationBlocker::CEntityInstanceEntityClass *const this)
{
  return CPrecipitationBlocker::s_pSchemaBinding;
}


// CPrecipitationBlocker::CEntityInstanceEntityClass::AllocateInstance  (line 1538, @0x00000000021e0740, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPrecipitationBlocker::CEntityInstanceEntityClass::AllocateInstance(
        CPrecipitationBlocker::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1152);
  memset(v1, 0, 0x480u);
  return v1;
}


// CPrecipitationBlocker::CEntityInstanceEntityClass::ConstructInstance  (line 1538, @0x00000000021e0f80, libserver.so)  // inlines: CPrecipitationBlocker, Construct<CPrecipitationBlocker>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CPrecipitationBlocker::CEntityInstanceEntityClass::ConstructInstance(
        CPrecipitationBlocker::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *p = &off_401CEB0;
  }
  return p;
}


// CPrecipitationBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1538, @0x00000000021e2de0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPrecipitationBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPrecipitationBlocker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPrecipitationBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1538, @0x00000000021e2e00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPrecipitationBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPrecipitationBlocker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPrecipitationBlocker::GetEntityClassInternal  (line 1538, @0x00000000021e8010, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "func_precipitation_blocker", "CPrecipitationBlocker"
// globals: `guard variable for'CPrecipitationBlocker::GetEntityClassInternal(void)::g_EntityCPrecipitationBlockerClass, CPrecipitationBlocker::GetEntityClassInternal(void)::g_EntityCPrecipitationBlockerClass, __dso_handle, CPrecipitationBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPrecipitationBlocker::GetEntityClassInfo(void)::g_EntityCPrecipitationBlockerClassInfo, CPrecipitationBlocker::GetEntityClassInfo(void)::g_EntityCPrecipitationBlockerClassInfo
CEntityClass *__cdecl CPrecipitationBlocker::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPrecipitationBlocker::GetEntityClassInternal(void)::g_EntityCPrecipitationBlockerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPrecipitationBlocker::GetEntityClassInternal(void)::g_EntityCPrecipitationBlockerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CPrecipitationBlocker::GetEntityClassInternal(void)::g_EntityCPrecipitationBlockerClass);
    CPrecipitationBlocker::GetEntityClassInternal(void)::g_EntityCPrecipitationBlockerClass._vptr_CEntityClass = off_401CE30;
    __cxa_guard_release(&`guard variable for'CPrecipitationBlocker::GetEntityClassInternal(void)::g_EntityCPrecipitationBlockerClass);
    __cxa_atexit(
      CPrecipitationBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPrecipitationBlocker::GetEntityClassInternal(void)::g_EntityCPrecipitationBlockerClass,
      &_dso_handle);
  }
  if ( g_pEntityCPrecipitationBlockerClass != 0 )
    return &CPrecipitationBlocker::GetEntityClassInternal(void)::g_EntityCPrecipitationBlockerClass;
  if ( `guard variable for'CPrecipitationBlocker::GetEntityClassInfo(void)::g_EntityCPrecipitationBlockerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPrecipitationBlocker::GetEntityClassInfo(void)::g_EntityCPrecipitationBlockerClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPrecipitationBlocker::GetEntityClassInfo(void)::g_EntityCPrecipitationBlockerClassInfo,
      "CPrecipitationBlocker",
      "func_precipitation_blocker",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPrecipitationBlocker::GetEntityClassInfo(void)::g_EntityCPrecipitationBlockerClassInfo);
  }
  CPrecipitationBlocker::GetEntityClassInternal(void)::g_EntityCPrecipitationBlockerClass.m_pClassInfo = &CPrecipitationBlocker::GetEntityClassInfo(void)::g_EntityCPrecipitationBlockerClassInfo;
  CPrecipitationBlocker::GetEntityClassInternal(void)::g_EntityCPrecipitationBlockerClass.m_pBaseClassInfo = CPrecipitationBlocker::GetEntityClassInfo(void)::g_EntityCPrecipitationBlockerClassInfo.m_pBaseClassInfo;
  g_pEntityCPrecipitationBlockerClass = &CPrecipitationBlocker::GetEntityClassInternal(void)::g_EntityCPrecipitationBlockerClass;
  CPrecipitationBlocker::GetEntityClassInfo(void)::g_EntityCPrecipitationBlockerClassInfo.m_pClass = &CPrecipitationBlocker::GetEntityClassInternal(void)::g_EntityCPrecipitationBlockerClass;
  CPrecipitationBlocker::GetEntityClassInternal(void)::g_EntityCPrecipitationBlockerClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCPrecipitationBlockerClass->m_pComponentOverrides = 0;
  return &CPrecipitationBlocker::GetEntityClassInternal(void)::g_EntityCPrecipitationBlockerClass;
}


// CPrecipitationBlocker::GetDataDescMap  (line 1547, @0x00000000021bae50, libserver.so)
// globals: CPrecipitationBlocker::m_DataMap
datamap_t *__fastcall CPrecipitationBlocker::GetDataDescMap(CPrecipitationBlocker *const this)
{
  return &CPrecipitationBlocker::m_DataMap;
}


// CPrecipitationBlocker::AddDatadescMetadataKeys  (line 1547, @0x00000000021c9060, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPrecipitationBlocker::GetEntityClass(void)
void __fastcall CPrecipitationBlocker::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPrecipitationBlocker::GetEntityClass);
}


// CPrecipitationBlocker::GetBaseMap  (line 1547, @0x00000000021c9080, libserver.so)
datamap_t *__cdecl CPrecipitationBlocker::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CPrecipitationBlocker>  (line 1547, @0x00000000021c9090, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CPrecipitationBlocker"
// globals: `guard variable for'DataMapInit<CPrecipitationBlocker>(CPrecipitationBlocker *)::nameHolder, CPrecipitationBlocker::GetEntityClass(void), CPrecipitationBlocker::m_DataMap, DataMapInit<CPrecipitationBlocker>(CPrecipitationBlocker *)::dataDesc, DataMapInit<CPrecipitationBlocker>(CPrecipitationBlocker *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPrecipitationBlocker>(CPrecipitationBlocker *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPrecipitationBlocker>(CPrecipitationBlocker *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPrecipitationBlocker>(CPrecipitationBlocker *)::nameHolder) != 0 )
  {
    DataMapInit<CPrecipitationBlocker>(CPrecipitationBlocker *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPrecipitationBlocker>(CPrecipitationBlocker *)::nameHolder.m_pszBase = "CPrecipitationBlocker";
    DataMapInit<CPrecipitationBlocker>(CPrecipitationBlocker *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPrecipitationBlocker>(CPrecipitationBlocker *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPrecipitationBlocker>(CPrecipitationBlocker *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPrecipitationBlocker>(CPrecipitationBlocker *)::nameHolder.m_nLenBase = 21;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPrecipitationBlocker>(CPrecipitationBlocker *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPrecipitationBlocker>(CPrecipitationBlocker *)::nameHolder,
      &_dso_handle);
  }
  CPrecipitationBlocker::m_DataMap.dataNumFields = 1;
  CPrecipitationBlocker::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  CPrecipitationBlocker::m_DataMap.dataDesc = DataMapInit<CPrecipitationBlocker>(CPrecipitationBlocker *)::dataDesc;
  AddDatadescMetadataKeys(&CPrecipitationBlocker::m_DataMap, CPrecipitationBlocker::GetEntityClass);
  return &CPrecipitationBlocker::m_DataMap;
}


// CPrecipitationBlocker::YouForgotToImplementOrDeclareServerClass  (line 1550, @0x00000000021bae60, libserver.so)
int __fastcall CPrecipitationBlocker::YouForgotToImplementOrDeclareServerClass(CPrecipitationBlocker *const this)
{
  return 0;
}


// CPrecipitationBlocker::GetServerClass  (line 1550, @0x00000000021c4980, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CPrecipitationBlocker::GetServerClass(CPrecipitationBlocker *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  CEntityClass *v4; // rdx
  CEntityClassInfo *v5; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
    {
      v4 = m_pBaseClassInfo->m_pClass;
      result = v4->m_pGameClass;
      if ( result == 0 )
      {
        v5 = v4->m_pBaseClassInfo;
        if ( v5 != 0 )
          return CEntityClass::GetGameClass(v5->m_pClass, 0);
      }
    }
  }
  return result;
}


// CPrecipitationBlocker::CPrecipitationBlocker  (line 1554, @0x00000000021c9160, libserver.so)
// calls: CBaseModelEntity::CBaseModelEntity
void __fastcall CPrecipitationBlocker::CPrecipitationBlocker(CPrecipitationBlocker *const this)
{
  CBaseModelEntity::CBaseModelEntity(this);
  this->_vptr_IHandleEntity = &off_401CEB0;
}


// CPrecipitationBlocker::UpdateTransmitState  (line 1558, @0x00000000021bb130, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CPrecipitationBlocker::UpdateTransmitState(CPrecipitationBlocker *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CPrecipitationBlocker::Spawn  (line 1564, @0x00000000021beb70, libserver.so)  // inlines: NetworkStateChanged, Set, SetSolid, operator=<RenderMode_t>
// calls: CBaseEntity::Spawn, CBaseEntity::SetTransmitState, CBaseEntity::SetMoveType, CBaseModelEntity::SetModelFromKeyValues
void __fastcall CPrecipitationBlocker::Spawn(CPrecipitationBlocker *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseEntity::Spawn(this, pKeyValues);
  CBaseEntity::SetTransmitState(this, 4);
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 0);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  if ( this->m_nRenderMode.m_Value != RenderMode_t::kRenderEnvironmental )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 792, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nRenderMode.m_Value = RenderMode_t::kRenderEnvironmental;
  }
}


// CEnvWind::~CEnvWind  (line 1579, @0x00000000021e1a00, libserver.so)  // inlines: ~NetworkVar_m_EnvWindShared
// calls: CEnvWindShared::~CEnvWindShared, CBaseEntity::~CBaseEntity
void __fastcall CEnvWind::~CEnvWind(CEnvWind *const this)
{
  CEnvWindShared *v2; // rdi

  v2 = (this + 776);
  *(v2 - 97) = &off_401D630;
  *v2 = off_401D5F0;
  CEnvWindShared::~CEnvWindShared(v2);
  CBaseEntity::~CBaseEntity(this);
}


// CEnvWind::~CEnvWind  (line 1579, @0x00000000021e1a40, libserver.so)  // inlines: ~CEnvWind, ~NetworkVar_m_EnvWindShared
// calls: CEnvWindShared::~CEnvWindShared, CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CEnvWind::~CEnvWind(CEnvWind *const this)
{
  CEnvWindShared *v2; // rdi

  v2 = (this + 776);
  *(v2 - 97) = &off_401D630;
  *v2 = off_401D5F0;
  CEnvWindShared::~CEnvWindShared(v2);
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvWind::GetEntityClass  (line 1581, @0x00000000021deba0, libserver.so)
CEntityClass *__cdecl CEnvWind::GetEntityClass()
{
  return g_pEntityCEnvWindClass;
}


// CEnvWind::Schema_DynamicBinding  (line 1581, @0x00000000021debb0, libserver.so)
// globals: CEnvWind::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvWind::Schema_DynamicBinding(const CEnvWind *const this)
{
  return CEnvWind::s_pSchemaBinding;
}


// CEnvWind::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1581, @0x00000000021debc0, libserver.so)
// globals: CEnvWind::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvWind::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvWind::CEntityInstanceEntityClass *const this)
{
  return CEnvWind::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvWind::CEntityInstanceEntityClass::DestructInstance  (line 1581, @0x00000000021debd0, libserver.so)  // inlines: Destruct<CEnvWind>
void __fastcall CEnvWind::CEntityInstanceEntityClass::DestructInstance(
        CEnvWind::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvWind::CEntityInstanceEntityClass::FreeInstance  (line 1581, @0x00000000021debf0, libserver.so)
void __fastcall CEnvWind::CEntityInstanceEntityClass::FreeInstance(
        CEnvWind::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvWind::CEntityInstanceEntityClass::CanAllocate  (line 1581, @0x00000000021dec10, libserver.so)
bool __fastcall CEnvWind::CEntityInstanceEntityClass::CanAllocate(
        const CEnvWind::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvWind::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1581, @0x00000000021dec20, libserver.so)
// globals: CEnvWind::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvWind::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvWind::CEntityInstanceEntityClass *const this)
{
  return CEnvWind::s_pSchemaBinding;
}


// CEnvWind::CEntityInstanceEntityClass::AllocateInstance  (line 1581, @0x00000000021e0780, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvWind::CEntityInstanceEntityClass::AllocateInstance(
        CEnvWind::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1400);
  memset(v1, 0, 0x578u);
  return v1;
}


// CEnvWind::CEntityInstanceEntityClass::ConstructInstance  (line 1581, @0x00000000021e2110, libserver.so)  // inlines: CEnvWind, Construct<CEnvWind>, NetworkVar_m_EnvWindShared
// calls: CBaseEntity::CBaseEntity, CEnvWindShared::CEnvWindShared, CBaseEntity::~CBaseEntity, _Unwind_Resume
CEntityInstance *__fastcall CEnvWind::CEntityInstanceEntityClass::ConstructInstance(
        CEnvWind::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_401D630;
    CEnvWindShared::CEnvWindShared((p + 776));
    *(p + 97) = off_401D5F0;
  }
  return p;
}


// CEnvWind::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1581, @0x00000000021e2f20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvWind::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvWind::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CEnvWind::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1581, @0x00000000021e2f40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvWind::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvWind::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvWind::GetEntityClassInternal  (line 1581, @0x00000000021e8160, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "env_wind", "CEnvWind"
// globals: `guard variable for'CEnvWind::GetEntityClassInternal(void)::g_EntityCEnvWindClass, CEnvWind::GetEntityClassInternal(void)::g_EntityCEnvWindClass, __dso_handle, CEnvWind::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvWind::GetEntityClassInfo(void)::g_EntityCEnvWindClassInfo, CEnvWind::GetEntityClassInfo(void)::g_EntityCEnvWindClassInfo
CEntityClass *__cdecl CEnvWind::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvWind::GetEntityClassInternal(void)::g_EntityCEnvWindClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvWind::GetEntityClassInternal(void)::g_EntityCEnvWindClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvWind::GetEntityClassInternal(void)::g_EntityCEnvWindClass);
    CEnvWind::GetEntityClassInternal(void)::g_EntityCEnvWindClass._vptr_CEntityClass = off_401D570;
    __cxa_guard_release(&`guard variable for'CEnvWind::GetEntityClassInternal(void)::g_EntityCEnvWindClass);
    __cxa_atexit(
      CEnvWind::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvWind::GetEntityClassInternal(void)::g_EntityCEnvWindClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvWindClass != 0 )
    return &CEnvWind::GetEntityClassInternal(void)::g_EntityCEnvWindClass;
  if ( `guard variable for'CEnvWind::GetEntityClassInfo(void)::g_EntityCEnvWindClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvWind::GetEntityClassInfo(void)::g_EntityCEnvWindClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvWind::GetEntityClassInfo(void)::g_EntityCEnvWindClassInfo,
      "CEnvWind",
      "env_wind",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvWind::GetEntityClassInfo(void)::g_EntityCEnvWindClassInfo);
  }
  CEnvWind::GetEntityClassInternal(void)::g_EntityCEnvWindClass.m_pClassInfo = &CEnvWind::GetEntityClassInfo(void)::g_EntityCEnvWindClassInfo;
  CEnvWind::GetEntityClassInternal(void)::g_EntityCEnvWindClass.m_pBaseClassInfo = CEnvWind::GetEntityClassInfo(void)::g_EntityCEnvWindClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvWindClass = &CEnvWind::GetEntityClassInternal(void)::g_EntityCEnvWindClass;
  CEnvWind::GetEntityClassInfo(void)::g_EntityCEnvWindClassInfo.m_pClass = &CEnvWind::GetEntityClassInternal(void)::g_EntityCEnvWindClass;
  CEnvWind::GetEntityClassInternal(void)::g_EntityCEnvWindClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnvWindClass->m_pComponentOverrides = 0;
  return &CEnvWind::GetEntityClassInternal(void)::g_EntityCEnvWindClass;
}


// CEnvWind::NetworkVar_m_EnvWindShared::NetworkStateChanged  (line 1595, @0x00000000021dec30, libserver.so)  // inlines: DispatchNetworkStateChanged<CEnvWind>
void __fastcall CEnvWind::NetworkVar_m_EnvWindShared::NetworkStateChanged(
        CEnvWind::NetworkVar_m_EnvWindShared *const this)
{
  (*(*(this - 97) + 168LL))(this - 776);
}


// CEnvWind::NetworkVar_m_EnvWindShared::NetworkStateChangedLog  (line 1595, @0x00000000021dec50, libserver.so)  // inlines: DispatchNetworkStateChangedLog<CEnvWind>
void __fastcall CEnvWind::NetworkVar_m_EnvWindShared::NetworkStateChangedLog(
        const CEnvWind::NetworkVar_m_EnvWindShared *const this,
        const char *pVarName,
        const char *pMsg)
{
  (*(*(this - 97) + 184LL))(this - 776, pVarName, pMsg);
}


// CEnvWind::NetworkVar_m_EnvWindShared::NetworkStateChanged  (line 1595, @0x00000000021dec70, libserver.so)  // inlines: DispatchNetworkStateChanged<CEnvWind>
void __fastcall CEnvWind::NetworkVar_m_EnvWindShared::NetworkStateChanged(
        CEnvWind::NetworkVar_m_EnvWindShared *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  (*(*(this - 97) + 176LL))(this - 776, nLocalOffset + 776, nArrayIndex, nPathIndex.m_Value);
}


// CEnvWind::GetDataDescMap  (line 1598, @0x00000000021bae70, libserver.so)
// globals: CEnvWind::m_DataMap
datamap_t *__fastcall CEnvWind::GetDataDescMap(CEnvWind *const this)
{
  return &CEnvWind::m_DataMap;
}


// CEnvWind::AddDatadescMetadataKeys  (line 1598, @0x00000000021c9190, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvWind::GetEntityClass(void)
void __fastcall CEnvWind::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvWind::GetEntityClass);
}


// CEnvWind::GetBaseMap  (line 1598, @0x00000000021c91b0, libserver.so)
datamap_t *__cdecl CEnvWind::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CEnvWind>  (line 1598, @0x00000000021d8f20, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CEnvWind"
// globals: `guard variable for'DataMapInit<CEnvWind>(CEnvWind *)::nameHolder, `guard variable for'DataMapInit<CEnvWind>(CEnvWind *)::dataDesc, CEnvWind::GetEntityClass(void), CEnvWind::m_DataMap, DataMapInit<CEnvWind>(CEnvWind *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvWind>(CEnvWind *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CEnvWind>(CEnvWind *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvWind>(CEnvWind *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvWind>(CEnvWind *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvWind>(CEnvWind *)::nameHolder.m_pszBase = "CEnvWind";
    DataMapInit<CEnvWind>(CEnvWind *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvWind>(CEnvWind *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvWind>(CEnvWind *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvWind>(CEnvWind *)::nameHolder.m_nLenBase = 8;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvWind>(CEnvWind *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvWind>(CEnvWind *)::nameHolder,
      &_dso_handle);
  }
  CEnvWind::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CEnvWind>(CEnvWind *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvWind>(CEnvWind *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CEnvWind>(CEnvWind *)::nameHolder.m_nLenBase + 10);
    strcpy(stpcpy(v2, DataMapInit<CEnvWind>(CEnvWind *)::nameHolder.m_pszBase), "WindThink");
    m_Size = DataMapInit<CEnvWind>(CEnvWind *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CEnvWind>(CEnvWind *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CEnvWind>(CEnvWind *)::nameHolder.m_Names.m_Size == DataMapInit<CEnvWind>(CEnvWind *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CEnvWind>(CEnvWind *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CEnvWind>(CEnvWind *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CEnvWind>(CEnvWind *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CEnvWind>(CEnvWind *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CEnvWind>(CEnvWind *)::dataDesc[13].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvWind>(CEnvWind *)::dataDesc);
  }
  CEnvWind::m_DataMap.dataNumFields = 13;
  CEnvWind::m_DataMap.dataDesc = &DataMapInit<CEnvWind>(CEnvWind *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvWind::m_DataMap, CEnvWind::GetEntityClass);
  return &CEnvWind::m_DataMap;
}


// CEnvWind::YouForgotToImplementOrDeclareServerClass  (line 1627, @0x00000000021bae80, libserver.so)
int __fastcall CEnvWind::YouForgotToImplementOrDeclareServerClass(CEnvWind *const this)
{
  return 0;
}


// CEnvWind::GetServerClass  (line 1627, @0x00000000021c48f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CEnvWind::GetServerClass(CEnvWind *const this)
{
  __int64 v1; // rdx
  ServerClass *result; // rax
  __int64 v3; // rdx

  v1 = *(*(this + 1) + 8LL);
  result = *(v1 + 624);
  if ( result == 0 )
  {
    v3 = *(v1 + 64);
    if ( v3 != 0 )
      return CEntityClass::GetGameClass(*(v3 + 24), 0);
  }
  return result;
}


// CEnvWind::Spawn  (line 1630, @0x00000000021c0200, libserver.so)  // inlines: NetworkStateChanged, Set, SetLocation, anglemod, curtime, entindex, operator!=, operator=, operator=<int>
// calls: CBaseEntity::Spawn, CBaseEntity::AddEffects, CBaseEntity::GetLocalAngles, CEntityInstance::GetEntityIndex, CEnvWindShared::Init, CBaseEntity::GetAbsOrigin, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// globals: CEnvWind::WindThink(void)
void __fastcall CEnvWind::Spawn(CEnvWind *const this, const CEntityKeyValues *pKeyValues)
{
  CEnvWindShared *v3; // r14
  unsigned __int16 v4; // ax
  int v5; // r12d
  const QAngle *LocalAngles; // rax
  float m_flCurrentTime; // xmm0_4
  int y; // r15d
  CGlobalVars *v9; // r12
  CEntityIndex v10; // eax
  const Vector *AbsOrigin; // rax
  _DWORD *p_x; // r12
  double v13; // xmm1_8
  CGlobalVars *v14; // r12
  double v15; // xmm0_8
  FnGlobalVarsWarningFunc v16; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float flTime; // [rsp+Ch] [rbp-34h]

  v3 = (this + 776);
  CBaseEntity::Spawn(this, pKeyValues);
  CBaseEntity::AddEffects(this, 32);
  v4 = *(this + 440);
  v5 = ((v4 * 182.04445) * 0.0054931641);
  if ( v4 != v5 )
  {
    (*(*(this + 97) + 16LL))(v3, 104, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *(this + 440) = v5;
  }
  LocalAngles = CBaseEntity::GetLocalAngles(this);
  m_flCurrentTime = 0.0;
  y = LocalAngles->y;
  v9 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v9->m_flCurrentTime;
  }
  flTime = m_flCurrentTime;
  v10.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  CEnvWindShared::Init(v3, v10, 0, flTime, y, 0.0);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  p_x = &AbsOrigin->x;
  if ( AbsOrigin->x != *(this + 205) || AbsOrigin->y != *(this + 206) || AbsOrigin->z != *(this + 207) )
  {
    (*(*(this + 97) + 16LL))(v3, 44, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *(this + 205) = *p_x;
    *(this + 206) = p_x[1];
    *(this + 207) = p_x[2];
  }
  CBaseEntity::ThinkSet(this, CEnvWind::WindThink, 0.0, 0, 0);
  v14 = gpGlobals;
  v15 = 0.0;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v16 = gpGlobals->m_pfnWarningFunc;
      if ( v16 != 0 )
        (v16)(1, 0.0);
    }
    *&v15 = LODWORD(v14->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v15, v13, 0);
}


// CEnvWind::UpdateTransmitState  (line 1644, @0x00000000021bb140, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CEnvWind::UpdateTransmitState(CEnvWind *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CEnvWind::WindThink  (line 1649, @0x00000000021bf200, libserver.so)  // inlines: curtime
// calls: CEnvWindShared::WindThink, CBaseEntity::SetNextThink
void __fastcall CEnvWind::WindThink(CEnvWind *const this)
{
  float v1; // xmm1_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v4; // xmm0_8
  double v5; // xmm1_8

  if ( gpGlobals != 0 && !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
  {
    m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
    if ( m_pfnWarningFunc != 0 )
      (m_pfnWarningFunc)(1, 0.0);
  }
  *&v4 = CEnvWindShared::WindThink((this + 776), v1);
  CBaseEntity::SetNextThink(this, v4, v5, 0);
}


// CPhysicsWire::~CPhysicsWire  (line 1657, @0x00000000021e1400, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPhysicsWire::~CPhysicsWire(CPhysicsWire *const this)
{
  this->_vptr_IHandleEntity = &off_401DD50;
  CBaseEntity::~CBaseEntity(this);
}


// CPhysicsWire::~CPhysicsWire  (line 1657, @0x00000000021e1420, libserver.so)  // inlines: ~CPhysicsWire
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPhysicsWire::~CPhysicsWire(CPhysicsWire *const this)
{
  this->_vptr_IHandleEntity = &off_401DD50;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPhysicsWire::GetEntityClass  (line 1659, @0x00000000021deca0, libserver.so)
CEntityClass *__cdecl CPhysicsWire::GetEntityClass()
{
  return g_pEntityCPhysicsWireClass;
}


// CPhysicsWire::Schema_DynamicBinding  (line 1659, @0x00000000021decb0, libserver.so)
// globals: CPhysicsWire::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysicsWire::Schema_DynamicBinding(const CPhysicsWire *const this)
{
  return CPhysicsWire::s_pSchemaBinding;
}


// CPhysicsWire::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1659, @0x00000000021decc0, libserver.so)
// globals: CPhysicsWire::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysicsWire::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPhysicsWire::CEntityInstanceEntityClass *const this)
{
  return CPhysicsWire::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPhysicsWire::CEntityInstanceEntityClass::DestructInstance  (line 1659, @0x00000000021decd0, libserver.so)  // inlines: Destruct<CPhysicsWire>
void __fastcall CPhysicsWire::CEntityInstanceEntityClass::DestructInstance(
        CPhysicsWire::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPhysicsWire::CEntityInstanceEntityClass::FreeInstance  (line 1659, @0x00000000021decf0, libserver.so)
void __fastcall CPhysicsWire::CEntityInstanceEntityClass::FreeInstance(
        CPhysicsWire::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPhysicsWire::CEntityInstanceEntityClass::CanAllocate  (line 1659, @0x00000000021ded10, libserver.so)
bool __fastcall CPhysicsWire::CEntityInstanceEntityClass::CanAllocate(
        const CPhysicsWire::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPhysicsWire::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1659, @0x00000000021ded20, libserver.so)
// globals: CPhysicsWire::s_pSchemaBinding
const ISchemaBinding *__fastcall CPhysicsWire::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPhysicsWire::CEntityInstanceEntityClass *const this)
{
  return CPhysicsWire::s_pSchemaBinding;
}


// CPhysicsWire::CEntityInstanceEntityClass::AllocateInstance  (line 1659, @0x00000000021e07c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPhysicsWire::CEntityInstanceEntityClass::AllocateInstance(
        CPhysicsWire::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 784);
  memset(v1, 0, 0x310u);
  return v1;
}


// CPhysicsWire::CEntityInstanceEntityClass::ConstructInstance  (line 1659, @0x00000000021e0bf0, libserver.so)  // inlines: CPhysicsWire, Construct<CPhysicsWire>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CPhysicsWire::CEntityInstanceEntityClass::ConstructInstance(
        CPhysicsWire::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_401DD50;
  }
  return p;
}


// CPhysicsWire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1659, @0x00000000021e2f70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPhysicsWire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysicsWire::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPhysicsWire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1659, @0x00000000021e2f90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPhysicsWire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysicsWire::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPhysicsWire::GetEntityClassInternal  (line 1659, @0x00000000021e82b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "env_physwire", "CPhysicsWire"
// globals: `guard variable for'CPhysicsWire::GetEntityClassInternal(void)::g_EntityCPhysicsWireClass, CPhysicsWire::GetEntityClassInternal(void)::g_EntityCPhysicsWireClass, __dso_handle, CPhysicsWire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPhysicsWire::GetEntityClassInfo(void)::g_EntityCPhysicsWireClassInfo, CPhysicsWire::GetEntityClassInfo(void)::g_EntityCPhysicsWireClassInfo
CEntityClass *__cdecl CPhysicsWire::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysicsWire::GetEntityClassInternal(void)::g_EntityCPhysicsWireClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysicsWire::GetEntityClassInternal(void)::g_EntityCPhysicsWireClass) != 0 )
  {
    CEntityClass::CEntityClass(&CPhysicsWire::GetEntityClassInternal(void)::g_EntityCPhysicsWireClass);
    CPhysicsWire::GetEntityClassInternal(void)::g_EntityCPhysicsWireClass._vptr_CEntityClass = off_401DCD0;
    __cxa_guard_release(&`guard variable for'CPhysicsWire::GetEntityClassInternal(void)::g_EntityCPhysicsWireClass);
    __cxa_atexit(
      CPhysicsWire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPhysicsWire::GetEntityClassInternal(void)::g_EntityCPhysicsWireClass,
      &_dso_handle);
  }
  if ( g_pEntityCPhysicsWireClass != 0 )
    return &CPhysicsWire::GetEntityClassInternal(void)::g_EntityCPhysicsWireClass;
  if ( `guard variable for'CPhysicsWire::GetEntityClassInfo(void)::g_EntityCPhysicsWireClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysicsWire::GetEntityClassInfo(void)::g_EntityCPhysicsWireClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPhysicsWire::GetEntityClassInfo(void)::g_EntityCPhysicsWireClassInfo,
      "CPhysicsWire",
      "env_physwire",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPhysicsWire::GetEntityClassInfo(void)::g_EntityCPhysicsWireClassInfo);
  }
  CPhysicsWire::GetEntityClassInternal(void)::g_EntityCPhysicsWireClass.m_pClassInfo = &CPhysicsWire::GetEntityClassInfo(void)::g_EntityCPhysicsWireClassInfo;
  CPhysicsWire::GetEntityClassInternal(void)::g_EntityCPhysicsWireClass.m_pBaseClassInfo = CPhysicsWire::GetEntityClassInfo(void)::g_EntityCPhysicsWireClassInfo.m_pBaseClassInfo;
  g_pEntityCPhysicsWireClass = &CPhysicsWire::GetEntityClassInternal(void)::g_EntityCPhysicsWireClass;
  CPhysicsWire::GetEntityClassInfo(void)::g_EntityCPhysicsWireClassInfo.m_pClass = &CPhysicsWire::GetEntityClassInternal(void)::g_EntityCPhysicsWireClass;
  CPhysicsWire::GetEntityClassInternal(void)::g_EntityCPhysicsWireClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPhysicsWireClass->m_pComponentOverrides = 0;
  return &CPhysicsWire::GetEntityClassInternal(void)::g_EntityCPhysicsWireClass;
}


// CPhysicsWire::GetDataDescMap  (line 1671, @0x00000000021bae90, libserver.so)
// globals: CPhysicsWire::m_DataMap
datamap_t *__fastcall CPhysicsWire::GetDataDescMap(CPhysicsWire *const this)
{
  return &CPhysicsWire::m_DataMap;
}


// CPhysicsWire::AddDatadescMetadataKeys  (line 1671, @0x00000000021c91c0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPhysicsWire::GetEntityClass(void)
void __fastcall CPhysicsWire::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPhysicsWire::GetEntityClass);
}


// CPhysicsWire::GetBaseMap  (line 1671, @0x00000000021c91e0, libserver.so)
datamap_t *__cdecl CPhysicsWire::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CPhysicsWire>  (line 1671, @0x00000000021c91f0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CPhysicsWire"
// globals: `guard variable for'DataMapInit<CPhysicsWire>(CPhysicsWire *)::nameHolder, CPhysicsWire::GetEntityClass(void), CPhysicsWire::m_DataMap, DataMapInit<CPhysicsWire>(CPhysicsWire *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPhysicsWire>(CPhysicsWire *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPhysicsWire>(CPhysicsWire *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysicsWire>(CPhysicsWire *)::nameHolder) != 0 )
  {
    DataMapInit<CPhysicsWire>(CPhysicsWire *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPhysicsWire>(CPhysicsWire *)::nameHolder.m_pszBase = "CPhysicsWire";
    DataMapInit<CPhysicsWire>(CPhysicsWire *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPhysicsWire>(CPhysicsWire *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPhysicsWire>(CPhysicsWire *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPhysicsWire>(CPhysicsWire *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysicsWire>(CPhysicsWire *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPhysicsWire>(CPhysicsWire *)::nameHolder,
      &_dso_handle);
  }
  CPhysicsWire::m_DataMap.dataNumFields = 1;
  CPhysicsWire::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CPhysicsWire::m_DataMap.dataDesc = &DataMapInit<CPhysicsWire>(CPhysicsWire *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPhysicsWire::m_DataMap, CPhysicsWire::GetEntityClass);
  return &CPhysicsWire::m_DataMap;
}


// CPhysicsWire::SetupPhysics  (line 1689, @0x00000000021c92c0, libserver.so)
bool __fastcall CPhysicsWire::SetupPhysics(CPhysicsWire *const this)
{
  return 1;
}


// CEnvMuzzleFlash::~CEnvMuzzleFlash  (line 1738, @0x00000000021e10e0, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CEnvMuzzleFlash::~CEnvMuzzleFlash(CEnvMuzzleFlash *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CEnvMuzzleFlash::~CEnvMuzzleFlash  (line 1738, @0x00000000021e1100, libserver.so)  // inlines: ~CEnvMuzzleFlash, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CEnvMuzzleFlash::~CEnvMuzzleFlash(CEnvMuzzleFlash *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvMuzzleFlash::GetEntityClass  (line 1740, @0x00000000021ded30, libserver.so)
CEntityClass *__cdecl CEnvMuzzleFlash::GetEntityClass()
{
  return g_pEntityCEnvMuzzleFlashClass;
}


// CEnvMuzzleFlash::Schema_DynamicBinding  (line 1740, @0x00000000021ded40, libserver.so)
// globals: CEnvMuzzleFlash::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvMuzzleFlash::Schema_DynamicBinding(const CEnvMuzzleFlash *const this)
{
  return CEnvMuzzleFlash::s_pSchemaBinding;
}


// CEnvMuzzleFlash::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1740, @0x00000000021ded50, libserver.so)
// globals: CEnvMuzzleFlash::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvMuzzleFlash::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvMuzzleFlash::CEntityInstanceEntityClass *const this)
{
  return CEnvMuzzleFlash::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvMuzzleFlash::CEntityInstanceEntityClass::DestructInstance  (line 1740, @0x00000000021ded60, libserver.so)  // inlines: Destruct<CEnvMuzzleFlash>
void __fastcall CEnvMuzzleFlash::CEntityInstanceEntityClass::DestructInstance(
        CEnvMuzzleFlash::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvMuzzleFlash::CEntityInstanceEntityClass::FreeInstance  (line 1740, @0x00000000021ded80, libserver.so)
void __fastcall CEnvMuzzleFlash::CEntityInstanceEntityClass::FreeInstance(
        CEnvMuzzleFlash::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvMuzzleFlash::CEntityInstanceEntityClass::CanAllocate  (line 1740, @0x00000000021deda0, libserver.so)
bool __fastcall CEnvMuzzleFlash::CEntityInstanceEntityClass::CanAllocate(
        const CEnvMuzzleFlash::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvMuzzleFlash::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1740, @0x00000000021dedb0, libserver.so)
// globals: CEnvMuzzleFlash::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvMuzzleFlash::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvMuzzleFlash::CEntityInstanceEntityClass *const this)
{
  return CEnvMuzzleFlash::s_pSchemaBinding;
}


// CEnvMuzzleFlash::CEntityInstanceEntityClass::AllocateInstance  (line 1740, @0x00000000021e0800, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvMuzzleFlash::CEntityInstanceEntityClass::AllocateInstance(
        CEnvMuzzleFlash::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 792);
  memset(v1, 0, 0x318u);
  return v1;
}


// CEnvMuzzleFlash::CEntityInstanceEntityClass::ConstructInstance  (line 1740, @0x00000000021e0c20, libserver.so)  // inlines: CEnvMuzzleFlash, CPointEntity, CUtlSymbolLarge, Construct<CEnvMuzzleFlash>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CEnvMuzzleFlash::CEntityInstanceEntityClass::ConstructInstance(
        CEnvMuzzleFlash::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 98) = 0;
    *p = &off_401E470;
  }
  return p;
}


// CEnvMuzzleFlash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1740, @0x00000000021e27f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvMuzzleFlash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvMuzzleFlash::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CEnvMuzzleFlash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1740, @0x00000000021e2810, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvMuzzleFlash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvMuzzleFlash::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvMuzzleFlash::GetEntityClassInternal  (line 1740, @0x00000000021e8400, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "env_muzzleflash", "CEnvMuzzleFlash"
// globals: `guard variable for'CEnvMuzzleFlash::GetEntityClassInternal(void)::g_EntityCEnvMuzzleFlashClass, CEnvMuzzleFlash::GetEntityClassInternal(void)::g_EntityCEnvMuzzleFlashClass, __dso_handle, CEnvMuzzleFlash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvMuzzleFlash::GetEntityClassInfo(void)::g_EntityCEnvMuzzleFlashClassInfo, CEnvMuzzleFlash::GetEntityClassInfo(void)::g_EntityCEnvMuzzleFlashClassInfo
CEntityClass *__cdecl CEnvMuzzleFlash::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvMuzzleFlash::GetEntityClassInternal(void)::g_EntityCEnvMuzzleFlashClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvMuzzleFlash::GetEntityClassInternal(void)::g_EntityCEnvMuzzleFlashClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvMuzzleFlash::GetEntityClassInternal(void)::g_EntityCEnvMuzzleFlashClass);
    CEnvMuzzleFlash::GetEntityClassInternal(void)::g_EntityCEnvMuzzleFlashClass._vptr_CEntityClass = off_401E3F0;
    __cxa_guard_release(&`guard variable for'CEnvMuzzleFlash::GetEntityClassInternal(void)::g_EntityCEnvMuzzleFlashClass);
    __cxa_atexit(
      CEnvMuzzleFlash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvMuzzleFlash::GetEntityClassInternal(void)::g_EntityCEnvMuzzleFlashClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvMuzzleFlashClass != 0 )
    return &CEnvMuzzleFlash::GetEntityClassInternal(void)::g_EntityCEnvMuzzleFlashClass;
  if ( `guard variable for'CEnvMuzzleFlash::GetEntityClassInfo(void)::g_EntityCEnvMuzzleFlashClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvMuzzleFlash::GetEntityClassInfo(void)::g_EntityCEnvMuzzleFlashClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvMuzzleFlash::GetEntityClassInfo(void)::g_EntityCEnvMuzzleFlashClassInfo,
      "CEnvMuzzleFlash",
      "env_muzzleflash",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvMuzzleFlash::GetEntityClassInfo(void)::g_EntityCEnvMuzzleFlashClassInfo);
  }
  CEnvMuzzleFlash::GetEntityClassInternal(void)::g_EntityCEnvMuzzleFlashClass.m_pClassInfo = &CEnvMuzzleFlash::GetEntityClassInfo(void)::g_EntityCEnvMuzzleFlashClassInfo;
  CEnvMuzzleFlash::GetEntityClassInternal(void)::g_EntityCEnvMuzzleFlashClass.m_pBaseClassInfo = CEnvMuzzleFlash::GetEntityClassInfo(void)::g_EntityCEnvMuzzleFlashClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvMuzzleFlashClass = &CEnvMuzzleFlash::GetEntityClassInternal(void)::g_EntityCEnvMuzzleFlashClass;
  CEnvMuzzleFlash::GetEntityClassInfo(void)::g_EntityCEnvMuzzleFlashClassInfo.m_pClass = &CEnvMuzzleFlash::GetEntityClassInternal(void)::g_EntityCEnvMuzzleFlashClass;
  CEnvMuzzleFlash::GetEntityClassInternal(void)::g_EntityCEnvMuzzleFlashClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnvMuzzleFlashClass->m_pComponentOverrides = 0;
  return &CEnvMuzzleFlash::GetEntityClassInternal(void)::g_EntityCEnvMuzzleFlashClass;
}


// CEnvMuzzleFlash::GetDataDescMap  (line 1754, @0x00000000021baea0, libserver.so)
// globals: CEnvMuzzleFlash::m_DataMap
datamap_t *__fastcall CEnvMuzzleFlash::GetDataDescMap(CEnvMuzzleFlash *const this)
{
  return &CEnvMuzzleFlash::m_DataMap;
}


// CEnvMuzzleFlash::AddDatadescMetadataKeys  (line 1754, @0x00000000021c92d0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvMuzzleFlash::GetEntityClass(void)
void __fastcall CEnvMuzzleFlash::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvMuzzleFlash::GetEntityClass);
}


// CEnvMuzzleFlash::GetBaseMap  (line 1754, @0x00000000021c92f0, libserver.so)
datamap_t *__cdecl CEnvMuzzleFlash::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CEnvMuzzleFlash>  (line 1754, @0x00000000021c9300, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CEnvMuzzleFlash"
// globals: `guard variable for'DataMapInit<CEnvMuzzleFlash>(CEnvMuzzleFlash *)::nameHolder, CEnvMuzzleFlash::GetEntityClass(void), CEnvMuzzleFlash::m_DataMap, DataMapInit<CEnvMuzzleFlash>(CEnvMuzzleFlash *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvMuzzleFlash>(CEnvMuzzleFlash *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEnvMuzzleFlash>(CEnvMuzzleFlash *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvMuzzleFlash>(CEnvMuzzleFlash *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvMuzzleFlash>(CEnvMuzzleFlash *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvMuzzleFlash>(CEnvMuzzleFlash *)::nameHolder.m_pszBase = "CEnvMuzzleFlash";
    DataMapInit<CEnvMuzzleFlash>(CEnvMuzzleFlash *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvMuzzleFlash>(CEnvMuzzleFlash *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvMuzzleFlash>(CEnvMuzzleFlash *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvMuzzleFlash>(CEnvMuzzleFlash *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvMuzzleFlash>(CEnvMuzzleFlash *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvMuzzleFlash>(CEnvMuzzleFlash *)::nameHolder,
      &_dso_handle);
  }
  CEnvMuzzleFlash::m_DataMap.dataNumFields = 3;
  CEnvMuzzleFlash::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  CEnvMuzzleFlash::m_DataMap.dataDesc = &DataMapInit<CEnvMuzzleFlash>(CEnvMuzzleFlash *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvMuzzleFlash::m_DataMap, CEnvMuzzleFlash::GetEntityClass);
  return &CEnvMuzzleFlash::m_DataMap;
}


// CEnvMuzzleFlash::Spawn  (line 1768, @0x00000000021be0f0, libserver.so)  // inlines: GetParent, MakeStringToken, String, ToCStr
// calls: CPointEntity::Spawn, CGameSceneNode::GetOwnerEntity, CBaseAnimating::LookupAttachment, CBaseEntity::SetParent, CBaseEntity::SetLocalOrigin, CBaseEntity::SetLocalAngles, MurmurHash2LowerCase, RegisterStringToken
void __fastcall CEnvMuzzleFlash::Spawn(CEnvMuzzleFlash *const this, const CEntityKeyValues *pKeyValues)
{
  CGameSceneNode *m_pParent; // rdi
  CGameSceneNode *v4; // rdi
  CBaseEntity *OwnerEntity; // rax
  const CGameSceneNode *v6; // rdi
  const CBaseAnimating *v7; // rax
  const char *m_pAsString; // rsi
  const char *v9; // r12
  CUtlStringToken v10; // r13d
  CBaseEntity *v11; // rsi
  CGameSceneNode *v12; // rdi
  uint32 v13; // eax
  uint32 v14; // [rsp+Ch] [rbp-24h]

  CPointEntity::Spawn(this, pKeyValues);
  if ( this->m_iszParentAttachment.u.m_Id != 0 )
  {
    m_pParent = this->m_pGameSceneNode->m_pParent;
    if ( m_pParent != 0 && CGameSceneNode::GetOwnerEntity(m_pParent) != 0 )
    {
      v4 = this->m_pGameSceneNode->m_pParent;
      OwnerEntity = 0;
      if ( v4 != 0 )
        OwnerEntity = CGameSceneNode::GetOwnerEntity(v4);
      if ( (*(OwnerEntity->_vptr_IHandleEntity + 43))(OwnerEntity) != 0 )
      {
        v6 = this->m_pGameSceneNode->m_pParent;
        if ( v6 != 0 )
          v6 = CGameSceneNode::GetOwnerEntity(v6);
        v7 = (*(v6->_vptr_CGameSceneNode + 43))(v6);
        m_pAsString = "";
        if ( this->m_iszParentAttachment.u.m_Id != 0 )
          m_pAsString = this->m_iszParentAttachment.u.m_pAsString;
        if ( CBaseAnimating::LookupAttachment(v7, m_pAsString) != 0 )
        {
          if ( this->m_iszParentAttachment.u.m_Id != 0 )
            v9 = this->m_iszParentAttachment.u.m_pAsString;
          else
            v9 = "";
          v10.m_nHashCode = 0;
          if ( *v9 != 0 )
          {
            v13 = MurmurHash2LowerCase(v9, 0x31415926u);
            if ( g_bUpdateStringTokenDatabase )
            {
              v14 = v13;
              RegisterStringToken(v13, v9, 0, 1);
              v13 = v14;
            }
            v10.m_nHashCode = v13;
          }
          v11 = 0;
          v12 = this->m_pGameSceneNode->m_pParent;
          if ( v12 != 0 )
            v11 = CGameSceneNode::GetOwnerEntity(v12);
          CBaseEntity::SetParent(this, v11, v10, 0);
          CBaseEntity::SetLocalOrigin(this, &vec3_origin);
          CBaseEntity::SetLocalAngles(this, &vec3_angle);
        }
      }
    }
  }
}


// CEnvMuzzleFlash::InputFire  (line 1790, @0x00000000021c71c0, libserver.so)
// calls: CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin, ITempEntsSystem::MuzzleFlash
void __fastcall CEnvMuzzleFlash::InputFire(CEnvMuzzleFlash *const this, inputdata_t *const inputdata)
{
  const QAngle *AbsAngles; // r12
  const Vector *AbsOrigin; // rax
  float m_flScale; // [rsp+Ch] [rbp-14h]

  m_flScale = this->m_flScale;
  AbsAngles = CBaseEntity::GetAbsAngles(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  ITempEntsSystem::MuzzleFlash(g_pEffects, AbsOrigin, AbsAngles, m_flScale, 1u);
}


// CEnvSplash::~CEnvSplash  (line 1801, @0x00000000021e1130, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CEnvSplash::~CEnvSplash(CEnvSplash *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CEnvSplash::~CEnvSplash  (line 1801, @0x00000000021e1150, libserver.so)  // inlines: ~CEnvSplash, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CEnvSplash::~CEnvSplash(CEnvSplash *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvSplash::GetEntityClass  (line 1803, @0x00000000021dedc0, libserver.so)
CEntityClass *__cdecl CEnvSplash::GetEntityClass()
{
  return g_pEntityCEnvSplashClass;
}


// CEnvSplash::Schema_DynamicBinding  (line 1803, @0x00000000021dedd0, libserver.so)
// globals: CEnvSplash::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvSplash::Schema_DynamicBinding(const CEnvSplash *const this)
{
  return CEnvSplash::s_pSchemaBinding;
}


// CEnvSplash::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1803, @0x00000000021dede0, libserver.so)
// globals: CEnvSplash::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvSplash::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvSplash::CEntityInstanceEntityClass *const this)
{
  return CEnvSplash::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvSplash::CEntityInstanceEntityClass::DestructInstance  (line 1803, @0x00000000021dedf0, libserver.so)  // inlines: Destruct<CEnvSplash>
void __fastcall CEnvSplash::CEntityInstanceEntityClass::DestructInstance(
        CEnvSplash::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvSplash::CEntityInstanceEntityClass::FreeInstance  (line 1803, @0x00000000021dee10, libserver.so)
void __fastcall CEnvSplash::CEntityInstanceEntityClass::FreeInstance(
        CEnvSplash::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvSplash::CEntityInstanceEntityClass::CanAllocate  (line 1803, @0x00000000021dee30, libserver.so)
bool __fastcall CEnvSplash::CEntityInstanceEntityClass::CanAllocate(
        const CEnvSplash::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvSplash::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1803, @0x00000000021dee40, libserver.so)
// globals: CEnvSplash::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvSplash::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvSplash::CEntityInstanceEntityClass *const this)
{
  return CEnvSplash::s_pSchemaBinding;
}


// CEnvSplash::CEntityInstanceEntityClass::AllocateInstance  (line 1803, @0x00000000021e0840, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvSplash::CEntityInstanceEntityClass::AllocateInstance(
        CEnvSplash::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 784);
  memset(v1, 0, 0x310u);
  return v1;
}


// CEnvSplash::CEntityInstanceEntityClass::ConstructInstance  (line 1803, @0x00000000021e0c60, libserver.so)  // inlines: CEnvSplash, CPointEntity, Construct<CEnvSplash>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CEnvSplash::CEntityInstanceEntityClass::ConstructInstance(
        CEnvSplash::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_401EB90;
  }
  return p;
}


// CEnvSplash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1803, @0x00000000021e2840, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvSplash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvSplash::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CEnvSplash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1803, @0x00000000021e2860, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvSplash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvSplash::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvSplash::GetEntityClassInternal  (line 1803, @0x00000000021e8550, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "env_splash", "CEnvSplash"
// globals: `guard variable for'CEnvSplash::GetEntityClassInternal(void)::g_EntityCEnvSplashClass, CEnvSplash::GetEntityClassInternal(void)::g_EntityCEnvSplashClass, __dso_handle, CEnvSplash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvSplash::GetEntityClassInfo(void)::g_EntityCEnvSplashClassInfo, CEnvSplash::GetEntityClassInfo(void)::g_EntityCEnvSplashClassInfo
CEntityClass *__cdecl CEnvSplash::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvSplash::GetEntityClassInternal(void)::g_EntityCEnvSplashClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvSplash::GetEntityClassInternal(void)::g_EntityCEnvSplashClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvSplash::GetEntityClassInternal(void)::g_EntityCEnvSplashClass);
    CEnvSplash::GetEntityClassInternal(void)::g_EntityCEnvSplashClass._vptr_CEntityClass = off_401EB10;
    __cxa_guard_release(&`guard variable for'CEnvSplash::GetEntityClassInternal(void)::g_EntityCEnvSplashClass);
    __cxa_atexit(
      CEnvSplash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvSplash::GetEntityClassInternal(void)::g_EntityCEnvSplashClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvSplashClass != 0 )
    return &CEnvSplash::GetEntityClassInternal(void)::g_EntityCEnvSplashClass;
  if ( `guard variable for'CEnvSplash::GetEntityClassInfo(void)::g_EntityCEnvSplashClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvSplash::GetEntityClassInfo(void)::g_EntityCEnvSplashClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvSplash::GetEntityClassInfo(void)::g_EntityCEnvSplashClassInfo,
      "CEnvSplash",
      "env_splash",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvSplash::GetEntityClassInfo(void)::g_EntityCEnvSplashClassInfo);
  }
  CEnvSplash::GetEntityClassInternal(void)::g_EntityCEnvSplashClass.m_pClassInfo = &CEnvSplash::GetEntityClassInfo(void)::g_EntityCEnvSplashClassInfo;
  CEnvSplash::GetEntityClassInternal(void)::g_EntityCEnvSplashClass.m_pBaseClassInfo = CEnvSplash::GetEntityClassInfo(void)::g_EntityCEnvSplashClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvSplashClass = &CEnvSplash::GetEntityClassInternal(void)::g_EntityCEnvSplashClass;
  CEnvSplash::GetEntityClassInfo(void)::g_EntityCEnvSplashClassInfo.m_pClass = &CEnvSplash::GetEntityClassInternal(void)::g_EntityCEnvSplashClass;
  CEnvSplash::GetEntityClassInternal(void)::g_EntityCEnvSplashClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnvSplashClass->m_pComponentOverrides = 0;
  return &CEnvSplash::GetEntityClassInternal(void)::g_EntityCEnvSplashClass;
}


// CEnvSplash::GetDataDescMap  (line 1818, @0x00000000021baeb0, libserver.so)
// globals: CEnvSplash::m_DataMap
datamap_t *__fastcall CEnvSplash::GetDataDescMap(CEnvSplash *const this)
{
  return &CEnvSplash::m_DataMap;
}


// CEnvSplash::AddDatadescMetadataKeys  (line 1818, @0x00000000021c93d0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvSplash::GetEntityClass(void)
void __fastcall CEnvSplash::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvSplash::GetEntityClass);
}


// CEnvSplash::GetBaseMap  (line 1818, @0x00000000021c93f0, libserver.so)
datamap_t *__cdecl CEnvSplash::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CEnvSplash>  (line 1818, @0x00000000021c9400, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CEnvSplash"
// globals: `guard variable for'DataMapInit<CEnvSplash>(CEnvSplash *)::nameHolder, CEnvSplash::GetEntityClass(void), CEnvSplash::m_DataMap, DataMapInit<CEnvSplash>(CEnvSplash *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvSplash>(CEnvSplash *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEnvSplash>(CEnvSplash *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvSplash>(CEnvSplash *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvSplash>(CEnvSplash *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvSplash>(CEnvSplash *)::nameHolder.m_pszBase = "CEnvSplash";
    DataMapInit<CEnvSplash>(CEnvSplash *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvSplash>(CEnvSplash *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvSplash>(CEnvSplash *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvSplash>(CEnvSplash *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvSplash>(CEnvSplash *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvSplash>(CEnvSplash *)::nameHolder,
      &_dso_handle);
  }
  CEnvSplash::m_DataMap.dataNumFields = 2;
  CEnvSplash::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  CEnvSplash::m_DataMap.dataDesc = &DataMapInit<CEnvSplash>(CEnvSplash *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvSplash::m_DataMap, CEnvSplash::GetEntityClass);
  return &CEnvSplash::m_DataMap;
}


// CEnvSplash::Precache  (line 1829, @0x00000000021de020, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, PrecacheEffect
// strings: "watersplash"
void __fastcall CEnvSplash::Precache(CEnvSplash *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  PrecacheEffect("watersplash", 0);
}


// CEnvSplash::InputSplash  (line 1836, @0x00000000021c6b90, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, GetFloat, Init, LengthSqr, Ray_t, RnCollisionAttr_t, Set, TraceRay, UTIL_PointContents, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorSubtract, operator!=, operator-, operator=, operator=<float>, operator=<int>, operator|=<<anonymous enum> >
// calls: CEffectData::CEffectData, CBaseEntity::GetAbsOrigin, CGamePhysicsQueryInterface::GetPointContents, DispatchEffect, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
// strings: "watersplash"
void __fastcall CEnvSplash::InputSplash(CEnvSplash *const this, inputdata_t *const inputdata)
{
  const Vector *AbsOrigin; // rax
  CNetworkVectorBase<Vector,CEffectData::NetworkVar_m_vOrigin> *v4; // rax
  const Vector *v5; // rax
  const Vector *v6; // rax
  float m_fValue; // xmm4_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float x; // [rsp+0h] [rbp-1F0h]
  float y; // [rsp+4h] [rbp-1ECh]
  float v12; // [rsp+8h] [rbp-1E8h]
  float scale; // [rsp+Ch] [rbp-1E4h]
  CTraceFilterSimple v14; // [rsp+10h] [rbp-1E0h] BYREF
  Ray_t ray; // [rsp+50h] [rbp-1A0h] BYREF
  CEffectData data; // [rsp+A0h] [rbp-150h] BYREF
  trace_t tr; // [rsp+110h] [rbp-E0h] BYREF

  CEffectData::CEffectData(&data);
  if ( data.m_fFlags.m_Value != 0 )
    data.m_fFlags.m_Value = 0;
  scale = this->m_flScale;
  if ( (this->m_spawnflags.m_Value & 1) != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    if ( (CGamePhysicsQueryInterface::GetPointContents(g_pPhysicsQuery, AbsOrigin, 0x1C000u) & 0x1C000) != 0 )
      return;
    memset(&tr.m_ShapeAttributes, 0, 31);
    tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    CGameTrace::Init(&tr);
    v5 = CBaseEntity::GetAbsOrigin(this);
    x = v5->x;
    y = v5->y;
    v12 = v5->z - 4096.0;
    v6 = CBaseEntity::GetAbsOrigin(this);
    m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
    ray.m_Start.w = 0.0;
    memset(&ray.m_Delta.w, 0, 36);
    ray.m_flRadius = m_fValue;
    ray.m_Delta.x = x - v6->x;
    ray.m_Delta.y = y - v6->y;
    ray.m_Delta.z = v12 - v6->z;
    ray.m_IsRay = 1;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
    ray.m_Start.Vector = *v6;
    CTraceFilterSimple::CTraceFilterSimple(&v14, this, 4, 0);
    v14.m_attr.m_nInteractsWith |= 0x1F001uLL;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v14, &tr);
    if ( tr.endpos.x != data.m_vOrigin.m_Value.x
      || tr.endpos.y != data.m_vOrigin.m_Value.y
      || tr.endpos.z != data.m_vOrigin.m_Value.z )
    {
      data.m_vOrigin = tr.endpos;
    }
    if ( (tr.contents & 0x10000) != 0 && data.m_fFlags.m_Value != (data.m_fFlags.m_Value | 1) )
      data.m_fFlags.m_Value |= 1u;
  }
  else
  {
    v4 = CBaseEntity::GetAbsOrigin(this);
    if ( v4->m_Value.x != data.m_vOrigin.m_Value.x
      || v4->m_Value.y != data.m_vOrigin.m_Value.y
      || v4->m_Value.z != data.m_vOrigin.m_Value.z )
    {
      data.m_vOrigin = *v4;
    }
  }
  if ( (this->m_spawnflags.m_Value & 2) != 0 )
  {
    memset(&tr.m_ShapeAttributes, 0, 31);
    tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    CGameTrace::Init(&tr);
    v8 = phys_traceline_radius.m_pParent->m_Value.m_fValue;
    ray.m_Delta.y = data.m_vOrigin.m_Value.y - data.m_vOrigin.m_Value.y;
    ray.m_flRadius = v8;
    ray.m_Delta.z = (data.m_vOrigin.m_Value.z - 4096.0) - data.m_vOrigin.m_Value.z;
    ray.m_Start.Vector = data.m_vOrigin.m_Value;
    ray.m_Delta.x = data.m_vOrigin.m_Value.x - data.m_vOrigin.m_Value.x;
    ray.m_Start.w = 0.0;
    memset(&ray.m_Delta.w, 0, 36);
    ray.m_IsRay = 1;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
    CTraceFilterSimple::CTraceFilterSimple(&v14, this, 4, 0);
    v14.m_attr.m_nInteractsWith |= 0x7001uLL;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v14, &tr);
    v9 = 1.0 - (fabs(tr.startpos.z - tr.endpos.z) / 120.0);
    if ( v9 < 0.1 )
      return;
    scale = v9 * scale;
  }
  if ( data.m_vNormal.m_Value.x != 0.0 || data.m_vNormal.m_Value.y != 0.0 || data.m_vNormal.m_Value.z != 1.0 )
  {
    data.m_vNormal.m_Value.x = 0.0;
    data.m_vNormal.m_Value.y = 0.0;
    data.m_vNormal.m_Value.z = 1.0;
  }
  if ( scale != data.m_flScale.m_Value )
    data.m_flScale.m_Value = scale;
  DispatchEffect("watersplash", &data);
}


// CEnvGunfire::~CEnvGunfire  (line 1898, @0x00000000021e1180, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CEnvGunfire::~CEnvGunfire(CEnvGunfire *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CEnvGunfire::~CEnvGunfire  (line 1898, @0x00000000021e11a0, libserver.so)  // inlines: ~CEnvGunfire, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CEnvGunfire::~CEnvGunfire(CEnvGunfire *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvGunfire::GetEntityClass  (line 1900, @0x00000000021dee50, libserver.so)
CEntityClass *__cdecl CEnvGunfire::GetEntityClass()
{
  return g_pEntityCEnvGunfireClass;
}


// CEnvGunfire::Schema_DynamicBinding  (line 1900, @0x00000000021dee60, libserver.so)
// globals: CEnvGunfire::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvGunfire::Schema_DynamicBinding(const CEnvGunfire *const this)
{
  return CEnvGunfire::s_pSchemaBinding;
}


// CEnvGunfire::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1900, @0x00000000021dee70, libserver.so)
// globals: CEnvGunfire::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvGunfire::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvGunfire::CEntityInstanceEntityClass *const this)
{
  return CEnvGunfire::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvGunfire::CEntityInstanceEntityClass::DestructInstance  (line 1900, @0x00000000021dee80, libserver.so)  // inlines: Destruct<CEnvGunfire>
void __fastcall CEnvGunfire::CEntityInstanceEntityClass::DestructInstance(
        CEnvGunfire::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvGunfire::CEntityInstanceEntityClass::FreeInstance  (line 1900, @0x00000000021deea0, libserver.so)
void __fastcall CEnvGunfire::CEntityInstanceEntityClass::FreeInstance(
        CEnvGunfire::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvGunfire::CEntityInstanceEntityClass::CanAllocate  (line 1900, @0x00000000021deec0, libserver.so)
bool __fastcall CEnvGunfire::CEntityInstanceEntityClass::CanAllocate(
        const CEnvGunfire::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvGunfire::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1900, @0x00000000021deed0, libserver.so)
// globals: CEnvGunfire::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvGunfire::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvGunfire::CEntityInstanceEntityClass *const this)
{
  return CEnvGunfire::s_pSchemaBinding;
}


// CEnvGunfire::CEntityInstanceEntityClass::AllocateInstance  (line 1900, @0x00000000021e0880, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvGunfire::CEntityInstanceEntityClass::AllocateInstance(
        CEnvGunfire::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 872);
  memset(v1, 0, 0x368u);
  return v1;
}


// CEnvGunfire::CEntityInstanceEntityClass::ConstructInstance  (line 1900, @0x00000000021e0c90, libserver.so)  // inlines: CEntityHandle, CEnvGunfire, CHandle, CPointEntity, CUtlSymbolLarge, Construct<CEnvGunfire>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CEnvGunfire::CEntityInstanceEntityClass::ConstructInstance(
        CEnvGunfire::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 100) = 0;
    *p = &off_401F2B0;
    *(p + 101) = 0;
    *(p + 216) = -1;
    *(p + 214) = 1065353216;
    *(p + 860) = 0;
  }
  return p;
}


// CEnvGunfire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1900, @0x00000000021e2890, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvGunfire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvGunfire::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CEnvGunfire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1900, @0x00000000021e28b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvGunfire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvGunfire::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvGunfire::GetEntityClassInternal  (line 1900, @0x00000000021e86a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "env_gunfire", "CEnvGunfire"
// globals: `guard variable for'CEnvGunfire::GetEntityClassInternal(void)::g_EntityCEnvGunfireClass, CEnvGunfire::GetEntityClassInternal(void)::g_EntityCEnvGunfireClass, __dso_handle, CEnvGunfire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvGunfire::GetEntityClassInfo(void)::g_EntityCEnvGunfireClassInfo, CEnvGunfire::GetEntityClassInfo(void)::g_EntityCEnvGunfireClassInfo
CEntityClass *__cdecl CEnvGunfire::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvGunfire::GetEntityClassInternal(void)::g_EntityCEnvGunfireClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvGunfire::GetEntityClassInternal(void)::g_EntityCEnvGunfireClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvGunfire::GetEntityClassInternal(void)::g_EntityCEnvGunfireClass);
    CEnvGunfire::GetEntityClassInternal(void)::g_EntityCEnvGunfireClass._vptr_CEntityClass = off_401F230;
    __cxa_guard_release(&`guard variable for'CEnvGunfire::GetEntityClassInternal(void)::g_EntityCEnvGunfireClass);
    __cxa_atexit(
      CEnvGunfire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvGunfire::GetEntityClassInternal(void)::g_EntityCEnvGunfireClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvGunfireClass != 0 )
    return &CEnvGunfire::GetEntityClassInternal(void)::g_EntityCEnvGunfireClass;
  if ( `guard variable for'CEnvGunfire::GetEntityClassInfo(void)::g_EntityCEnvGunfireClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvGunfire::GetEntityClassInfo(void)::g_EntityCEnvGunfireClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvGunfire::GetEntityClassInfo(void)::g_EntityCEnvGunfireClassInfo,
      "CEnvGunfire",
      "env_gunfire",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvGunfire::GetEntityClassInfo(void)::g_EntityCEnvGunfireClassInfo);
  }
  CEnvGunfire::GetEntityClassInternal(void)::g_EntityCEnvGunfireClass.m_pClassInfo = &CEnvGunfire::GetEntityClassInfo(void)::g_EntityCEnvGunfireClassInfo;
  CEnvGunfire::GetEntityClassInternal(void)::g_EntityCEnvGunfireClass.m_pBaseClassInfo = CEnvGunfire::GetEntityClassInfo(void)::g_EntityCEnvGunfireClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvGunfireClass = &CEnvGunfire::GetEntityClassInternal(void)::g_EntityCEnvGunfireClass;
  CEnvGunfire::GetEntityClassInfo(void)::g_EntityCEnvGunfireClassInfo.m_pClass = &CEnvGunfire::GetEntityClassInternal(void)::g_EntityCEnvGunfireClass;
  CEnvGunfire::GetEntityClassInternal(void)::g_EntityCEnvGunfireClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnvGunfireClass->m_pComponentOverrides = 0;
  return &CEnvGunfire::GetEntityClassInternal(void)::g_EntityCEnvGunfireClass;
}


// CEnvGunfire::GetDataDescMap  (line 1952, @0x00000000021baec0, libserver.so)
// globals: CEnvGunfire::m_DataMap
datamap_t *__fastcall CEnvGunfire::GetDataDescMap(CEnvGunfire *const this)
{
  return &CEnvGunfire::m_DataMap;
}


// CEnvGunfire::AddDatadescMetadataKeys  (line 1952, @0x00000000021c94d0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvGunfire::GetEntityClass(void)
void __fastcall CEnvGunfire::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvGunfire::GetEntityClass);
}


// CEnvGunfire::GetBaseMap  (line 1952, @0x00000000021c94f0, libserver.so)
datamap_t *__cdecl CEnvGunfire::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CEnvGunfire>  (line 1952, @0x00000000021d8810, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CEnvGunfire"
// globals: `guard variable for'DataMapInit<CEnvGunfire>(CEnvGunfire *)::nameHolder, `guard variable for'DataMapInit<CEnvGunfire>(CEnvGunfire *)::dataDesc, CEnvGunfire::GetEntityClass(void), CEnvGunfire::m_DataMap, DataMapInit<CEnvGunfire>(CEnvGunfire *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvGunfire>(CEnvGunfire *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CEnvGunfire>(CEnvGunfire *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvGunfire>(CEnvGunfire *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvGunfire>(CEnvGunfire *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvGunfire>(CEnvGunfire *)::nameHolder.m_pszBase = "CEnvGunfire";
    DataMapInit<CEnvGunfire>(CEnvGunfire *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvGunfire>(CEnvGunfire *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvGunfire>(CEnvGunfire *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvGunfire>(CEnvGunfire *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvGunfire>(CEnvGunfire *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvGunfire>(CEnvGunfire *)::nameHolder,
      &_dso_handle);
  }
  CEnvGunfire::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CEnvGunfire>(CEnvGunfire *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvGunfire>(CEnvGunfire *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CEnvGunfire>(CEnvGunfire *)::nameHolder.m_nLenBase + 11);
    strcpy(stpcpy(v2, DataMapInit<CEnvGunfire>(CEnvGunfire *)::nameHolder.m_pszBase), "ShootThink");
    m_Size = DataMapInit<CEnvGunfire>(CEnvGunfire *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CEnvGunfire>(CEnvGunfire *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CEnvGunfire>(CEnvGunfire *)::nameHolder.m_Names.m_Size == DataMapInit<CEnvGunfire>(CEnvGunfire *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CEnvGunfire>(CEnvGunfire *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CEnvGunfire>(CEnvGunfire *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CEnvGunfire>(CEnvGunfire *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CEnvGunfire>(CEnvGunfire *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CEnvGunfire>(CEnvGunfire *)::dataDesc[17].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvGunfire>(CEnvGunfire *)::dataDesc);
  }
  CEnvGunfire::m_DataMap.dataNumFields = 19;
  CEnvGunfire::m_DataMap.dataDesc = &DataMapInit<CEnvGunfire>(CEnvGunfire *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvGunfire::m_DataMap, CEnvGunfire::GetEntityClass);
  return &CEnvGunfire::m_DataMap;
}


// CEnvGunfire::Precache  (line 1979, @0x00000000021de040, libserver.so)  // inlines: Precache, String, ToCStr
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheScriptSound
void __fastcall CEnvGunfire::Precache(CEnvGunfire *const this, const CEntityPrecacheContext *pContext)
{
  const char *m_pAsString; // rdi

  CEntityInstance::Precache(this, pContext);
  m_pAsString = "";
  if ( this->m_iszShootSound.u.m_Id != 0 )
    m_pAsString = this->m_iszShootSound.u.m_pAsString;
  CBaseEntity::PrecacheScriptSound(m_pAsString, pContext);
}


// CEnvGunfire::Spawn  (line 1987, @0x00000000021c95a0, libserver.so)  // inlines: operator=
// calls: CPointEntity::Spawn, CEnvGunfire::StartShooting
void __fastcall CEnvGunfire::Spawn(CEnvGunfire *const this, const CEntityKeyValues *pKeyValues)
{
  int m_iSpread; // eax
  bool v4; // zf

  CPointEntity::Spawn(this, pKeyValues);
  m_iSpread = this->m_iSpread;
  this->m_iShotsRemaining = 0;
  this->m_flRateOfFire = 1.0 / this->m_flRateOfFire;
  if ( m_iSpread == 5 )
  {
    this->m_vecSpread.x = 0.043620002;
    this->m_vecSpread.y = 0.043620002;
    this->m_vecSpread.z = 0.043620002;
LABEL_6:
    if ( this->m_bDisabled )
      return;
LABEL_9:
    CEnvGunfire::StartShooting(this);
    return;
  }
  if ( m_iSpread <= 5 )
  {
    if ( m_iSpread == 1 )
    {
      this->m_vecSpread.x = 0.0087299999;
      this->m_vecSpread.y = 0.0087299999;
      this->m_vecSpread.z = 0.0087299999;
      goto LABEL_6;
    }
    goto LABEL_12;
  }
  if ( m_iSpread != 10 )
  {
    if ( m_iSpread == 15 )
    {
      this->m_vecSpread.x = 0.13053;
      this->m_vecSpread.y = 0.13053;
      this->m_vecSpread.z = 0.13053;
      goto LABEL_6;
    }
LABEL_12:
    this->m_vecSpread = vec3_origin;
    goto LABEL_6;
  }
  v4 = !this->m_bDisabled;
  this->m_vecSpread.x = 0.087159999;
  this->m_vecSpread.y = 0.087159999;
  this->m_vecSpread.z = 0.087159999;
  if ( v4 )
    goto LABEL_9;
}


// CEnvGunfire::Activate  (line 2022, @0x00000000021bb7d0, libserver.so)  // inlines: CUtlSymbolLarge, GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator!=, operator=
// calls: CBaseEntity::Activate, CGameEntitySystem::FindEntityByName
void __fastcall CEnvGunfire::Activate(CEnvGunfire *const this, ActivateType_t activateType)
{
  CBaseEntity *EntityByName; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v6; // eax
  __int16 v7; // cx
  string_t iszName; // [rsp+10h] [rbp-20h] BYREF

  if ( this->m_target.u.m_Id != 0 )
  {
    iszName.u.m_Id = this->m_target.u.m_Id;
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
    if ( EntityByName != 0 && (m_pEntity = EntityByName->m_pEntity) != 0 )
    {
      v6 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v7 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hTarget.m_Index) = v7 | this->m_hTarget.m_Index & 0x8000;
      this->m_hTarget.m_Index = (v6 << 15) | this->m_hTarget.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hTarget.m_Index = -1;
    }
  }
  CBaseEntity::Activate(this, activateType);
}


// CEnvGunfire::StartShooting  (line 2035, @0x00000000021c9500, libserver.so)  // inlines: curtime
// calls: CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// callers: CEnvGunfire::Spawn, CEnvGunfire::InputEnable, CEnvGunfire::ShootThink
// globals: CEnvGunfire::ShootThink(void)
void __fastcall CEnvGunfire::StartShooting(CEnvGunfire *const this)
{
  double v2; // xmm1_8
  double v3; // xmm0_8
  CGlobalVars *v4; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  this->m_iShotsRemaining = (*(*random_valve + 16LL))(random_valve, this->m_iMinBurstSize, this->m_iMaxBurstSize);
  CBaseEntity::ThinkSet(this, CEnvGunfire::ShootThink, 0.0, 0, 0);
  v3 = 0.0;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v3 = LODWORD(v4->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v3, v2, 0);
}


// CEnvGunfire::UpdateTarget  (line 2045, @0x00000000021c9710, libserver.so)  // inlines: FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, Length, LookupEntity, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CEntityInstance*, operator bool, operator!=, operator-, operator->, operator=
// calls: CBaseEntity::GetAbsOrigin
// callers: CEnvGunfire::ShootThink
// globals: CEntityHandle::gm_pEntityList
void __fastcall CEnvGunfire::UpdateTarget(CEnvGunfire *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  float v5; // xmm1_4
  uint32 v6; // eax
  CEntityInstance *m_pInstance; // rdi
  CConcreteEntityList *v8; // rsi
  CEntityIdentity *v9; // rdx
  __int64 v10; // rcx
  CEntityIdentity *v11; // rdx
  vec_t v12; // xmm1_4
  const Vector *AbsOrigin; // rax
  double v14; // [rsp+10h] [rbp-20h]
  double v15; // [rsp+10h] [rbp-20h]

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hTarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        v14 = (*(v4->m_pInstance->_vptr_IHandleEntity + 62))(v4->m_pInstance);
        if ( this->m_vecTargetPosition.x != *&v14
          || this->m_vecTargetPosition.y != *(&v14 + 1)
          || this->m_vecTargetPosition.z != v5 )
        {
          v6 = this->m_hTarget.m_Index;
          m_pInstance = 0;
          v8 = CEntityHandle::gm_pEntityList;
          if ( v6 + 2 > 1 )
          {
            v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
            if ( v9 != 0 )
            {
              v10 = this->m_hTarget.m_Index & 0x1FF;
              v8 = (8 * v10);
              v11 = &v9[v10];
              if ( v11 != 0 && v6 == v11->m_EHandle.m_Index )
                m_pInstance = v11->m_pInstance;
            }
          }
          v15 = (*(m_pInstance->_vptr_IHandleEntity + 62))(m_pInstance, v8);
          this->m_vecTargetPosition.z = v12;
          *&this->m_vecTargetPosition.x = v15;
          AbsOrigin = CBaseEntity::GetAbsOrigin(this);
          this->m_flTargetDist = fsqrt(
                                   (((AbsOrigin->x - this->m_vecTargetPosition.x)
                                   * (AbsOrigin->x - this->m_vecTargetPosition.x))
                                  + ((AbsOrigin->y - this->m_vecTargetPosition.y)
                                   * (AbsOrigin->y - this->m_vecTargetPosition.y)))
                                 + ((AbsOrigin->z - this->m_vecTargetPosition.z)
                                  * (AbsOrigin->z - this->m_vecTargetPosition.z)));
        }
      }
    }
  }
}


// CEnvGunfire::StopShooting  (line 2061, @0x00000000021c98d0, libserver.so)
// calls: CBaseEntity::ThinkSet
// callers: CEnvGunfire::ShootThink
void __fastcall CEnvGunfire::StopShooting(CEnvGunfire *const this)
{
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
}


// CEnvGunfire::ShootThink  (line 2068, @0x00000000021c98f0, libserver.so)  // inlines: ApplySpread, CGameTrace, CShotManipulator, CWeakHandle, EnableInteractsWith, FromUntypedHandleUnchecked, Get, GetFloat, GetInstance, Init, LengthSqr, Ray_t, RnCollisionAttr_t, SetShootDir, StaticInvalidHandle, String, ToCStr, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator!, operator*, operator+, operator-, operator=
// calls: CEntityHandle::operator CEntityInstance*, CGlobalVarsBase::curtime, CBaseEntity::SetNextThink, CEnvGunfire::UpdateTarget, CBaseEntity::GetAbsOrigin, VectorNormalize, VectorVectors, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, UTIL_Tracer, CBaseEntity::EmitSound (14 total)
void __fastcall CEnvGunfire::ShootThink(CEnvGunfire *const this)
{
  double v2; // xmm0_8
  double v3; // xmm1_8
  const Vector *AbsOrigin; // rax
  vec_t v5; // xmm2_4
  vec_t v6; // xmm0_4
  __m128 m_flBias_low; // xmm0
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  double v12; // xmm2_8
  double v13; // xmm2_8
  bool v14; // cf
  double v15; // xmm0_8
  double v16; // xmm7_8
  float v17; // xmm2_4
  float v18; // xmm0_4
  bool v19; // zf
  float v20; // xmm3_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  const Vector *v23; // rax
  const Vector *v24; // rax
  float m_fValue; // xmm3_4
  float v26; // xmm1_4
  double v27; // xmm0_8
  double v28; // xmm1_8
  double v29; // xmm2_8
  double v30; // xmm3_8
  double v31; // xmm4_8
  double v32; // xmm5_8
  float m_flTargetDist; // xmm2_4
  const Vector *v34; // rax
  vec_t v35; // xmm0_4
  vec_t v36; // xmm3_4
  const char *m_pAsString; // r13
  const Vector *v38; // rax
  const char *v39; // rsi
  double v40; // xmm0_8
  double v41; // xmm1_8
  const Vector *v42; // rax
  float v43; // [rsp+8h] [rbp-1C8h]
  float v44; // [rsp+14h] [rbp-1BCh]
  float v45; // [rsp+14h] [rbp-1BCh]
  float v46; // [rsp+14h] [rbp-1BCh]
  float v47; // [rsp+14h] [rbp-1BCh]
  float v48; // [rsp+18h] [rbp-1B8h]
  float v49; // [rsp+18h] [rbp-1B8h]
  float v50; // [rsp+18h] [rbp-1B8h]
  float v51; // [rsp+18h] [rbp-1B8h]
  float v52; // [rsp+18h] [rbp-1B8h]
  float v53; // [rsp+1Ch] [rbp-1B4h]
  float v54; // [rsp+1Ch] [rbp-1B4h]
  float v55; // [rsp+1Ch] [rbp-1B4h]
  float v56; // [rsp+1Ch] [rbp-1B4h]
  float v57; // [rsp+1Ch] [rbp-1B4h]
  Vector vecDir; // [rsp+20h] [rbp-1B0h] BYREF
  CShotManipulator manipulator; // [rsp+30h] [rbp-1A0h] BYREF
  CTraceFilterSimple v60; // [rsp+60h] [rbp-170h] BYREF
  Vector vecEnd; // [rsp+A0h] [rbp-130h] BYREF
  int v62; // [rsp+ACh] [rbp-124h]
  float v63; // [rsp+B0h] [rbp-120h]
  float v64; // [rsp+B4h] [rbp-11Ch]
  float v65; // [rsp+B8h] [rbp-118h]
  int v66; // [rsp+BCh] [rbp-114h]
  int v67; // [rsp+C0h] [rbp-110h]
  int v68; // [rsp+C4h] [rbp-10Ch]
  int v69; // [rsp+C8h] [rbp-108h]
  int v70; // [rsp+CCh] [rbp-104h]
  int v71; // [rsp+D0h] [rbp-100h]
  int v72; // [rsp+D4h] [rbp-FCh]
  int v73; // [rsp+D8h] [rbp-F8h]
  int v74; // [rsp+DCh] [rbp-F4h]
  float v75; // [rsp+E0h] [rbp-F0h]
  char v76; // [rsp+E4h] [rbp-ECh]
  bool v77; // [rsp+E5h] [rbp-EBh]
  trace_t tr; // [rsp+F0h] [rbp-E0h] BYREF

  if ( CEntityHandle::operator CEntityInstance *(&this->m_hTarget) == 0 )
    CEnvGunfire::StopShooting(this);
  *&v2 = CGlobalVarsBase::curtime(gpGlobals, 0) + this->m_flRateOfFire;
  CBaseEntity::SetNextThink(this, v2, v3, 0);
  CEnvGunfire::UpdateTarget(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v5 = this->m_vecTargetPosition.x - AbsOrigin->x;
  v6 = this->m_vecTargetPosition.z - AbsOrigin->z;
  vecDir.y = this->m_vecTargetPosition.y - AbsOrigin->y;
  vecDir.x = v5;
  vecDir.z = v6;
  VectorNormalize(&vecDir);
  manipulator.m_vecShotDirection = vecDir;
  VectorVectors(&manipulator.m_vecShotDirection, &manipulator.m_vecRight, &manipulator.m_vecUp);
  m_flBias_low = LODWORD(this->m_flBias);
  if ( m_flBias_low.m128_f32[0] <= 1.0 )
    LODWORD(v8) = m_flBias_low.m128_i32[0] & _mm_cmpge_ss(m_flBias_low, 0LL).m128_u32[0];
  else
    v8 = 1.0;
  v43 = ai_shot_bias_min.m_pParent->m_Value.m_fValue
      + (v8 * (ai_shot_bias_max.m_pParent->m_Value.m_fValue - ai_shot_bias_min.m_pParent->m_Value.m_fValue));
  v53 = 0.5 * fabs(v43);
  do
  {
    v48 = v53 * (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
    v44 = v48 + ((*(*random_valve + 8LL))(random_valve, -1.0, 1.0) * (1.0 - v53));
    v49 = v53 * (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
    v9 = (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
    v10 = v44;
    v11 = (v9 * (1.0 - v53)) + v49;
    if ( v43 < 0.0 )
    {
      v12 = v44;
      if ( v44 < 0.0 )
        v13 = -1.0 - v12;
      else
        v13 = 1.0 - v12;
      v14 = v11 < 0.0;
      v10 = v13;
      v15 = v11;
      if ( v14 )
        v16 = -1.0 - v15;
      else
        v16 = 1.0 - v15;
      v11 = v16;
    }
  }
  while ( ((v10 * v10) + (v11 * v11)) > 1.0 );
  v17 = v10 * this->m_vecSpread.x;
  v18 = v11 * this->m_vecSpread.y;
  v19 = !this->m_bCollide;
  v20 = (manipulator.m_vecUp.x * v18) + ((manipulator.m_vecRight.x * v17) + manipulator.m_vecShotDirection.x);
  manipulator.m_vecResult.x = v20;
  vecDir.x = v20;
  v21 = (manipulator.m_vecUp.y * v18) + ((manipulator.m_vecRight.y * v17) + manipulator.m_vecShotDirection.y);
  v22 = (v18 * manipulator.m_vecUp.z) + ((v17 * manipulator.m_vecRight.z) + manipulator.m_vecShotDirection.z);
  manipulator.m_vecResult.y = v21;
  manipulator.m_vecResult.z = v22;
  vecDir.y = v21;
  vecDir.z = v22;
  if ( v19 )
  {
    m_flTargetDist = this->m_flTargetDist;
    v47 = v20 * m_flTargetDist;
    v52 = v21 * m_flTargetDist;
    v56 = v22 * m_flTargetDist;
    v34 = CBaseEntity::GetAbsOrigin(this);
    v35 = v56 + v34->z;
    v36 = v47 + v34->x;
    vecEnd.y = v52 + v34->y;
    vecEnd.z = v35;
    vecEnd.x = v36;
  }
  else
  {
    memset(&tr.m_ShapeAttributes, 0, 31);
    tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    CGameTrace::Init(&tr);
    v45 = vecDir.x * 8192.0;
    v50 = vecDir.y * 8192.0;
    v54 = 8192.0 * vecDir.z;
    v23 = CBaseEntity::GetAbsOrigin(this);
    v46 = v45 + v23->x;
    v51 = v50 + v23->y;
    v55 = v54 + v23->z;
    v24 = CBaseEntity::GetAbsOrigin(this);
    m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
    v62 = 0;
    v66 = 0;
    v75 = m_fValue;
    v70 = 0;
    v74 = 0;
    v63 = v46 - v24->x;
    v64 = v51 - v24->y;
    v26 = v55 - v24->z;
    v76 = 1;
    v73 = 0;
    v72 = 0;
    v65 = v26;
    v71 = 0;
    v69 = 0;
    v68 = 0;
    v67 = 0;
    v77 = (((v63 * v63) + (v64 * v64)) + (v26 * v26)) != 0.0;
    vecEnd = *v24;
    CTraceFilterSimple::CTraceFilterSimple(&v60, this, 4, 0);
    v60.m_attr.m_nInteractsWith |= 0x185003uLL;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &vecEnd, &v60, &tr);
    if ( tr.fraction != 1.0 )
      (*(this->_vptr_IHandleEntity + 130))(this, &tr, 2, v27, v28, v29, v30, v31, v32, 1.0);
    vecEnd = tr.endpos;
  }
  v19 = this->m_iszTracerType.u.m_Id == 0;
  *&tr.startpos.x = 0;
  if ( v19 )
  {
    v42 = CBaseEntity::GetAbsOrigin(this);
    UTIL_Tracer(v42, &vecEnd, 0, -1, 5000.0, 1, 0, &tr);
  }
  else
  {
    m_pAsString = this->m_iszTracerType.u.m_pAsString;
    v38 = CBaseEntity::GetAbsOrigin(this);
    UTIL_Tracer(v38, &vecEnd, 0, -1, 5000.0, 1, m_pAsString, &tr);
  }
  v39 = "";
  if ( this->m_iszShootSound.u.m_Id != 0 )
    v39 = this->m_iszShootSound.u.m_pAsString;
  CBaseEntity::EmitSound(this, v39, 0.0, 0);
  v19 = this->m_iShotsRemaining-- == 1;
  if ( v19 )
  {
    CEnvGunfire::StartShooting(this);
    v57 = CGlobalVarsBase::curtime(gpGlobals, 0);
    v40 = (*(*random_valve + 8LL))(random_valve, this->m_flMinBurstDelay, this->m_flMaxBurstDelay);
    *&v40 = *&v40 + v57;
    CBaseEntity::SetNextThink(this, v40, v41, 0);
  }
}


// CEnvGunfire::InputEnable  (line 2128, @0x00000000021c96f0, libserver.so)
// calls: CEnvGunfire::StartShooting
void __fastcall CEnvGunfire::InputEnable(CEnvGunfire *const this, inputdata_t *const inputdata)
{
  this->m_bDisabled = 0;
  CEnvGunfire::StartShooting(this);
}


// CEnvGunfire::InputDisable  (line 2136, @0x00000000021bb3a0, libserver.so)
// calls: CBaseEntity::ThinkSet
void __fastcall CEnvGunfire::InputDisable(CEnvGunfire *const this, inputdata_t *const inputdata)
{
  this->m_bDisabled = 1;
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
}


// CEnvViewPunch::~CEnvViewPunch  (line 2142, @0x00000000021e11d0, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CEnvViewPunch::~CEnvViewPunch(CEnvViewPunch *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CEnvViewPunch::~CEnvViewPunch  (line 2142, @0x00000000021e11f0, libserver.so)  // inlines: ~CEnvViewPunch, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CEnvViewPunch::~CEnvViewPunch(CEnvViewPunch *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvViewPunch::GetEntityClass  (line 2144, @0x00000000021deee0, libserver.so)
CEntityClass *__cdecl CEnvViewPunch::GetEntityClass()
{
  return g_pEntityCEnvViewPunchClass;
}


// CEnvViewPunch::Schema_DynamicBinding  (line 2144, @0x00000000021deef0, libserver.so)
// globals: CEnvViewPunch::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvViewPunch::Schema_DynamicBinding(const CEnvViewPunch *const this)
{
  return CEnvViewPunch::s_pSchemaBinding;
}


// CEnvViewPunch::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2144, @0x00000000021def00, libserver.so)
// globals: CEnvViewPunch::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvViewPunch::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvViewPunch::CEntityInstanceEntityClass *const this)
{
  return CEnvViewPunch::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvViewPunch::CEntityInstanceEntityClass::DestructInstance  (line 2144, @0x00000000021def10, libserver.so)  // inlines: Destruct<CEnvViewPunch>
void __fastcall CEnvViewPunch::CEntityInstanceEntityClass::DestructInstance(
        CEnvViewPunch::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvViewPunch::CEntityInstanceEntityClass::FreeInstance  (line 2144, @0x00000000021def30, libserver.so)
void __fastcall CEnvViewPunch::CEntityInstanceEntityClass::FreeInstance(
        CEnvViewPunch::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvViewPunch::CEntityInstanceEntityClass::CanAllocate  (line 2144, @0x00000000021def50, libserver.so)
bool __fastcall CEnvViewPunch::CEntityInstanceEntityClass::CanAllocate(
        const CEnvViewPunch::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvViewPunch::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2144, @0x00000000021def60, libserver.so)
// globals: CEnvViewPunch::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvViewPunch::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvViewPunch::CEntityInstanceEntityClass *const this)
{
  return CEnvViewPunch::s_pSchemaBinding;
}


// CEnvViewPunch::CEntityInstanceEntityClass::AllocateInstance  (line 2144, @0x00000000021e08c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvViewPunch::CEntityInstanceEntityClass::AllocateInstance(
        CEnvViewPunch::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 792);
  memset(v1, 0, 0x318u);
  return v1;
}


// CEnvViewPunch::CEntityInstanceEntityClass::ConstructInstance  (line 2144, @0x00000000021e0cf0, libserver.so)  // inlines: CEnvViewPunch, CPointEntity, Construct<CEnvViewPunch>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CEnvViewPunch::CEntityInstanceEntityClass::ConstructInstance(
        CEnvViewPunch::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_401F9D0;
  }
  return p;
}


// CEnvViewPunch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2144, @0x00000000021e28e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvViewPunch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvViewPunch::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CEnvViewPunch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2144, @0x00000000021e2900, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvViewPunch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvViewPunch::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvViewPunch::GetEntityClassInternal  (line 2144, @0x00000000021e87f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "env_viewpunch", "CEnvViewPunch"
// globals: `guard variable for'CEnvViewPunch::GetEntityClassInternal(void)::g_EntityCEnvViewPunchClass, CEnvViewPunch::GetEntityClassInternal(void)::g_EntityCEnvViewPunchClass, __dso_handle, CEnvViewPunch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvViewPunch::GetEntityClassInfo(void)::g_EntityCEnvViewPunchClassInfo, CEnvViewPunch::GetEntityClassInfo(void)::g_EntityCEnvViewPunchClassInfo
CEntityClass *__cdecl CEnvViewPunch::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvViewPunch::GetEntityClassInternal(void)::g_EntityCEnvViewPunchClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvViewPunch::GetEntityClassInternal(void)::g_EntityCEnvViewPunchClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvViewPunch::GetEntityClassInternal(void)::g_EntityCEnvViewPunchClass);
    CEnvViewPunch::GetEntityClassInternal(void)::g_EntityCEnvViewPunchClass._vptr_CEntityClass = off_401F950;
    __cxa_guard_release(&`guard variable for'CEnvViewPunch::GetEntityClassInternal(void)::g_EntityCEnvViewPunchClass);
    __cxa_atexit(
      CEnvViewPunch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvViewPunch::GetEntityClassInternal(void)::g_EntityCEnvViewPunchClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvViewPunchClass != 0 )
    return &CEnvViewPunch::GetEntityClassInternal(void)::g_EntityCEnvViewPunchClass;
  if ( `guard variable for'CEnvViewPunch::GetEntityClassInfo(void)::g_EntityCEnvViewPunchClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvViewPunch::GetEntityClassInfo(void)::g_EntityCEnvViewPunchClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvViewPunch::GetEntityClassInfo(void)::g_EntityCEnvViewPunchClassInfo,
      "CEnvViewPunch",
      "env_viewpunch",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvViewPunch::GetEntityClassInfo(void)::g_EntityCEnvViewPunchClassInfo);
  }
  CEnvViewPunch::GetEntityClassInternal(void)::g_EntityCEnvViewPunchClass.m_pClassInfo = &CEnvViewPunch::GetEntityClassInfo(void)::g_EntityCEnvViewPunchClassInfo;
  CEnvViewPunch::GetEntityClassInternal(void)::g_EntityCEnvViewPunchClass.m_pBaseClassInfo = CEnvViewPunch::GetEntityClassInfo(void)::g_EntityCEnvViewPunchClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvViewPunchClass = &CEnvViewPunch::GetEntityClassInternal(void)::g_EntityCEnvViewPunchClass;
  CEnvViewPunch::GetEntityClassInfo(void)::g_EntityCEnvViewPunchClassInfo.m_pClass = &CEnvViewPunch::GetEntityClassInternal(void)::g_EntityCEnvViewPunchClass;
  CEnvViewPunch::GetEntityClassInternal(void)::g_EntityCEnvViewPunchClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnvViewPunchClass->m_pComponentOverrides = 0;
  return &CEnvViewPunch::GetEntityClassInternal(void)::g_EntityCEnvViewPunchClass;
}


// CEnvViewPunch::GetDataDescMap  (line 2163, @0x00000000021baed0, libserver.so)
// globals: CEnvViewPunch::m_DataMap
datamap_t *__fastcall CEnvViewPunch::GetDataDescMap(CEnvViewPunch *const this)
{
  return &CEnvViewPunch::m_DataMap;
}


// CEnvViewPunch::AddDatadescMetadataKeys  (line 2163, @0x00000000021ca110, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvViewPunch::GetEntityClass(void)
void __fastcall CEnvViewPunch::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvViewPunch::GetEntityClass);
}


// CEnvViewPunch::GetBaseMap  (line 2163, @0x00000000021ca130, libserver.so)
datamap_t *__cdecl CEnvViewPunch::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CEnvViewPunch>  (line 2163, @0x00000000021ca140, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CEnvViewPunch"
// globals: `guard variable for'DataMapInit<CEnvViewPunch>(CEnvViewPunch *)::nameHolder, CEnvViewPunch::GetEntityClass(void), CEnvViewPunch::m_DataMap, DataMapInit<CEnvViewPunch>(CEnvViewPunch *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvViewPunch>(CEnvViewPunch *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEnvViewPunch>(CEnvViewPunch *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvViewPunch>(CEnvViewPunch *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvViewPunch>(CEnvViewPunch *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvViewPunch>(CEnvViewPunch *)::nameHolder.m_pszBase = "CEnvViewPunch";
    DataMapInit<CEnvViewPunch>(CEnvViewPunch *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvViewPunch>(CEnvViewPunch *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvViewPunch>(CEnvViewPunch *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvViewPunch>(CEnvViewPunch *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvViewPunch>(CEnvViewPunch *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvViewPunch>(CEnvViewPunch *)::nameHolder,
      &_dso_handle);
  }
  CEnvViewPunch::m_DataMap.dataNumFields = 3;
  CEnvViewPunch::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  CEnvViewPunch::m_DataMap.dataDesc = &DataMapInit<CEnvViewPunch>(CEnvViewPunch *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvViewPunch::m_DataMap, CEnvViewPunch::GetEntityClass);
  return &CEnvViewPunch::m_DataMap;
}


// CEnvViewPunch::Spawn  (line 2178, @0x00000000021bb6f0, libserver.so)
// calls: CPointEntity::Spawn, CBaseEntity::SetMoveType
void __fastcall CEnvViewPunch::Spawn(CEnvViewPunch *const this, const CEntityKeyValues *pKeyValues)
{
  CPointEntity::Spawn(this, pKeyValues);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  if ( (this->m_spawnflags.m_Value & 1) != 0 )
    this->m_flRadius = 0.0;
}


// CEnvViewPunch::DoViewPunch  (line 2193, @0x00000000021ca210, libserver.so)
// calls: CBaseEntity::GetAbsOrigin, UTIL_ViewPunch
// callers: CEnvViewPunch::InputViewPunch
void __fastcall CEnvViewPunch::DoViewPunch(CEnvViewPunch *const this)
{
  unsigned int m_Value; // r12d
  const Vector *AbsOrigin; // rax
  float v3; // xmm3_4
  QAngle v4; // [rsp+30h] [rbp+10h]

  m_Value = this->m_spawnflags.m_Value;
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  UTIL_ViewPunch(AbsOrigin, v4, v3, (m_Value & 2) != 0);
}


// CEnvViewPunch::InputViewPunch  (line 2202, @0x00000000021ca270, libserver.so)
// calls: CEnvViewPunch::DoViewPunch
void __fastcall CEnvViewPunch::InputViewPunch(CEnvViewPunch *const this, inputdata_t *const inputdata)
{
  CEnvViewPunch::DoViewPunch(this);
}


// CEnvAirStrikeIndoorEffect::~CEnvAirStrikeIndoorEffect  (line 2281, @0x00000000021e1600, libserver.so)  // inlines: ~CBaseAnimating
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CEnvAirStrikeIndoorEffect::~CEnvAirStrikeIndoorEffect(CEnvAirStrikeIndoorEffect *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CEnvAirStrikeIndoorEffect::~CEnvAirStrikeIndoorEffect  (line 2281, @0x00000000021e1640, libserver.so)  // inlines: ~CBaseAnimating, ~CEnvAirStrikeIndoorEffect
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CEnvAirStrikeIndoorEffect::~CEnvAirStrikeIndoorEffect(CEnvAirStrikeIndoorEffect *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvAirStrikeIndoorEffect::GetEntityClass  (line 2283, @0x00000000021def70, libserver.so)
CEntityClass *__cdecl CEnvAirStrikeIndoorEffect::GetEntityClass()
{
  return g_pEntityCEnvAirStrikeIndoorEffectClass;
}


// CEnvAirStrikeIndoorEffect::Schema_DynamicBinding  (line 2283, @0x00000000021def80, libserver.so)
// globals: CEnvAirStrikeIndoorEffect::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvAirStrikeIndoorEffect::Schema_DynamicBinding(
        const CEnvAirStrikeIndoorEffect *const this)
{
  return CEnvAirStrikeIndoorEffect::s_pSchemaBinding;
}


// CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2283, @0x00000000021def90, libserver.so)
// globals: CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass *const this)
{
  return CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass::DestructInstance  (line 2283, @0x00000000021defa0, libserver.so)  // inlines: Destruct<CEnvAirStrikeIndoorEffect>
void __fastcall CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass::DestructInstance(
        CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass::FreeInstance  (line 2283, @0x00000000021defc0, libserver.so)
void __fastcall CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass::FreeInstance(
        CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass::CanAllocate  (line 2283, @0x00000000021defe0, libserver.so)
bool __fastcall CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass::CanAllocate(
        const CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2283, @0x00000000021deff0, libserver.so)
// globals: CEnvAirStrikeIndoorEffect::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass *const this)
{
  return CEnvAirStrikeIndoorEffect::s_pSchemaBinding;
}


// CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass::AllocateInstance  (line 2283, @0x00000000021e0900, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass::AllocateInstance(
        CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1232);
  memset(v1, 0, 0x4D0u);
  return v1;
}


// CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass::ConstructInstance  (line 2283, @0x00000000021e14d0, libserver.so)  // inlines: CEnvAirStrikeIndoorEffect, Construct<CEnvAirStrikeIndoorEffect>
// calls: CBaseAnimating::CBaseAnimating
CEntityInstance *__fastcall CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass::ConstructInstance(
        CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseAnimating::CBaseAnimating(p);
    *(p + 307) = -1;
    *p = &off_40200F0;
  }
  return p;
}


// CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2283, @0x00000000021e2b10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2283, @0x00000000021e2b30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvAirStrikeIndoorEffect::GetEntityClassInternal  (line 2283, @0x00000000021e8940, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CBaseAnimating::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "env_airstrike_indoors", "CEnvAirStrikeIndoorEffect"
// globals: `guard variable for'CEnvAirStrikeIndoorEffect::GetEntityClassInternal(void)::g_EntityCEnvAirStrikeIndoorEffectClass, CEnvAirStrikeIndoorEffect::GetEntityClassInternal(void)::g_EntityCEnvAirStrikeIndoorEffectClass, __dso_handle, CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvAirStrikeIndoorEffect::GetEntityClassInfo(void)::g_EntityCEnvAirStrikeIndoorEffectClassInfo, CEnvAirStrikeIndoorEffect::GetEntityClassInfo(void)::g_EntityCEnvAirStrikeIndoorEffectClassInfo
CEntityClass *__cdecl CEnvAirStrikeIndoorEffect::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvAirStrikeIndoorEffect::GetEntityClassInternal(void)::g_EntityCEnvAirStrikeIndoorEffectClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvAirStrikeIndoorEffect::GetEntityClassInternal(void)::g_EntityCEnvAirStrikeIndoorEffectClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvAirStrikeIndoorEffect::GetEntityClassInternal(void)::g_EntityCEnvAirStrikeIndoorEffectClass);
    CEnvAirStrikeIndoorEffect::GetEntityClassInternal(void)::g_EntityCEnvAirStrikeIndoorEffectClass._vptr_CEntityClass = off_4020070;
    __cxa_guard_release(&`guard variable for'CEnvAirStrikeIndoorEffect::GetEntityClassInternal(void)::g_EntityCEnvAirStrikeIndoorEffectClass);
    __cxa_atexit(
      CEnvAirStrikeIndoorEffect::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvAirStrikeIndoorEffect::GetEntityClassInternal(void)::g_EntityCEnvAirStrikeIndoorEffectClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvAirStrikeIndoorEffectClass != 0 )
    return &CEnvAirStrikeIndoorEffect::GetEntityClassInternal(void)::g_EntityCEnvAirStrikeIndoorEffectClass;
  if ( `guard variable for'CEnvAirStrikeIndoorEffect::GetEntityClassInfo(void)::g_EntityCEnvAirStrikeIndoorEffectClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvAirStrikeIndoorEffect::GetEntityClassInfo(void)::g_EntityCEnvAirStrikeIndoorEffectClassInfo) != 0 )
  {
    EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvAirStrikeIndoorEffect::GetEntityClassInfo(void)::g_EntityCEnvAirStrikeIndoorEffectClassInfo,
      "CEnvAirStrikeIndoorEffect",
      "env_airstrike_indoors",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvAirStrikeIndoorEffect::GetEntityClassInfo(void)::g_EntityCEnvAirStrikeIndoorEffectClassInfo);
  }
  CEnvAirStrikeIndoorEffect::GetEntityClassInternal(void)::g_EntityCEnvAirStrikeIndoorEffectClass.m_pClassInfo = &CEnvAirStrikeIndoorEffect::GetEntityClassInfo(void)::g_EntityCEnvAirStrikeIndoorEffectClassInfo;
  CEnvAirStrikeIndoorEffect::GetEntityClassInternal(void)::g_EntityCEnvAirStrikeIndoorEffectClass.m_pBaseClassInfo = CEnvAirStrikeIndoorEffect::GetEntityClassInfo(void)::g_EntityCEnvAirStrikeIndoorEffectClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvAirStrikeIndoorEffectClass = &CEnvAirStrikeIndoorEffect::GetEntityClassInternal(void)::g_EntityCEnvAirStrikeIndoorEffectClass;
  CEnvAirStrikeIndoorEffect::GetEntityClassInfo(void)::g_EntityCEnvAirStrikeIndoorEffectClassInfo.m_pClass = &CEnvAirStrikeIndoorEffect::GetEntityClassInternal(void)::g_EntityCEnvAirStrikeIndoorEffectClass;
  CEnvAirStrikeIndoorEffect::GetEntityClassInternal(void)::g_EntityCEnvAirStrikeIndoorEffectClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCEnvAirStrikeIndoorEffectClass->m_pComponentOverrides = 0;
  return &CEnvAirStrikeIndoorEffect::GetEntityClassInternal(void)::g_EntityCEnvAirStrikeIndoorEffectClass;
}


// CEnvAirStrikeIndoorEffect::GetDataDescMap  (line 2303, @0x00000000021baee0, libserver.so)
// globals: CEnvAirStrikeIndoorEffect::m_DataMap
datamap_t *__fastcall CEnvAirStrikeIndoorEffect::GetDataDescMap(CEnvAirStrikeIndoorEffect *const this)
{
  return &CEnvAirStrikeIndoorEffect::m_DataMap;
}


// CEnvAirStrikeIndoorEffect::AddDatadescMetadataKeys  (line 2303, @0x00000000021ca280, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvAirStrikeIndoorEffect::GetEntityClass(void)
void __fastcall CEnvAirStrikeIndoorEffect::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvAirStrikeIndoorEffect::GetEntityClass);
}


// CEnvAirStrikeIndoorEffect::GetBaseMap  (line 2303, @0x00000000021ca2a0, libserver.so)
datamap_t *__cdecl CEnvAirStrikeIndoorEffect::GetBaseMap()
{
  return &CBaseAnimating::m_DataMap;
}


// DataMapInit<CEnvAirStrikeIndoorEffect>  (line 2303, @0x00000000021d8650, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CEnvAirStrikeIndoorEffect"
// globals: `guard variable for'DataMapInit<CEnvAirStrikeIndoorEffect>(CEnvAirStrikeIndoorEffect *)::nameHolder, `guard variable for'DataMapInit<CEnvAirStrikeIndoorEffect>(CEnvAirStrikeIndoorEffect *)::dataDesc, CEnvAirStrikeIndoorEffect::GetEntityClass(void), CEnvAirStrikeIndoorEffect::m_DataMap, DataMapInit<CEnvAirStrikeIndoorEffect>(CEnvAirStrikeIndoorEffect *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvAirStrikeIndoorEffect>(CEnvAirStrikeIndoorEffect *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CEnvAirStrikeIndoorEffect>(CEnvAirStrikeIndoorEffect *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvAirStrikeIndoorEffect>(CEnvAirStrikeIndoorEffect *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvAirStrikeIndoorEffect>(CEnvAirStrikeIndoorEffect *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvAirStrikeIndoorEffect>(CEnvAirStrikeIndoorEffect *)::nameHolder.m_pszBase = "CEnvAirStrikeIndoorEffect";
    DataMapInit<CEnvAirStrikeIndoorEffect>(CEnvAirStrikeIndoorEffect *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvAirStrikeIndoorEffect>(CEnvAirStrikeIndoorEffect *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvAirStrikeIndoorEffect>(CEnvAirStrikeIndoorEffect *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvAirStrikeIndoorEffect>(CEnvAirStrikeIndoorEffect *)::nameHolder.m_nLenBase = 25;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvAirStrikeIndoorEffect>(CEnvAirStrikeIndoorEffect *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvAirStrikeIndoorEffect>(CEnvAirStrikeIndoorEffect *)::nameHolder,
      &_dso_handle);
  }
  CEnvAirStrikeIndoorEffect::m_DataMap.baseMap = &CBaseAnimating::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CEnvAirStrikeIndoorEffect>(CEnvAirStrikeIndoorEffect *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvAirStrikeIndoorEffect>(CEnvAirStrikeIndoorEffect *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CEnvAirStrikeIndoorEffect>(CEnvAirStrikeIndoorEffect *)::nameHolder.m_nLenBase + 13);
    strcpy(
      stpcpy(v2, DataMapInit<CEnvAirStrikeIndoorEffect>(CEnvAirStrikeIndoorEffect *)::nameHolder.m_pszBase),
      "CrumbleThink");
    m_Size = DataMapInit<CEnvAirStrikeIndoorEffect>(CEnvAirStrikeIndoorEffect *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CEnvAirStrikeIndoorEffect>(CEnvAirStrikeIndoorEffect *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CEnvAirStrikeIndoorEffect>(CEnvAirStrikeIndoorEffect *)::nameHolder.m_Names.m_Size == DataMapInit<CEnvAirStrikeIndoorEffect>(CEnvAirStrikeIndoorEffect *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(
        &DataMapInit<CEnvAirStrikeIndoorEffect>(CEnvAirStrikeIndoorEffect *)::nameHolder.m_Names.m_Memory,
        1);
      v4 = DataMapInit<CEnvAirStrikeIndoorEffect>(CEnvAirStrikeIndoorEffect *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CEnvAirStrikeIndoorEffect>(CEnvAirStrikeIndoorEffect *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CEnvAirStrikeIndoorEffect>(CEnvAirStrikeIndoorEffect *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CEnvAirStrikeIndoorEffect>(CEnvAirStrikeIndoorEffect *)::dataDesc[1].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvAirStrikeIndoorEffect>(CEnvAirStrikeIndoorEffect *)::dataDesc);
  }
  CEnvAirStrikeIndoorEffect::m_DataMap.dataNumFields = 6;
  CEnvAirStrikeIndoorEffect::m_DataMap.dataDesc = &DataMapInit<CEnvAirStrikeIndoorEffect>(CEnvAirStrikeIndoorEffect *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvAirStrikeIndoorEffect::m_DataMap, CEnvAirStrikeIndoorEffect::GetEntityClass);
  return &CEnvAirStrikeIndoorEffect::m_DataMap;
}


// CEnvAirStrikeIndoorEffect::Precache  (line 2324, @0x00000000021de080, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheModel, CBaseEntity::PrecacheScriptSound
// strings: "models/props_destruction/general_dest_plaster_set.vmdl", "bombing.close_jetsflyby", "bombing.close_explos"
void __fastcall CEnvAirStrikeIndoorEffect::Precache(
        CEnvAirStrikeIndoorEffect *const this,
        const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  CBaseEntity::PrecacheModel("models/props_destruction/general_dest_plaster_set.vmdl", pContext->m_pManifest);
  CBaseEntity::PrecacheScriptSound("bombing.close_jetsflyby", pContext);
  CBaseEntity::PrecacheScriptSound("bombing.close_explos", pContext);
}


// CEnvAirStrikeIndoorEffect::Spawn  (line 2334, @0x00000000021ca4a0, libserver.so)  // inlines: CGameTrace, DistTo, EnableInteractsWith, FastSqrt, GetDebugName, GetFloat, Init, Length, LengthSqr, Ray_t, RnCollisionAttr_t, SetPlaybackRate, SetSolid, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, curtime, operator+, operator-
// calls: CBaseAnimating::Spawn, CBaseEntity::AddEffects, CBaseModelEntity::SetModel, CBaseAnimating::GetBaseAnimatingController, CGameTrace::Init, CBaseEntity::GetAbsOrigin, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CBaseEntity::SetAbsOrigin, CEntityIdentity::GetDebugName, Msg, UTIL_Remove (13 total)
// strings: "models/props_destruction/general_dest_plaster_set.vmdl", "ERROR - Air strike effect named %s has a bad height of %f\n"
void __fastcall CEnvAirStrikeIndoorEffect::Spawn(
        CEnvAirStrikeIndoorEffect *const this,
        const CEntityKeyValues *pKeyValues)
{
  CGlobalVars *v3; // r12
  float m_flCurrentTime; // xmm0_4
  CBaseAnimatingController *BaseAnimatingController; // rax
  const Vector *AbsOrigin; // rax
  const Vector *v7; // rax
  float m_fValue; // xmm4_4
  vec_t v9; // xmm2_4
  const Vector *v10; // rax
  const Vector *v11; // rax
  float v12; // xmm4_4
  vec_t v13; // xmm2_4
  float v14; // xmm0_4
  const char *DebugName; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v17; // [rsp+10h] [rbp-180h]
  float x; // [rsp+14h] [rbp-17Ch]
  float y; // [rsp+18h] [rbp-178h]
  float v20; // [rsp+18h] [rbp-178h]
  float v21; // [rsp+1Ch] [rbp-174h]
  float v22; // [rsp+1Ch] [rbp-174h]
  float v23; // [rsp+1Ch] [rbp-174h]
  CTraceFilterSimple v24; // [rsp+20h] [rbp-170h] BYREF
  Ray_t ray; // [rsp+60h] [rbp-130h] BYREF
  trace_t trace; // [rsp+B0h] [rbp-E0h] BYREF

  CBaseAnimating::Spawn(this, pKeyValues);
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    m_flCurrentTime = v3->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  this->m_flNextStateTime = m_flCurrentTime;
  CBaseEntity::AddEffects(this, 32);
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 0);
  CBaseModelEntity::SetModel(this, "models/props_destruction/general_dest_plaster_set.vmdl");
  BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
  (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 22))(BaseAnimatingController, 0.0);
  this->m_nMode = 0;
  memset(&trace.m_ShapeAttributes, 0, 31);
  trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&trace);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  x = AbsOrigin->x;
  y = AbsOrigin->y;
  v21 = AbsOrigin->z - 16384.0;
  v7 = CBaseEntity::GetAbsOrigin(this);
  m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  ray.m_Start.w = 0.0;
  memset(&ray.m_Delta.w, 0, 36);
  ray.m_flRadius = m_fValue;
  ray.m_Delta.x = x - v7->x;
  ray.m_Delta.y = y - v7->y;
  v9 = v21 - v7->z;
  ray.m_IsRay = 1;
  ray.m_Delta.z = v9;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (v9 * v9)) != 0.0;
  ray.m_Start.Vector = *v7;
  CTraceFilterSimple::CTraceFilterSimple(&v24, this, 4, 0);
  v24.m_attr.m_nInteractsWith |= 0x7001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v24, &trace);
  CBaseEntity::SetAbsOrigin(this, &trace.endpos);
  v10 = CBaseEntity::GetAbsOrigin(this);
  v17 = v10->x + 0.0;
  v20 = v10->y + 0.0;
  v22 = v10->z + 16384.0;
  v11 = CBaseEntity::GetAbsOrigin(this);
  v12 = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  ray.m_Start.w = 0.0;
  memset(&ray.m_Delta.w, 0, 36);
  ray.m_flRadius = v12;
  ray.m_Delta.x = v17 - v11->x;
  ray.m_Delta.y = v20 - v11->y;
  v13 = v22 - v11->z;
  ray.m_IsRay = 1;
  ray.m_Delta.z = v13;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (v13 * v13)) != 0.0;
  ray.m_Start.Vector = *v11;
  CTraceFilterSimple::CTraceFilterSimple(&v24, this, 4, 0);
  v24.m_attr.m_nInteractsWith |= 0x7001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v24, &trace);
  v14 = fsqrt(
          (((trace.endpos.x - trace.startpos.x) * (trace.endpos.x - trace.startpos.x))
         + ((trace.endpos.y - trace.startpos.y) * (trace.endpos.y - trace.startpos.y)))
        + ((trace.endpos.z - trace.startpos.z) * (trace.endpos.z - trace.startpos.z)));
  this->m_flHeight = v14;
  if ( v14 >= 126.0 && v14 <= 386.0 )
  {
    CEnvAirStrikeIndoorEffect::FindAnimationSequence(this);
  }
  else
  {
    v23 = v14;
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    Msg("ERROR - Air strike effect named %s has a bad height of %f\n", DebugName, v23);
    UTIL_Remove(this);
  }
}


// CEnvAirStrikeIndoorEffect::InputDoEffect  (line 2367, @0x00000000021bf540, libserver.so)  // inlines: curtime
// calls: CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// globals: CEnvAirStrikeIndoorEffect::CrumbleThink(void)
void __fastcall CEnvAirStrikeIndoorEffect::InputDoEffect(
        CEnvAirStrikeIndoorEffect *const this,
        inputdata_t *const inputdata)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v4; // r12
  double v5; // xmm1_8
  CGlobalVars *v6; // r12
  double v7; // xmm0_8
  FnGlobalVarsWarningFunc v8; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  m_flCurrentTime = 0.0;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, inputdata, 0.0);
    }
    m_flCurrentTime = v4->m_flCurrentTime;
  }
  this->m_flNextStateTime = m_flCurrentTime;
  this->m_nMode = 0;
  CBaseEntity::ThinkSet(this, CEnvAirStrikeIndoorEffect::CrumbleThink, 0.0, 0, 0);
  v6 = gpGlobals;
  v7 = 0.0;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v8 = gpGlobals->m_pfnWarningFunc;
      if ( v8 != 0 )
        (v8)(1, 0.0);
    }
    *&v7 = LODWORD(v6->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v7, v5, 0);
}


// CEnvAirStrikeIndoorEffect::CrumbleThink  (line 2379, @0x00000000021c1090, libserver.so)  // inlines: MarkPVSInformationDirty, RemoveEffects, SetPlaybackRate, curtime
// calls: CBaseEntity::AddEffects, CBaseAnimating::SetCycle, CBaseEntity::EmitSound, CBaseEntity::GetAbsOrigin, UTIL_ScreenShake, CGlobalVarsBase::curtime, RandomFloat, CBaseEntity::SetNextThink, CBaseAnimating::StudioFrameAdvance, CBaseAnimating::GetBaseAnimatingController, CBaseEntity::DispatchUpdateTransmitState
// strings: "bombing.close_jetsflyby", "BaseExplosionEffect.Sound", "bombing.close_explos"
void __fastcall CEnvAirStrikeIndoorEffect::CrumbleThink(CEnvAirStrikeIndoorEffect *const this)
{
  double v1; // xmm1_8
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v4; // r12
  int m_nMode; // eax
  float v6; // xmm1_4
  const Vector *v7; // rax
  CGlobalVars *v8; // rdi
  __m128i v9; // xmm0
  unsigned int v10; // r12d
  float v11; // xmm0_4
  CGlobalVars *v12; // r12
  double v13; // xmm0_8
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  FnGlobalVarsWarningFunc v15; // rax
  float v16; // xmm0_4
  const Vector *AbsOrigin; // rax
  CBaseAnimatingController *BaseAnimatingController; // rax
  float v19; // xmm0_4

  if ( (this->m_fEffects.m_Value & 0x20) == 0 )
    CBaseAnimating::StudioFrameAdvance(this, AnimationAdvanceType_t::ANIM_ADVANCE_NORMAL);
  m_flCurrentTime = 0.0;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v4->m_flCurrentTime;
  }
  if ( m_flCurrentTime >= this->m_flNextStateTime )
  {
    m_nMode = this->m_nMode;
    if ( m_nMode == 1 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      UTIL_ScreenShake(AbsOrigin, 25.0, 130.0, 1.0, 600.0, ShakeCommand_t::SHAKE_START, 0, 0);
      CBaseEntity::EmitSound(this, "bombing.close_explos", 0.0, 0);
      ++this->m_nMode;
      BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
      (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 22))(BaseAnimatingController, 1.0);
      (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFFDF);
      this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
      CBaseEntity::DispatchUpdateTransmitState(this);
      v19 = CGlobalVarsBase::curtime(gpGlobals, 0);
      ++this->m_nMode;
      this->m_flNextStateTime = v19 + 2.0;
    }
    else if ( m_nMode <= 1 )
    {
      if ( m_nMode == 0 )
      {
        CBaseEntity::EmitSound(this, "bombing.close_jetsflyby", 0.0, 0);
        v7 = CBaseEntity::GetAbsOrigin(this);
        UTIL_ScreenShake(v7, 8.0, 200.0, 1.0, 600.0, ShakeCommand_t::SHAKE_START, 0, 0);
        v8 = gpGlobals;
        ++this->m_nMode;
        *v9.m128i_i32 = CGlobalVarsBase::curtime(v8, 0);
        v10 = _mm_cvtsi128_si32(v9);
        v11 = RandomFloat(0.0, 0.2);
        *&v1 = _mm_cvtsi32_si128(v10).m128i_u64[0];
        *&v1 = (*&v1 + 2.0) + v11;
        this->m_flNextStateTime = *&v1;
      }
    }
    else if ( m_nMode == 3 )
    {
      CBaseEntity::EmitSound(this, "BaseExplosionEffect.Sound", 0.0, 0);
      v16 = CGlobalVarsBase::curtime(gpGlobals, 0);
      ++this->m_nMode;
      this->m_flNextStateTime = v16 + 10.0;
    }
    else if ( m_nMode == 4 )
    {
      CBaseEntity::AddEffects(this, 32);
      CBaseAnimating::SetCycle(this, 0.0, v6);
      return;
    }
  }
  v12 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v15 = gpGlobals->m_pfnWarningFunc;
      if ( v15 != 0 )
        v15((&loc_0 + 1));
    }
    HIDWORD(v13) = 0;
    *&v13 = v12->m_flCurrentTime + 0.050000001;
  }
  else
  {
    *&v13 = 1028443341;
  }
  CBaseEntity::SetNextThink(this, v13, v1, 0);
}


// CEnvAirStrikeIndoorEffect::FindAnimationSequence  (line 2428, @0x00000000021ca2b0, libserver.so)  // inlines: CFmtStrN, GetDebugName, InitQuietTruncation
// calls: RandomInt, CEntityIdentity::GetDebugName, Msg, UTIL_Remove, V_snprintf, CBaseAnimating::LookupSequence, CBaseAnimating::SetSequence, __stack_chk_fail
// callers: CEnvAirStrikeIndoorEffect::Spawn
// strings: "ERROR - Air strike effect named '%s' has an unsupported height of %f\n", "fall_%d%c"
void __fastcall CEnvAirStrikeIndoorEffect::FindAnimationSequence(CEnvAirStrikeIndoorEffect *const this)
{
  int v2; // eax
  bool v3; // sf
  bool v4; // of
  __int64 m_nUserSpecifiedHeight; // rax
  float *v6; // rax
  float i; // xmm2_4
  const char *DebugName; // rax
  float v9; // xmm0_4
  int v10; // ecx
  HSequence v11; // eax
  float m_flHeight; // [rsp+Ch] [rbp-154h]
  float flSupportedCeilingHeights[7]; // [rsp+10h] [rbp-150h] BYREF
  int v14; // [rsp+2Ch] [rbp-134h] BYREF
  CFmtStr sequenceName; // [rsp+30h] [rbp-130h] BYREF
  unsigned __int64 v16; // [rsp+148h] [rbp-18h]

  flSupportedCeilingHeights[0] = 128.0;
  v16 = __readfsqword(0x28u);
  flSupportedCeilingHeights[1] = 144.0;
  flSupportedCeilingHeights[2] = 152.0;
  flSupportedCeilingHeights[3] = 160.0;
  flSupportedCeilingHeights[4] = 190.0;
  flSupportedCeilingHeights[5] = 300.0;
  flSupportedCeilingHeights[6] = 320.0;
  v2 = RandomInt(1, 100);
  v4 = __OFSUB__(v2, 51);
  v3 = v2 - 51 < 0;
  m_nUserSpecifiedHeight = this->m_nUserSpecifiedHeight;
  if ( m_nUserSpecifiedHeight == -1 )
  {
    v6 = &flSupportedCeilingHeights[1];
    for ( i = 128.0; fabs(this->m_flHeight - i) > 6.0; i = *v6++ )
    {
      if ( v6 == &v14 )
      {
        m_flHeight = this->m_flHeight;
        DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
        Msg("ERROR - Air strike effect named '%s' has an unsupported height of %f\n", DebugName, m_flHeight);
        UTIL_Remove(this);
        return;
      }
    }
    sequenceName.m_bQuietTruncation = 0;
    v10 = i;
    sequenceName._vptr_CFmtStrN = &off_3F6E1A0;
    sequenceName.m_szBuf[0] = 0;
    sequenceName.m_nLength = 0;
  }
  else
  {
    v9 = flSupportedCeilingHeights[m_nUserSpecifiedHeight];
    sequenceName.m_bQuietTruncation = 0;
    sequenceName._vptr_CFmtStrN = &off_3F6E1A0;
    v10 = v9;
    sequenceName.m_szBuf[0] = 0;
    sequenceName.m_nLength = 0;
  }
  V_snprintf(sequenceName.m_szBuf, 256, "fall_%d%c", v10, ((v3 ^ v4) + 97));
  v11.m_Data = CBaseAnimating::LookupSequence(this, sequenceName.m_szBuf).m_Data;
  CBaseAnimating::SetSequence(this, v11, SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE);
}


// CEnvAirStrikeOutdoorEffect::~CEnvAirStrikeOutdoorEffect  (line 2469, @0x00000000021e1680, libserver.so)  // inlines: ~CBaseAnimating
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CEnvAirStrikeOutdoorEffect::~CEnvAirStrikeOutdoorEffect(CEnvAirStrikeOutdoorEffect *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CEnvAirStrikeOutdoorEffect::~CEnvAirStrikeOutdoorEffect  (line 2469, @0x00000000021e16c0, libserver.so)  // inlines: ~CBaseAnimating, ~CEnvAirStrikeOutdoorEffect
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CEnvAirStrikeOutdoorEffect::~CEnvAirStrikeOutdoorEffect(CEnvAirStrikeOutdoorEffect *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvAirStrikeOutdoorEffect::GetEntityClass  (line 2471, @0x00000000021df000, libserver.so)
CEntityClass *__cdecl CEnvAirStrikeOutdoorEffect::GetEntityClass()
{
  return g_pEntityCEnvAirStrikeOutdoorEffectClass;
}


// CEnvAirStrikeOutdoorEffect::Schema_DynamicBinding  (line 2471, @0x00000000021df010, libserver.so)
// globals: CEnvAirStrikeOutdoorEffect::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvAirStrikeOutdoorEffect::Schema_DynamicBinding(
        const CEnvAirStrikeOutdoorEffect *const this)
{
  return CEnvAirStrikeOutdoorEffect::s_pSchemaBinding;
}


// CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2471, @0x00000000021df020, libserver.so)
// globals: CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass *const this)
{
  return CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass::DestructInstance  (line 2471, @0x00000000021df030, libserver.so)  // inlines: Destruct<CEnvAirStrikeOutdoorEffect>
void __fastcall CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass::DestructInstance(
        CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass::FreeInstance  (line 2471, @0x00000000021df050, libserver.so)
void __fastcall CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass::FreeInstance(
        CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass::CanAllocate  (line 2471, @0x00000000021df070, libserver.so)
bool __fastcall CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass::CanAllocate(
        const CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2471, @0x00000000021df080, libserver.so)
// globals: CEnvAirStrikeOutdoorEffect::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass *const this)
{
  return CEnvAirStrikeOutdoorEffect::s_pSchemaBinding;
}


// CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass::AllocateInstance  (line 2471, @0x00000000021e0940, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass::AllocateInstance(
        CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1256);
  memset(v1, 0, 0x4E8u);
  return v1;
}


// CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass::ConstructInstance  (line 2471, @0x00000000021e1510, libserver.so)  // inlines: CEnvAirStrikeOutdoorEffect, CUtlSymbolLarge, Construct<CEnvAirStrikeOutdoorEffect>
// calls: CBaseAnimating::CBaseAnimating
CEntityInstance *__fastcall CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass::ConstructInstance(
        CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseAnimating::CBaseAnimating(p);
    *(p + 304) = 0;
    *p = &off_4020970;
    *(p + 153) = 0;
    *(p + 154) = 0;
    *(p + 155) = 0;
    *(p + 312) = 1;
  }
  return p;
}


// CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2471, @0x00000000021e2b60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2471, @0x00000000021e2b80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvAirStrikeOutdoorEffect::GetEntityClassInternal  (line 2471, @0x00000000021e8a90, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CBaseAnimating::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "env_airstrike_outdoors", "CEnvAirStrikeOutdoorEffect"
// globals: `guard variable for'CEnvAirStrikeOutdoorEffect::GetEntityClassInternal(void)::g_EntityCEnvAirStrikeOutdoorEffectClass, CEnvAirStrikeOutdoorEffect::GetEntityClassInternal(void)::g_EntityCEnvAirStrikeOutdoorEffectClass, __dso_handle, CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvAirStrikeOutdoorEffect::GetEntityClassInfo(void)::g_EntityCEnvAirStrikeOutdoorEffectClassInfo, CEnvAirStrikeOutdoorEffect::GetEntityClassInfo(void)::g_EntityCEnvAirStrikeOutdoorEffectClassInfo
CEntityClass *__cdecl CEnvAirStrikeOutdoorEffect::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvAirStrikeOutdoorEffect::GetEntityClassInternal(void)::g_EntityCEnvAirStrikeOutdoorEffectClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvAirStrikeOutdoorEffect::GetEntityClassInternal(void)::g_EntityCEnvAirStrikeOutdoorEffectClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvAirStrikeOutdoorEffect::GetEntityClassInternal(void)::g_EntityCEnvAirStrikeOutdoorEffectClass);
    CEnvAirStrikeOutdoorEffect::GetEntityClassInternal(void)::g_EntityCEnvAirStrikeOutdoorEffectClass._vptr_CEntityClass = off_40208F0;
    __cxa_guard_release(&`guard variable for'CEnvAirStrikeOutdoorEffect::GetEntityClassInternal(void)::g_EntityCEnvAirStrikeOutdoorEffectClass);
    __cxa_atexit(
      CEnvAirStrikeOutdoorEffect::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvAirStrikeOutdoorEffect::GetEntityClassInternal(void)::g_EntityCEnvAirStrikeOutdoorEffectClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvAirStrikeOutdoorEffectClass != 0 )
    return &CEnvAirStrikeOutdoorEffect::GetEntityClassInternal(void)::g_EntityCEnvAirStrikeOutdoorEffectClass;
  if ( `guard variable for'CEnvAirStrikeOutdoorEffect::GetEntityClassInfo(void)::g_EntityCEnvAirStrikeOutdoorEffectClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvAirStrikeOutdoorEffect::GetEntityClassInfo(void)::g_EntityCEnvAirStrikeOutdoorEffectClassInfo) != 0 )
  {
    EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvAirStrikeOutdoorEffect::GetEntityClassInfo(void)::g_EntityCEnvAirStrikeOutdoorEffectClassInfo,
      "CEnvAirStrikeOutdoorEffect",
      "env_airstrike_outdoors",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvAirStrikeOutdoorEffect::GetEntityClassInfo(void)::g_EntityCEnvAirStrikeOutdoorEffectClassInfo);
  }
  CEnvAirStrikeOutdoorEffect::GetEntityClassInternal(void)::g_EntityCEnvAirStrikeOutdoorEffectClass.m_pClassInfo = &CEnvAirStrikeOutdoorEffect::GetEntityClassInfo(void)::g_EntityCEnvAirStrikeOutdoorEffectClassInfo;
  CEnvAirStrikeOutdoorEffect::GetEntityClassInternal(void)::g_EntityCEnvAirStrikeOutdoorEffectClass.m_pBaseClassInfo = CEnvAirStrikeOutdoorEffect::GetEntityClassInfo(void)::g_EntityCEnvAirStrikeOutdoorEffectClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvAirStrikeOutdoorEffectClass = &CEnvAirStrikeOutdoorEffect::GetEntityClassInternal(void)::g_EntityCEnvAirStrikeOutdoorEffectClass;
  CEnvAirStrikeOutdoorEffect::GetEntityClassInfo(void)::g_EntityCEnvAirStrikeOutdoorEffectClassInfo.m_pClass = &CEnvAirStrikeOutdoorEffect::GetEntityClassInternal(void)::g_EntityCEnvAirStrikeOutdoorEffectClass;
  CEnvAirStrikeOutdoorEffect::GetEntityClassInternal(void)::g_EntityCEnvAirStrikeOutdoorEffectClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCEnvAirStrikeOutdoorEffectClass->m_pComponentOverrides = 0;
  return &CEnvAirStrikeOutdoorEffect::GetEntityClassInternal(void)::g_EntityCEnvAirStrikeOutdoorEffectClass;
}


// CEnvAirStrikeOutdoorEffect::GetDataDescMap  (line 2498, @0x00000000021baef0, libserver.so)
// globals: CEnvAirStrikeOutdoorEffect::m_DataMap
datamap_t *__fastcall CEnvAirStrikeOutdoorEffect::GetDataDescMap(CEnvAirStrikeOutdoorEffect *const this)
{
  return &CEnvAirStrikeOutdoorEffect::m_DataMap;
}


// CEnvAirStrikeOutdoorEffect::AddDatadescMetadataKeys  (line 2498, @0x00000000021ca9f0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvAirStrikeOutdoorEffect::GetEntityClass(void)
void __fastcall CEnvAirStrikeOutdoorEffect::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvAirStrikeOutdoorEffect::GetEntityClass);
}


// CEnvAirStrikeOutdoorEffect::GetBaseMap  (line 2498, @0x00000000021caa10, libserver.so)
datamap_t *__cdecl CEnvAirStrikeOutdoorEffect::GetBaseMap()
{
  return &CBaseAnimating::m_DataMap;
}


// DataMapInit<CEnvAirStrikeOutdoorEffect>  (line 2498, @0x00000000021caa20, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CEnvAirStrikeOutdoorEffect"
// globals: `guard variable for'DataMapInit<CEnvAirStrikeOutdoorEffect>(CEnvAirStrikeOutdoorEffect *)::nameHolder, CEnvAirStrikeOutdoorEffect::GetEntityClass(void), CEnvAirStrikeOutdoorEffect::m_DataMap, DataMapInit<CEnvAirStrikeOutdoorEffect>(CEnvAirStrikeOutdoorEffect *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvAirStrikeOutdoorEffect>(CEnvAirStrikeOutdoorEffect *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEnvAirStrikeOutdoorEffect>(CEnvAirStrikeOutdoorEffect *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvAirStrikeOutdoorEffect>(CEnvAirStrikeOutdoorEffect *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvAirStrikeOutdoorEffect>(CEnvAirStrikeOutdoorEffect *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvAirStrikeOutdoorEffect>(CEnvAirStrikeOutdoorEffect *)::nameHolder.m_pszBase = "CEnvAirStrikeOutdoorEffect";
    DataMapInit<CEnvAirStrikeOutdoorEffect>(CEnvAirStrikeOutdoorEffect *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvAirStrikeOutdoorEffect>(CEnvAirStrikeOutdoorEffect *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvAirStrikeOutdoorEffect>(CEnvAirStrikeOutdoorEffect *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvAirStrikeOutdoorEffect>(CEnvAirStrikeOutdoorEffect *)::nameHolder.m_nLenBase = 26;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvAirStrikeOutdoorEffect>(CEnvAirStrikeOutdoorEffect *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvAirStrikeOutdoorEffect>(CEnvAirStrikeOutdoorEffect *)::nameHolder,
      &_dso_handle);
  }
  CEnvAirStrikeOutdoorEffect::m_DataMap.dataNumFields = 6;
  CEnvAirStrikeOutdoorEffect::m_DataMap.baseMap = &CBaseAnimating::m_DataMap;
  CEnvAirStrikeOutdoorEffect::m_DataMap.dataDesc = &DataMapInit<CEnvAirStrikeOutdoorEffect>(CEnvAirStrikeOutdoorEffect *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvAirStrikeOutdoorEffect::m_DataMap, CEnvAirStrikeOutdoorEffect::GetEntityClass);
  return &CEnvAirStrikeOutdoorEffect::m_DataMap;
}


// CEnvAirStrikeOutdoorEffect::Precache  (line 2514, @0x00000000021de0d0, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheModelFromKeyValues, CBaseEntity::PrecacheScriptSound
// strings: "bombing.close_explos"
void __fastcall CEnvAirStrikeOutdoorEffect::Precache(
        CEnvAirStrikeOutdoorEffect *const this,
        const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  CBaseEntity::PrecacheModelFromKeyValues(this, pContext, 0, 0);
  CBaseEntity::PrecacheScriptSound("bombing.close_explos", pContext);
}


// CEnvAirStrikeOutdoorEffect::Spawn  (line 2525, @0x00000000021bf710, libserver.so)  // inlines: SetSolid, curtime
// calls: CBaseAnimating::Spawn, CBaseEntity::AddEffects, CBaseModelEntity::SetModelFromKeyValues
void __fastcall CEnvAirStrikeOutdoorEffect::Spawn(
        CEnvAirStrikeOutdoorEffect *const this,
        const CEntityKeyValues *pKeyValues)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v5; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CBaseAnimating::Spawn(this, pKeyValues);
  m_flCurrentTime = 0.0;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v5->m_flCurrentTime;
  }
  this->m_flNextStateTime = m_flCurrentTime;
  CBaseEntity::AddEffects(this, 48);
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 0);
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
}


// CEnvAirStrikeOutdoorEffect::Activate  (line 2539, @0x00000000021bb940, libserver.so)  // inlines: CUtlSymbolLarge, SetSolid
// calls: CBaseAnimating::Activate, CGameEntitySystem::FindEntityByName, CBaseEntity::AddEffects
void __fastcall CEnvAirStrikeOutdoorEffect::Activate(
        CEnvAirStrikeOutdoorEffect *const this,
        ActivateType_t activateType)
{
  CBaseEntity *EntityByName; // rbx
  CBaseEntity *v4; // rax
  CBaseEntity *v5; // r12
  string_t iszName; // [rsp+10h] [rbp-40h] BYREF

  EntityByName = 0;
  CBaseAnimating::Activate(this, activateType);
  while ( 1 )
  {
    iszName.u.m_Id = this->m_strModelGroup.u.m_Id;
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, EntityByName, &iszName, this, 0, 0, 0);
    if ( EntityByName == 0 )
      break;
    v4 = (*(EntityByName->_vptr_IHandleEntity + 43))(EntityByName);
    v5 = v4;
    if ( v4 != 0 )
    {
      CBaseEntity::AddEffects(v4, 48);
      (*(v5[1].m_NetworkTransmitComponent._vptr_IEventRegisterCallback + 26))(&v5[1].m_NetworkTransmitComponent, 0);
    }
  }
}


// CEnvAirStrikeOutdoorEffect::InputDoEffect  (line 2559, @0x00000000021bf620, libserver.so)  // inlines: curtime
// calls: CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// globals: CEnvAirStrikeOutdoorEffect::CrumbleThink(void)
void __fastcall CEnvAirStrikeOutdoorEffect::InputDoEffect(
        CEnvAirStrikeOutdoorEffect *const this,
        inputdata_t *const inputdata)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v4; // r12
  double v5; // xmm1_8
  CGlobalVars *v6; // r12
  FnGlobalVarsWarningFunc v7; // rax
  double v8; // xmm0_8
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  m_flCurrentTime = 0.0;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, inputdata, 0.0);
    }
    m_flCurrentTime = v4->m_flCurrentTime;
  }
  this->m_flNextStateTime = m_flCurrentTime;
  this->m_nMode = 1;
  CBaseEntity::ThinkSet(this, CEnvAirStrikeOutdoorEffect::CrumbleThink, 0.0, 0, 0);
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v7 = gpGlobals->m_pfnWarningFunc;
      if ( v7 != 0 )
        v7(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v8) = 0;
    *&v8 = v6->m_flCurrentTime + 0.1;
  }
  else
  {
    *&v8 = 1036831949;
  }
  CBaseEntity::SetNextThink(this, v8, v5, 0);
}


// CEnvAirStrikeOutdoorEffect::CrumbleThink  (line 2573, @0x00000000021c1370, libserver.so)  // inlines: CUtlSymbolLarge, MarkPVSInformationDirty, RemoveEffects, ResetSequence, String, ToCStr, curtime
// calls: CBaseEntity::SetNextThink, CBaseAnimating::StudioFrameAdvance, CBaseAnimating::DispatchAnimEvents, CBaseEntity::EmitSound, CGlobalVarsBase::curtime, CBaseEntity::GetAbsOrigin, UTIL_ScreenShake, CBaseEntity::DispatchUpdateTransmitState, CBaseAnimating::LookupSequence, CBaseAnimating::GetBaseAnimatingController, CGameEntitySystem::FindEntityByName, CBaseModelEntity::SUB_FadeOut
// strings: "BaseExplosionEffect.Sound", "bombing.close_explos"
void __fastcall CEnvAirStrikeOutdoorEffect::CrumbleThink(CEnvAirStrikeOutdoorEffect *const this)
{
  double v1; // xmm1_8
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v4; // r13
  int m_nMode; // eax
  CGlobalVars *v6; // r12
  double v7; // xmm0_8
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  FnGlobalVarsWarningFunc v9; // rax
  float v10; // xmm0_4
  const Vector *AbsOrigin; // rax
  float v12; // xmm0_4
  unsigned int m_Value; // esi
  int (**vptr_IHandleEntity)(...); // rax
  HSequence v15; // eax
  CBaseAnimatingController *BaseAnimatingController; // rax
  CBaseEntity *EntityByName; // r15
  CBaseAnimating *v18; // rax
  CBaseAnimating *v19; // r12
  CBaseAnimatingController *v20; // rax
  CBaseEntity *v21; // r12
  const char *m_pAsString; // [rsp+10h] [rbp-58h]
  unsigned int m_Data; // [rsp+1Ch] [rbp-4Ch]
  HSequence v24; // [rsp+1Ch] [rbp-4Ch]
  _QWORD v25[9]; // [rsp+20h] [rbp-48h] BYREF

  m_flCurrentTime = 0.0;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v4->m_flCurrentTime;
  }
  if ( m_flCurrentTime < this->m_flNextStateTime )
    goto LABEL_8;
  m_nMode = this->m_nMode;
  if ( m_nMode == 3 )
  {
    CBaseEntity::EmitSound(this, "BaseExplosionEffect.Sound", 0.0, 0);
    v10 = CGlobalVarsBase::curtime(gpGlobals, 0);
    ++this->m_nMode;
    this->m_flNextStateTime = v10 + 10.0;
    goto LABEL_8;
  }
  if ( m_nMode != 4 )
  {
    if ( m_nMode != 1 )
    {
LABEL_8:
      if ( (this->m_fEffects.m_Value & 0x20) == 0 )
      {
        CBaseAnimating::StudioFrameAdvance(this, AnimationAdvanceType_t::ANIM_ADVANCE_NORMAL);
        CBaseAnimating::DispatchAnimEvents(this, this);
      }
      v6 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v9 = gpGlobals->m_pfnWarningFunc;
          if ( v9 != 0 )
            v9(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        }
        HIDWORD(v7) = 0;
        *&v7 = v6->m_flCurrentTime + 0.050000001;
      }
      else
      {
        *&v7 = 1028443341;
      }
      CBaseEntity::SetNextThink(this, v7, v1, 0);
      return;
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    UTIL_ScreenShake(AbsOrigin, 25.0, 130.0, 1.0, 1800.0, ShakeCommand_t::SHAKE_START, 0, 0);
    CBaseEntity::EmitSound(this, "bombing.close_explos", 0.0, 0);
    v12 = CGlobalVarsBase::curtime(gpGlobals, 0);
    m_Value = this->m_fEffects.m_Value;
    this->m_nMode += 2;
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    this->m_flNextStateTime = v12 + 2.0;
    vptr_IHandleEntity[188](this, m_Value & 0xFFFFFFDF);
    this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
    CBaseEntity::DispatchUpdateTransmitState(this);
    m_pAsString = "";
    if ( (*(*random_valve + 16LL))(random_valve, 0, 1) != 0 )
    {
      if ( this->m_strSequenceName1.u.m_Id != 0 )
        m_pAsString = this->m_strSequenceName1.u.m_pAsString;
    }
    else if ( this->m_strSequenceName2.u.m_Id != 0 )
    {
      m_pAsString = this->m_strSequenceName2.u.m_pAsString;
      v15.m_Data = CBaseAnimating::LookupSequence(this, m_pAsString).m_Data;
      goto LABEL_26;
    }
    v15.m_Data = CBaseAnimating::LookupSequence(this, m_pAsString).m_Data;
LABEL_26:
    m_Data = v15.m_Data;
    if ( v15.m_Data != -1 )
    {
      BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
      (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 23))(BaseAnimatingController, m_Data, 1);
    }
    EntityByName = 0;
    while ( 1 )
    {
      v25[0] = this->m_strModelGroup.u.m_Id;
      EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, EntityByName, v25, this, 0, 0, 0);
      if ( EntityByName == 0 )
        break;
      v18 = (*(EntityByName->_vptr_IHandleEntity + 43))(EntityByName);
      v19 = v18;
      if ( v18 != 0 )
      {
        (*(v18->_vptr_IHandleEntity + 188))(v18, v18->m_fEffects.m_Value & 0xFFFFFFDF);
        v19->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
        CBaseEntity::DispatchUpdateTransmitState(v19);
        v24.m_Data = CBaseAnimating::LookupSequence(v19, m_pAsString).m_Data;
        if ( v24.m_Data != -1 )
        {
          v20 = CBaseAnimating::GetBaseAnimatingController(v19);
          (*(v20->_vptr_CSkeletonAnimationController + 23))(v20, v24.m_Data, 1);
        }
      }
    }
    goto LABEL_8;
  }
  v21 = 0;
  CBaseModelEntity::SUB_FadeOut(this);
  while ( 1 )
  {
    v25[0] = this->m_strModelGroup.u.m_Id;
    v21 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, v21, v25, this, 0, 0, 0);
    if ( v21 == 0 )
      break;
    if ( (*(v21->_vptr_IHandleEntity + 43))(v21) != 0 )
      CBaseModelEntity::SUB_FadeOut(this);
  }
}


