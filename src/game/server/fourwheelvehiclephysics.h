// Reconstructed from DWARF by pahole; not original source.

// src/game/server/fourwheelvehiclephysics.h:33
class CFourWheelVehiclePhysics {
	int ()() * * _vptr.CFourWheelVehiclePhysics;  // +0x0
private:

	static datamap_t m_DataMap;

	int m_nSpeed;  // +0x38
	int m_nLastSpeed;  // +0x3c
	int m_nRPM;  // +0x40
	float m_fLastBoost;  // +0x44
	int m_nBoostTimeLeft;  // +0x48
	bool m_bHasBoost;  // +0x4c

	float m_maxThrottle;  // +0x50
	float m_flMaxRevThrottle;  // +0x54
	float m_flMaxSpeed;  // +0x58
	float m_actionSpeed;  // +0x5c
	IPhysicsObject * m_pWheels[4];  // +0x60
	int m_wheelCount;  // +0x80
	float m_wheelBaseHeight[4];  // +0xe4
	float m_wheelTotalHeight[4];  // +0xf4
	int m_poseParameters[12];  // +0x104
	float m_actionValue;  // +0x134
	float m_actionScale;  // +0x138
	float m_debugRadius;  // +0x13c
	float m_throttleRate;  // +0x140
	float m_throttleStartTime;  // +0x144
	float m_throttleActiveTime;  // +0x148
	float m_turboTimer;  // +0x14c
	float m_flVehicleVolume;  // +0x150
	bool m_bIsOn;  // +0x154
	bool m_bLastThrottle;  // +0x155
	bool m_bLastBoost;  // +0x156
	bool m_bLastSkid;  // +0x157

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	CFourWheelVehiclePhysics();
	CFourWheelVehiclePhysics(CBaseAnimating *);
	~CFourWheelVehiclePhysics();
	void Precache(const CEntityPrecacheContext *);
	void Spawn(const CEntityKeyValues *);
	void SetOuter(CBaseAnimating *, CFourWheelServerVehicle *);
	bool Initialize(const char *, unsigned int);
	void Teleport(matrix3x4_t &);
	bool VPhysicsUpdate(IPhysicsObject *);
	bool Think();
	void PlaceWheelDust(int, bool);
	void DrawEntityDebugOverlays(uint64);
	int DrawDebugTextOverlays(int, int);
	void UpdateDriverControls(CUserCmd *, float);
	void SetThrottle(float);
	void SetMaxThrottle(float);
	void SetMaxReverseThrottle(float);
	void SetSteering(float, float);
	void SetSteeringDegrees(float);
	void SetAction(float);
	void TurnOn();
	void TurnOff();
	void ReleaseHandbrake();
	void SetHandbrake(bool);
	bool IsOn();
	void ResetControls();
	void SetBoost(float);
	bool UpdateBooster();
	void SetHasBrakePedal(bool);
	void SetDisableEngine(bool);
	bool IsEngineDisabled();
	void EnableMotion();
	void DisableMotion();
	void GetVehicleViewPosition(const char *, float, Vector *, QAngle *);
	IPhysicsObject * GetWheel(int);
	int GetSpeed();
	int GetMaxSpeed();
	int GetRPM();
	float GetThrottle();
	bool HasBoost();
	int BoostTimeLeft();
	bool IsBoosting();
	float GetHLSpeed();
	float GetSteering();
	float GetSteeringDegrees();
	IPhysicsVehicleController * GetVehicle();
	float GetWheelBaseHeight(int);
	float GetWheelTotalHeight(int);
	IPhysicsVehicleController * GetVehicleController();
	const vehicleparams_t & GetVehicleParams();
	const vehicle_controlparams_t & GetVehicleControls();
	const vehicle_operatingparams_t & GetVehicleOperatingParams();
	int VPhysicsGetObjectList(IPhysicsObject * *, int);
	void CalcWheelData(vehicleparams_t &);
	void SteeringRest(float, const vehicleparams_t &);
	void SteeringTurn(float, const vehicleparams_t &, bool, bool, bool);
	void SteeringTurnAnalog(float, const vehicleparams_t &, float);
	int LookupPoseParameter(const char *);
	float GetPoseParameter(int);
	float SetPoseParameter(int, float);
	bool GetAttachment(const char *, Vector &, QAngle &);
	void InitializePoseParameters();
	bool ParseVehicleScript(const char *, solid_t &, vehicleparams_t &);

	// vtable[0] Schema_DynamicBinding
	// sizeof = 344
};
