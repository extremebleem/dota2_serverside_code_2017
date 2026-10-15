// Reconstructed from DWARF by pahole; not original source.

// src/game/server/func_rotating.h:20
class CFuncRotating : public CBaseModelEntity {
public:

private:

	static datamap_t m_DataMap;

protected:

	float m_flFanFriction;  // +0x48c
	float m_flAttenuation;  // +0x490
	float m_flVolume;  // +0x494
	float m_flTargetSpeed;  // +0x498
	float m_flMaxSpeed;  // +0x49c
	float m_flBlockDamage;  // +0x4a0

	string_t m_NoiseRunning;  // +0x4a8
	bool m_bReversed;  // +0x4b0

	bool m_bStopAtStartPos;  // +0x4c0

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
	CFuncRotating(CFuncRotating &);
	CFuncRotating(CFuncRotating &);
	CFuncRotating();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Activate(ActivateType_t);
	virtual bool CreateVPhysics();
	void SpinUpMove();
	void SpinDownMove();
	void HurtTouch(CBaseEntity *);
	void RotatingUse(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	void RotateMove();
	void ReverseMove();
	void RampPitchVol();
	virtual void Blocked(CBaseEntity *);
	void SetTargetSpeed(float);
	void UpdateSpeed(float);
	virtual int DrawDebugTextOverlays(uint64, int);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	bool SpinDown(float);
	float GetMoveSpeed(float);
	float GetNextMoveInterval();
	void InputSetSpeed(inputdata_t &);
	void InputStart(inputdata_t &);
	void InputStop(inputdata_t &);
	void InputStartForward(inputdata_t &);
	void InputStartBackward(inputdata_t &);
	void InputToggle(inputdata_t &);
	void InputReverse(inputdata_t &);
	void InputStopAtStartPos(inputdata_t &);
	void InputSnapToStartPos(inputdata_t &);
	void InputSetStartPos(inputdata_t &);
	virtual ~CFuncRotating();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[10] Activate
	// vtable[49] CreateVPhysics
	// vtable[115] Blocked
	// vtable[79] DrawDebugTextOverlays
	// vtable[34] GetDataDescMap
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 1248
};
