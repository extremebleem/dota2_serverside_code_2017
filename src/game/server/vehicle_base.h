// Reconstructed from DWARF by pahole; not original source.

// src/game/server/vehicle_base.h:42
class CFourWheelServerVehicle : public CBaseServerVehicle {
public:

private:

	static datamap_t m_DataMap;

	CFourWheelServerVehicle(const CFourWheelServerVehicle &);

	virtual ~CFourWheelServerVehicle();
	CFourWheelServerVehicle();
	virtual bool IsVehicleUpright();
	virtual bool IsVehicleBodyInWater();
	virtual void GetVehicleViewPosition(int, Vector *, QAngle *, float *);
	virtual IPhysicsVehicleController * GetVehicleController();
	virtual const vehicleparams_t * GetVehicleParams();
	const vehicle_controlparams_t * GetVehicleControlParams();
	const vehicle_operatingparams_t * GetVehicleOperatingParams();
	CPropVehicleDriveable * GetFourWheelVehicle();
	bool GetWheelContactPoint(int, Vector &);
	virtual void SetVehicle(CBaseEntity *);
	void InitViewSmoothing(const Vector &, const QAngle &);
	virtual bool IsPassengerEntering();
	virtual bool IsPassengerExiting();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	CFourWheelVehiclePhysics * GetFourWheelVehiclePhysics();

	// vtable[0] Schema_DynamicBinding
	// vtable[14] IsVehicleUpright
	// vtable[61] IsVehicleBodyInWater
	// vtable[3] GetVehicleViewPosition
	// vtable[27] GetVehicleController
	// vtable[26] GetVehicleParams
	// vtable[65] SetVehicle
	// vtable[15] IsPassengerEntering
	// vtable[16] IsPassengerExiting
	// sizeof = 720
};

// src/game/server/vehicle_base.h:88
class CPropVehicle : public CBaseProp, public CDefaultPlayerPickupVPhysics {
public:

private:

	static datamap_t m_DataMap;

protected:

	uint32 m_nVehicleType;  // +0x620

	string_t m_vehicleScript;  // +0x628
private:

	float m_flLastPhysicsInfluenceTime;  // +0x640
	typedef CBaseProp BaseClass;

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
	CPropVehicle(CPropVehicle &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CPropVehicle();
	virtual ~CPropVehicle();
	void SetVehicleType(unsigned int);
	unsigned int GetVehicleType();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual int Restore(IRestore &);
	virtual void VPhysicsUpdate(IPhysicsObject *);
	virtual void DrawEntityDebugOverlays(uint64);
	virtual int DrawDebugTextOverlays(uint64, int);
	virtual void Teleport(const Vector *, const QAngle *, const Vector *);
	virtual void Think();
	CFourWheelVehiclePhysics * GetPhysics();
	const CFourWheelVehiclePhysics * GetPhysics();
	virtual CBasePlayer * HasPhysicsAttacker(float);
	virtual void OnPhysGunPickup(CBasePlayer *, PhysGunPickup_t, int);
	virtual Vector GetSmoothedVelocity();
	virtual void DampenEyePosition(Vector &, QAngle &);
	void InputThrottle(inputdata_t &);
	void InputSteering(inputdata_t &);
	void InputAction(inputdata_t &);
	void InputHandBrakeOn(inputdata_t &);
	void InputHandBrakeOff(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();

protected:

	void SoundInit();
	void SoundShutdown();
	void SoundUpdate(const vehicle_operatingparams_t &, const vehicleparams_t &);
	void CalcWheelData(vehicleparams_t &);
	void ResetControls();
	virtual float GetUprightStrength();
	virtual float GetUprightTime();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[16] Restore
	// vtable[52] VPhysicsUpdate
	// vtable[14] DrawEntityDebugOverlays
	// vtable[79] DrawDebugTextOverlays
	// vtable[128] Teleport
	// vtable[117] Think
	// vtable[190] HasPhysicsAttacker
	// vtable[253] OnPhysGunPickup
	// vtable[172] GetSmoothedVelocity
	// vtable[254] DampenEyePosition
	// vtable[34] GetDataDescMap
	// vtable[255] GetUprightStrength
	// vtable[256] GetUprightTime
	// sizeof = 1608
};

// src/game/server/vehicle_base.h:181
class CPropVehicleDriveable : public CPropVehicle, public IDrivableVehicle {
	class NetworkVar_m_hPlayer {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nSpeed {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nRPM {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flThrottle {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nBoostTimeLeft {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bHasBoost {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_vecEyeExitEndpoint {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_vecGunCrosshair {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bUnableToFire {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bHasGun {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nScannerDisabledWeapons {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nScannerDisabledVehicle {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bEnterAnimOn {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bExitAnimOn {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

protected:

	COutputEvent m_playerOn;  // +0x658
	COutputEvent m_playerOff;  // +0x670
	COutputEvent m_pressedAttack;  // +0x688
	COutputEvent m_pressedAttack2;  // +0x6a0
	COutputFloat m_attackaxis;  // +0x6b8
	COutputFloat m_attack2axis;  // +0x6d8

	EHANDLE m_hKeepUpright;  // +0x730
	bool m_bEngineLocked;  // +0x734
	bool m_bLocked;  // +0x735

	float m_flMinimumSpeedToEnterExit;  // +0x738

	float m_flTurnOffKeepUpright;  // +0x740
	float m_flNoImpactDamageTime;  // +0x744
	typedef CPropVehicle BaseClass;
	typedef CPropVehicleDriveable ThisClass;

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
	CPropVehicleDriveable(CPropVehicleDriveable &);
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
	CPropVehicleDriveable();
	virtual ~CPropVehicleDriveable();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual int Restore(IRestore &);
	virtual void OnRestore();
	virtual void CreateServerVehicle();
	virtual int ObjectCaps();
	virtual void GetVectors(Vector *, Vector *, Vector *);
	virtual void VehicleAngleVectors(const QAngle &, Vector *, Vector *, Vector *);
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	virtual void Think();
	virtual void TraceAttack(const CTakeDamageInfo &, const Vector &, trace_t *);
	virtual void Event_KilledOther(CBaseEntity *, const CTakeDamageInfo &);
	virtual void VPhysicsCollision(int, gamevcollisionevent_t *);
	virtual int VPhysicsGetObjectList(IPhysicsObject * *, int);
	void InputLock(inputdata_t &);
	void InputUnlock(inputdata_t &);
	void InputTurnOn(inputdata_t &);
	void InputTurnOff(inputdata_t &);
	void ResetUseKey(CBasePlayer *);
	void DriveVehicle(CBasePlayer *, CUserCmd *);
	virtual void DriveVehicle(float, CUserCmd *, int, int);
	virtual bool IsOverturned();
	virtual bool IsVehicleBodyInWater();
	void StartEngine();
	void StopEngine();
	bool IsEngineOn();
	virtual CBaseEntity * GetDriver();
	virtual void ItemPostFrame(CBasePlayer *);
	virtual void SetupMove(CBasePlayer *, CUserCmd *, IMoveHelper *, CMoveData *);
	virtual void ProcessMovement(CBasePlayer *, CMoveData *);
	virtual void FinishMove(CBasePlayer *, CUserCmd *, CMoveData *);
	virtual bool CanEnterVehicle(CBaseEntity *);
	virtual bool CanExitVehicle(CBaseEntity *);
	virtual void SetVehicleEntryAnim(bool);
	virtual void SetVehicleExitAnim(bool, Vector);
	virtual void EnterVehicle(CBaseCombatCharacter *);
	virtual bool AllowBlockedExit(CBaseCombatCharacter *, int);
	virtual bool AllowMidairExit(CBaseCombatCharacter *, int);
	virtual void PreExitVehicle(CBaseCombatCharacter *, int);
	virtual void ExitVehicle(int);
	virtual string_t GetVehicleScriptName();
	virtual bool PassengerShouldReceiveDamage(CTakeDamageInfo &);
	virtual IServerVehicle * GetServerVehicle();
	virtual bool ShouldThink();
	bool HasGun();
	void DestroyServerVehicle();
	void SetVecGunCrosshair(const Vector &);
	bool IsEnterAnimOn();
	bool IsExitAnimOn();
	const Vector & GetEyeExitEndpoint();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[16] Restore
	// vtable[18] OnRestore
	// vtable[257] CreateServerVehicle
	// vtable[19] ObjectCaps
	// vtable[61] GetVectors
	// vtable[258] VehicleAngleVectors
	// vtable[108] Use
	// vtable[117] Think
	// vtable[135] TraceAttack
	// vtable[93] Event_KilledOther
	// vtable[57] VPhysicsCollision
	// vtable[53] VPhysicsGetObjectList
	// vtable[259] DriveVehicle
	// vtable[260] IsOverturned
	// vtable[261] IsVehicleBodyInWater
	// vtable[262] GetDriver
	// vtable[263] ItemPostFrame
	// vtable[264] SetupMove
	// vtable[265] ProcessMovement
	// vtable[266] FinishMove
	// vtable[267] CanEnterVehicle
	// vtable[268] CanExitVehicle
	// vtable[269] SetVehicleEntryAnim
	// vtable[270] SetVehicleExitAnim
	// vtable[271] EnterVehicle
	// vtable[272] AllowBlockedExit
	// vtable[273] AllowMidairExit
	// vtable[274] PreExitVehicle
	// vtable[275] ExitVehicle
	// vtable[276] GetVehicleScriptName
	// vtable[277] PassengerShouldReceiveDamage
	// vtable[101] GetServerVehicle
	// vtable[278] ShouldThink
	// sizeof = 1864
};
